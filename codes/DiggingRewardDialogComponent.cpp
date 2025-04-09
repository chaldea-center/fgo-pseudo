void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49B5B34 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Color___TypeInfo, v3);
    byte_49B5B34 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1B4D038(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1B4CF34(&this->fields.viewChangeButtonLabelEffectColors);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_49B5B30 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool___, method);
    byte_49B5B30 = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E57BEC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B4CF34(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


int32_t __fastcall DiggingRewardDialogComponent__GetTotalEventPoint(
        DiggingRewardDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w19
  Il2CppObject *current; // x27
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v19; // x20
  Il2CppClass *klass; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  _DWORD *v23; // x8
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49B5B2D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, blockList);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    this = (DiggingRewardDialogComponent_o *)sub_1B4CF90(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v10);
    byte_49B5B2D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !blockList )
    sub_1B4D1EC(this, blockList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v11 = 0;
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v26.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B4D1EC(0LL, v14);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1B4D1EC(MasterData_object, v16);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1B4D1EC(MasterData_object, v16);
    if ( !MasterData_object )
      sub_1B4D1EC(0LL, v16);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_319D99C *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v19 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v21 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___),
            (v21 & 0x80000000) != 0) )
      {
        v11 += HIDWORD(v19[2].klass);
      }
      else
      {
        v23 = v19[3].monitor;
        if ( !v23 )
          sub_1B4D1EC(v21, v22);
        if ( (unsigned int)v21 >= v23[6] )
          sub_1B4D1F4(v21, v22);
        v11 += v23[(unsigned int)v21 + 8] + HIDWORD(v19[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v11;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__OnClickCloseButton(
        DiggingRewardDialogComponent_o *this,
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B5B2F & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool___, method);
    sub_1B4CF90(&System_Action_TypeInfo, v3);
    sub_1B4CF90(&Method_DiggingRewardDialogComponent_EndClose__, v4);
    sub_1B4CF90(&Method_DiggingRewardDialogComponent_OnClickCloseButton__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B5B2F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E57BEC *)Method_ActionExtensions_Call_bool___);
    v11 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B4CFA8(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.closeBtnSe, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B4D1EC(0LL, v13);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v15; // x8
  UISprite_o *v16; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B5B31 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B4CF90(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B4CF90(&StringLiteral_23780/*"treasurechest_btn"*/, v8);
    sub_1B4CF90(&StringLiteral_23782/*"treasurechest_btn_on"*/, v9);
    byte_49B5B31 = 1;
  }
  v10 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B4CFA8(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23780/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23782/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B4D1EC(viewChangeButton, v12);
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
    sub_1B4D1F4(viewChangeButton, v12);
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
  v25.fields.a = *p_r;
  v25.fields.b = *p_a;
  v25.fields.g = *p_b;
  v25.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v25, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v24 = 0;
  while ( v24 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v24,
                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v24;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  Il2CppObject *v46; // x24
  __int64 viewChangeButton; // x0
  __int64 v48; // x1
  Il2CppObject *Component_object; // x26
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v51; // x26
  const MethodInfo *v52; // x2
  int32_t v53; // w26
  int v54; // w27
  UILabel_o *v55; // x28
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v63; // x29
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v71; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v73; // x29
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  BattleDropItem_o *v78; // x25
  System_Array_o **p_monitor; // x26
  _DWORD *monitor; // x27
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x22
  System_String_o *v83; // x1
  int32_t v84; // w20
  System_Action_o *v85; // x20
  __int64 v86; // x0
  struct System_Action_o *v87; // [xsp+8h] [xbp-88h]
  bool v88; // [xsp+14h] [xbp-7Ch]
  __int64 v89; // [xsp+20h] [xbp-70h] BYREF
  int v90; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49B5B2B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, diggingRewards);
    sub_1B4CF90(&AtlasManager_TypeInfo, v17);
    sub_1B4CF90(&BattleDropItem___TypeInfo, v18);
    sub_1B4CF90(&BattleDropItem_TypeInfo, v19);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75513088, v20);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDiggingMaster___, v22);
    sub_1B4CF90(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v23);
    sub_1B4CF90(&int_TypeInfo, v24);
    sub_1B4CF90(&long_TypeInfo, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v27);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B4CF90(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v30);
    sub_1B4CF90(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v31);
    sub_1B4CF90(&StringLiteral_4941/*"DIGGING_EVENT_POINT_NUM"*/, v32);
    sub_1B4CF90(&StringLiteral_13242/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v33);
    sub_1B4CF90(&StringLiteral_4946/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v34);
    sub_1B4CF90(&StringLiteral_808/*"+"*/, v35);
    sub_1B4CF90(&StringLiteral_4944/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v36);
    sub_1B4CF90(&StringLiteral_23780/*"treasurechest_btn"*/, v37);
    sub_1B4CF90(&StringLiteral_2830/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1B4CF90(&StringLiteral_23786/*"treasurechest_img_bg_reward"*/, v39);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_1B4CF90(&StringLiteral_4945/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v41);
    sub_1B4CF90(&StringLiteral_4947/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v42);
    sub_1B4CF90(&StringLiteral_4948/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v43);
    sub_1B4CF90(&StringLiteral_4943/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v44);
    sub_1B4CF90(&StringLiteral_10859/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v45);
    byte_49B5B2B = 1;
  }
  v46 = (Il2CppObject *)sub_1B4D1DC(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_50;
  v46[1].klass = (Il2CppClass *)this;
  sub_1B4CF34(&v46[1]);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1B4CF34(&this->fields.eventRootMaskSetActiveAction);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23780/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_50;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23780/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_50;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_51;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_50;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v51 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v51;
  sub_1B4CF34(&this->fields.resultItemObjList);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_319D99C *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_50;
  v53 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v52);
  if ( !this->fields.getPointRoot )
    goto LABEL_50;
  v54 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  v88 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2EF89B0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75513088);
  if ( !this->fields.closeButton )
    goto LABEL_50;
  v55 = (UILabel_o *)viewChangeButton;
  v87 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2EF89B0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75513088);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4947/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v55 )
    goto LABEL_50;
  UILabel__set_text(v55, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10859/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4945/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_50;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4946/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_50;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4944/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4943/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_50;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v53, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v53, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23786/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23786/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_23786/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_23786/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4941/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_50;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v90 = v54;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v64, v65, v66);
  v68 = System_String__Format(v63, v67, 0LL);
  viewChangeButton = (__int64)System_String__Concat_61093468((System_String_o *)StringLiteral_808/*"+"*/, v68, 0LL);
  if ( !getNumLabel )
    goto LABEL_50;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v71 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4948/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_50;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v89 = v71;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v89, v74, v75, v76);
  viewChangeButton = (__int64)System_String__Format(v73, v77, 0LL);
  if ( !totalNumLabel )
    goto LABEL_50;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v78 = (BattleDropItem_o *)sub_1B4D1DC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v78, 0LL);
  if ( !v78
    || (v78->fields.type = 2, v78->fields.objectId = v53, v78->fields.originalNum = v54, !diggingRewards)
    || (v46[1].monitor = (void *)sub_1B4D038(BattleDropItem___TypeInfo, diggingRewards->max_length + 1),
        p_monitor = (System_Array_o **)&v46[1].monitor,
        viewChangeButton = sub_1B4CF34(&v46[1].monitor),
        (monitor = v46[1].monitor) == 0LL) )
  {
LABEL_50:
    sub_1B4D1EC(viewChangeButton, v48);
  }
  viewChangeButton = sub_1B4D0CC(v78, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v86 = sub_1B4D210();
    sub_1B4D0B8(v86, 0LL);
  }
  if ( !monitor[6] )
LABEL_51:
    sub_1B4D1F4(viewChangeButton, v48);
  *((_QWORD *)monitor + 4) = v78;
  sub_1B4CF34(monitor + 8);
  System_Array__Copy_62760636((System_Array_o *)diggingRewards, 0, *p_monitor, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*p_monitor, oldUserGame, v81);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  v82 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_2EF89B0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75513088);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v88 )
    {
LABEL_43:
      viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13242/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
      if ( !v82 )
        goto LABEL_50;
      v83 = (System_String_o *)viewChangeButton;
      v84 = 8;
      goto LABEL_48;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v88 )
      goto LABEL_43;
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v82 )
    goto LABEL_50;
  v83 = (System_String_o *)viewChangeButton;
  v84 = 1;
LABEL_48:
  UILabel__set_text((UILabel_o *)v82, v83, 0LL);
  this->fields.closeBtnSe = v84;
  this->fields.closeCallbackFunc = v87;
  sub_1B4CF34(&this->fields.closeCallbackFunc);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v85 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v85, v46, Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B5B32 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49B5B32 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49B57A5 = 1;
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
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1B4D1EC(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  __int64 v4; // x4
  DiggingRewardDialogComponent_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UserGameEntity_o *v14; // x9
  signed int max_length; // w8
  int32_t qp; // w23
  unsigned int v17; // w24
  int v18; // w22
  BattleDropItem_o *v19; // x21
  BalanceConfig_c *v20; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *totalQpNumLabel; // x19
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  int v29; // [xsp+8h] [xbp-58h] BYREF
  int v30; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_49B5B2C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, dropItems);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B4CF90(&int_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&StringLiteral_808/*"+"*/, v12);
    this = (DiggingRewardDialogComponent_o *)sub_1B4CF90(&StringLiteral_24644/*"{0:#,0}"*/, v13);
    byte_49B5B2C = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !oldUserGame->max_length )
    goto LABEL_31;
  v14 = oldUserGame->m_Items[0];
  if ( !v14 || !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  qp = v14->fields.qp;
  if ( max_length >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( v17 < max_length )
    {
      v19 = dropItems->m_Items[v17];
      if ( !v19 )
        goto LABEL_30;
      if ( v19->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v19->fields.objectId,
                                                   (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v19, 0LL);
          v18 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_1B4D1F4(this, dropItems);
  }
  v18 = 0;
LABEL_20:
  v20 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_34;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( qp > v20->static_fields->QpMax )
  {
LABEL_34:
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BalanceConfig_TypeInfo;
    }
    qp = v20->static_fields->QpMax;
  }
  getQpNumLabel = v7->fields.getQpNumLabel;
  v30 = v18;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, oldUserGame, method, v4);
  v23 = System_String__Format((System_String_o *)StringLiteral_24644/*"{0:#,0}"*/, v22, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_61093468(
                                             (System_String_o *)StringLiteral_808/*"+"*/,
                                             v23,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v7->fields.totalQpNumLabel,
        v29 = qp + v18,
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v25, v26, v27),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_24644/*"{0:#,0}"*/, v28, 0LL),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_1B4D1EC(this, dropItems);
  }
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetResultData(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  signed int max_length; // w8
  __int64 v10; // x26
  BattleDropItem_o *v11; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v14; // x10
  int v15; // w29
  Il2CppObject *prefabResultItem; // x22
  DiggingRewardDialogComponent_o *v17; // x22
  DiggingRewardDialogComponent_o *v18; // x25
  int32_t v19; // w3
  ItemIconComponent_o *v20; // x25
  DiggingRewardDialogComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49B5B2E & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingRewardDialogComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49B5B2E = 1;
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
          sub_1B4D1F4(this, rewards);
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          goto LABEL_31;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        v14 = 44LL;
        if ( v11->fields.originalNum > 0 )
          v14 = 52LL;
        v15 = *(_DWORD *)((char *)&v11->klass + v14);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                   prefabResultItem,
                                                   (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v17 = this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v17,
                                                   0LL);
        v18 = this;
        if ( !byte_49B5361 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_49B5361 = 1;
        }
        if ( !v18 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v17,
                                                   0LL);
        if ( !this )
          goto LABEL_31;
        v27.fields.x = v4->fields.iconScale;
        v27.fields.y = v27.fields.x;
        v27.fields.z = v27.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)v17,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v19 = v15 <= 1 ? -1 : v15;
        v20 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38682396((ItemIconComponent_o *)this, type, objectId, v19, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v21, v20, objectId, v22);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v23 = *(_QWORD *)&this->fields.m_CachedPtr;
        v24 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v23 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v17;
          sub_1B4CF34(v26 + 32);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1B4D1EC(this, rewards);
        }
        this = (DiggingRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v10;
      }
      while ( (int)v10 < max_length );
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

  if ( (byte_49B5B33 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B5B33 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B4D1EC(0LL, v4);
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
  const MethodInfo *v2; // x2
  DiggingRewardDialogComponent_o *_4__this; // x0
  struct DiggingRewardDialogComponent_o *v5; // x8

  if ( (byte_49B5B35 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool___, method);
    byte_49B5B35 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B4D1EC(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E57BEC *)Method_ActionExtensions_Call_bool___);
}