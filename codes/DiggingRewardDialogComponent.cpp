void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_40FBCD2 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    byte_40FBCD2 = 1;
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

  if ( (byte_40FBCCE & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FBCCE = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v17; // x20
  _DWORD *monitor; // x8
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FBCCB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, blockList);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FBCCB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !blockList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v25 = v24;
  v11 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v25.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B170D4();
    klass = current[4].klass;
    if ( !klass )
      sub_B170D4();
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v17 = Entity;
    if ( Entity )
    {
      monitor = current[4].monitor;
      if ( !monitor
        || (v19 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity->fields.longName,
                    monitor[6],
                    (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
            (v19 & 0x80000000) != 0) )
      {
        v11 += HIDWORD(v17->fields.name);
      }
      else
      {
        v22 = *(_QWORD *)&v17->fields.parentWarId;
        if ( !v22 )
          sub_B170D4();
        if ( (unsigned int)v19 >= *(_DWORD *)(v22 + 24) )
        {
          sub_B17100(v19, v20, v21);
          sub_B170A0();
        }
        v11 += *(_DWORD *)(v22 + 4LL * (int)v19 + 32) + HIDWORD(v17->fields.name);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v11;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBCCD & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_DiggingRewardDialogComponent_EndClose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FBCCD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v19.fields.current;
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
      &v19,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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

  if ( (byte_40FBCCF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v8);
    sub_B16FFC(&StringLiteral_22702/*"treasurechest_btn_on"*/, v9);
    byte_40FBCCF = 1;
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  UIButton_o *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v80; // x2
  int32_t name; // w26
  int32_t TotalEventPoint; // w0
  int v83; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *getQpRoot; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_Component_o *v87; // x0
  bool v88; // w22
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v91; // x28
  UnityEngine_Component_o *v92; // x0
  UILabel_o *v93; // x21
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  UILabel_o *getQpTitle; // x21
  System_String_o *v97; // x0
  UILabel_o *totalQpTitle; // x21
  System_String_o *v99; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v101; // x0
  UILabel_o *subTitleLabel; // x21
  System_String_o *v103; // x0
  UILabel_o *getTitleLabel; // x21
  System_String_o *v105; // x0
  UILabel_o *getNumLabel; // x21
  System_String_o *v107; // x28
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  System_String_o *v110; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x21
  __int64 v113; // x25
  System_String_o *v114; // x0
  UILabel_o *totalNumLabel; // x21
  System_String_o *v116; // x28
  Il2CppObject *v117; // x0
  System_String_o *v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  BattleDropItem_o *v123; // x25
  __int64 v124; // x2
  bool v125; // w20
  System_Int32_array **v126; // x0
  System_Array_o **v127; // x26
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x21
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  const MethodInfo *v140; // x3
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_Component_o *v142; // x0
  UILabel_o *v143; // x22
  System_String_o *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  int32_t v151; // w8
  System_String_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  System_Action_o *v158; // x20
  UserGameEntity_array *v159; // [xsp+8h] [xbp-78h]
  struct System_Action_o *v160; // [xsp+10h] [xbp-70h]
  __int64 v162; // [xsp+20h] [xbp-60h] BYREF
  int v163; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FBCC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, diggingRewards);
    sub_B16FFC(&AtlasManager_TypeInfo, v16);
    sub_B16FFC(&BattleDropItem___TypeInfo, v17);
    sub_B16FFC(&BattleDropItem_TypeInfo, v18);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v19);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingMaster___, v21);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v22);
    sub_B16FFC(&int_TypeInfo, v23);
    sub_B16FFC(&long_TypeInfo, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v26);
    sub_B16FFC(&LocalizationManager_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v29);
    sub_B16FFC(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v30);
    sub_B16FFC(&StringLiteral_4572/*"DIGGING_EVENT_POINT_NUM"*/, v31);
    sub_B16FFC(&StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_B16FFC(&StringLiteral_4577/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v33);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v34);
    sub_B16FFC(&StringLiteral_4575/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v35);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v36);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v37);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v38);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B16FFC(&StringLiteral_4576/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v40);
    sub_B16FFC(&StringLiteral_4578/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v41);
    sub_B16FFC(&StringLiteral_4579/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v42);
    sub_B16FFC(&StringLiteral_4574/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v43);
    sub_B16FFC(&StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v44);
    byte_40FBCC9 = 1;
  }
  v45 = sub_B170CC(
          DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo,
          diggingRewards,
          oldUserGame,
          blockList,
          *(_QWORD *)&eventId);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_56;
  *(_QWORD *)(v45 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v46, v47, v48, v49, v50, v51);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  v60 = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !v60 )
    goto LABEL_56;
  UIButton__set_normalSprite(v60, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_56;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_57;
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_56;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v66,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v70;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_56;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_56;
  name = (int32_t)Entity->fields.name;
  TotalEventPoint = DiggingRewardDialogComponent__GetTotalEventPoint(
                      (DiggingRewardDialogComponent_o *)Entity,
                      blockList,
                      v80);
  if ( !this->fields.getPointRoot )
    goto LABEL_56;
  v83 = TotalEventPoint;
  gameObject = UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  getQpRoot = this->fields.getQpRoot;
  if ( !getQpRoot )
    goto LABEL_56;
  v86 = UnityEngine_GameObject__get_gameObject(getQpRoot, 0LL);
  if ( !v86 )
    goto LABEL_56;
  v159 = oldUserGame;
  UnityEngine_GameObject__SetActive(v86, 1, 0LL);
  v87 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v87 )
    goto LABEL_56;
  v88 = getPointReward;
  v160 = closeCallback;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v87, 0LL);
  if ( !transform )
    goto LABEL_56;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_56;
  v91 = ComponentInChildren_UILabel;
  v92 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.closeButton,
                                     0LL);
  if ( !v92 )
    goto LABEL_56;
  v93 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v92,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_4578/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v91 )
    goto LABEL_56;
  UILabel__set_text(v91, v94, 0LL);
  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !v93 )
    goto LABEL_56;
  UILabel__set_text(v93, v95, 0LL);
  getQpTitle = this->fields.getQpTitle;
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_4576/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_56;
  UILabel__set_text(getQpTitle, v97, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_4577/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_56;
  UILabel__set_text(totalQpTitle, v99, 0LL);
  titleLabel = this->fields.titleLabel;
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_4575/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_56;
  UILabel__set_text(titleLabel, v101, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_4574/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_56;
  UILabel__set_text(subTitleLabel, v103, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, name, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, name, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_4572/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_56;
  UILabel__set_text(getTitleLabel, v105, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v163 = v83;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163);
  v109 = System_String__Format(v107, v108, 0LL);
  v110 = System_String__Concat_43743732((System_String_o *)StringLiteral_690/*"+"*/, v109, 0LL);
  if ( !getNumLabel )
    goto LABEL_56;
  UILabel__set_text(getNumLabel, v110, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v113 = EventPointNoGroup;
  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_4579/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_56;
  UILabel__set_text(totalTitleLabel, v114, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v162 = v113;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v162);
  v118 = System_String__Format(v116, v117, 0LL);
  if ( !totalNumLabel )
    goto LABEL_56;
  UILabel__set_text(totalNumLabel, v118, 0LL);
  v123 = (BattleDropItem_o *)sub_B170CC(BattleDropItem_TypeInfo, v119, v120, v121, v122);
  BattleDropItem___ctor(v123, 0LL);
  if ( !v123 )
    goto LABEL_56;
  v123->fields.type = 2;
  v123->fields.objectId = name;
  v125 = v88;
  v123->fields.originalNum = v83;
  if ( !diggingRewards )
    goto LABEL_56;
  v126 = (System_Int32_array **)sub_B17014(BattleDropItem___TypeInfo, diggingRewards->max_length + 1, v124);
  *(_QWORD *)(v45 + 24) = v126;
  v127 = (System_Array_o **)(v45 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 24), v126, v128, v129, v130, v131, v132, v133);
  v134 = *(_QWORD *)(v45 + 24);
  if ( !v134 )
    goto LABEL_56;
  v61 = sub_B170BC(v123, *(_QWORD *)(*(_QWORD *)v134 + 64LL));
  if ( !v61 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v134 + 24) )
  {
LABEL_57:
    sub_B17100(v61, v62, v63);
    sub_B170A0();
  }
  *(_QWORD *)(v134 + 32) = v123;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v134 + 32),
    (System_Int32_array **)v123,
    v63,
    v135,
    v136,
    v137,
    v138,
    v139);
  System_Array__Copy_42336008((System_Array_o *)diggingRewards, 0, *v127, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v127, v159, v140);
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_56;
  v142 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(closeButton, 0LL);
  if ( !v142 )
    goto LABEL_56;
  v143 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           v142,
           1,
           (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( v125 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v144 = LocalizationManager__Get((System_String_o *)StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( v143 )
    {
      UILabel__set_text(v143, v144, 0LL);
      v151 = 8;
      goto LABEL_54;
    }
LABEL_56:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v143 )
    goto LABEL_56;
  UILabel__set_text(v143, v152, 0LL);
  v151 = 1;
LABEL_54:
  this->fields.closeBtnSe = v151;
  this->fields.closeCallbackFunc = v160;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)v160,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v153 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v153, 1, 0LL);
  v158 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v154, v155, v156, v157);
  System_Action___ctor(
    v158,
    (Il2CppObject *)v45,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v158, 0, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
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

  if ( (byte_40FBCD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FBCD0 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  BalanceConfig_c *v21; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_40FBCCA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, dropItems);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v11);
    this = (DiggingRewardDialogComponent_o *)sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v12);
    byte_40FBCCA = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_32;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v18->fields.objectId,
                                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    sub_B17100(this, dropItems, oldUserGame);
    sub_B170A0();
  }
  v17 = 0;
LABEL_20:
  v21 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_36;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( qp > v21->static_fields->QpMax )
  {
LABEL_36:
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BalanceConfig_TypeInfo;
    }
    qp = v21->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v30 = v17;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v24 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v23, 0LL);
  v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_690/*"+"*/, v24, 0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, v25, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v29 = qp + v17,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29),
        v28 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v27, 0LL),
        !totalQpNumLabel) )
  {
LABEL_32:
    sub_B170D4();
  }
  UILabel__set_text(totalQpNumLabel, v28, 0LL);
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
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x24
  int v20; // s0
  UnityEngine_Transform_o *v23; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v25; // w3
  ItemIconComponent_o *v26; // x24
  DiggingRewardDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FBCCC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingRewardDialogComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FBCCC = 1;
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
        DiggingRewardDialogComponent__SetPossession(v27, v26, objectId, v28);
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
        this = (DiggingRewardDialogComponent_o *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                                   Component_WebViewObject,
                                                   Component_WebViewObject->klass[1]._1.element_class);
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

  if ( (byte_40FBCD1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBCD1 = 1;
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

  if ( (byte_40F8B6B & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F8B6B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
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