void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A0045B & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color___TypeInfo, v3);
    byte_4A0045B = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4A00457 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A00457 = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v17; // x20
  Il2CppClass *klass; // x8
  __int64 v19; // x0
  __int64 v20; // x1
  _DWORD *v21; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A00454 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, blockList);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    this = (DiggingRewardDialogComponent_o *)sub_1B640C8(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v10);
    byte_4A00454 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !blockList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v11 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v24.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1B64324(MasterData_object);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1B64324(MasterData_object);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v17 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v19 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___),
            (v19 & 0x80000000) != 0) )
      {
        v11 += HIDWORD(v17[2].klass);
      }
      else
      {
        v21 = v17[3].monitor;
        if ( !v21 )
          sub_1B64324(v19);
        if ( (unsigned int)v19 >= v21[6] )
          sub_1B6432C(v19, v20);
        v11 += v21[(unsigned int)v19 + 8] + HIDWORD(v17[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v11;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00456 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_DiggingRewardDialogComponent_EndClose__, v4);
    sub_1B640C8(&Method_DiggingRewardDialogComponent_OnClickCloseButton__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A00456 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
    v11 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v14; // x8
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A00458 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v8);
    sub_1B640C8(&StringLiteral_23968/*"treasurechest_btn_on"*/, v9);
    byte_4A00458 = 1;
  }
  v10 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v14 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23966/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23968/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v14, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v15 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B64324(viewChangeButton);
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
    sub_1B6432C(viewChangeButton, v17);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  __int64 v46; // x24
  __int64 viewChangeButton; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *Component_object; // x26
  __int64 v53; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_object__o *v57; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x2
  int32_t v61; // w26
  int v62; // w27
  UILabel_o *v63; // x28
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v71; // x29
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v76; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v78; // x29
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  BattleDropItem_o *v82; // x25
  __int64 v83; // x0
  System_Array_o **v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x27
  int32_t v88; // w2
  int32_t v89; // w3
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x22
  System_String_o *v92; // x1
  int32_t v93; // w20
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 v96; // x1
  __int64 v97; // x2
  System_Action_o *v98; // x20
  __int64 v99; // x0
  struct System_Action_o *v100; // [xsp+8h] [xbp-88h]
  bool v101; // [xsp+14h] [xbp-7Ch]
  __int64 v102; // [xsp+20h] [xbp-70h] BYREF
  int v103; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A00452 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, diggingRewards);
    sub_1B640C8(&AtlasManager_TypeInfo, v17);
    sub_1B640C8(&BattleDropItem___TypeInfo, v18);
    sub_1B640C8(&BattleDropItem_TypeInfo, v19);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760, v20);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingMaster___, v22);
    sub_1B640C8(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v23);
    sub_1B640C8(&int_TypeInfo, v24);
    sub_1B640C8(&long_TypeInfo, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v27);
    sub_1B640C8(&LocalizationManager_TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v30);
    sub_1B640C8(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_5012/*"DIGGING_EVENT_POINT_NUM"*/, v32);
    sub_1B640C8(&StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v33);
    sub_1B640C8(&StringLiteral_5017/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v34);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v35);
    sub_1B640C8(&StringLiteral_5015/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v36);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v37);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1B640C8(&StringLiteral_23972/*"treasurechest_img_bg_reward"*/, v39);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_1B640C8(&StringLiteral_5016/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v41);
    sub_1B640C8(&StringLiteral_5018/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v42);
    sub_1B640C8(&StringLiteral_5019/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v43);
    sub_1B640C8(&StringLiteral_5014/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v44);
    sub_1B640C8(&StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v45);
    byte_4A00452 = 1;
  }
  v46 = sub_1B64314(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, diggingRewards, oldUserGame);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v46,
    0LL);
  if ( !v46 )
    goto LABEL_50;
  *(_QWORD *)(v46 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 16), (int32_t)this, v48, v49);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v50,
    v51);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_50;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
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
  v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v55,
                                                       v56);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v57, v58, v59);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_50;
  v61 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v60);
  if ( !this->fields.getPointRoot )
    goto LABEL_50;
  v62 = viewChangeButton;
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
  v101 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !this->fields.closeButton )
    goto LABEL_50;
  v63 = (UILabel_o *)viewChangeButton;
  v100 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5018/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v63 )
    goto LABEL_50;
  UILabel__set_text(v63, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5016/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_50;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5017/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_50;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5015/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5014/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_50;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v61, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v61, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5012/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_50;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v103 = v62;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  v73 = System_String__Format(v71, v72, 0LL);
  viewChangeButton = (__int64)System_String__Concat_61375396((System_String_o *)StringLiteral_861/*"+"*/, v73, 0LL);
  if ( !getNumLabel )
    goto LABEL_50;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v76 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5019/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_50;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v102 = v76;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v102);
  viewChangeButton = (__int64)System_String__Format(v78, v79, 0LL);
  if ( !totalNumLabel )
    goto LABEL_50;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v82 = (BattleDropItem_o *)sub_1B64314(BattleDropItem_TypeInfo, v80, v81);
  BattleDropItem___ctor(v82, 0LL);
  if ( !v82 )
    goto LABEL_50;
  v82->fields.type = 2;
  v82->fields.objectId = v61;
  v82->fields.originalNum = v62;
  if ( !diggingRewards
    || (v83 = sub_1B64170(BattleDropItem___TypeInfo, diggingRewards->max_length + 1),
        *(_QWORD *)(v46 + 24) = v83,
        v84 = (System_Array_o **)(v46 + 24),
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 24), v83, v85, v86),
        (v87 = *(_QWORD *)(v46 + 24)) == 0) )
  {
LABEL_50:
    sub_1B64324(viewChangeButton);
  }
  viewChangeButton = sub_1B64204(v82, *(_QWORD *)(*(_QWORD *)v87 + 64LL));
  if ( !viewChangeButton )
  {
    v99 = sub_1B64348(0LL);
    sub_1B641F0(v99, 0LL);
  }
  if ( !*(_DWORD *)(v87 + 24) )
LABEL_51:
    sub_1B6432C(viewChangeButton, v53);
  *(_QWORD *)(v87 + 32) = v82;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v82, v88, v89);
  System_Array__Copy_62330756((System_Array_o *)diggingRewards, 0, *v84, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v84, oldUserGame, v90);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  v91 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v101 )
    {
LABEL_43:
      viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
      if ( !v91 )
        goto LABEL_50;
      v92 = (System_String_o *)viewChangeButton;
      v93 = 8;
      goto LABEL_48;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v101 )
      goto LABEL_43;
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v91 )
    goto LABEL_50;
  v92 = (System_String_o *)viewChangeButton;
  v93 = 1;
LABEL_48:
  UILabel__set_text((UILabel_o *)v91, v92, 0LL);
  this->fields.closeBtnSe = v93;
  this->fields.closeCallbackFunc = v100;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)v100, v94, v95);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v98 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v96, v97);
  System_Action___ctor(
    v98,
    (Il2CppObject *)v46,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v98, 0, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00459 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A00459 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1B64324(Instance);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserGameEntity_o *v13; // x9
  signed int max_length; // w8
  int32_t qp; // w23
  unsigned int v16; // w24
  int v17; // w22
  BattleDropItem_o *v18; // x21
  BalanceConfig_c *v19; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v24; // x0
  int v25; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4A00453 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, dropItems);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v11);
    this = (DiggingRewardDialogComponent_o *)sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v12);
    byte_4A00453 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !oldUserGame->max_length )
    goto LABEL_31;
  v13 = oldUserGame->m_Items[0];
  if ( !v13 || !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  qp = v13->fields.qp;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    while ( v16 < max_length )
    {
      v18 = dropItems->m_Items[v16];
      if ( !v18 )
        goto LABEL_30;
      if ( v18->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v18->fields.objectId,
                                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v18, 0LL);
          v17 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_1B6432C(this, dropItems);
  }
  v17 = 0;
LABEL_20:
  v19 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_34;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( qp > v19->static_fields->QpMax )
  {
LABEL_34:
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BalanceConfig_TypeInfo;
    }
    qp = v19->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v26 = v17;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v22 = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v21, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_61375396(
                                             (System_String_o *)StringLiteral_861/*"+"*/,
                                             v22,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v25 = qp + v17,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v24, 0LL),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_1B64324(this);
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
  __int64 v18; // x1
  DiggingRewardDialogComponent_o *v19; // x25
  int32_t v20; // w3
  ItemIconComponent_o *v21; // x25
  DiggingRewardDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A00455 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingRewardDialogComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A00455 = 1;
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
          sub_1B6432C(this, rewards);
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
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        v19 = this;
        if ( !byte_49F7111 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
          byte_49F7111 = 1;
        }
        if ( !v19 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v17,
                                                   0LL);
        if ( !this )
          goto LABEL_31;
        v30.fields.x = v4->fields.iconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)v17,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v20 = v15 <= 1 ? -1 : v15;
        v21 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, type, objectId, v20, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v22, v21, objectId, v23);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v26 = *(_QWORD *)&this->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v26 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v29 + 32) = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v17, v24, v25);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1B64324(this);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A0045A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A0045A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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

  if ( (byte_4A00553 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A00553 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  v4->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v4->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
}