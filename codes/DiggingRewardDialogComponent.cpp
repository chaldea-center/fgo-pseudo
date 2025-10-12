void DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4C321C1 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&UnityEngine_Color___TypeInfo);
    byte_4C321C1 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C32CC8(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C32BC4(&this->fields.viewChangeButtonLabelEffectColors, v3);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4C321BD & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C321BD = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0);
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
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v10; // x20
  Il2CppClass *klass; // x8
  __int64 v12; // x0
  _DWORD *v13; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C321BA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    this = (DiggingRewardDialogComponent_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C321BA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !blockList )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v4 = 0;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v16.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C32E7C(MasterData_object);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C32E7C(MasterData_object);
    if ( !MasterData_object )
      sub_1C32E7C(0);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v10 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v12 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___),
            (v12 & 0x80000000) != 0) )
      {
        v4 += HIDWORD(v10[2].klass);
      }
      else
      {
        v13 = v10[3].monitor;
        if ( !v13 )
          sub_1C32E7C(v12);
        if ( (unsigned int)v12 >= v13[6] )
          sub_1C32E84(v12);
        v4 += v13[(unsigned int)v12 + 8] + HIDWORD(v10[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingRewardDialogComponent__OnClickCloseButton(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v7; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C321BC & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DiggingRewardDialogComponent_EndClose__);
    sub_1C32C20(&Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C321BC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.closeBtnSe, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v8.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0);
  }
}


void DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v7; // x8
  UISprite_o *v8; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v16; // w20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C321BE & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&StringLiteral_24198/*"treasurechest_btn"*/);
    sub_1C32C20(&StringLiteral_24200/*"treasurechest_btn_on"*/);
    byte_4C321BE = 1;
  }
  v3 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v7 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24198/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24200/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v7, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v8 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v8, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1C32E7C(viewChangeButton);
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
    sub_1C32E84(viewChangeButton);
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
  v17.fields.a = *p_a;
  v17.fields.b = *p_b;
  v17.fields.g = *p_g;
  v17.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v17, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v16 = 0;
  while ( v16 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v16,
                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v16;
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
  Il2CppObject *Component_object; // x26
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v21; // x26
  const MethodInfo *v22; // x2
  int32_t v23; // w26
  int32_t v24; // w27
  UILabel_o *v25; // x28
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v33; // x29
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  int64_t v44; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v46; // x29
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  BattleDropItem_o *v54; // x25
  __int64 v55; // x0
  System_Array_o **p_monitor; // x26
  _DWORD *monitor; // x27
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x22
  System_String_o *v60; // x1
  int32_t v61; // w20
  System_Action_o *v62; // x20
  __int64 v63; // x0
  struct System_Action_o *v64; // [xsp+8h] [xbp-88h]
  bool v65; // [xsp+14h] [xbp-7Ch]
  int64_t v66; // [xsp+20h] [xbp-70h] BYREF
  int32_t v67; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C321B8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BattleDropItem___TypeInfo);
    sub_1C32C20(&BattleDropItem_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__);
    sub_1C32C20(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C32C20(&StringLiteral_5005/*"DIGGING_EVENT_POINT_NUM"*/);
    sub_1C32C20(&StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C32C20(&StringLiteral_5010/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_5008/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_24198/*"treasurechest_btn"*/);
    sub_1C32C20(&StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C32C20(&StringLiteral_24204/*"treasurechest_img_bg_reward"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_5009/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/);
    sub_1C32C20(&StringLiteral_5011/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C32C20(&StringLiteral_5012/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/);
    sub_1C32C20(&StringLiteral_5007/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/);
    sub_1C32C20(&StringLiteral_11095/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4C321B8 = 1;
  }
  v17 = (Il2CppObject *)sub_1C32E6C(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v17, 0);
  if ( !v17 )
    goto LABEL_50;
  v17[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v17[1], this);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C32BC4(&this->fields.eventRootMaskSetActiveAction, setMaskMethod);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24198/*"treasurechest_btn"*/, 0);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_50;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24198/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_50;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_51;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_50;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C32BC4(&this->fields.resultItemObjList, v21);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_50;
  v23 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v22);
  if ( !this->fields.getPointRoot )
    goto LABEL_50;
  v24 = viewChangeButton;
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
  v65 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
  if ( !this->fields.closeButton )
    goto LABEL_50;
  v25 = (UILabel_o *)viewChangeButton;
  v64 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0);
  if ( !viewChangeButton )
    goto LABEL_50;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5011/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v25 )
    goto LABEL_50;
  UILabel__set_text(v25, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11095/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5009/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0);
  if ( !getQpTitle )
    goto LABEL_50;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0);
  if ( !totalQpTitle )
    goto LABEL_50;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5008/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5007/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_50;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v23, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v23, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5005/*"DIGGING_EVENT_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_50;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v67 = v24;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format(v33, v40, 0);
  viewChangeButton = (__int64)System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, v41, 0);
  if ( !getNumLabel )
    goto LABEL_50;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v44 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5012/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_50;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v66 = v44;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v66, v47, v48, v49, v50, v51, v52);
  viewChangeButton = (__int64)System_String__Format(v46, v53, 0);
  if ( !totalNumLabel )
    goto LABEL_50;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  v54 = (BattleDropItem_o *)sub_1C32E6C(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v54, 0);
  if ( !v54 )
    goto LABEL_50;
  v54->fields.type = 2;
  v54->fields.objectId = v23;
  v54->fields.originalNum = v24;
  if ( !diggingRewards
    || (v55 = sub_1C32CC8(BattleDropItem___TypeInfo, (unsigned int)(LODWORD(diggingRewards->max_length) + 1)),
        v17[1].monitor = (void *)v55,
        p_monitor = (System_Array_o **)&v17[1].monitor,
        viewChangeButton = sub_1C32BC4(&v17[1].monitor, v55),
        (monitor = v17[1].monitor) == 0) )
  {
LABEL_50:
    sub_1C32E7C(viewChangeButton);
  }
  viewChangeButton = sub_1C32D5C(v54, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v63 = sub_1C32EA0();
    sub_1C32D48(v63, 0);
  }
  if ( !monitor[6] )
LABEL_51:
    sub_1C32E84(viewChangeButton);
  *((_QWORD *)monitor + 4) = v54;
  sub_1C32BC4(monitor + 8, v54);
  System_Array__Copy_65180592((System_Array_o *)diggingRewards, 0, *p_monitor, 1, diggingRewards->max_length, 0);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*p_monitor, oldUserGame, v58);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  v59 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v65 )
    {
LABEL_43:
      viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
      if ( !v59 )
        goto LABEL_50;
      v60 = (System_String_o *)viewChangeButton;
      v61 = 8;
      goto LABEL_48;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v65 )
      goto LABEL_43;
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !v59 )
    goto LABEL_50;
  v60 = (System_String_o *)viewChangeButton;
  v61 = 1;
LABEL_48:
  UILabel__set_text((UILabel_o *)v59, v60, 0);
  this->fields.closeBtnSe = v61;
  this->fields.closeCallbackFunc = v64;
  sub_1C32BC4(&this->fields.closeCallbackFunc, v64);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v62 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v62, v17, Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0, 0);
}


void DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C321BF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C321BF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  DiggingRewardDialogComponent_o *v10; // x19
  UserGameEntity_o *v11; // x9
  int max_length; // w8
  int64_t qp; // x23
  unsigned int v14; // w24
  int v15; // w22
  BattleDropItem_o *v16; // x21
  BalanceConfig_c *v17; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *totalQpNumLabel; // x19
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  int64_t v29; // [xsp+0h] [xbp-60h] BYREF
  int v30; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4C321B9 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    this = (DiggingRewardDialogComponent_o *)sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    byte_4C321B9 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !LODWORD(oldUserGame->max_length) )
    goto LABEL_31;
  v11 = oldUserGame->m_Items[0];
  if ( !v11 || !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  qp = v11->fields.qp;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( v14 < max_length )
    {
      v16 = dropItems->m_Items[v14];
      if ( !v16 )
        goto LABEL_30;
      if ( v16->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v16->fields.objectId,
                                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v16, 0);
          v15 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_1C32E84(this);
  }
  v15 = 0;
LABEL_20:
  v17 = BalanceConfig_TypeInfo;
  if ( qp < 0 )
    goto LABEL_34;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( qp > v17->static_fields->QpMax )
  {
LABEL_34:
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BalanceConfig_TypeInfo;
    }
    qp = v17->static_fields->QpMax;
  }
  getQpNumLabel = v10->fields.getQpNumLabel;
  v30 = v15;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, oldUserGame, method, v4, v5, v6, v7);
  v20 = System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v19, 0);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, v20, 0);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0),
        totalQpNumLabel = v10->fields.totalQpNumLabel,
        v29 = qp + v15,
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v22, v23, v24, v25, v26, v27),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v28, 0),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_1C32E7C(this);
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
  if ( (byte_4C321BB & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingRewardDialogComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C321BB = 1;
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
          sub_1C32E84(this);
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
                                                   (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        if ( !byte_4C313D1 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
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
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v11 <= 1 ? -1 : v11;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40822420((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v13;
          sub_1C32BC4(v22 + 32, v13);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_1C32E7C(this);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C321C0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C321C0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
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

  if ( (byte_4C321C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C321C2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(_4__this);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
}