void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214114 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214114 = 1;
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

  ExpeditionConfirmDialogComponent__Close_23925864(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_23925864(
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
  System_Action_o *v13; // x20

  if ( (byte_4214110 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10);
    byte_4214110 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  ExpeditionConfirmDialogComponent___c_c *v9; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x20
  Il2CppObject *v12; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  viewDogIcon_o *viewDogIcon; // x0
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8

  if ( (byte_421410F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_B0D8A4(&Method_System_Func_viewDogIcon__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_viewDogIcon__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v6);
    sub_B0D8A4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v7);
    byte_421410F = 1;
  }
  viewDogIcons = this->fields.viewDogIcons;
  v9 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v9 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_viewDogIcon__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__28_0,
      v12,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_viewDogIcon__bool___ctor__);
    v13 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v13->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  viewDogIcon = System_Linq_Enumerable__First_viewDogIcon_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_1B4AD90 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !viewDogIcon
    || (EventExpeditionPieceEntity_k__BackingField = viewDogIcon->fields._EventExpeditionPieceEntity_k__BackingField) == 0LL )
  {
    sub_B0D97C(viewDogIcon);
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
  DataManager_o *Instance; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o **p_eventExpeditionPieceEntityList; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *v20; // x24
  __int64 v21; // x22
  __int64 v22; // x23
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x21
  viewDogIcon_o **v24; // x8

  if ( (byte_421410C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421410C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_20;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  p_eventExpeditionPieceEntityList = &this->fields.eventExpeditionPieceEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionPieceEntityList,
    (System_Int32_array **)PieceEntityList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v19);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v20 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  v21 = 0LL;
  v22 = 32LL;
  while ( (int)v21 < v20->fields._size )
  {
    viewDogIcons = this->fields.viewDogIcons;
    if ( viewDogIcons )
    {
      if ( viewDogIcons->fields._size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v24 = (viewDogIcon_o **)((char *)viewDogIcons->fields._items + v22);
      if ( v20->fields._size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( *v24 )
      {
        viewDogIcon__Init(*v24, v20->fields._items->m_Items[v21], 0LL);
        v20 = *p_eventExpeditionPieceEntityList;
        ++v21;
        v22 += 8LL;
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

  if ( (byte_4214112 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214112 = 1;
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
    ExpeditionConfirmDialogComponent__Close_23925864(this, 0LL, v3);
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

  if ( (byte_4214111 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214111 = 1;
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
  int64_t Instance; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct EventExpeditionEntity_o *v68; // x1
  CommonConsumeEntity_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  CommonConsumeEntity_o *v76; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v80; // x28
  System_String_o *v81; // x0
  int32_t v82; // w27
  int32_t v83; // w28
  int v84; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UIWidget_o *v93; // x26
  int v94; // s0
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v99; // x27
  Il2CppObject *Name; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v103; // x25
  ExpeditionConfirmDialogComponent___c_c *v104; // x8
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__26_0; // x26
  Il2CppObject *v107; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  int32_t *v115; // x26
  ItemMaster_o *v116; // x25
  __int64 *v117; // x8
  struct UILabel_o **p_rewardNumLabel; // x21
  System_String_o *v119; // x0
  UILabel_o *rewardNumLabel; // x25
  int32_t v121; // w8
  System_String_o *v122; // x26
  System_String_o *v123; // x0
  int32_t v124; // w25
  int32_t v125; // w26
  int v126; // w25
  UserEventExpeditionMaster_o *v127; // x25
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x25
  __int64 v129; // x1
  __int64 v130; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v131; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v133; // w25
  __int64 v134; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v136; // w23
  int v137; // w23
  __int64 v138; // x1
  __int64 v139; // x2
  System_Action_o *v140; // x21
  int32_t type; // [xsp+0h] [xbp-60h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421410D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_viewDogIcon___ctor__, eventExpeditionEntity);
    sub_B0D8A4(&System_Action_viewDogIcon__TypeInfo, v12);
    sub_B0D8A4(&System_Action_TypeInfo, v13);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Comparison_GiftEntity___ctor__, v15);
    sub_B0D8A4(&System_Comparison_GiftEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v22);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v27);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v28);
    sub_B0D8A4(&System_Math_TypeInfo, v29);
    sub_B0D8A4(&NetworkManager_TypeInfo, v30);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v32);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v33);
    sub_B0D8A4(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v34);
    sub_B0D8A4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v35);
    sub_B0D8A4(&StringLiteral_3285/*"COMMON_COUNT_OPERATOR_CROSS"*/, v36);
    sub_B0D8A4(&StringLiteral_5789/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v37);
    sub_B0D8A4(&StringLiteral_5786/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v38);
    sub_B0D8A4(&StringLiteral_5788/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v39);
    sub_B0D8A4(&StringLiteral_5785/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v40);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B0D8A4(&StringLiteral_5793/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v42);
    sub_B0D8A4(&StringLiteral_3286/*"COMMON_COUNT_OPERATOR_PLUS"*/, v43);
    sub_B0D8A4(&StringLiteral_5794/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v44);
    sub_B0D8A4(&StringLiteral_1/*""*/, v45);
    sub_B0D8A4(&StringLiteral_5790/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v46);
    byte_421410D = 1;
  }
  entity = 0LL;
  v47 = sub_B0D974(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, eventExpeditionEntity, isDecideSe);
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
    (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_109;
  *(_QWORD *)(v47 + 24) = eventExpeditionEntity;
  v55 = v47 + 24;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v47 + 24),
    (System_Int32_array **)eventExpeditionEntity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  *(_QWORD *)(v47 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)this, v56, v57, v58, v59, v60, v61);
  v68 = *(struct EventExpeditionEntity_o **)(v47 + 24);
  if ( !v68 )
    return;
  this->fields.currentExpeditionEntity = v68;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentExpeditionEntity,
    (System_Int32_array **)v68,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v55 || !Instance )
    goto LABEL_109;
  v69 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v55 + 36LL), 1, 0LL);
  v76 = v69;
  if ( v69 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v69->fields.objectId;
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
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3285/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v81 = System_Int32__ToString((int)v76 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_43849904(v80, v81, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_109;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_109;
    v82 = *(_DWORD *)(Instance + 160);
    Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_109;
    v83 = *(_DWORD *)(Instance + 40);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_44514512(v82, v83, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_109;
    v84 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_109;
    v144.fields.y = 1.0;
    v144.fields.x = -(float)v84;
    v144.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v144, 0LL);
  }
  this->fields.clickFunc = func;
  type = maskType;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5793/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_109;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_109;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_109;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5785/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_109;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_109;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v47 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v76 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_109;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v76->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_43;
  if ( !entity )
    goto LABEL_109;
  if ( v76->fields.num <= entity->fields.num )
  {
    v93 = (UIWidget_o *)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v47 + 40) )
    {
      *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_white(0LL);
      if ( !v93 )
        goto LABEL_109;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_43:
    *(_BYTE *)(v47 + 40) = 1;
    v93 = (UIWidget_o *)this->fields.consumptionNumLabel;
  }
  *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_red(0LL);
  if ( !v93 )
    goto LABEL_109;
LABEL_45:
  UIWidget__set_color(v93, *(UnityEngine_Color_o *)&v94, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5794/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v76, 0LL);
  Instance = (int64_t)System_String__Format(v99, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_109;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v47 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v55 || !Instance )
    goto LABEL_109;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v55 + 40LL), 0LL);
  v103 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v104 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v104 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v104->static_fields;
  _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v104->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v107 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_GiftEntity__TypeInfo,
                                                                           v101,
                                                                           v102);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__26_0,
      v107,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_GiftEntity___ctor__);
    v108 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v108->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v108->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
  }
  if ( !v103 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v103,
    (System_Comparison_T__o *)_9__26_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v103->fields._size <= 0 )
  {
    p_rewardNumLabel = &this->fields.rewardNumLabel;
    goto LABEL_84;
  }
  v115 = (int32_t *)v103->fields._items->m_Items[0];
  if ( !v115 )
    goto LABEL_109;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_109;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v115[5], v115[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_109;
  v116 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v115[6], 0LL) || ItemMaster__isFriendPoint(v116, v115[6], 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = &StringLiteral_3286/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = &StringLiteral_3285/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v119 = LocalizationManager__Get((System_String_o *)*v117, 0LL);
  p_rewardNumLabel = &this->fields.rewardNumLabel;
  rewardNumLabel = this->fields.rewardNumLabel;
  v121 = v115[7];
  v122 = v119;
  v123 = BasicHelper__ToCommaString(v121, 0LL);
  Instance = (int64_t)System_String__Concat_43849904(v122, v123, 0LL);
  if ( !rewardNumLabel )
LABEL_109:
    sub_B0D97C(Instance);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_84:
  Instance = (int64_t)*p_rewardNumLabel;
  if ( !*p_rewardNumLabel )
    goto LABEL_109;
  v124 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  v125 = *(_DWORD *)(Instance + 40);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_44514512(v124, v125, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_109;
  v126 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_109;
  v145.fields.y = 1.0;
  v145.fields.x = -(float)v126;
  v145.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v145, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v127 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v127 )
    goto LABEL_109;
  UserEventExpeditionMaster__TryGetEntity(
    v127,
    (UserEventExpeditionEntity_o **)(v47 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.viewDogIcons;
  v131 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                System_Action_viewDogIcon__TypeInfo,
                                                                                v129,
                                                                                v130);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v131,
    (Il2CppObject *)v47,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    (const MethodInfo_246EA3C *)Method_System_Action_viewDogIcon___ctor__);
  if ( !viewDogIcons )
    goto LABEL_109;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v131,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v55 )
    goto LABEL_109;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v133 = *(_DWORD *)(*(_QWORD *)v55 + 44LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v133, 0LL);
  v134 = *(_QWORD *)v55;
  if ( !*(_QWORD *)v55 )
    goto LABEL_109;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v134 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_109;
  v136 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  Instance = System_Math__Min_44514512(v136, *(_DWORD *)(Instance + 40), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_109;
  v137 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  v146.fields.y = 1.0;
  v146.fields.x = -(float)v137;
  v146.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v146, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v140 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v138, v139);
  System_Action___ctor(v140, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v140, type, 0LL);
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
  if ( (byte_421410E & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_B0D8A4(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method);
    byte_421410E = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_B0D97C(this);
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

  if ( (byte_4214113 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214113 = 1;
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
    sub_B0D97C(0LL);
  return UnityEngine_GameObject__get_gameObject(v5, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4210F33 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    sub_B0D8A4(&int_TypeInfo, v11);
    byte_4210F33 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v13[1] = (__int64)eventExpeditionEntity;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B0D848(this, v13, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, isDecide, eventExpeditionEntity, *(_QWORD *)&pieceIdx);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
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
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
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
            v20 = sub_AA67A0(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))sub_B0D954(v19, v24);
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
            v18 = sub_AA67A0(v23, class_0, v13);
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
  Il2CppObject *v3; // x19
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4210F30 & 1) == 0 )
  {
    sub_B0D8A4(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_4210F30 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v8; // w8
  unsigned int v9; // w22
  __int64 v10; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v13; // x9
  __int64 v14; // x10
  int32_t v15; // w21
  float v16; // s0
  struct EventExpeditionPieceEntity_o *v17; // x11
  __int64 v18; // x14
  __int64 v19; // x15
  int v20; // w15
  __int64 v21; // x15
  Il2CppClass *v22; // x8
  int32_t static_fields_size; // w22
  System_Action_o *v24; // x24
  double v25; // d8
  __int64 v26; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_4210F31 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B0D8A4(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v5);
    byte_4210F31 = 1;
  }
  klass = v4[1].klass;
  if ( klass )
  {
    data = klass->_1.byval_arg.data;
    if ( !data )
      goto LABEL_34;
    v8 = data[6];
    if ( v8 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= v8 )
        {
LABEL_35:
          v26 = sub_B0D9A8(this);
          sub_B0D948(v26, 0LL);
        }
        v10 = *(_QWORD *)&data[2 * v9 + 8];
        if ( !v10 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v10 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0LL);
        v8 = data[6];
        if ( (int)++v9 >= v8 )
          goto LABEL_14;
      }
LABEL_34:
      sub_B0D97C(this);
    }
  }
LABEL_14:
  monitor = (int *)v4[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  v13 = *((_QWORD *)monitor + 7);
  if ( !v13 )
    goto LABEL_34;
  v14 = *(_QWORD *)(v13 + 24);
  v15 = 0;
  v16 = (float)monitor[13];
  if ( v14 && (int)v14 >= 1 )
  {
    if ( x )
    {
      v17 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v15 = 0;
      v18 = 8LL;
      while ( v17 )
      {
        if ( v17->fields.idx == *(_DWORD *)(v13 + 4 * v18) )
        {
          v19 = *((_QWORD *)monitor + 8);
          if ( !v19 )
            goto LABEL_34;
          if ( v18 - 8 >= (unsigned __int64)*(unsigned int *)(v19 + 24) )
            goto LABEL_35;
          v20 = *(_DWORD *)(v19 + 4 * v18);
          v15 = 100 - v20 / 10;
          v16 = v16 * (float)((float)v20 / 1000.0);
        }
        v21 = v18 - 7;
        ++v18;
        if ( v21 >= (int)v14 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v22 = v4[2].klass;
  if ( !v22 )
    goto LABEL_34;
  static_fields_size = v22->_2.static_fields_size;
  v24 = (System_Action_o *)v4[3].klass;
  v25 = v16 == INFINITY ? -v16 : v16;
  if ( !v24 )
  {
    v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, x, method);
    System_Action___ctor(v24, v4, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0LL);
    v4[3].klass = (Il2CppClass *)v24;
    sub_B0D840(&v4[3], v24);
  }
  if ( !x )
    goto LABEL_34;
  viewDogIcon__Set(x, v15, (int)v25, static_fields_size, v24, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x20
  void *userEventExpeditionEntity; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  Il2CppObject *v13; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v15; // x8

  v3 = this;
  if ( (byte_4210F32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_viewDogIcon___ctor__, method);
    sub_B0D8A4(&System_Action_viewDogIcon__TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v6);
    sub_B0D8A4(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v7);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B0D8A4(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v8);
    byte_4210F32 = 1;
  }
  _4__this = v3->fields.__4__this;
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
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)userEventExpeditionEntity + 2);
  if ( !v12 )
  {
    if ( (BYTE3(this[5].fields.eventExpeditionEntity) & 4) != 0 && !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      userEventExpeditionEntity = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v13 = *(Il2CppObject **)userEventExpeditionEntity;
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_viewDogIcon__TypeInfo,
                                                                                 method,
                                                                                 v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      v13,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__,
      (const MethodInfo_246EA3C *)Method_System_Action_viewDogIcon___ctor__);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)v12;
    sub_B0D840(&static_fields->__9__26_3, v12);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          viewDogIcons,
          (System_Action_T__o *)v12,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v15 = v3->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v15->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v3->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}