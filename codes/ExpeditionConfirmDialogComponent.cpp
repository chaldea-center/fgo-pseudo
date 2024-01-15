void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FACF7 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FACF7 = 1;
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

  ExpeditionConfirmDialogComponent__Close_26704104(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_26704104(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FACF3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10);
    byte_40FACF3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__EndClose(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  ExpeditionConfirmDialogComponent___c_c *v11; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x20
  Il2CppObject *v14; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  viewDogIcon_o *viewDogIcon; // x0
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8

  if ( (byte_40FACF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_B16FFC(&Method_System_Func_viewDogIcon__bool___ctor__, v6);
    sub_B16FFC(&System_Func_viewDogIcon__bool__TypeInfo, v7);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v8);
    sub_B16FFC(&ExpeditionConfirmDialogComponent___c_TypeInfo, v9);
    byte_40FACF2 = 1;
  }
  viewDogIcons = this->fields.viewDogIcons;
  v11 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v11 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_viewDogIcon__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__28_0,
      v14,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_viewDogIcon__bool___ctor__);
    v15 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v15->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  viewDogIcon = System_Linq_Enumerable__First_viewDogIcon_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_18D720C *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !viewDogIcon
    || (EventExpeditionPieceEntity_k__BackingField = viewDogIcon->fields._EventExpeditionPieceEntity_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  return EventExpeditionPieceEntity_k__BackingField->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  EventExpeditionPieceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o **p_eventExpeditionPieceEntityList; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *buttonDecide; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *v25; // x24
  __int64 v26; // x22
  __int64 v27; // x23
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x21
  viewDogIcon_o **v29; // x8

  if ( (byte_40FACEF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FACEF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  p_eventExpeditionPieceEntityList = &this->fields.eventExpeditionPieceEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionPieceEntityList,
    (System_Int32_array **)PieceEntityList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v20);
  buttonDecide = this->fields.buttonDecide;
  if ( !buttonDecide )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__get_gameObject(buttonDecide, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(srcLineSprite_o *, _QWORD, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
          Component_srcLineSprite,
          0LL,
          Component_srcLineSprite->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(v24, 0, 0LL), (v25 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  v26 = 0LL;
  v27 = 32LL;
  while ( (int)v26 < v25->fields._size )
  {
    viewDogIcons = this->fields.viewDogIcons;
    if ( viewDogIcons )
    {
      if ( viewDogIcons->fields._size <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v29 = (viewDogIcon_o **)((char *)viewDogIcons->fields._items + v27);
      if ( v25->fields._size <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( *v29 )
      {
        viewDogIcon__Init(*v29, v25->fields._items->m_Items[v26], 0LL);
        v25 = *p_eventExpeditionPieceEntityList;
        ++v26;
        v27 += 8LL;
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
  const MethodInfo *v3; // x2
  ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FACF5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FACF5 = 1;
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
    ExpeditionConfirmDialogComponent__Close_26704104(this, 0LL, v3);
  }
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickDecide(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x1
  ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x20
  EventExpeditionEntity_o *currentExpeditionEntity; // x21
  int32_t CurrentSelectPieceIdx; // w3

  if ( (byte_40FACF4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FACF4 = 1;
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
      v3 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    SoundManager__playSystemSe(v3, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      currentExpeditionEntity = this->fields.currentExpeditionEntity;
      CurrentSelectPieceIdx = ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(this, v4);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
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
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct EventExpeditionEntity_o *v67; // x1
  WebViewManager_o *Instance; // x0
  CommonConsumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CommonConsumeEntity_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  CommonConsumeEntity_o *v77; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v81; // x28
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  UnityEngine_Component_o *v84; // x0
  int32_t m_CachedPtr; // w27
  WebViewObject_o *Component_WebViewObject; // x0
  int32_t onHttpError; // w28
  int32_t v88; // w0
  int v89; // w27
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x26
  System_String_o *v92; // x0
  UILabel_o *dialogDescriptionLabel; // x26
  System_String_o *v94; // x0
  UILabel_o *consumptionLabel; // x26
  System_String_o *v96; // x0
  UILabel_o *acquiredRewardLabel; // x26
  System_String_o *v98; // x0
  UILabel_o *acquiredPointLabel; // x26
  System_String_o *v100; // x0
  UILabel_o *buttonCancelLabel; // x26
  System_String_o *v102; // x0
  UILabel_o *buttonDecideLabel; // x26
  System_String_o *v104; // x0
  WebViewManager_o *v105; // x0
  UserItemMaster_o *v106; // x26
  int64_t UserId; // x0
  UIWidget_o *v108; // x26
  int v109; // s0
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v114; // x27
  Il2CppObject *Name; // x0
  System_String_o *v116; // x0
  UnityEngine_Component_o *v117; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *v119; // x0
  GiftMaster_o *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ListById; // x25
  ExpeditionConfirmDialogComponent___c_c *v126; // x8
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__26_0; // x26
  Il2CppObject *v129; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  int32_t *v137; // x26
  ItemIconComponent_o *rewardIcon; // x0
  WebViewManager_o *v139; // x0
  ItemMaster_o *v140; // x0
  ItemMaster_o *v141; // x25
  __int64 *v142; // x8
  struct UILabel_o **p_rewardNumLabel; // x21
  System_String_o *v144; // x0
  UILabel_o *rewardNumLabel; // x25
  int32_t v146; // w8
  System_String_o *v147; // x26
  System_String_o *v148; // x0
  System_String_o *v149; // x0
  UnityEngine_Component_o *v150; // x0
  int32_t v151; // w25
  WebViewObject_o *v152; // x0
  int32_t v153; // w26
  int32_t v154; // w0
  int v155; // w25
  UnityEngine_Transform_o *v156; // x0
  WebViewManager_o *v157; // x0
  UserEventExpeditionMaster_o *v158; // x25
  int64_t v159; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x25
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v165; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v167; // w25
  __int64 v168; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  System_String_o *v170; // x0
  UnityEngine_Component_o *v171; // x0
  int32_t v172; // w23
  WebViewObject_o *v173; // x0
  int32_t v174; // w0
  int v175; // w23
  UnityEngine_Transform_o *v176; // x0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  System_Action_o *v181; // x21
  int32_t type; // [xsp+0h] [xbp-60h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FACF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_viewDogIcon___ctor__, eventExpeditionEntity);
    sub_B16FFC(&System_Action_viewDogIcon__TypeInfo, v12);
    sub_B16FFC(&System_Action_TypeInfo, v13);
    sub_B16FFC(&AtlasManager_TypeInfo, v14);
    sub_B16FFC(&Method_System_Comparison_GiftEntity___ctor__, v15);
    sub_B16FFC(&System_Comparison_GiftEntity__TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v22);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v27);
    sub_B16FFC(&LocalizationManager_TypeInfo, v28);
    sub_B16FFC(&System_Math_TypeInfo, v29);
    sub_B16FFC(&NetworkManager_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v32);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v33);
    sub_B16FFC(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v34);
    sub_B16FFC(&ExpeditionConfirmDialogComponent___c_TypeInfo, v35);
    sub_B16FFC(&StringLiteral_3263/*"COMMON_COUNT_OPERATOR_CROSS"*/, v36);
    sub_B16FFC(&StringLiteral_5756/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v37);
    sub_B16FFC(&StringLiteral_5753/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v38);
    sub_B16FFC(&StringLiteral_5755/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v39);
    sub_B16FFC(&StringLiteral_5752/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v40);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B16FFC(&StringLiteral_5760/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v42);
    sub_B16FFC(&StringLiteral_3264/*"COMMON_COUNT_OPERATOR_PLUS"*/, v43);
    sub_B16FFC(&StringLiteral_5761/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v44);
    sub_B16FFC(&StringLiteral_1/*""*/, v45);
    sub_B16FFC(&StringLiteral_5757/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v46);
    byte_40FACF0 = 1;
  }
  entity = 0LL;
  v47 = sub_B170CC(
          ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo,
          eventExpeditionEntity,
          isDecideSe,
          func,
          canMaskTouchClose);
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
    (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_109;
  *(_QWORD *)(v47 + 24) = eventExpeditionEntity;
  v54 = v47 + 24;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v47 + 24),
    (System_Int32_array **)eventExpeditionEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_QWORD *)(v47 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)this, v55, v56, v57, v58, v59, v60);
  v67 = *(struct EventExpeditionEntity_o **)(v47 + 24);
  if ( !v67 )
    return;
  this->fields.currentExpeditionEntity = v67;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentExpeditionEntity,
    (System_Int32_array **)v67,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  MasterData_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v54 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_109;
  v70 = CommonConsumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, *(_DWORD *)(*(_QWORD *)v54 + 36LL), 1, 0LL);
  v77 = v70;
  if ( v70 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v70->fields.objectId;
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
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3263/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v82 = System_Int32__ToString((int)v77 + 32, 0LL);
    v83 = System_String__Concat_43743732(v81, v82, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_109;
    UILabel__set_text(consumptionNumLabel, v83, 0LL);
    v84 = (UnityEngine_Component_o *)this->fields.consumptionNumLabel;
    if ( !v84 )
      goto LABEL_109;
    m_CachedPtr = v84[6].fields.m_CachedPtr;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v84,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Component_WebViewObject )
      goto LABEL_109;
    onHttpError = (int32_t)Component_WebViewObject->fields.onHttpError;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v88 = System_Math__Min_44418752(m_CachedPtr, onHttpError, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_109;
    v89 = v88;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !transform )
      goto LABEL_109;
    v185.fields.y = 1.0;
    v185.fields.x = -(float)v89;
    v185.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition(transform, v185, 0LL);
  }
  this->fields.clickFunc = func;
  type = maskType;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_109;
  UILabel__set_text(titleLabel, v92, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_5757/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_109;
  UILabel__set_text(dialogDescriptionLabel, v94, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_5755/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_109;
  UILabel__set_text(consumptionLabel, v96, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredRewardLabel, v98, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointLabel, v100, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_109;
  UILabel__set_text(buttonCancelLabel, v102, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_109;
  UILabel__set_text(buttonDecideLabel, v104, 0LL);
  *(_BYTE *)(v47 + 40) = 0;
  v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v105 )
    goto LABEL_109;
  entity = 0LL;
  v106 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v105,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v77 || !v106 )
    goto LABEL_109;
  if ( !UserItemMaster__TryGetEntity(v106, &entity, UserId, v77->fields.objectId, 0LL) )
    goto LABEL_43;
  if ( !entity )
    goto LABEL_109;
  if ( v77->fields.num <= entity->fields.num )
  {
    v108 = (UIWidget_o *)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v47 + 40) )
    {
      *(UnityEngine_Color_o *)&v109 = UnityEngine_Color__get_white(0LL);
      if ( !v108 )
        goto LABEL_109;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_43:
    *(_BYTE *)(v47 + 40) = 1;
    v108 = (UIWidget_o *)this->fields.consumptionNumLabel;
  }
  *(UnityEngine_Color_o *)&v109 = UnityEngine_Color__get_red(0LL);
  if ( !v108 )
    goto LABEL_109;
LABEL_45:
  UIWidget__set_color(v108, *(UnityEngine_Color_o *)&v109, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v77, 0LL);
  v116 = System_String__Format(v114, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_109;
  UILabel__set_text(confirmationWarningLabel, v116, 0LL);
  v117 = (UnityEngine_Component_o *)this->fields.confirmationWarningLabel;
  if ( !v117 )
    goto LABEL_109;
  gameObject = UnityEngine_Component__get_gameObject(v117, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive(gameObject, *(_BYTE *)(v47 + 40), 0LL);
  v119 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v119 )
    goto LABEL_109;
  v120 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v119,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v54 || !v120 )
    goto LABEL_109;
  ListById = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)GiftMaster__GetListById(
                                                                                       v120,
                                                                                       *(_DWORD *)(*(_QWORD *)v54 + 40LL),
                                                                                       0LL);
  v126 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v126 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v126->static_fields;
  _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v126->vtable._0_Equals.methodPtr) & 4) != 0 && !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v129 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_GiftEntity__TypeInfo,
                                                                           v121,
                                                                           v122,
                                                                           v123,
                                                                           v124);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__26_0,
      v129,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_GiftEntity___ctor__);
    v130 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v130->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v130->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
  }
  if ( !ListById )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    ListById,
    (System_Comparison_T__o *)_9__26_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( ListById->fields._size <= 0 )
  {
    p_rewardNumLabel = &this->fields.rewardNumLabel;
    goto LABEL_84;
  }
  v137 = (int32_t *)ListById->fields._items->m_Items[0];
  if ( !v137 )
    goto LABEL_109;
  rewardIcon = this->fields.rewardIcon;
  if ( !rewardIcon )
    goto LABEL_109;
  ItemIconComponent__SetGift(rewardIcon, v137[5], v137[6], -1, 0, 0LL);
  v139 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v139 )
    goto LABEL_109;
  v140 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v139,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v140 )
    goto LABEL_109;
  v141 = v140;
  if ( ItemMaster__isQP(v140, v137[6], 0LL) || ItemMaster__isFriendPoint(v141, v137[6], 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v142 = &StringLiteral_3264/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v142 = &StringLiteral_3263/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v144 = LocalizationManager__Get((System_String_o *)*v142, 0LL);
  p_rewardNumLabel = &this->fields.rewardNumLabel;
  rewardNumLabel = this->fields.rewardNumLabel;
  v146 = v137[7];
  v147 = v144;
  v148 = BasicHelper__ToCommaString(v146, 0LL);
  v149 = System_String__Concat_43743732(v147, v148, 0LL);
  if ( !rewardNumLabel )
LABEL_109:
    sub_B170D4();
  UILabel__set_text(rewardNumLabel, v149, 0LL);
LABEL_84:
  v150 = (UnityEngine_Component_o *)*p_rewardNumLabel;
  if ( !*p_rewardNumLabel )
    goto LABEL_109;
  v151 = v150[6].fields.m_CachedPtr;
  v152 = UnityEngine_Component__GetComponent_WebViewObject_(
           v150,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !v152 )
    goto LABEL_109;
  v153 = (int32_t)v152->fields.onHttpError;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v154 = System_Math__Min_44418752(v151, v153, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_109;
  v155 = v154;
  v156 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !v156 )
    goto LABEL_109;
  v186.fields.y = 1.0;
  v186.fields.x = -(float)v155;
  v186.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition(v156, v186, 0LL);
  v157 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v157 )
    goto LABEL_109;
  v158 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v157,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v159 = NetworkManager__get_UserId(0LL);
  if ( !v158 )
    goto LABEL_109;
  UserEventExpeditionMaster__TryGetEntity(
    v158,
    (UserEventExpeditionEntity_o **)(v47 + 16),
    v159,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.viewDogIcons;
  v165 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_viewDogIcon__TypeInfo,
                                                                                v161,
                                                                                v162,
                                                                                v163,
                                                                                v164);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v165,
    (Il2CppObject *)v47,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    (const MethodInfo_24B7310 *)Method_System_Action_viewDogIcon___ctor__);
  if ( !viewDogIcons )
    goto LABEL_109;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v165,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v54 )
    goto LABEL_109;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v167 = *(_DWORD *)(*(_QWORD *)v54 + 44LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(acquiredPointIcon, v167, 0LL);
  v168 = *(_QWORD *)v54;
  if ( !*(_QWORD *)v54 )
    goto LABEL_109;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  v170 = BasicHelper__ToCommaString(*(_DWORD *)(v168 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointNumLabel, v170, 0LL);
  v171 = (UnityEngine_Component_o *)this->fields.acquiredPointNumLabel;
  if ( !v171 )
    goto LABEL_109;
  v172 = v171[6].fields.m_CachedPtr;
  v173 = UnityEngine_Component__GetComponent_WebViewObject_(
           v171,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !v173 )
    goto LABEL_109;
  v174 = System_Math__Min_44418752(v172, (int32_t)v173->fields.onHttpError, 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_109;
  v175 = v174;
  v176 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0LL);
  if ( !v176 )
    goto LABEL_109;
  v187.fields.y = 1.0;
  v187.fields.x = -(float)v175;
  v187.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition(v176, v187, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v181 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v177, v178, v179, v180);
  System_Action___ctor(v181, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v181, type, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int size; // w8
  int v5; // w9

  if ( (byte_40FACF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, method);
    byte_40FACF1 = 1;
  }
  eventExpeditionPieceEntityList = this->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_B170D4();
  size = eventExpeditionPieceEntityList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


UnityEngine_GameObject_o *__fastcall ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancel; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_40FACF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FACF6 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.buttonCancel;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_GameObject__get_gameObject(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11; // x1
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = isDecide;
  v14 = pieceIdx;
  if ( (byte_40F68A4 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    sub_B16FFC(&int_TypeInfo, v11);
    byte_40F68A4 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v13[1] = (__int64)eventExpeditionEntity;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v13, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD); // x0
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(bool, EventExpeditionEntity_o *, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v33; // [xsp+8h] [xbp-58h] BYREF

  v33 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v33;
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
      v22 = v11[v12];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(bool, EventExpeditionEntity_o *, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, isDecide, eventExpeditionEntity);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25(isDecide, eventExpeditionEntity, (unsigned int)pieceIdx, v24);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v28 = *v23;
          v29 = *(_QWORD *)(v24 + 24);
          v30 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, isDecide, eventExpeditionEntity, (unsigned int)pieceIdx, v21);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v15 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v13) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))v18)(
            v23,
            isDecide,
            eventExpeditionEntity,
            (unsigned int)pieceIdx,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))(*v23
                                                                                             + 16LL
                                                                                             * *(unsigned __int16 *)(v24 + 72)
                                                                                             + 312))(
            v23,
            isDecide,
            eventExpeditionEntity,
            (unsigned int)pieceIdx,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, __int64))v25)(
      v23,
      isDecide,
      eventExpeditionEntity,
      (unsigned int)pieceIdx,
      v24);
    goto LABEL_37;
  }
}


void __fastcall ExpeditionConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7081 & 1) == 0 )
  {
    sub_B16FFC(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_40F7081 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B170D4();
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
  __int64 v4; // x4
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v6; // x20
  __int64 v7; // x1
  struct UserEventExpeditionEntity_o *userEventExpeditionEntity; // x8
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v11; // w22
  ExpeditionInfo_o *v12; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  struct EventExpeditionEntity_o *eventExpeditionEntity; // x8
  struct System_Int32_array *changePieceIdxs; // x9
  __int64 v16; // x10
  int32_t v17; // w21
  float durationSec; // s0
  struct EventExpeditionPieceEntity_o *v19; // x11
  __int64 v20; // x14
  struct System_Int32_array *changeDurationRates; // x15
  int v22; // w15
  __int64 v23; // x15
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  int32_t eventId; // w22
  System_Action_o *_9__2; // x24
  double v27; // d8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  v6 = this;
  if ( (byte_40F7082 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B16FFC(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v7);
    byte_40F7082 = 1;
  }
  userEventExpeditionEntity = v6->fields.userEventExpeditionEntity;
  if ( userEventExpeditionEntity )
  {
    expeditionInfos = userEventExpeditionEntity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_34;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
        {
LABEL_35:
          sub_B17100(this, x, method);
          sub_B170A0();
        }
        v12 = expeditionInfos->m_Items[v11];
        if ( !v12 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( v12->fields.pieceIdx == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0LL);
        max_length = expeditionInfos->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_14;
      }
LABEL_34:
      sub_B170D4();
    }
  }
LABEL_14:
  eventExpeditionEntity = v6->fields.eventExpeditionEntity;
  if ( !eventExpeditionEntity )
    goto LABEL_34;
  changePieceIdxs = eventExpeditionEntity->fields.changePieceIdxs;
  if ( !changePieceIdxs )
    goto LABEL_34;
  v16 = *(_QWORD *)&changePieceIdxs->max_length;
  v17 = 0;
  durationSec = (float)eventExpeditionEntity->fields.durationSec;
  if ( v16 && (int)v16 >= 1 )
  {
    if ( x )
    {
      v19 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v17 = 0;
      v20 = 8LL;
      while ( v19 )
      {
        if ( v19->fields.idx == *((_DWORD *)&changePieceIdxs->obj.klass + v20) )
        {
          changeDurationRates = eventExpeditionEntity->fields.changeDurationRates;
          if ( !changeDurationRates )
            goto LABEL_34;
          if ( v20 - 8 >= (unsigned __int64)changeDurationRates->max_length )
            goto LABEL_35;
          v22 = *((_DWORD *)&changeDurationRates->obj.klass + v20);
          v17 = 100 - v22 / 10;
          durationSec = durationSec * (float)((float)v22 / 1000.0);
        }
        v23 = v20 - 7;
        ++v20;
        if ( v23 >= (int)v16 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventId = _4__this->fields.eventId;
  _9__2 = v6->fields.__9__2;
  v27 = durationSec == INFINITY ? -durationSec : durationSec;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, x, method, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v6,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0LL);
    v6->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v6->fields.__9__2,
      (System_Int32_array **)_9__2,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !x )
    goto LABEL_34;
  viewDogIcon__Set(x, v17, (int)v27, eventId, _9__2, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x20
  ExpeditionConfirmDialogComponent___c_c *v13; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_3; // x21
  Il2CppObject *v16; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ExpeditionConfirmDialogComponent_o *v24; // x8
  UnityEngine_GameObject_o *buttonDecide; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F7083 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_viewDogIcon___ctor__, method);
    sub_B16FFC(&System_Action_viewDogIcon__TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v8);
    sub_B16FFC(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v9);
    sub_B16FFC(&ExpeditionConfirmDialogComponent___c_TypeInfo, v10);
    byte_40F7083 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)_4__this->fields.viewDogIcons;
  v13 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v13 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__26_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_3;
  if ( !_9__26_3 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__26_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_viewDogIcon__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_3,
      v16,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__,
      (const MethodInfo_24B7310 *)Method_System_Action_viewDogIcon___ctor__);
    v17 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v17->__9__26_3 = (struct System_Action_viewDogIcon__o *)_9__26_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__26_3,
      (System_Int32_array **)_9__26_3,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          viewDogIcons,
          (System_Action_T__o *)_9__26_3,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v24 = this->fields.__4__this) == 0LL)
    || (buttonDecide = v24->fields.buttonDecide) == 0LL
    || (gameObject = UnityEngine_GameObject__get_gameObject(buttonDecide, 0LL)) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  ((void (__fastcall *)(srcLineSprite_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
    Component_srcLineSprite,
    !this->fields.isWarning,
    Component_srcLineSprite->klass[1]._1.byval_arg.data);
}