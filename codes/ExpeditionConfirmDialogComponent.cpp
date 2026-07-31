void ExpeditionConfirmDialogComponent___ctor(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59324EF & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59324EF = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExpeditionConfirmDialogComponent__Close(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_38188728(this, 0, v2);
}


void ExpeditionConfirmDialogComponent__Close_38188728(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59324EB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_59324EB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ExpeditionConfirmDialogComponent__EndClose(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v13->fields.invoke_impl)(v13->fields.method_code, v13->fields.method);
  }
}


void ExpeditionConfirmDialogComponent__EndOpen(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ExpeditionConfirmDialogComponent___c_c *v4; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v8; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *object__59035808; // x0
  __int64 v17; // x1
  _DWORD *monitor; // x8

  if ( (byte_59324EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_21FFC50(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_21FFC50(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_59324EA = 1;
  }
  v4 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  viewDogIcons = this->fields.viewDogIcons;
  if ( !*(&ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, method, v2);
    v4 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__28_0 = (System_Func_object__bool__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v8,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0);
    v9 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v9->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__28_0, (int32_t)_9__28_0, v10, v11, v12, v13, v14, v15);
  }
  object__59035808 = System_Linq_Enumerable__First_object__59035808(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_384D0A0 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__59035808 || (monitor = object__59035808[10].monitor) == 0 )
    sub_21FFECC(object__59035808, v17);
  return monitor[5];
}


void ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int32_t v16; // w20
  viewDogIcon_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_59324E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59324E7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList((EventExpeditionPieceMaster_o *)Instance, eventId, 0);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventExpeditionPieceEntityList,
    (int32_t)PieceEntityList,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v14);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(DataManager_o *, _QWORD, const char *))Instance->klass[1]._1.name)(
          Instance,
          0,
          Instance->klass[1]._1.namespaze),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (eventExpeditionPieceEntityList = this->fields.eventExpeditionPieceEntityList) == 0) )
  {
LABEL_16:
    sub_21FFECC(Instance, v6);
  }
  v16 = 0;
  while ( v16 < eventExpeditionPieceEntityList->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v16,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( this->fields.eventExpeditionPieceEntityList )
      {
        v17 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)this->fields.eventExpeditionPieceEntityList,
                                      v16,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v17 )
        {
          viewDogIcon__Init(v17, (EventExpeditionPieceEntity_o *)Instance, v18);
          eventExpeditionPieceEntityList = this->fields.eventExpeditionPieceEntityList;
          ++v16;
          if ( eventExpeditionPieceEntityList )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ExpeditionConfirmDialogComponent__OnClickCancel(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x8

  if ( (byte_59324ED & 1) == 0 )
  {
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    byte_59324ED = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        0,
        0,
        clickFunc->fields.method);
    ExpeditionConfirmDialogComponent__Close_38188728(this, 0, v5);
  }
}


void ExpeditionConfirmDialogComponent__OnClickDecide(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x21
  struct EventExpeditionEntity_o *currentExpeditionEntity; // x20
  unsigned int CurrentSelectPieceIdx; // w0

  if ( (byte_59324EC & 1) == 0 )
  {
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    byte_59324EC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    v4 = 8 * this->fields.isDecideBtnSe;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      currentExpeditionEntity = this->fields.currentExpeditionEntity;
      CurrentSelectPieceIdx = ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(this, v6);
      ((void (__fastcall *)(intptr_t, __int64, struct EventExpeditionEntity_o *, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        currentExpeditionEntity,
        CurrentSelectPieceIdx,
        clickFunc->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExpeditionConfirmDialogComponent__Open(
        ExpeditionConfirmDialogComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        bool isDecideSe,
        ExpeditionConfirmDialogComponent_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v13; // x24
  void *Instance; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct EventExpeditionEntity_o *v35; // x1
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  CommonConsumeEntity_o *v43; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v49; // x28
  System_String_o *v50; // x0
  int32_t v51; // w27
  __int64 v52; // x2
  int32_t v53; // w28
  int v54; // w27
  __int64 v55; // x1
  __int64 v56; // x2
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  const MethodInfo_476E8C0 *v64; // x0
  __int64 v65; // x2
  Il2CppObject *MasterData_object; // x26
  float v67; // s1
  float v68; // s0 OVERLAPPED
  float v69; // s2
  float v70; // s3
  __int64 v71; // x1
  __int64 v72; // x2
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v74; // x27
  Il2CppObject *Name; // x0
  __int64 v76; // x2
  ExpeditionConfirmDialogComponent___c_c *v77; // x8
  System_Collections_Generic_List_object__o *v78; // x25
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v81; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t *v89; // x25
  ItemMaster_o *v90; // x26
  __int64 v91; // x1
  __int64 v92; // x2
  LocalizationManager_c *v93; // x0
  __int64 *v94; // x19
  System_String_o *v95; // x0
  int32_t v96; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v98; // x25
  System_String_o *v99; // x0
  int32_t v100; // w25
  __int64 v101; // x2
  int32_t v102; // w26
  int v103; // w25
  __int64 v104; // x2
  Il2CppObject *v105; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v107; // x26
  __int64 v108; // x2
  UISprite_o *acquiredPointIcon; // x24
  int32_t v110; // w25
  __int64 v111; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v113; // w23
  int v114; // w23
  System_Action_o *v115; // x21
  bool v116; // [xsp+10h] [xbp-70h]
  bool v117; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59324E8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_viewDogIcon__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Comparison_GiftEntity__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_21FFC50(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_21FFC50(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_21FFC50(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_21FFC50(&StringLiteral_6020/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_6017/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_21FFC50(&StringLiteral_6019/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_21FFC50(&StringLiteral_6016/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_6024/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_21FFC50(&StringLiteral_6025/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_6021/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_59324E8 = 1;
  }
  entity = 0;
  v13 = sub_21FFEBC(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_100;
  *(_QWORD *)(v13 + 24) = eventExpeditionEntity;
  v22 = v13 + 24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v13 + 24),
    (int32_t)eventExpeditionEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v13 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v23, v24, v25, v26, v27, v28);
  v35 = *(struct EventExpeditionEntity_o **)(v13 + 24);
  if ( !v35 )
    return;
  v116 = isDecideSe;
  v117 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentExpeditionEntity,
    (int32_t)v35,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v22 || !Instance )
    goto LABEL_100;
  v43 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v22 + 36LL), 1, 0);
  if ( v43 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v43->fields.objectId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36, v37);
    AtlasManager__SetItem(consumIcon, objectId, 0);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
    v50 = System_Int32__ToString((int)v43 + 32, 0);
    Instance = System_String__Concat_75438412(v49, v50, 0);
    if ( !consumptionNumLabel )
      goto LABEL_100;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0);
    Instance = this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_100;
    v51 = *((_DWORD *)Instance + 42);
    Instance = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)Instance,
                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_100;
    v53 = *((_DWORD *)Instance + 14);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v52);
    Instance = (void *)System_Math__Min_76940292(v51, v53, 0);
    if ( !this->fields.consumIcon )
      goto LABEL_100;
    v54 = (int)Instance;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0);
    if ( !Instance )
      goto LABEL_100;
    v119.fields.y = 1.0;
    v119.fields.z = 1.0;
    v119.fields.x = -(float)v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v119, 0);
  }
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v37, v38, v39, v40, v41, v42);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6024/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6021/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  if ( !dialogDescriptionLabel )
    goto LABEL_100;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6019/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_100;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6017/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0);
  if ( !acquiredRewardLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6016/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0);
  if ( !acquiredPointLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_100;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6020/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_100;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0);
  v64 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_BYTE *)(v13 + 40) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v64);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v65);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v65);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v43 || !MasterData_object )
    goto LABEL_100;
  Instance = (void *)UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)MasterData_object,
                       &entity,
                       *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                       v43->fields.objectId,
                       0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_42;
  if ( !entity )
    goto LABEL_100;
  if ( v43->fields.num <= entity->fields.num )
  {
    v67 = 0.0;
    v68 = 1.0;
    if ( !*(_BYTE *)(v13 + 40) )
      v67 = 1.0;
  }
  else
  {
LABEL_42:
    v67 = 0.0;
    v68 = 1.0;
    *(_BYTE *)(v13 + 40) = 1;
  }
  Instance = this->fields.consumptionNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v69 = v67;
  v70 = v68;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v68, 0);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71, v72);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_6025/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v43, 0);
  Instance = System_String__Format(v74, Name, 0);
  if ( !confirmationWarningLabel )
    goto LABEL_100;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_100;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v13 + 40), 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v22 || !Instance )
    goto LABEL_100;
  Instance = GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v22 + 40LL), 0);
  v77 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v78 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, v15, v76);
    v77 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v77->static_fields;
  _9__26_0 = (System_Comparison_T__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !*(&v77->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v77, v15, v76);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v81, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0);
    v82 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v82->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v82->__9__26_0, (int32_t)_9__26_0, v83, v84, v85, v86, v87, v88);
  }
  if ( !v78 )
LABEL_100:
    sub_21FFECC(Instance, v15);
  System_Collections_Generic_List_object___Sort_71636404(
    v78,
    _9__26_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v78->fields._size < 1 )
    goto LABEL_72;
  Instance = System_Collections_Generic_List_object___get_Item(
               v78,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_100;
  v89 = (int32_t *)Instance;
  Instance = this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_100;
  ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)Instance, v89[5], v89[6], -1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_100;
  v90 = (ItemMaster_o *)Instance;
  if ( !ItemMaster__isQP((ItemMaster_o *)Instance, v89[6], 0) && !ItemMaster__isFriendPoint(v90, v89[6], 0) )
  {
    v93 = LocalizationManager_TypeInfo;
    v94 = &StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_70;
    goto LABEL_69;
  }
  v93 = LocalizationManager_TypeInfo;
  v94 = &StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_69:
    j_il2cpp_runtime_class_init_0(v93, v91, v92);
LABEL_70:
  v95 = LocalizationManager__Get((System_String_o *)*v94, 0);
  v96 = v89[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v98 = v95;
  v99 = BasicHelper__ToCommaString(v96, 0);
  Instance = System_String__Concat_75438412(v98, v99, 0);
  if ( !rewardNumLabel )
    goto LABEL_100;
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0);
LABEL_72:
  Instance = this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v100 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_100;
  v102 = *((_DWORD *)Instance + 14);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v101);
  Instance = (void *)System_Math__Min_76940292(v100, v102, 0);
  if ( !this->fields.rewardIcon )
    goto LABEL_100;
  v103 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0);
  if ( !Instance )
    goto LABEL_100;
  v120.fields.y = 1.0;
  v120.fields.z = 1.0;
  v120.fields.x = -(float)v103;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v120, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  v105 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v104);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v104);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v105 )
    goto LABEL_100;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v105,
    (UserEventExpeditionEntity_o **)(v13 + 16),
    *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
    this->fields.eventId,
    0);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v107 = (System_Action_object__o *)sub_21FFEBC(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v107,
    (Il2CppObject *)v13,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0);
  if ( !viewDogIcons )
    goto LABEL_100;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v107,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v22 )
    goto LABEL_100;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v110 = *(_DWORD *)(*(_QWORD *)v22 + 44LL);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v108);
  Instance = (void *)AtlasManager__SetItem(acquiredPointIcon, v110, 0);
  v111 = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22 )
    goto LABEL_100;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = BasicHelper__ToCommaString(*(_DWORD *)(v111 + 48), 0);
  if ( !acquiredPointNumLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v113 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_100;
  Instance = (void *)System_Math__Min_76940292(v113, *((_DWORD *)Instance + 14), 0);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_100;
  v114 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0);
  if ( !Instance )
    goto LABEL_100;
  v121.fields.y = 1.0;
  v121.fields.z = 1.0;
  v121.fields.x = -(float)v114;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v121, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v116;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v117, 0);
  v115 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v115, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v115, maskType, 0, 0);
}


void ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent_o *v2; // x19

  v2 = this;
  if ( (byte_59324E9 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_59324E9 = 1;
  }
  if ( !v2->fields.eventExpeditionPieceEntityList )
    sub_21FFECC(this, method);
}


UnityEngine_GameObject_o *ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_59324EE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59324EE = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0, 0) )
    return 0;
  v7 = this->fields.buttonCancel;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_GameObject__get_gameObject(v7, 0);
}


void ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC754;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEC6F4;
}


System_IAsyncResult_o *ExpeditionConfirmDialogComponent_ClickDelegate__BeginInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v13; // [xsp+10h] [xbp-50h]
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v15[0] = isDecide;
  v14 = pieceIdx;
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(qword_594C050, v15);
  v12[1] = eventExpeditionEntity;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(qword_594C070, &v14);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v12, callback, object);
}


void ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ExpeditionConfirmDialogComponent_ClickDelegate__Invoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, EventExpeditionEntity_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    eventExpeditionEntity,
    pieceIdx,
    this->fields.method);
}


void ExpeditionConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59324F0 & 1) == 0 )
  {
    sub_21FFC50(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_59324F0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExpeditionConfirmDialogComponent___c___ctor(
        ExpeditionConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExpeditionConfirmDialogComponent___c___GetCurrentSelectPieceIdx_b__28_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._IsSelect_k__BackingField;
}


int32_t ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


void ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_21FFECC(this, 0);
  viewDogIcon__IsSelectSetFalse(y, (const MethodInfo *)y);
}


void ExpeditionConfirmDialogComponent___c__DisplayClass26_0___ctor(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__1(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        viewDogIcon_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v5; // x20
  struct UserEventExpeditionEntity_o *userEventExpeditionEntity; // x8
  struct ExpeditionInfo_array *expeditionInfos; // x8
  int max_length; // w9
  int v9; // w10
  ExpeditionInfo_o *v10; // x13
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x14
  struct EventExpeditionEntity_o *eventExpeditionEntity; // x8
  struct System_Int32_array *changePieceIdxs; // x12
  float durationSec; // s8
  struct EventExpeditionPieceEntity_o *v15; // x11
  int32_t idx; // w11
  unsigned __int64 v17; // x9
  int32_t v18; // w21
  __int64 v19; // x10
  int32_t *m_Items; // x12
  struct System_Int32_array *changeDurationRates; // x15
  int v22; // w15
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  int32_t eventId; // w22
  System_Action_o *_9__2; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w2

  v5 = this;
  if ( (byte_59324F1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_21FFC50(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_59324F1 = 1;
  }
  userEventExpeditionEntity = v5->fields.userEventExpeditionEntity;
  if ( userEventExpeditionEntity )
  {
    expeditionInfos = userEventExpeditionEntity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_35;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( max_length == v9 )
LABEL_36:
          sub_21FFED4(this);
        v10 = expeditionInfos->m_Items[v9];
        if ( !v10 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( v10->fields.pieceIdx == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          x->fields._IsDoingTheExpedition_k__BackingField = 1;
        if ( (max_length & ~(max_length >> 31)) == ++v9 )
          goto LABEL_14;
      }
LABEL_35:
      sub_21FFECC(this, x);
    }
  }
LABEL_14:
  eventExpeditionEntity = v5->fields.eventExpeditionEntity;
  if ( !eventExpeditionEntity )
    goto LABEL_35;
  changePieceIdxs = eventExpeditionEntity->fields.changePieceIdxs;
  if ( !changePieceIdxs )
    goto LABEL_35;
  durationSec = (float)eventExpeditionEntity->fields.durationSec;
  if ( (int)changePieceIdxs->max_length >= 1 )
  {
    if ( x )
    {
      v15 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      if ( v15 )
      {
        idx = v15->fields.idx;
        v17 = 0;
        v18 = 0;
        v19 = (unsigned int)changePieceIdxs->max_length;
        m_Items = changePieceIdxs->m_Items;
        while ( 1 )
        {
          if ( idx == m_Items[v17] )
          {
            changeDurationRates = eventExpeditionEntity->fields.changeDurationRates;
            if ( !changeDurationRates )
              goto LABEL_35;
            if ( v17 >= LODWORD(changeDurationRates->max_length) )
              goto LABEL_36;
            v22 = changeDurationRates->m_Items[v17];
            v18 = v22 / -10 + 100;
            durationSec = durationSec * (float)((float)v22 / 1000.0);
          }
          if ( v19 == ++v17 )
            goto LABEL_27;
        }
      }
    }
    goto LABEL_35;
  }
  v18 = 0;
LABEL_27:
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  eventId = _4__this->fields.eventId;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0);
    v5->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.__9__2, (int32_t)_9__2, v26, v27, v28, v29, v30, v31);
  }
  if ( !x )
    goto LABEL_35;
  if ( durationSec == INFINITY )
    v32 = 0x80000000;
  else
    v32 = (int)durationSec;
  viewDogIcon__Set(x, v18, v32, eventId, _9__2, v3);
}


void ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v3; // x19
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  void *userEventExpeditionEntity; // x8
  System_Action_object__o *v7; // x21
  Il2CppObject *v8; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ExpeditionConfirmDialogComponent_o *v16; // x8

  v3 = this;
  if ( (byte_59324F2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_viewDogIcon__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_21FFC50(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_21FFC50(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_59324F2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  viewDogIcons = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDogIcons;
  this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( !*(&ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, method, v2);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  userEventExpeditionEntity = this[3].fields.userEventExpeditionEntity;
  v7 = (System_Action_object__o *)*((_QWORD *)userEventExpeditionEntity + 2);
  if ( !v7 )
  {
    if ( !HIDWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v2);
      userEventExpeditionEntity = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v8 = *(Il2CppObject **)userEventExpeditionEntity;
    v7 = (System_Action_object__o *)sub_21FFEBC(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__26_3,
      (int32_t)v7,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)v7,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v16 = v3->fields.__4__this) == 0)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v16->fields.buttonDecide) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0)) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_16:
    sub_21FFECC(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v3->fields.isWarning,
    this->klass[1]._1.namespaze);
}