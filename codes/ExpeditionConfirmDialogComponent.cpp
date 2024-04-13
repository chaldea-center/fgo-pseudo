void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7A0F & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7A0F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__Close(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_23489584(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_23489584(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E7A0B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10, v11, v12);
    byte_42E7A0B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__EndClose(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    System_Action__Invoke(v13, 0LL);
  }
}


void __fastcall ExpeditionConfirmDialogComponent__EndOpen(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t __fastcall ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(
        ExpeditionConfirmDialogComponent_o *this,
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
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  ExpeditionConfirmDialogComponent___c_c *v18; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x20
  Il2CppObject *v21; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  viewDogIcon_o *viewDogIcon; // x0
  __int64 v30; // x1
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8

  if ( (byte_42E7A0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_viewDogIcon___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_viewDogIcon__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_viewDogIcon__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v11, v12, v13);
    sub_B5D5C4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v14, v15, v16);
    byte_42E7A0A = 1;
  }
  viewDogIcons = this->fields.viewDogIcons;
  v18 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v18 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__28_0,
      v21,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_viewDogIcon__bool___ctor__);
    v22 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v22->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  viewDogIcon = System_Linq_Enumerable__First_viewDogIcon_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_1CAB1D8 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !viewDogIcon
    || (EventExpeditionPieceEntity_k__BackingField = viewDogIcon->fields._EventExpeditionPieceEntity_k__BackingField) == 0LL )
  {
    sub_B5D69C(viewDogIcon, v30);
  }
  return EventExpeditionPieceEntity_k__BackingField->fields.idx;
}


void __fastcall ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o **p_eventExpeditionPieceEntityList; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *v32; // x24
  __int64 v33; // x22
  __int64 v34; // x23
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x21
  viewDogIcon_o **v36; // x8

  if ( (byte_42E7A07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E7A07 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_20;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  p_eventExpeditionPieceEntityList = &this->fields.eventExpeditionPieceEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionPieceEntityList,
    (System_Int32_array **)PieceEntityList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v31);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v32 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(Instance, v22);
  }
  v33 = 0LL;
  v34 = 32LL;
  while ( (int)v33 < v32->fields._size )
  {
    viewDogIcons = this->fields.viewDogIcons;
    if ( viewDogIcons )
    {
      if ( viewDogIcons->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v36 = (viewDogIcon_o **)((char *)viewDogIcons->fields._items + v34);
      if ( v32->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( *v36 )
      {
        viewDogIcon__Init(*v36, v32->fields._items->m_Items[v33], 0LL);
        v32 = *p_eventExpeditionPieceEntityList;
        ++v33;
        v34 += 8LL;
        if ( *p_eventExpeditionPieceEntityList )
          continue;
      }
    }
    goto LABEL_20;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickCancel(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E7A0D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7A0D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ExpeditionConfirmDialogComponent_ClickDelegate__Invoke(clickFunc, 0, 0LL, 0, 0LL);
    ExpeditionConfirmDialogComponent__Close_23489584(this, 0LL, v5);
  }
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickDecide(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x20
  EventExpeditionEntity_o *currentExpeditionEntity; // x21
  int32_t CurrentSelectPieceIdx; // w3

  if ( (byte_42E7A0C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7A0C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( this->fields.isDecideBtnSe )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v5 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v5 = 0;
    }
    SoundManager__playSystemSe(v5, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      currentExpeditionEntity = this->fields.currentExpeditionEntity;
      CurrentSelectPieceIdx = ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(this, v6);
      ExpeditionConfirmDialogComponent_ClickDelegate__Invoke(
        clickFunc,
        1,
        currentExpeditionEntity,
        CurrentSelectPieceIdx,
        0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent__Open(
        ExpeditionConfirmDialogComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        bool isDecideSe,
        ExpeditionConfirmDialogComponent_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  int v66; // w1
  char v67; // w2
  __int64 v68; // x3
  int v69; // w1
  char v70; // w2
  __int64 v71; // x3
  int v72; // w1
  char v73; // w2
  __int64 v74; // x3
  int v75; // w1
  char v76; // w2
  __int64 v77; // x3
  int v78; // w1
  char v79; // w2
  __int64 v80; // x3
  int v81; // w1
  char v82; // w2
  __int64 v83; // x3
  int v84; // w1
  char v85; // w2
  __int64 v86; // x3
  int v87; // w1
  char v88; // w2
  __int64 v89; // x3
  int v90; // w1
  char v91; // w2
  __int64 v92; // x3
  int v93; // w1
  char v94; // w2
  __int64 v95; // x3
  int v96; // w1
  char v97; // w2
  __int64 v98; // x3
  int v99; // w1
  char v100; // w2
  __int64 v101; // x3
  int v102; // w1
  char v103; // w2
  __int64 v104; // x3
  int v105; // w1
  char v106; // w2
  __int64 v107; // x3
  int v108; // w1
  char v109; // w2
  __int64 v110; // x3
  int v111; // w1
  char v112; // w2
  __int64 v113; // x3
  int v114; // w1
  char v115; // w2
  __int64 v116; // x3
  __int64 v117; // x24
  int64_t Instance; // x0
  __int64 v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x23
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  struct EventExpeditionEntity_o *v139; // x1
  CommonConsumeEntity_o *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  CommonConsumeEntity_o *v147; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v151; // x28
  System_String_o *v152; // x0
  int32_t v153; // w27
  int32_t v154; // w28
  int v155; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UIWidget_o *v164; // x26
  int v165; // s0
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v170; // x27
  Il2CppObject *Name; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v172; // x25
  ExpeditionConfirmDialogComponent___c_c *v173; // x8
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__26_0; // x26
  Il2CppObject *v176; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  int32_t *v184; // x26
  ItemMaster_o *v185; // x25
  __int64 *v186; // x8
  struct UILabel_o **p_rewardNumLabel; // x21
  System_String_o *v188; // x0
  UILabel_o *rewardNumLabel; // x25
  int32_t v190; // w8
  System_String_o *v191; // x26
  System_String_o *v192; // x0
  int32_t v193; // w25
  int32_t v194; // w26
  int v195; // w25
  UserEventExpeditionMaster_o *v196; // x25
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x25
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v198; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v200; // w25
  __int64 v201; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v203; // w23
  int v204; // w23
  System_Action_o *v205; // x21
  int32_t type; // [xsp+0h] [xbp-60h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v209; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v210; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v211; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7A08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_viewDogIcon___ctor__, (_DWORD)eventExpeditionEntity, isDecideSe, func);
    sub_B5D5C4(&System_Action_viewDogIcon__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Action_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&AtlasManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Comparison_GiftEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Comparison_GiftEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v42, v43, v44);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v57, v58, v59);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&System_Math_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&NetworkManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v69, v70, v71);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v72, v73, v74);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v75, v76, v77);
    sub_B5D5C4(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_3338/*"COMMON_COUNT_OPERATOR_CROSS"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_5850/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_5847/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_5849/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_5846/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_5854/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_5855/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_1/*""*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_5851/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v114, v115, v116);
    byte_42E7A08 = 1;
  }
  entity = 0LL;
  v117 = sub_B5D694(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
    (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v117,
    0LL);
  if ( !v117 )
    goto LABEL_109;
  *(_QWORD *)(v117 + 24) = eventExpeditionEntity;
  v126 = v117 + 24;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v117 + 24),
    (System_Int32_array **)eventExpeditionEntity,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  *(_QWORD *)(v117 + 32) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v117 + 32),
    (System_Int32_array **)this,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v139 = *(struct EventExpeditionEntity_o **)(v117 + 24);
  if ( !v139 )
    return;
  this->fields.currentExpeditionEntity = v139;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentExpeditionEntity,
    (System_Int32_array **)v139,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v126 || !Instance )
    goto LABEL_109;
  v140 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v126 + 36LL), 1, 0LL);
  v147 = v140;
  if ( v140 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v140->fields.objectId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v151 = LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v152 = System_Int32__ToString((int)v147 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_44577788(v151, v152, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_109;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_109;
    v153 = *(_DWORD *)(Instance + 160);
    Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_109;
    v154 = *(_DWORD *)(Instance + 40);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_45104456(v153, v154, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_109;
    v155 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_109;
    v209.fields.y = 1.0;
    v209.fields.x = -(float)v155;
    v209.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v209, 0LL);
  }
  this->fields.clickFunc = func;
  type = maskType;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5854/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_109;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5851/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_109;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5849/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_109;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5847/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5846/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_109;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5850/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_109;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v117 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
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
  if ( !v147 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_109;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v147->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_43;
  if ( !entity )
    goto LABEL_109;
  if ( v147->fields.num <= entity->fields.num )
  {
    v164 = (UIWidget_o *)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v117 + 40) )
    {
      *(UnityEngine_Color_o *)&v165 = UnityEngine_Color__get_white(0LL);
      if ( !v164 )
        goto LABEL_109;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_43:
    *(_BYTE *)(v117 + 40) = 1;
    v164 = (UIWidget_o *)this->fields.consumptionNumLabel;
  }
  *(UnityEngine_Color_o *)&v165 = UnityEngine_Color__get_red(0LL);
  if ( !v164 )
    goto LABEL_109;
LABEL_45:
  UIWidget__set_color(v164, *(UnityEngine_Color_o *)&v165, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v170 = LocalizationManager__Get((System_String_o *)StringLiteral_5855/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v147, 0LL);
  Instance = (int64_t)System_String__Format(v170, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_109;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v117 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v126 || !Instance )
    goto LABEL_109;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v126 + 40LL), 0LL);
  v172 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v173 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v173 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v173->static_fields;
  _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v173->vtable._0_Equals.methodPtr) & 4) != 0 && !v173->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v173);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v176 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__26_0,
      v176,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_GiftEntity___ctor__);
    v177 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v177->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v177->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v178,
      v179,
      v180,
      v181,
      v182,
      v183);
  }
  if ( !v172 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v172,
    (System_Comparison_T__o *)_9__26_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v172->fields._size <= 0 )
  {
    p_rewardNumLabel = &this->fields.rewardNumLabel;
    goto LABEL_84;
  }
  v184 = (int32_t *)v172->fields._items->m_Items[0];
  if ( !v184 )
    goto LABEL_109;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_109;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v184[5], v184[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_109;
  v185 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v184[6], 0LL) || ItemMaster__isFriendPoint(v185, v184[6], 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v186 = &StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v186 = &StringLiteral_3338/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v188 = LocalizationManager__Get((System_String_o *)*v186, 0LL);
  p_rewardNumLabel = &this->fields.rewardNumLabel;
  rewardNumLabel = this->fields.rewardNumLabel;
  v190 = v184[7];
  v191 = v188;
  v192 = BasicHelper__ToCommaString(v190, 0LL);
  Instance = (int64_t)System_String__Concat_44577788(v191, v192, 0LL);
  if ( !rewardNumLabel )
LABEL_109:
    sub_B5D69C(Instance, v119);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_84:
  Instance = (int64_t)*p_rewardNumLabel;
  if ( !*p_rewardNumLabel )
    goto LABEL_109;
  v193 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  v194 = *(_DWORD *)(Instance + 40);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_45104456(v193, v194, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_109;
  v195 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_109;
  v210.fields.y = 1.0;
  v210.fields.x = -(float)v195;
  v210.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v210, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v196 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v196 )
    goto LABEL_109;
  UserEventExpeditionMaster__TryGetEntity(
    v196,
    (UserEventExpeditionEntity_o **)(v117 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.viewDogIcons;
  v198 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_viewDogIcon__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v198,
    (Il2CppObject *)v117,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_viewDogIcon___ctor__);
  if ( !viewDogIcons )
    goto LABEL_109;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v198,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v126 )
    goto LABEL_109;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v200 = *(_DWORD *)(*(_QWORD *)v126 + 44LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v200, 0LL);
  v201 = *(_QWORD *)v126;
  if ( !*(_QWORD *)v126 )
    goto LABEL_109;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v201 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_109;
  v203 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  Instance = System_Math__Min_45104456(v203, *(_DWORD *)(Instance + 40), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_109;
  v204 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  v211.fields.y = 1.0;
  v211.fields.x = -(float)v204;
  v211.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v211, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v205 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v205, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v205, type, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ExpeditionConfirmDialogComponent_o *v4; // x19
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int size; // w8
  int v7; // w9

  v4 = this;
  if ( (byte_42E7A09 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_B5D5C4(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   (_DWORD)method,
                                                   v2,
                                                   v3);
    byte_42E7A09 = 1;
  }
  eventExpeditionPieceEntityList = v4->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_B5D69C(this, method);
  size = eventExpeditionPieceEntityList->fields._size;
  v7 = -1;
  do
    ++v7;
  while ( v7 < size );
}


UnityEngine_GameObject_o *__fastcall ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E7A0E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7A0E = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v8 = this->fields.buttonCancel;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_GameObject__get_gameObject(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ExpeditionConfirmDialogComponent_ClickDelegate__BeginInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v15[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  char v17[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v17[0] = isDecide;
  v16 = pieceIdx;
  if ( (byte_42E56B4 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)eventExpeditionEntity, *(_QWORD *)&pieceIdx);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    byte_42E56B4 = 1;
  }
  v15[3] = 0LL;
  v15[0] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v15[1] = (__int64)eventExpeditionEntity;
  v15[2] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_B5D568(this, v15, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__Invoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  ExpeditionConfirmDialogComponent_ClickDelegate_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD); // x0
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(bool, EventExpeditionEntity_o *, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v35;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (ExpeditionConfirmDialogComponent_ClickDelegate_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(bool, EventExpeditionEntity_o *, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, isDecide, eventExpeditionEntity);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26(isDecide, eventExpeditionEntity, (unsigned int)pieceIdx, v25);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, isDecide, eventExpeditionEntity, (unsigned int)pieceIdx, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))v19)(
            v24,
            isDecide,
            eventExpeditionEntity,
            (unsigned int)pieceIdx,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))(*v24
                                                                                             + 16LL
                                                                                             * *(unsigned __int16 *)(v25 + 72)
                                                                                             + 312))(
            v24,
            isDecide,
            eventExpeditionEntity,
            (unsigned int)pieceIdx,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, __int64))v26)(
      v24,
      isDecide,
      eventExpeditionEntity,
      (unsigned int)pieceIdx,
      v25);
    goto LABEL_37;
  }
}


void __fastcall ExpeditionConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E56B1 & 1) == 0 )
  {
    sub_B5D5C4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2, v3);
    byte_42E56B1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ExpeditionConfirmDialogComponent___c___ctor(
        ExpeditionConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ExpeditionConfirmDialogComponent___c___GetCurrentSelectPieceIdx_b__28_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B5D69C(this, 0LL);
  viewDogIcon__IsSelectSetFalse(y, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__1(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        viewDogIcon_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v11; // w8
  unsigned int v12; // w22
  __int64 v13; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v16; // x9
  __int64 v17; // x10
  int32_t v18; // w21
  float v19; // s0
  struct EventExpeditionPieceEntity_o *v20; // x11
  __int64 v21; // x14
  __int64 v22; // x15
  int v23; // w15
  __int64 v24; // x15
  Il2CppClass *v25; // x8
  int32_t static_fields_size; // w22
  System_Action_o *v27; // x24
  double v28; // d8
  __int64 v29; // x0

  v5 = (Il2CppObject *)this;
  if ( (byte_42E56B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B5D5C4(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v6,
                                                                         v7,
                                                                         v8);
    byte_42E56B2 = 1;
  }
  klass = v5[1].klass;
  if ( klass )
  {
    data = klass->_1.byval_arg.data;
    if ( !data )
      goto LABEL_34;
    v11 = data[6];
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v11 )
        {
LABEL_35:
          v29 = sub_B5D6C8(this);
          sub_B5D668(v29, 0LL);
        }
        v13 = *(_QWORD *)&data[2 * v12 + 8];
        if ( !v13 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v13 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0LL);
        v11 = data[6];
        if ( (int)++v12 >= v11 )
          goto LABEL_14;
      }
LABEL_34:
      sub_B5D69C(this, x);
    }
  }
LABEL_14:
  monitor = (int *)v5[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  v16 = *((_QWORD *)monitor + 7);
  if ( !v16 )
    goto LABEL_34;
  v17 = *(_QWORD *)(v16 + 24);
  v18 = 0;
  v19 = (float)monitor[13];
  if ( v17 && (int)v17 >= 1 )
  {
    if ( x )
    {
      v20 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v18 = 0;
      v21 = 8LL;
      while ( v20 )
      {
        if ( v20->fields.idx == *(_DWORD *)(v16 + 4 * v21) )
        {
          v22 = *((_QWORD *)monitor + 8);
          if ( !v22 )
            goto LABEL_34;
          if ( v21 - 8 >= (unsigned __int64)*(unsigned int *)(v22 + 24) )
            goto LABEL_35;
          v23 = *(_DWORD *)(v22 + 4 * v21);
          v18 = 100 - v23 / 10;
          v19 = v19 * (float)((float)v23 / 1000.0);
        }
        v24 = v21 - 7;
        ++v21;
        if ( v24 >= (int)v17 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v25 = v5[2].klass;
  if ( !v25 )
    goto LABEL_34;
  static_fields_size = v25->_2.static_fields_size;
  v27 = (System_Action_o *)v5[3].klass;
  v28 = v19 == INFINITY ? -v19 : v19;
  if ( !v27 )
  {
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v27, v5, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0LL);
    v5[3].klass = (Il2CppClass *)v27;
    sub_B5D560(&v5[3]);
  }
  if ( !x )
    goto LABEL_34;
  viewDogIcon__Set(x, v18, (int)v28, static_fields_size, v27, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v4; // x19
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
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x20
  void *userEventExpeditionEntity; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x21
  Il2CppObject *v24; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v26; // x8

  v4 = this;
  if ( (byte_42E56B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_viewDogIcon___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_viewDogIcon__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v14, v15, v16);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B5D5C4(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v17,
                                                                         v18,
                                                                         v19);
    byte_42E56B3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)_4__this->fields.viewDogIcons;
  this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  userEventExpeditionEntity = this[3].fields.userEventExpeditionEntity;
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)userEventExpeditionEntity + 2);
  if ( !v23 )
  {
    if ( (BYTE3(this[5].fields.eventExpeditionEntity) & 4) != 0 && !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      userEventExpeditionEntity = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v24 = *(Il2CppObject **)userEventExpeditionEntity;
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_viewDogIcon__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      v24,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__,
      (const MethodInfo_258B320 *)Method_System_Action_viewDogIcon___ctor__);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)v23;
    sub_B5D560(&static_fields->__9__26_3);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          viewDogIcons,
          (System_Action_T__o *)v23,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v26 = v4->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v26->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v4->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}