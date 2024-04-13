void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Color_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EA9AF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, v5, v6, v7);
    byte_42EA9AF = 1;
  }
  this->fields.iconScale = 0.85;
  v8 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_42EA9AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EA9AB = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


int32_t __fastcall DiggingRewardDialogComponent__GetTotalEventPoint(
        DiggingRewardDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t v26; // w19
  Il2CppObject *current; // x26
  WebViewManager_o *Instance; // x0
  __int64 v29; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v34; // x20
  _DWORD *monitor; // x8
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x8
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EA9A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)blockList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v20, v21, v22);
    this = (DiggingRewardDialogComponent_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v23,
                                               v24,
                                               v25);
    byte_42EA9A8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !blockList )
    sub_B5D69C(this, blockList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v42 = v41;
  v26 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v42.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v29);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v31);
    klass = current[4].klass;
    if ( !klass )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v31);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v31);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v34 = Entity;
    if ( Entity )
    {
      monitor = current[4].monitor;
      if ( !monitor
        || (v36 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity->fields.longName,
                    monitor[6],
                    (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
            (v36 & 0x80000000) != 0) )
      {
        v26 += HIDWORD(v34->fields.name);
      }
      else
      {
        v38 = *(_QWORD *)&v34->fields.parentWarId;
        if ( !v38 )
          sub_B5D69C(v36, v37);
        if ( (unsigned int)v36 >= *(_DWORD *)(v38 + 24) )
        {
          v40 = sub_B5D6C8(v36);
          sub_B5D668(v40, 0LL);
        }
        v26 += *(_DWORD *)(v38 + 4LL * (int)v36 + 32) + HIDWORD(v34->fields.name);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v26;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__OnClickCloseButton(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t closeBtnSe; // w20
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v33; // x20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA9AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DiggingRewardDialogComponent_EndClose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    byte_42EA9AA = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B5D69C(0LL, v30);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v34.fields.current;
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
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v33, 0LL);
  }
}


void __fastcall DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v29; // x8
  UISprite_o *v30; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v39; // x20
  int size; // w8
  __int64 v41; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA9AC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23100/*"treasurechest_btn_on"*/, v23, v24, v25);
    byte_42EA9AC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v29 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23098/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23100/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v29, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v30 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v30, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B5D69C(viewChangeButton, v26);
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
    v41 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v41, 0LL);
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
  v42.fields.b = *p_a;
  v42.fields.g = *p_b;
  v42.fields.r = *p_g;
  v42.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v42, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v39 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v39 >= size )
      break;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v39];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v39;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  __int64 v103; // x24
  __int64 viewChangeButton; // x0
  __int64 v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  WebViewObject_o *Component_WebViewObject; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v120; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  const MethodInfo *v127; // x2
  int32_t v128; // w26
  int v129; // w27
  bool v130; // w22
  UILabel_o *v131; // x28
  UILabel_o *ComponentInChildren_UILabel; // x21
  UILabel_o *getQpTitle; // x21
  UILabel_o *totalQpTitle; // x21
  UILabel_o *titleLabel; // x21
  UILabel_o *subTitleLabel; // x21
  UILabel_o *getTitleLabel; // x21
  UILabel_o *getNumLabel; // x21
  System_String_o *v139; // x28
  Il2CppObject *v140; // x0
  System_String_o *v141; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x21
  __int64 v144; // x25
  UILabel_o *totalNumLabel; // x21
  System_String_o *v146; // x28
  Il2CppObject *v147; // x0
  BattleDropItem_o *v148; // x25
  bool v149; // w20
  System_Int32_array **v150; // x0
  System_Array_o **v151; // x26
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  __int64 v158; // x21
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  const MethodInfo *v165; // x3
  UILabel_o *v166; // x22
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  int32_t v173; // w8
  System_Action_o *v174; // x20
  __int64 v175; // x0
  __int64 v176; // x0
  UserGameEntity_array *v177; // [xsp+8h] [xbp-78h]
  struct System_Action_o *v178; // [xsp+10h] [xbp-70h]
  __int64 v180; // [xsp+20h] [xbp-60h] BYREF
  int v181; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EA9A6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)diggingRewards, (_DWORD)oldUserGame, blockList);
    sub_B5D5C4(&AtlasManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleDropItem___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BattleDropItem_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v34, v35, v36);
    sub_B5D5C4(&int_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&long_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v43, v44, v45);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52, v53, v54);
    sub_B5D5C4(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v55, v56, v57);
    sub_B5D5C4(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_4661/*"DIGGING_EVENT_POINT_NUM"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_4666/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_4664/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_23104/*"treasurechest_img_bg_reward"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_4665/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_4667/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_4668/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_4663/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v100, v101, v102);
    byte_42EA9A6 = 1;
  }
  v103 = sub_B5D694(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v103,
    0LL);
  if ( !v103 )
    goto LABEL_56;
  *(_QWORD *)(v103 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v103 + 16),
    (System_Int32_array **)this,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_56;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
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
  v120 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v120,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v120;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_56;
  v128 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v127);
  if ( !this->fields.getPointRoot )
    goto LABEL_56;
  v129 = viewChangeButton;
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
  v177 = oldUserGame;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  v130 = getPointReward;
  v178 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( !this->fields.closeButton )
    goto LABEL_56;
  v131 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  1,
                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4667/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v131 )
    goto LABEL_56;
  UILabel__set_text(v131, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_56;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4665/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_56;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4666/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_56;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4664/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_56;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4663/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_56;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v128, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v128, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4661/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_56;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v181 = v129;
  v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
  v141 = System_String__Format(v139, v140, 0LL);
  viewChangeButton = (__int64)System_String__Concat_44577788((System_String_o *)StringLiteral_699/*"+"*/, v141, 0LL);
  if ( !getNumLabel )
    goto LABEL_56;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v144 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4668/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_56;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v180 = v144;
  v147 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v180);
  viewChangeButton = (__int64)System_String__Format(v146, v147, 0LL);
  if ( !totalNumLabel )
    goto LABEL_56;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v148 = (BattleDropItem_o *)sub_B5D694(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v148, 0LL);
  if ( !v148 )
    goto LABEL_56;
  v148->fields.type = 2;
  v148->fields.objectId = v128;
  v149 = v130;
  v148->fields.originalNum = v129;
  if ( !diggingRewards )
    goto LABEL_56;
  v150 = (System_Int32_array **)sub_B5D5DC(BattleDropItem___TypeInfo, diggingRewards->max_length + 1);
  *(_QWORD *)(v103 + 24) = v150;
  v151 = (System_Array_o **)(v103 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v103 + 24), v150, v152, v153, v154, v155, v156, v157);
  v158 = *(_QWORD *)(v103 + 24);
  if ( !v158 )
    goto LABEL_56;
  viewChangeButton = sub_B5D684(v148, *(_QWORD *)(*(_QWORD *)v158 + 64LL));
  if ( !viewChangeButton )
  {
    v176 = sub_B5D6BC(0LL);
    sub_B5D668(v176, 0LL);
  }
  if ( !*(_DWORD *)(v158 + 24) )
  {
LABEL_57:
    v175 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v175, 0LL);
  }
  *(_QWORD *)(v158 + 32) = v148;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v158 + 32),
    (System_Int32_array **)v148,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  System_Array__Copy_43381116((System_Array_o *)diggingRewards, 0, *v151, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v151, v177, v165);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  v166 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           (UnityEngine_Component_o *)viewChangeButton,
           1,
           (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( v149 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( v166 )
    {
      UILabel__set_text(v166, (System_String_o *)viewChangeButton, 0LL);
      v173 = 8;
      goto LABEL_54;
    }
LABEL_56:
    sub_B5D69C(viewChangeButton, v105);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v166 )
    goto LABEL_56;
  UILabel__set_text(v166, (System_String_o *)viewChangeButton, 0LL);
  v173 = 1;
LABEL_54:
  this->fields.closeBtnSe = v173;
  this->fields.closeCallbackFunc = v178;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)v178,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v174 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v174,
    (Il2CppObject *)v103,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v174, 0, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA9AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)item, objectId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EA9AD = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B5D69C(Instance, v13);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UserGameEntity_o *v25; // x9
  signed int max_length; // w8
  int32_t qp; // w23
  unsigned int v28; // w24
  int v29; // w22
  BattleDropItem_o *v30; // x21
  BalanceConfig_c *v31; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v36; // x0
  __int64 v37; // x0
  int v38; // [xsp+8h] [xbp-48h] BYREF
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_42EA9A7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)dropItems, (_DWORD)oldUserGame, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v19, v20, v21);
    this = (DiggingRewardDialogComponent_o *)sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v22, v23, v24);
    byte_42EA9A7 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_32;
  if ( !oldUserGame->max_length )
    goto LABEL_33;
  v25 = oldUserGame->m_Items[0];
  if ( !v25 || !dropItems )
    goto LABEL_32;
  max_length = dropItems->max_length;
  qp = v25->fields.qp;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v29 = 0;
    while ( v28 < max_length )
    {
      v30 = dropItems->m_Items[v28];
      if ( !v30 )
        goto LABEL_32;
      if ( v30->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                   v30->fields.objectId,
                                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.maskSprite) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v30, 0LL);
          v29 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_20;
    }
LABEL_33:
    v37 = sub_B5D6C8(this);
    sub_B5D668(v37, 0LL);
  }
  v29 = 0;
LABEL_20:
  v31 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_36;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  if ( qp > v31->static_fields->QpMax )
  {
LABEL_36:
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = BalanceConfig_TypeInfo;
    }
    qp = v31->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v39 = v29;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v34 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v33, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_44577788(
                                             (System_String_o *)StringLiteral_699/*"+"*/,
                                             v34,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v38 = qp + v29,
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v36, 0LL),
        !totalQpNumLabel) )
  {
LABEL_32:
    sub_B5D69C(this, dropItems);
  }
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardDialogComponent__SetResultData(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DiggingRewardDialogComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  signed int max_length; // w8
  __int64 v19; // x25
  BattleDropItem_o *v20; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *transform; // x24
  int v27; // s0
  int32_t v30; // w3
  ItemIconComponent_o *v31; // x24
  DiggingRewardDialogComponent_o *v32; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42EA9A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)rewards, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (DiggingRewardDialogComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EA9A9 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( (unsigned int)v19 >= max_length )
        {
          v34 = sub_B5D6C8(this);
          sub_B5D668(v34, 0LL);
        }
        v20 = rewards->m_Items[v19];
        if ( !v20 )
          goto LABEL_26;
        originalNum = v20->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v20->fields.num;
        type = v20->fields.type;
        objectId = v20->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   prefabResultItem,
                                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v25 = (UnityEngine_GameObject_o *)this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v25, 0LL);
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
        if ( !this )
          goto LABEL_26;
        v35.fields.x = v5->fields.iconScale;
        v35.fields.y = v35.fields.x;
        v35.fields.z = v35.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v25,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v30 = originalNum <= 1 ? -1 : originalNum;
        v31 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v30, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v32, v31, objectId, v33);
        UnityEngine_GameObject__SetActive(v25, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (DiggingRewardDialogComponent_o *)v5->fields.listRoot) == 0LL)
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B5D69C(this, rewards);
        }
        this = (DiggingRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v19;
      }
      while ( (int)v19 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall DiggingRewardDialogComponent__get_closeBtnObject(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EA9AE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9AE = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  DiggingRewardDialogComponent_o *_4__this; // x0
  struct DiggingRewardDialogComponent_o *v6; // x8
  struct DiggingRewardDialogComponent_o *v7; // x8

  if ( (byte_42E64C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E64C3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v6->fields.state = 2, (v7 = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v7->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}