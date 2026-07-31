void DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_59329AA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Color___TypeInfo);
    byte_59329AA = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_21FFD10(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_21FFBF4(
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


void DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_59329A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_59329A6 = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


int32_t DiggingRewardDialogComponent__GetTotalEventPoint(
        DiggingRewardDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *current; // x27
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x20
  Il2CppClass *klass; // x8
  __int64 v14; // x0
  __int64 v15; // x1
  _DWORD *v16; // x8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59329A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    this = (DiggingRewardDialogComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59329A3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !blockList )
    sub_21FFECC(this, blockList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v4 = 0;
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v19.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_21FFECC(MasterData_object, v9);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_21FFECC(MasterData_object, v9);
    if ( !MasterData_object )
      sub_21FFECC(0, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v12 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v14 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___),
            (v14 & 0x80000000) != 0) )
      {
        v4 += HIDWORD(v12[2].klass);
      }
      else
      {
        v16 = v12[3].monitor;
        if ( !v16 )
          sub_21FFECC(v14, v15);
        if ( (unsigned int)v14 >= v16[6] )
          sub_21FFED4(v14);
        v4 += v16[(unsigned int)v14 + 8] + HIDWORD(v12[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingRewardDialogComponent__OnClickCloseButton(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_59329A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DiggingRewardDialogComponent_EndClose__);
    sub_21FFC50(&Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59329A5 = 1;
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
      (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
    v5 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.closeBtnSe, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_21FFECC(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
  }
}


void DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
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

  if ( (byte_59329A7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_25465/*"treasurechest_btn_on"*/);
    byte_59329A7 = 1;
  }
  v3 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25463/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25465/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_27:
    sub_21FFECC(viewChangeButton, v5);
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
    sub_21FFED4(viewChangeButton);
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
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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


void DiggingRewardDialogComponent__Open(
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
  __int64 v17; // x24
  __int64 viewChangeButton; // x0
  __int64 v19; // x1
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
  Il2CppObject *Component_object; // x26
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v36; // x26
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  const MethodInfo *v43; // x2
  int32_t v44; // w26
  int32_t v45; // w27
  UILabel_o *v46; // x28
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v56; // x29
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  int64_t v61; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v63; // x29
  Il2CppObject *v64; // x0
  BattleDropItem_o *v65; // x25
  __int64 v66; // x0
  System_Array_o **v67; // x26
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x27
  __int64 v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo *v82; // x3
  __int64 v83; // x1
  __int64 v84; // x2
  Il2CppObject *v85; // x22
  int v86; // w9
  System_String_o *v87; // x1
  int32_t v88; // w20
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_Action_o *v95; // x20
  __int64 v96; // x0
  struct System_Action_o *v97; // [xsp+8h] [xbp-88h]
  bool v98; // [xsp+14h] [xbp-7Ch]
  int64_t v99; // [xsp+20h] [xbp-70h] BYREF
  int32_t v100; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_59329A1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BattleDropItem___TypeInfo);
    sub_21FFC50(&BattleDropItem_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__);
    sub_21FFC50(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5180/*"DIGGING_EVENT_POINT_NUM"*/);
    sub_21FFC50(&StringLiteral_14067/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_21FFC50(&StringLiteral_5185/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/);
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    sub_21FFC50(&StringLiteral_5183/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_21FFC50(&StringLiteral_25469/*"treasurechest_img_bg_reward"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_5184/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/);
    sub_21FFC50(&StringLiteral_5186/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_21FFC50(&StringLiteral_5187/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/);
    sub_21FFC50(&StringLiteral_5182/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/);
    sub_21FFC50(&StringLiteral_11557/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_59329A1 = 1;
  }
  v17 = sub_21FFEBC(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_52;
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32, v33);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_52;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_53;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_52;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v36 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_52;
  v44 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v43);
  if ( !this->fields.getPointRoot )
    goto LABEL_52;
  v45 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  viewChangeButton = (__int64)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  v98 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  if ( !this->fields.closeButton )
    goto LABEL_52;
  v46 = (UILabel_o *)viewChangeButton;
  v97 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0);
  if ( !viewChangeButton )
    goto LABEL_52;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5186/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v46 )
    goto LABEL_52;
  UILabel__set_text(v46, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5184/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0);
  if ( !getQpTitle )
    goto LABEL_52;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5185/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0);
  if ( !totalQpTitle )
    goto LABEL_52;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5183/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5182/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_52;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v44, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v44, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5180/*"DIGGING_EVENT_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v100 = v45;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v100);
  v58 = System_String__Format(v56, v57, 0);
  viewChangeButton = (__int64)System_String__Concat_75438412((System_String_o *)StringLiteral_861/*"+"*/, v58, 0);
  if ( !getNumLabel )
    goto LABEL_52;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v61 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5187/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v99 = v61;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v99);
  viewChangeButton = (__int64)System_String__Format(v63, v64, 0);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  v65 = (BattleDropItem_o *)sub_21FFEBC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v65, 0);
  if ( !v65 )
    goto LABEL_52;
  v65->fields.originalNum = v45;
  v65->fields.type = 2;
  v65->fields.objectId = v44;
  if ( !diggingRewards )
    goto LABEL_52;
  v66 = sub_21FFD10(BattleDropItem___TypeInfo, (unsigned int)(LODWORD(diggingRewards->max_length) + 1));
  *(_QWORD *)(v17 + 24) = v66;
  v67 = (System_Array_o **)(v17 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 24), v66, v68, v69, v70, v71, v72, v73);
  v74 = *(_QWORD *)(v17 + 24);
  if ( !v74 )
    goto LABEL_52;
  viewChangeButton = sub_21FFDA4(v65, *(_QWORD *)(*(_QWORD *)v74 + 64LL));
  if ( !viewChangeButton )
  {
    v96 = sub_21FFEF0(0, v75);
    sub_21FFD90(v96, 0);
  }
  if ( !*(_DWORD *)(v74 + 24) )
LABEL_53:
    sub_21FFED4(viewChangeButton);
  *(_QWORD *)(v74 + 32) = v65;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 32), (int32_t)v65, v76, v77, v78, v79, v80, v81);
  System_Array__Copy_77078136((System_Array_o *)diggingRewards, 0, *v67, 1, diggingRewards->max_length, 0);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v67, oldUserGame, v82);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  v85 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  v86 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v98 )
  {
    if ( !v86 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14067/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
    if ( v85 )
    {
      v87 = (System_String_o *)viewChangeButton;
      v88 = 8;
      goto LABEL_50;
    }
LABEL_52:
    sub_21FFECC(viewChangeButton, v19);
  }
  if ( !v86 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !v85 )
    goto LABEL_52;
  v87 = (System_String_o *)viewChangeButton;
  v88 = 1;
LABEL_50:
  UILabel__set_text((UILabel_o *)v85, v87, 0);
  this->fields.closeBtnSe = v88;
  this->fields.closeCallbackFunc = v97;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)v97,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v95 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v17,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0, 0);
}


void DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59329A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59329A8 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
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
    sub_21FFECC(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v6; // x19
  UserGameEntity_o *v7; // x9
  int max_length; // w8
  int64_t qp; // x23
  unsigned int v10; // w24
  int v11; // w22
  BattleDropItem_o *v12; // x21
  BalanceConfig_c *v13; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v18; // x0
  int64_t v19; // [xsp+0h] [xbp-60h] BYREF
  int v20; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_59329A2 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    this = (DiggingRewardDialogComponent_o *)sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_59329A2 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !LODWORD(oldUserGame->max_length) )
    goto LABEL_31;
  v7 = oldUserGame->m_Items[0];
  if ( !v7 || !dropItems )
    goto LABEL_30;
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
        goto LABEL_30;
      if ( v12->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v12->fields.objectId,
                                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v12, 0);
          v11 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_21FFED4(this);
  }
  v11 = 0;
LABEL_20:
  v13 = BalanceConfig_TypeInfo;
  if ( qp < 0 )
    goto LABEL_34;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, dropItems, oldUserGame);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( qp > v13->static_fields->QpMax )
  {
LABEL_34:
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, dropItems, oldUserGame);
      v13 = BalanceConfig_TypeInfo;
    }
    qp = v13->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v20 = v11;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v20);
  v16 = System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v15, 0);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_861/*"+"*/, v16, 0);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v19 = qp + v11,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v19),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v18, 0),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_21FFECC(this, dropItems);
  }
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0);
}


void DiggingRewardDialogComponent__SetResultData(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v4; // x20
  int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  Il2CppObject *prefabResultItem; // x22
  __int64 v9; // x9
  int32_t objectId; // w23
  int32_t type; // w24
  int v12; // w29
  DiggingRewardDialogComponent_o *v13; // x22
  DiggingRewardDialogComponent_o *v14; // x25
  int v15; // w8
  ItemIconComponent_o *v16; // x25
  DiggingRewardDialogComponent_o *v17; // x0
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
  if ( (byte_59329A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingRewardDialogComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59329A4 = 1;
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
          sub_21FFED4(this);
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
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                   prefabResultItem,
                                                   (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v13,
                                                   0);
        v14 = this;
        if ( !byte_5931940 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v13,
                                                   0);
        if ( !this )
          goto LABEL_31;
        v29.fields.x = v4->fields.iconScale;
        v29.fields.y = v29.fields.x;
        v29.fields.z = v29.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)v13,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v12 <= 1 ? -1 : v12;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
        DiggingRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v13;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v13, v19, v20, v21, v22, v23, v24);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_21FFECC(this, rewards);
        }
        this = (DiggingRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *DiggingRewardDialogComponent__get_closeBtnObject(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59329A9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59329A9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingRewardDialogComponent___c__DisplayClass36_0___Open_b__0(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingRewardDialogComponent_o *_4__this; // x0
  struct DiggingRewardDialogComponent_o *v5; // x8
  System_Action_T__o *eventRootMaskSetActiveAction; // x0
  const MethodInfo_36CDE1C *v7; // x2

  if ( (byte_59329AB & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_59329AB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  eventRootMaskSetActiveAction = (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction;
  v7 = (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___;
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(eventRootMaskSetActiveAction, 0, v7);
}