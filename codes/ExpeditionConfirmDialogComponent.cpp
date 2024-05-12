void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389FD2 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_4389FD2 = 1;
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

  ExpeditionConfirmDialogComponent__Close_23308012(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_23308012(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4389FCE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_4389FCE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  ExpeditionConfirmDialogComponent___c_c *v4; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x20
  Il2CppObject *v7; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  viewDogIcon_o *viewDogIcon; // x0
  __int64 v16; // x1
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8

  if ( (byte_4389FCD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_B775C4(&Method_System_Func_viewDogIcon__bool___ctor__);
    sub_B775C4(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_B775C4(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4389FCD = 1;
  }
  viewDogIcons = this->fields.viewDogIcons;
  v4 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v4 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__28_0,
      v7,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_viewDogIcon__bool___ctor__);
    v8 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v8->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  viewDogIcon = System_Linq_Enumerable__First_viewDogIcon_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_1D3096C *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !viewDogIcon
    || (EventExpeditionPieceEntity_k__BackingField = viewDogIcon->fields._EventExpeditionPieceEntity_k__BackingField) == 0LL )
  {
    sub_B7769C(viewDogIcon, v16);
  }
  return EventExpeditionPieceEntity_k__BackingField->fields.idx;
}


void __fastcall ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o **p_eventExpeditionPieceEntityList; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *v16; // x24
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x21
  viewDogIcon_o **v20; // x8

  if ( (byte_4389FCA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389FCA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_20;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  p_eventExpeditionPieceEntityList = &this->fields.eventExpeditionPieceEntityList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionPieceEntityList,
    (System_Int32_array **)PieceEntityList,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v15);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v16 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_20:
    sub_B7769C(Instance, v6);
  }
  v17 = 0LL;
  v18 = 32LL;
  while ( (int)v17 < v16->fields._size )
  {
    viewDogIcons = this->fields.viewDogIcons;
    if ( viewDogIcons )
    {
      if ( viewDogIcons->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v20 = (viewDogIcon_o **)((char *)viewDogIcons->fields._items + v18);
      if ( v16->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( *v20 )
      {
        viewDogIcon__Init(*v20, v16->fields._items->m_Items[v17], 0LL);
        v16 = *p_eventExpeditionPieceEntityList;
        ++v17;
        v18 += 8LL;
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

  if ( (byte_4389FD0 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389FD0 = 1;
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
    ExpeditionConfirmDialogComponent__Close_23308012(this, 0LL, v3);
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

  if ( (byte_4389FCF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389FCF = 1;
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
  __int64 v12; // x24
  int64_t Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct EventExpeditionEntity_o *v34; // x1
  CommonConsumeEntity_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CommonConsumeEntity_o *v42; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v46; // x28
  System_String_o *v47; // x0
  int32_t v48; // w27
  int32_t v49; // w28
  int v50; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UIWidget_o *v59; // x26
  int v60; // s0
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v65; // x27
  Il2CppObject *Name; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v67; // x25
  ExpeditionConfirmDialogComponent___c_c *v68; // x8
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__26_0; // x26
  Il2CppObject *v71; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t *v79; // x26
  ItemMaster_o *v80; // x25
  __int64 *v81; // x8
  struct UILabel_o **p_rewardNumLabel; // x21
  System_String_o *v83; // x0
  UILabel_o *rewardNumLabel; // x25
  int32_t v85; // w8
  System_String_o *v86; // x26
  System_String_o *v87; // x0
  int32_t v88; // w25
  int32_t v89; // w26
  int v90; // w25
  UserEventExpeditionMaster_o *v91; // x25
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x25
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v93; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v95; // w25
  __int64 v96; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v98; // w23
  int v99; // w23
  System_Action_o *v100; // x21
  int32_t type; // [xsp+0h] [xbp-60h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389FCB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_viewDogIcon___ctor__);
    sub_B775C4(&System_Action_viewDogIcon__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Comparison_GiftEntity___ctor__);
    sub_B775C4(&System_Comparison_GiftEntity__TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_B775C4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_B775C4(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_B775C4(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_3398/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_B775C4(&StringLiteral_5918/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_5915/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_B775C4(&StringLiteral_5917/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_B775C4(&StringLiteral_5914/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_5922/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_3399/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_B775C4(&StringLiteral_5923/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5919/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4389FCB = 1;
  }
  entity = 0LL;
  v12 = sub_B77694(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
    (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_109;
  *(_QWORD *)(v12 + 24) = eventExpeditionEntity;
  v21 = v12 + 24;
  sub_B77560(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)eventExpeditionEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v12 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  v34 = *(struct EventExpeditionEntity_o **)(v12 + 24);
  if ( !v34 )
    return;
  this->fields.currentExpeditionEntity = v34;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.currentExpeditionEntity,
    (System_Int32_array **)v34,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v21 || !Instance )
    goto LABEL_109;
  v35 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v21 + 36LL), 1, 0LL);
  v42 = v35;
  if ( v35 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v35->fields.objectId;
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
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3398/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v47 = System_Int32__ToString((int)v42 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_44901936(v46, v47, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_109;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_109;
    v48 = *(_DWORD *)(Instance + 160);
    Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_109;
    v49 = *(_DWORD *)(Instance + 40);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_45806124(v48, v49, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_109;
    v50 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_109;
    v104.fields.y = 1.0;
    v104.fields.x = -(float)v50;
    v104.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v104, 0LL);
  }
  this->fields.clickFunc = func;
  type = maskType;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5922/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_109;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5919/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_109;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5917/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_109;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5915/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5914/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_109;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5918/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_109;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v12 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v42 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_109;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v42->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_43;
  if ( !entity )
    goto LABEL_109;
  if ( v42->fields.num <= entity->fields.num )
  {
    v59 = (UIWidget_o *)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v12 + 40) )
    {
      *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
      if ( !v59 )
        goto LABEL_109;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_43:
    *(_BYTE *)(v12 + 40) = 1;
    v59 = (UIWidget_o *)this->fields.consumptionNumLabel;
  }
  *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_red(0LL);
  if ( !v59 )
    goto LABEL_109;
LABEL_45:
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5923/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v42, 0LL);
  Instance = (int64_t)System_String__Format(v65, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_109;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v12 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v21 || !Instance )
    goto LABEL_109;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v21 + 40LL), 0LL);
  v67 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v68 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v68 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__26_0,
      v71,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_GiftEntity___ctor__);
    v72 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v72->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v72->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v67 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v67,
    (System_Comparison_T__o *)_9__26_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v67->fields._size <= 0 )
  {
    p_rewardNumLabel = &this->fields.rewardNumLabel;
    goto LABEL_84;
  }
  v79 = (int32_t *)v67->fields._items->m_Items[0];
  if ( !v79 )
    goto LABEL_109;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_109;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v79[5], v79[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_109;
  v80 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v79[6], 0LL) || ItemMaster__isFriendPoint(v80, v79[6], 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = &StringLiteral_3399/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = &StringLiteral_3398/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v83 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
  p_rewardNumLabel = &this->fields.rewardNumLabel;
  rewardNumLabel = this->fields.rewardNumLabel;
  v85 = v79[7];
  v86 = v83;
  v87 = BasicHelper__ToCommaString(v85, 0LL);
  Instance = (int64_t)System_String__Concat_44901936(v86, v87, 0LL);
  if ( !rewardNumLabel )
LABEL_109:
    sub_B7769C(Instance, v14);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_84:
  Instance = (int64_t)*p_rewardNumLabel;
  if ( !*p_rewardNumLabel )
    goto LABEL_109;
  v88 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  v89 = *(_DWORD *)(Instance + 40);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_45806124(v88, v89, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_109;
  v90 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_109;
  v105.fields.y = 1.0;
  v105.fields.x = -(float)v90;
  v105.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v105, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v91 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v91 )
    goto LABEL_109;
  UserEventExpeditionMaster__TryGetEntity(
    v91,
    (UserEventExpeditionEntity_o **)(v12 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.viewDogIcons;
  v93 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_viewDogIcon__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v93,
    (Il2CppObject *)v12,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    (const MethodInfo_26A0868 *)Method_System_Action_viewDogIcon___ctor__);
  if ( !viewDogIcons )
    goto LABEL_109;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v93,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v21 )
    goto LABEL_109;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v95 = *(_DWORD *)(*(_QWORD *)v21 + 44LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v95, 0LL);
  v96 = *(_QWORD *)v21;
  if ( !*(_QWORD *)v21 )
    goto LABEL_109;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v96 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_109;
  v98 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  Instance = System_Math__Min_45806124(v98, *(_DWORD *)(Instance + 40), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_109;
  v99 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  v106.fields.y = 1.0;
  v106.fields.x = -(float)v99;
  v106.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v106, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v100 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v100, type, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent_o *v2; // x19
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_4389FCC & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_4389FCC = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_B7769C(this, method);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4389FD1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389FD1 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_B7769C(0LL, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0LL);
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall ExpeditionConfirmDialogComponent_ClickDelegate__BeginInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = isDecide;
  v14 = pieceIdx;
  if ( (byte_438806A & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438806A = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, eventExpeditionEntity);
  v13[1] = (__int64)eventExpeditionEntity;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B77568(this, v13, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v22->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v24) & 1) == 0 )
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
      v26 = sub_B775EC(v24);
      v27 = sub_B779F0(v24);
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
            v20 = sub_B0F4C0(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))sub_B77674(v19, v24);
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
            v18 = sub_B0F4C0(v23, class_0, v13);
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
  Il2CppObject *v1; // x19
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4388067 & 1) == 0 )
  {
    sub_B775C4(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4388067 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B7769C(this, 0LL);
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
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v7; // w8
  unsigned int v8; // w22
  __int64 v9; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v12; // x9
  __int64 v13; // x10
  int32_t v14; // w21
  float v15; // s0
  struct EventExpeditionPieceEntity_o *v16; // x11
  __int64 v17; // x14
  __int64 v18; // x15
  int v19; // w15
  __int64 v20; // x15
  Il2CppClass *v21; // x8
  int32_t static_fields_size; // w22
  System_Action_o *v23; // x24
  double v24; // d8
  __int64 v25; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_4388068 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B775C4(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_4388068 = 1;
  }
  klass = v4[1].klass;
  if ( klass )
  {
    data = klass->_1.byval_arg.data;
    if ( !data )
      goto LABEL_34;
    v7 = data[6];
    if ( v7 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= v7 )
        {
LABEL_35:
          v25 = sub_B776C8(this);
          sub_B77668(v25, 0LL);
        }
        v9 = *(_QWORD *)&data[2 * v8 + 8];
        if ( !v9 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v9 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0LL);
        v7 = data[6];
        if ( (int)++v8 >= v7 )
          goto LABEL_14;
      }
LABEL_34:
      sub_B7769C(this, x);
    }
  }
LABEL_14:
  monitor = (int *)v4[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  v12 = *((_QWORD *)monitor + 7);
  if ( !v12 )
    goto LABEL_34;
  v13 = *(_QWORD *)(v12 + 24);
  v14 = 0;
  v15 = (float)monitor[13];
  if ( v13 && (int)v13 >= 1 )
  {
    if ( x )
    {
      v16 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v14 = 0;
      v17 = 8LL;
      while ( v16 )
      {
        if ( v16->fields.idx == *(_DWORD *)(v12 + 4 * v17) )
        {
          v18 = *((_QWORD *)monitor + 8);
          if ( !v18 )
            goto LABEL_34;
          if ( v17 - 8 >= (unsigned __int64)*(unsigned int *)(v18 + 24) )
            goto LABEL_35;
          v19 = *(_DWORD *)(v18 + 4 * v17);
          v14 = 100 - v19 / 10;
          v15 = v15 * (float)((float)v19 / 1000.0);
        }
        v20 = v17 - 7;
        ++v17;
        if ( v20 >= (int)v13 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v21 = v4[2].klass;
  if ( !v21 )
    goto LABEL_34;
  static_fields_size = v21->_2.static_fields_size;
  v23 = (System_Action_o *)v4[3].klass;
  v24 = v15 == INFINITY ? -v15 : v15;
  if ( !v23 )
  {
    v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v23, v4, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0LL);
    v4[3].klass = (Il2CppClass *)v23;
    sub_B77560(&v4[3]);
  }
  if ( !x )
    goto LABEL_34;
  viewDogIcon__Set(x, v14, (int)v24, static_fields_size, v23, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v2; // x19
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x20
  void *userEventExpeditionEntity; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  Il2CppObject *v7; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v9; // x8

  v2 = this;
  if ( (byte_4388069 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_viewDogIcon___ctor__);
    sub_B775C4(&System_Action_viewDogIcon__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B775C4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_B775C4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B775C4(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4388069 = 1;
  }
  _4__this = v2->fields.__4__this;
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
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)userEventExpeditionEntity + 2);
  if ( !v6 )
  {
    if ( (BYTE3(this[5].fields.eventExpeditionEntity) & 4) != 0 && !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      userEventExpeditionEntity = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v7 = *(Il2CppObject **)userEventExpeditionEntity;
    v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_viewDogIcon__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v6,
      v7,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__,
      (const MethodInfo_26A0868 *)Method_System_Action_viewDogIcon___ctor__);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)v6;
    sub_B77560(&static_fields->__9__26_3);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          viewDogIcons,
          (System_Action_T__o *)v6,
          (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v9 = v2->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v9->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_18:
    sub_B7769C(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}