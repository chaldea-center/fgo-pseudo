void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418946A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    byte_418946A = 1;
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

  if ( (byte_4189466 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4189466 = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
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
  Il2CppObject *current; // x26
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v19; // x20
  _DWORD *monitor; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189463 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, blockList);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    this = (DiggingRewardDialogComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4189463 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !blockList )
    sub_B2C434(this, blockList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v27 = v26;
  v11 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v27.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v14);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v16);
    klass = current[4].klass;
    if ( !klass )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v16);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v16);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v19 = Entity;
    if ( Entity )
    {
      monitor = current[4].monitor;
      if ( !monitor
        || (v21 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity->fields.longName,
                    monitor[6],
                    (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
            (v21 & 0x80000000) != 0) )
      {
        v11 += HIDWORD(v19->fields.name);
      }
      else
      {
        v23 = *(_QWORD *)&v19->fields.parentWarId;
        if ( !v23 )
          sub_B2C434(v21, v22);
        if ( (unsigned int)v21 >= *(_DWORD *)(v23 + 24) )
        {
          v25 = sub_B2C460(v21);
          sub_B2C400(v25, 0LL);
        }
        v11 += *(_DWORD *)(v23 + 4LL * (int)v21 + 32) + HIDWORD(v19->fields.name);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v11;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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
  int32_t closeBtnSe; // w20
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189465 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_DiggingRewardDialogComponent_EndClose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_4189465 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields.current;
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
      &v16,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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

  if ( (byte_4189467 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v8);
    sub_B2C35C(&StringLiteral_22795/*"treasurechest_btn_on"*/, v9);
    byte_4189467 = 1;
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
  __int64 v45; // x24
  __int64 viewChangeButton; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewObject_o *Component_WebViewObject; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  int32_t v70; // w26
  int v71; // w27
  bool v72; // w22
  UILabel_o *v73; // x28
  UILabel_o *ComponentInChildren_UILabel; // x21
  UILabel_o *getQpTitle; // x21
  UILabel_o *totalQpTitle; // x21
  UILabel_o *titleLabel; // x21
  UILabel_o *subTitleLabel; // x21
  UILabel_o *getTitleLabel; // x21
  UILabel_o *getNumLabel; // x21
  System_String_o *v81; // x28
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x21
  __int64 v86; // x25
  UILabel_o *totalNumLabel; // x21
  System_String_o *v88; // x28
  Il2CppObject *v89; // x0
  BattleDropItem_o *v90; // x25
  bool v91; // w20
  System_Int32_array **v92; // x0
  System_Array_o **v93; // x26
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  const MethodInfo *v107; // x3
  UILabel_o *v108; // x22
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  int32_t v115; // w8
  System_Action_o *v116; // x20
  __int64 v117; // x0
  __int64 v118; // x0
  UserGameEntity_array *v119; // [xsp+8h] [xbp-78h]
  struct System_Action_o *v120; // [xsp+10h] [xbp-70h]
  __int64 v122; // [xsp+20h] [xbp-60h] BYREF
  int v123; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4189461 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, diggingRewards);
    sub_B2C35C(&AtlasManager_TypeInfo, v16);
    sub_B2C35C(&BattleDropItem___TypeInfo, v17);
    sub_B2C35C(&BattleDropItem_TypeInfo, v18);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v19);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingMaster___, v21);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v22);
    sub_B2C35C(&int_TypeInfo, v23);
    sub_B2C35C(&long_TypeInfo, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v26);
    sub_B2C35C(&LocalizationManager_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v29);
    sub_B2C35C(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v30);
    sub_B2C35C(&StringLiteral_4587/*"DIGGING_EVENT_POINT_NUM"*/, v31);
    sub_B2C35C(&StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_B2C35C(&StringLiteral_4592/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v33);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v34);
    sub_B2C35C(&StringLiteral_4590/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v35);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v36);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v37);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v38);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B2C35C(&StringLiteral_4591/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v40);
    sub_B2C35C(&StringLiteral_4593/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v41);
    sub_B2C35C(&StringLiteral_4594/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v42);
    sub_B2C35C(&StringLiteral_4589/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v43);
    sub_B2C35C(&StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v44);
    byte_4189461 = 1;
  }
  v45 = sub_B2C42C(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_56;
  *(_QWORD *)(v45 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_56;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
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
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v62;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_56;
  v70 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v69);
  if ( !this->fields.getPointRoot )
    goto LABEL_56;
  v71 = viewChangeButton;
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
  v119 = oldUserGame;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  v72 = getPointReward;
  v120 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !this->fields.closeButton )
    goto LABEL_56;
  v73 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4593/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v73 )
    goto LABEL_56;
  UILabel__set_text(v73, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_56;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4591/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_56;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4592/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_56;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4590/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_56;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4589/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_56;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v70, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v70, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4587/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_56;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v123 = v71;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v83 = System_String__Format(v81, v82, 0LL);
  viewChangeButton = (__int64)System_String__Concat_44305532((System_String_o *)StringLiteral_691/*"+"*/, v83, 0LL);
  if ( !getNumLabel )
    goto LABEL_56;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v86 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4594/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_56;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v122 = v86;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v122);
  viewChangeButton = (__int64)System_String__Format(v88, v89, 0LL);
  if ( !totalNumLabel )
    goto LABEL_56;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v90 = (BattleDropItem_o *)sub_B2C42C(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v90, 0LL);
  if ( !v90 )
    goto LABEL_56;
  v90->fields.type = 2;
  v90->fields.objectId = v70;
  v91 = v72;
  v90->fields.originalNum = v71;
  if ( !diggingRewards )
    goto LABEL_56;
  v92 = (System_Int32_array **)sub_B2C374(BattleDropItem___TypeInfo, diggingRewards->max_length + 1);
  *(_QWORD *)(v45 + 24) = v92;
  v93 = (System_Array_o **)(v45 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 24), v92, v94, v95, v96, v97, v98, v99);
  v100 = *(_QWORD *)(v45 + 24);
  if ( !v100 )
    goto LABEL_56;
  viewChangeButton = sub_B2C41C(v90, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
  if ( !viewChangeButton )
  {
    v118 = sub_B2C454(0LL);
    sub_B2C400(v118, 0LL);
  }
  if ( !*(_DWORD *)(v100 + 24) )
  {
LABEL_57:
    v117 = sub_B2C460(viewChangeButton);
    sub_B2C400(v117, 0LL);
  }
  *(_QWORD *)(v100 + 32) = v90;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v100 + 32),
    (System_Int32_array **)v90,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  System_Array__Copy_42671224((System_Array_o *)diggingRewards, 0, *v93, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v93, v119, v107);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  v108 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           (UnityEngine_Component_o *)viewChangeButton,
           1,
           (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( v91 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( v108 )
    {
      UILabel__set_text(v108, (System_String_o *)viewChangeButton, 0LL);
      v115 = 8;
      goto LABEL_54;
    }
LABEL_56:
    sub_B2C434(viewChangeButton, v47);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v108 )
    goto LABEL_56;
  UILabel__set_text(v108, (System_String_o *)viewChangeButton, 0LL);
  v115 = 1;
LABEL_54:
  this->fields.closeBtnSe = v115;
  this->fields.closeCallbackFunc = v120;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)v120,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v116 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v116,
    (Il2CppObject *)v45,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0LL);
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
  __int64 v9; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189468 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189468 = 1;
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
  __int64 v25; // x0
  int v26; // [xsp+8h] [xbp-48h] BYREF
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4189462 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, dropItems);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v11);
    this = (DiggingRewardDialogComponent_o *)sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v12);
    byte_4189462 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_32;
  if ( !oldUserGame->max_length )
    goto LABEL_33;
  v13 = oldUserGame->m_Items[0];
  if ( !v13 || !dropItems )
    goto LABEL_32;
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
        goto LABEL_32;
      if ( v18->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                   v18->fields.objectId,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.maskSprite) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v18, 0LL);
          v17 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_20;
    }
LABEL_33:
    v25 = sub_B2C460(this);
    sub_B2C400(v25, 0LL);
  }
  v17 = 0;
LABEL_20:
  v19 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_36;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( qp > v19->static_fields->QpMax )
  {
LABEL_36:
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BalanceConfig_TypeInfo;
    }
    qp = v19->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v27 = v17;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v22 = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v21, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_44305532(
                                             (System_String_o *)StringLiteral_691/*"+"*/,
                                             v22,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v26 = qp + v17,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v24, 0LL),
        !totalQpNumLabel) )
  {
LABEL_32:
    sub_B2C434(this, dropItems);
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
  DiggingRewardDialogComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4189464 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingRewardDialogComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189464 = 1;
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
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   prefabResultItem,
                                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v16 = (UnityEngine_GameObject_o *)this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
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
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !this )
          goto LABEL_26;
        v26.fields.x = v4->fields.iconScale;
        v26.fields.y = v26.fields.x;
        v26.fields.z = v26.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v16,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v21 = originalNum <= 1 ? -1 : originalNum;
        v22 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v21, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v23, v22, objectId, v24);
        UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B2C434(this, rewards);
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

  if ( (byte_4189469 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189469 = 1;
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

  if ( (byte_41864FC & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_41864FC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
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