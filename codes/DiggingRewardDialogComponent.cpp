void DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C21AF2 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    byte_4C21AF2 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1C2D538(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2);
  sub_1C2D434(&this->fields.viewChangeButtonLabelEffectColors);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4C21AEE & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C21AEE = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C2D434(p_closeCallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
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
  __int64 v16; // x2
  _DWORD *v17; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C21AEB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    this = (DiggingRewardDialogComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21AEB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !blockList )
    sub_1C2D6EC(this, blockList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v4 = 0;
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v20.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C2D6EC(MasterData_object, v9);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C2D6EC(MasterData_object, v9);
    if ( !MasterData_object )
      sub_1C2D6EC(0, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v12 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v14 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___),
            (v14 & 0x80000000) != 0) )
      {
        v4 += HIDWORD(v12[2].klass);
      }
      else
      {
        v17 = v12[3].monitor;
        if ( !v17 )
          sub_1C2D6EC(v14, v15);
        if ( (unsigned int)v14 >= v17[6] )
          sub_1C2D6F4(v14, v15, v16);
        v4 += v17[(unsigned int)v14 + 8] + HIDWORD(v12[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingRewardDialogComponent__OnClickCloseButton(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v8; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C21AED & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DiggingRewardDialogComponent_EndClose__);
    sub_1C2D490(&Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21AED = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.closeBtnSe, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C2D6EC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0);
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
  System_String_o *normalSprite; // x21
  __int64 v11; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C21AEF & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_24182/*"treasurechest_btn_on"*/);
    byte_4C21AEF = 1;
  }
  v3 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24180/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24182/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1C2D6EC(viewChangeButton, v5);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1C2D6F4(viewChangeButton, v5, v11);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v19.fields.a = *p_a;
  v19.fields.b = *p_b;
  v19.fields.g = *p_g;
  v19.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v18 = 0;
  while ( v18 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v18,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v18;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
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
  Il2CppObject *v17; // x24
  __int64 viewChangeButton; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x26
  __int64 v21; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v23; // x26
  const MethodInfo *v24; // x2
  int32_t v25; // w26
  int32_t v26; // w27
  UILabel_o *v27; // x28
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v35; // x29
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  int64_t v43; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v45; // x29
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  BattleDropItem_o *v50; // x25
  System_Array_o **p_monitor; // x26
  _DWORD *monitor; // x27
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x22
  System_String_o *v55; // x1
  int32_t v56; // w20
  System_Action_o *v57; // x20
  __int64 v58; // x0
  struct System_Action_o *v59; // [xsp+8h] [xbp-88h]
  bool v60; // [xsp+14h] [xbp-7Ch]
  int64_t v61; // [xsp+20h] [xbp-70h] BYREF
  int32_t v62; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C21AE9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BattleDropItem___TypeInfo);
    sub_1C2D490(&BattleDropItem_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__);
    sub_1C2D490(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C2D490(&StringLiteral_4997/*"DIGGING_EVENT_POINT_NUM"*/);
    sub_1C2D490(&StringLiteral_13536/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C2D490(&StringLiteral_5002/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    sub_1C2D490(&StringLiteral_5000/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C2D490(&StringLiteral_24186/*"treasurechest_img_bg_reward"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_5001/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/);
    sub_1C2D490(&StringLiteral_5003/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C2D490(&StringLiteral_5004/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/);
    sub_1C2D490(&StringLiteral_4999/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/);
    sub_1C2D490(&StringLiteral_11089/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4C21AE9 = 1;
  }
  v17 = (Il2CppObject *)sub_1C2D6DC(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v17, 0);
  if ( !v17 )
    goto LABEL_50;
  v17[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v17[1]);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C2D434(&this->fields.eventRootMaskSetActiveAction);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_50;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_50;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_51;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_50;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_1C2D434(&this->fields.resultItemObjList);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_50;
  v25 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v24);
  if ( !this->fields.getPointRoot )
    goto LABEL_50;
  v26 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  viewChangeButton = (__int64)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  v60 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  if ( !this->fields.closeButton )
    goto LABEL_50;
  v27 = (UILabel_o *)viewChangeButton;
  v59 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0);
  if ( !viewChangeButton )
    goto LABEL_50;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5003/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v27 )
    goto LABEL_50;
  UILabel__set_text(v27, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11089/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5001/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0);
  if ( !getQpTitle )
    goto LABEL_50;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5002/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0);
  if ( !totalQpTitle )
    goto LABEL_50;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5000/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4999/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_50;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v25, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v25, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4997/*"DIGGING_EVENT_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_50;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v62 = v26;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v36, v37, v38);
  v40 = System_String__Format(v35, v39, 0);
  viewChangeButton = (__int64)System_String__Concat_63457864((System_String_o *)StringLiteral_803/*"+"*/, v40, 0);
  if ( !getNumLabel )
    goto LABEL_50;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v43 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5004/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_50;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v61 = v43;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v61, v46, v47, v48);
  viewChangeButton = (__int64)System_String__Format(v45, v49, 0);
  if ( !totalNumLabel )
    goto LABEL_50;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  v50 = (BattleDropItem_o *)sub_1C2D6DC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v50, 0);
  if ( !v50
    || (v50->fields.type = 2, v50->fields.objectId = v25, v50->fields.originalNum = v26, !diggingRewards)
    || (v17[1].monitor = (void *)sub_1C2D538(
                                   BattleDropItem___TypeInfo,
                                   (unsigned int)(LODWORD(diggingRewards->max_length) + 1)),
        p_monitor = (System_Array_o **)&v17[1].monitor,
        viewChangeButton = sub_1C2D434(&v17[1].monitor),
        (monitor = v17[1].monitor) == 0) )
  {
LABEL_50:
    sub_1C2D6EC(viewChangeButton, v19);
  }
  viewChangeButton = sub_1C2D5CC(v50, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v58 = sub_1C2D710();
    sub_1C2D5B8(v58, 0);
  }
  if ( !monitor[6] )
LABEL_51:
    sub_1C2D6F4(viewChangeButton, v19, v21);
  *((_QWORD *)monitor + 4) = v50;
  sub_1C2D434(monitor + 8);
  System_Array__Copy_65120656((System_Array_o *)diggingRewards, 0, *p_monitor, 1, diggingRewards->max_length, 0);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*p_monitor, oldUserGame, v53);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  v54 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v60 )
    {
LABEL_43:
      viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
      if ( !v54 )
        goto LABEL_50;
      v55 = (System_String_o *)viewChangeButton;
      v56 = 8;
      goto LABEL_48;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v60 )
      goto LABEL_43;
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !v54 )
    goto LABEL_50;
  v55 = (System_String_o *)viewChangeButton;
  v56 = 1;
LABEL_48:
  UILabel__set_text((UILabel_o *)v54, v55, 0);
  this->fields.closeBtnSe = v56;
  this->fields.closeCallbackFunc = v59;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v57 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v57, v17, Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0);
}


void DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21AF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21AF0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1C2D6EC(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  __int64 v4; // x4
  DiggingRewardDialogComponent_o *v7; // x19
  UserGameEntity_o *v8; // x9
  int max_length; // w8
  int64_t qp; // x23
  unsigned int v11; // w24
  int v12; // w22
  BattleDropItem_o *v13; // x21
  BalanceConfig_c *v14; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *totalQpNumLabel; // x19
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int64_t v23; // [xsp+0h] [xbp-60h] BYREF
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4C21AEA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    this = (DiggingRewardDialogComponent_o *)sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    byte_4C21AEA = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !LODWORD(oldUserGame->max_length) )
    goto LABEL_31;
  v8 = oldUserGame->m_Items[0];
  if ( !v8 || !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  qp = v8->fields.qp;
  if ( max_length >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( v11 < max_length )
    {
      v13 = dropItems->m_Items[v11];
      if ( !v13 )
        goto LABEL_30;
      if ( v13->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v13->fields.objectId,
                                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v13, 0);
          v12 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_1C2D6F4(this, dropItems, oldUserGame);
  }
  v12 = 0;
LABEL_20:
  v14 = BalanceConfig_TypeInfo;
  if ( qp < 0 )
    goto LABEL_34;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( qp > v14->static_fields->QpMax )
  {
LABEL_34:
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BalanceConfig_TypeInfo;
    }
    qp = v14->static_fields->QpMax;
  }
  getQpNumLabel = v7->fields.getQpNumLabel;
  v24 = v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, oldUserGame, method, v4);
  v17 = System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v16, 0);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_63457864((System_String_o *)StringLiteral_803/*"+"*/, v17, 0);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0),
        totalQpNumLabel = v7->fields.totalQpNumLabel,
        v23 = qp + v12,
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v19, v20, v21),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v22, 0),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_1C2D6EC(this, dropItems);
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
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v10; // x10
  int v11; // w29
  Il2CppObject *prefabResultItem; // x22
  DiggingRewardDialogComponent_o *v13; // x22
  DiggingRewardDialogComponent_o *v14; // x25
  int v15; // w8
  ItemIconComponent_o *v16; // x25
  DiggingRewardDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C21AEC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21AEC = 1;
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
          sub_1C2D6F4(this, rewards, method);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_31;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44;
        if ( v7->fields.originalNum > 0 )
          v10 = 52;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                   prefabResultItem,
                                                   (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        if ( !byte_4C20DA1 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
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
        v23.fields.x = v4->fields.iconScale;
        v23.fields.y = v23.fields.x;
        v23.fields.z = v23.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v23, 0);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)v13,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v11 <= 1 ? -1 : v11;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
        DiggingRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        m_CachedPtr = this->fields.m_CachedPtr;
        v20 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v13;
          sub_1C2D434(v22 + 32);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_1C2D6EC(this, rewards);
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
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21AF1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21AF1 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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

  if ( (byte_4C21AF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C21AF3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
}