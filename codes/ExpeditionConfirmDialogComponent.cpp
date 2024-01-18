void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418777F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418777F = 1;
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

  ExpeditionConfirmDialogComponent__Close_24890696(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_24890696(
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
  System_Action_o *v11; // x20

  if ( (byte_418777B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10);
    byte_418777B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  ExpeditionConfirmDialogComponent___c_c *v8; // x0
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x20
  Il2CppObject *v11; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  viewDogIcon_o *viewDogIcon; // x0
  __int64 v20; // x1
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8

  if ( (byte_418777A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_B2C35C(&Method_System_Func_viewDogIcon__bool___ctor__, v3);
    sub_B2C35C(&System_Func_viewDogIcon__bool__TypeInfo, v4);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v5);
    sub_B2C35C(&ExpeditionConfirmDialogComponent___c_TypeInfo, v6);
    byte_418777A = 1;
  }
  viewDogIcons = this->fields.viewDogIcons;
  v8 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v8 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__28_0,
      v11,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_viewDogIcon__bool___ctor__);
    v12 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v12->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  viewDogIcon = System_Linq_Enumerable__First_viewDogIcon_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_1A8FAC4 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !viewDogIcon
    || (EventExpeditionPieceEntity_k__BackingField = viewDogIcon->fields._EventExpeditionPieceEntity_k__BackingField) == 0LL )
  {
    sub_B2C434(viewDogIcon, v20);
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
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o **p_eventExpeditionPieceEntityList; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *v21; // x24
  __int64 v22; // x22
  __int64 v23; // x23
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x21
  viewDogIcon_o **v25; // x8

  if ( (byte_4187777 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187777 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_20;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  p_eventExpeditionPieceEntityList = &this->fields.eventExpeditionPieceEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionPieceEntityList,
    (System_Int32_array **)PieceEntityList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v20);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v21 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_20:
    sub_B2C434(Instance, v11);
  }
  v22 = 0LL;
  v23 = 32LL;
  while ( (int)v22 < v21->fields._size )
  {
    viewDogIcons = this->fields.viewDogIcons;
    if ( viewDogIcons )
    {
      if ( viewDogIcons->fields._size <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v25 = (viewDogIcon_o **)((char *)viewDogIcons->fields._items + v23);
      if ( v21->fields._size <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( *v25 )
      {
        viewDogIcon__Init(*v25, v21->fields._items->m_Items[v22], 0LL);
        v21 = *p_eventExpeditionPieceEntityList;
        ++v22;
        v23 += 8LL;
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

  if ( (byte_418777D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418777D = 1;
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
    ExpeditionConfirmDialogComponent__Close_24890696(this, 0LL, v3);
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

  if ( (byte_418777C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418777C = 1;
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
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct EventExpeditionEntity_o *v69; // x1
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
  int32_t v83; // w27
  int32_t v84; // w28
  int v85; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UIWidget_o *v94; // x26
  int v95; // s0
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v100; // x27
  Il2CppObject *Name; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v102; // x25
  ExpeditionConfirmDialogComponent___c_c *v103; // x8
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__26_0; // x26
  Il2CppObject *v106; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  int32_t *v114; // x26
  ItemMaster_o *v115; // x25
  __int64 *v116; // x8
  struct UILabel_o **p_rewardNumLabel; // x21
  System_String_o *v118; // x0
  UILabel_o *rewardNumLabel; // x25
  int32_t v120; // w8
  System_String_o *v121; // x26
  System_String_o *v122; // x0
  int32_t v123; // w25
  int32_t v124; // w26
  int v125; // w25
  UserEventExpeditionMaster_o *v126; // x25
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x25
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v128; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v130; // w25
  __int64 v131; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v133; // w23
  int v134; // w23
  System_Action_o *v135; // x21
  int32_t type; // [xsp+0h] [xbp-60h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187778 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_viewDogIcon___ctor__, eventExpeditionEntity);
    sub_B2C35C(&System_Action_viewDogIcon__TypeInfo, v12);
    sub_B2C35C(&System_Action_TypeInfo, v13);
    sub_B2C35C(&AtlasManager_TypeInfo, v14);
    sub_B2C35C(&Method_System_Comparison_GiftEntity___ctor__, v15);
    sub_B2C35C(&System_Comparison_GiftEntity__TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v22);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v27);
    sub_B2C35C(&LocalizationManager_TypeInfo, v28);
    sub_B2C35C(&System_Math_TypeInfo, v29);
    sub_B2C35C(&NetworkManager_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v32);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v33);
    sub_B2C35C(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v34);
    sub_B2C35C(&ExpeditionConfirmDialogComponent___c_TypeInfo, v35);
    sub_B2C35C(&StringLiteral_3272/*"COMMON_COUNT_OPERATOR_CROSS"*/, v36);
    sub_B2C35C(&StringLiteral_5773/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v37);
    sub_B2C35C(&StringLiteral_5770/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v38);
    sub_B2C35C(&StringLiteral_5772/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v39);
    sub_B2C35C(&StringLiteral_5769/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v40);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B2C35C(&StringLiteral_5777/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v42);
    sub_B2C35C(&StringLiteral_3273/*"COMMON_COUNT_OPERATOR_PLUS"*/, v43);
    sub_B2C35C(&StringLiteral_5778/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v44);
    sub_B2C35C(&StringLiteral_1/*""*/, v45);
    sub_B2C35C(&StringLiteral_5774/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v46);
    byte_4187778 = 1;
  }
  entity = 0LL;
  v47 = sub_B2C42C(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
    (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_109;
  *(_QWORD *)(v47 + 24) = eventExpeditionEntity;
  v56 = v47 + 24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v47 + 24),
    (System_Int32_array **)eventExpeditionEntity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  *(_QWORD *)(v47 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  v69 = *(struct EventExpeditionEntity_o **)(v47 + 24);
  if ( !v69 )
    return;
  this->fields.currentExpeditionEntity = v69;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentExpeditionEntity,
    (System_Int32_array **)v69,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v56 || !Instance )
    goto LABEL_109;
  v70 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v56 + 36LL), 1, 0LL);
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
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3272/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v82 = System_Int32__ToString((int)v77 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_44305532(v81, v82, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_109;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_109;
    v83 = *(_DWORD *)(Instance + 160);
    Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_109;
    v84 = *(_DWORD *)(Instance + 40);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_44967328(v83, v84, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_109;
    v85 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_109;
    v139.fields.y = 1.0;
    v139.fields.x = -(float)v85;
    v139.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v139, 0LL);
  }
  this->fields.clickFunc = func;
  type = maskType;
  sub_B2C2F8(
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
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5777/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_109;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5774/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_109;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_109;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_109;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5773/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_109;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v47 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
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
  if ( !v77 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_109;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v77->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_43;
  if ( !entity )
    goto LABEL_109;
  if ( v77->fields.num <= entity->fields.num )
  {
    v94 = (UIWidget_o *)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v47 + 40) )
    {
      *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_white(0LL);
      if ( !v94 )
        goto LABEL_109;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_43:
    *(_BYTE *)(v47 + 40) = 1;
    v94 = (UIWidget_o *)this->fields.consumptionNumLabel;
  }
  *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_red(0LL);
  if ( !v94 )
    goto LABEL_109;
LABEL_45:
  UIWidget__set_color(v94, *(UnityEngine_Color_o *)&v95, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_5778/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v77, 0LL);
  Instance = (int64_t)System_String__Format(v100, Name, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v56 || !Instance )
    goto LABEL_109;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v56 + 40LL), 0LL);
  v102 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v103 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v103 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v103->static_fields;
  _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v103);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v106 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__26_0,
      v106,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_GiftEntity___ctor__);
    v107 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v107->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v107->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
  }
  if ( !v102 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v102,
    (System_Comparison_T__o *)_9__26_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v102->fields._size <= 0 )
  {
    p_rewardNumLabel = &this->fields.rewardNumLabel;
    goto LABEL_84;
  }
  v114 = (int32_t *)v102->fields._items->m_Items[0];
  if ( !v114 )
    goto LABEL_109;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_109;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v114[5], v114[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_109;
  v115 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v114[6], 0LL) || ItemMaster__isFriendPoint(v115, v114[6], 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = &StringLiteral_3273/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = &StringLiteral_3272/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v118 = LocalizationManager__Get((System_String_o *)*v116, 0LL);
  p_rewardNumLabel = &this->fields.rewardNumLabel;
  rewardNumLabel = this->fields.rewardNumLabel;
  v120 = v114[7];
  v121 = v118;
  v122 = BasicHelper__ToCommaString(v120, 0LL);
  Instance = (int64_t)System_String__Concat_44305532(v121, v122, 0LL);
  if ( !rewardNumLabel )
LABEL_109:
    sub_B2C434(Instance, v49);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_84:
  Instance = (int64_t)*p_rewardNumLabel;
  if ( !*p_rewardNumLabel )
    goto LABEL_109;
  v123 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  v124 = *(_DWORD *)(Instance + 40);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_44967328(v123, v124, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_109;
  v125 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_109;
  v140.fields.y = 1.0;
  v140.fields.x = -(float)v125;
  v140.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v140, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v126 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v126 )
    goto LABEL_109;
  UserEventExpeditionMaster__TryGetEntity(
    v126,
    (UserEventExpeditionEntity_o **)(v47 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.viewDogIcons;
  v128 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_viewDogIcon__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v128,
    (Il2CppObject *)v47,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_viewDogIcon___ctor__);
  if ( !viewDogIcons )
    goto LABEL_109;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v128,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v56 )
    goto LABEL_109;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v130 = *(_DWORD *)(*(_QWORD *)v56 + 44LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v130, 0LL);
  v131 = *(_QWORD *)v56;
  if ( !*(_QWORD *)v56 )
    goto LABEL_109;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v131 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_109;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_109;
  v133 = *(_DWORD *)(Instance + 160);
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_109;
  Instance = System_Math__Min_44967328(v133, *(_DWORD *)(Instance + 40), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_109;
  v134 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  v141.fields.y = 1.0;
  v141.fields.x = -(float)v134;
  v141.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v141, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v135 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v135, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v135, type, 0LL);
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
  if ( (byte_4187779 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_B2C35C(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method);
    byte_4187779 = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_B2C434(this, method);
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

  if ( (byte_418777E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418777E = 1;
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
    sub_B2C434(0LL, v4);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841B7 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    sub_B2C35C(&int_TypeInfo, v11);
    byte_41841B7 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v13[1] = (__int64)eventExpeditionEntity;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B2C300(this, v13, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, isDecide, eventExpeditionEntity, *(_QWORD *)&pieceIdx);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
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
            v21 = sub_AC5258(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, bool, EventExpeditionEntity_o *, _QWORD, _QWORD))sub_B2C40C(v20, v25);
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
            v19 = sub_AC5258(v24, class_0, v13, v15);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41841B4 & 1) == 0 )
  {
    sub_B2C35C(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_41841B4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41841B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B2C35C(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v5);
    byte_41841B5 = 1;
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
          v26 = sub_B2C460(this);
          sub_B2C400(v26, 0LL);
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
      sub_B2C434(this, x);
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
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v24, v4, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0LL);
    v4[3].klass = (Il2CppClass *)v24;
    sub_B2C2F8(&v4[3], v24);
  }
  if ( !x )
    goto LABEL_34;
  viewDogIcon__Set(x, v15, (int)v25, static_fields_size, v24, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *viewDogIcons; // x20
  void *userEventExpeditionEntity; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21
  Il2CppObject *v12; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v14; // x8

  v2 = this;
  if ( (byte_41841B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_viewDogIcon___ctor__, method);
    sub_B2C35C(&System_Action_viewDogIcon__TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v5);
    sub_B2C35C(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v6);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_B2C35C(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v7);
    byte_41841B6 = 1;
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
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)userEventExpeditionEntity + 2);
  if ( !v11 )
  {
    if ( (BYTE3(this[5].fields.eventExpeditionEntity) & 4) != 0 && !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      userEventExpeditionEntity = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v12 = *(Il2CppObject **)userEventExpeditionEntity;
    v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_viewDogIcon__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v11,
      v12,
      Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_viewDogIcon___ctor__);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)v11;
    sub_B2C2F8(&static_fields->__9__26_3, v11);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          viewDogIcons,
          (System_Action_T__o *)v11,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v14 = v2->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v14->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_18:
    sub_B2C434(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}