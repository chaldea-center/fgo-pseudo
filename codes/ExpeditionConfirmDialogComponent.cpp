void ExpeditionConfirmDialogComponent___ctor(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A5EE & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A5EE = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExpeditionConfirmDialogComponent__Close(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_38186320(this, 0, v2);
}


void ExpeditionConfirmDialogComponent__Close_38186320(
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

  if ( (byte_596A5EA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_596A5EA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
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
  v11 = (System_Action_o *)sub_2213CCC(v10);
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
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
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
  Il2CppObject *object__59245928; // x0
  __int64 v17; // x1
  _DWORD *monitor; // x8

  if ( (byte_596A5E9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_2213A60(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_2213A60(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_596A5E9 = 1;
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
    _9__28_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v8,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0);
    v9 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v9->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__28_0, (int32_t)_9__28_0, v10, v11, v12, v13, v14, v15);
  }
  object__59245928 = System_Linq_Enumerable__First_object__59245928(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_3880568 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__59245928 || (monitor = object__59245928[10].monitor) == 0 )
    sub_2213CDC(object__59245928, v17);
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

  if ( (byte_596A5E6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5E6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList((EventExpeditionPieceMaster_o *)Instance, eventId, 0);
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_2213A04(
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
                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0
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
    sub_2213CDC(Instance, v6);
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
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( this->fields.eventExpeditionPieceEntityList )
      {
        v17 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)this->fields.eventExpeditionPieceEntityList,
                                      v16,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
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

  if ( (byte_596A5EC & 1) == 0 )
  {
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    byte_596A5EC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        0,
        0,
        clickFunc->fields.method);
    ExpeditionConfirmDialogComponent__Close_38186320(this, 0, v5);
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

  if ( (byte_596A5EB & 1) == 0 )
  {
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    byte_596A5EB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    v4 = 8 * this->fields.isDecideBtnSe;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  const MethodInfo_47A29F8 *v64; // x0
  __int64 v65; // x2
  Il2CppObject *MasterData_object; // x26
  __int64 v68; // x1
  __int64 v69; // x2
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v71; // x27
  Il2CppObject *Name; // x0
  __int64 v73; // x2
  ExpeditionConfirmDialogComponent___c_c *v74; // x8
  System_Collections_Generic_List_object__o *v75; // x25
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v78; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t *v86; // x25
  ItemMaster_o *v87; // x26
  __int64 v88; // x1
  __int64 v89; // x2
  LocalizationManager_c *v90; // x0
  __int64 *v91; // x19
  System_String_o *v92; // x0
  int32_t v93; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v95; // x25
  System_String_o *v96; // x0
  int32_t v97; // w25
  __int64 v98; // x2
  int32_t v99; // w26
  int v100; // w25
  __int64 v101; // x2
  Il2CppObject *v102; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v104; // x26
  __int64 v105; // x2
  UISprite_o *acquiredPointIcon; // x24
  int32_t v107; // w25
  __int64 v108; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v110; // w23
  int v111; // w23
  System_Action_o *v112; // x21
  bool v113; // [xsp+10h] [xbp-70h]
  bool v114; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A5E7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_viewDogIcon__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&System_Comparison_GiftEntity__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_2213A60(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_2213A60(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_3842/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_2213A60(&StringLiteral_6032/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_6029/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_2213A60(&StringLiteral_6031/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_2213A60(&StringLiteral_6028/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_6036/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3843/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_2213A60(&StringLiteral_6037/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_6033/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_596A5E7 = 1;
  }
  entity = 0;
  v13 = sub_2213CCC(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_100;
  *(_QWORD *)(v13 + 24) = eventExpeditionEntity;
  v22 = v13 + 24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v13 + 24),
    (int32_t)eventExpeditionEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v13 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v23, v24, v25, v26, v27, v28);
  v35 = *(struct EventExpeditionEntity_o **)(v13 + 24);
  if ( !v35 )
    return;
  v113 = isDecideSe;
  v114 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentExpeditionEntity,
    (int32_t)v35,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3842/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
    v50 = System_Int32__ToString((int)v43 + 32, 0);
    Instance = System_String__Concat_75651716(v49, v50, 0);
    if ( !consumptionNumLabel )
      goto LABEL_100;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0);
    Instance = this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_100;
    v51 = *((_DWORD *)Instance + 42);
    Instance = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)Instance,
                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_100;
    v53 = *((_DWORD *)Instance + 14);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v52);
    Instance = (void *)System_Math__Min_77153596(v51, v53, 0);
    if ( !this->fields.consumIcon )
      goto LABEL_100;
    v54 = (int)Instance;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0);
    if ( !Instance )
      goto LABEL_100;
    v116.fields.y = 1.0;
    v116.fields.z = 1.0;
    v116.fields.x = -(float)v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v116, 0);
  }
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v37, v38, v39, v40, v41, v42);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6036/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6033/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  if ( !dialogDescriptionLabel )
    goto LABEL_100;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6031/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_100;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6029/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0);
  if ( !acquiredRewardLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6028/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0);
  if ( !acquiredPointLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_100;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6032/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_100;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0);
  v64 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_BYTE *)(v13 + 40) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v64);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v65);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
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
    v119.fields.g = 0.0;
    v119.fields.r = 1.0;
    if ( !*(_BYTE *)(v13 + 40) )
      v119.fields.g = 1.0;
  }
  else
  {
LABEL_42:
    v119.fields.g = 0.0;
    v119.fields.r = 1.0;
    *(_BYTE *)(v13 + 40) = 1;
  }
  Instance = this->fields.consumptionNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v119.fields.b = v119.fields.g;
  v119.fields.a = v119.fields.r;
  UIWidget__set_color((UIWidget_o *)Instance, v119, 0);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68, v69);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6037/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v43, 0);
  Instance = System_String__Format(v71, Name, 0);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v22 || !Instance )
    goto LABEL_100;
  Instance = GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v22 + 40LL), 0);
  v74 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v75 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, v15, v73);
    v74 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  static_fields = v74->static_fields;
  _9__26_0 = (System_Comparison_T__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !*(&v74->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v74, v15, v73);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v78, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0);
    v79 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v79->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->__9__26_0, (int32_t)_9__26_0, v80, v81, v82, v83, v84, v85);
  }
  if ( !v75 )
LABEL_100:
    sub_2213CDC(Instance, v15);
  System_Collections_Generic_List_object___Sort_71849708(
    v75,
    _9__26_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v75->fields._size < 1 )
    goto LABEL_72;
  Instance = System_Collections_Generic_List_object___get_Item(
               v75,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_100;
  v86 = (int32_t *)Instance;
  Instance = this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_100;
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v86[5], v86[6], -1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_100;
  v87 = (ItemMaster_o *)Instance;
  if ( !ItemMaster__isQP((ItemMaster_o *)Instance, v86[6], 0) && !ItemMaster__isFriendPoint(v87, v86[6], 0) )
  {
    v90 = LocalizationManager_TypeInfo;
    v91 = &StringLiteral_3842/*"COMMON_COUNT_OPERATOR_CROSS"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_70;
    goto LABEL_69;
  }
  v90 = LocalizationManager_TypeInfo;
  v91 = &StringLiteral_3843/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_69:
    j_il2cpp_runtime_class_init_0(v90, v88, v89);
LABEL_70:
  v92 = LocalizationManager__Get((System_String_o *)*v91, 0);
  v93 = v86[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v95 = v92;
  v96 = BasicHelper__ToCommaString(v93, 0);
  Instance = System_String__Concat_75651716(v95, v96, 0);
  if ( !rewardNumLabel )
    goto LABEL_100;
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0);
LABEL_72:
  Instance = this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v97 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_100;
  v99 = *((_DWORD *)Instance + 14);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v98);
  Instance = (void *)System_Math__Min_77153596(v97, v99, 0);
  if ( !this->fields.rewardIcon )
    goto LABEL_100;
  v100 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0);
  if ( !Instance )
    goto LABEL_100;
  v117.fields.y = 1.0;
  v117.fields.z = 1.0;
  v117.fields.x = -(float)v100;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v117, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  v102 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v101);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v101);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v102 )
    goto LABEL_100;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v102,
    (UserEventExpeditionEntity_o **)(v13 + 16),
    *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
    this->fields.eventId,
    0);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v104 = (System_Action_object__o *)sub_2213CCC(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v104,
    (Il2CppObject *)v13,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0);
  if ( !viewDogIcons )
    goto LABEL_100;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v104,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v22 )
    goto LABEL_100;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v107 = *(_DWORD *)(*(_QWORD *)v22 + 44LL);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v105);
  Instance = (void *)AtlasManager__SetItem(acquiredPointIcon, v107, 0);
  v108 = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22 )
    goto LABEL_100;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = BasicHelper__ToCommaString(*(_DWORD *)(v108 + 48), 0);
  if ( !acquiredPointNumLabel )
    goto LABEL_100;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_100;
  v110 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_100;
  Instance = (void *)System_Math__Min_77153596(v110, *((_DWORD *)Instance + 14), 0);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_100;
  v111 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0);
  if ( !Instance )
    goto LABEL_100;
  v118.fields.y = 1.0;
  v118.fields.z = 1.0;
  v118.fields.x = -(float)v111;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v118, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v113;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v114, 0);
  v112 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v112, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v112, maskType, 0, 0);
}


void ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent_o *v2; // x19

  v2 = this;
  if ( (byte_596A5E8 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_596A5E8 = 1;
  }
  if ( !v2->fields.eventExpeditionPieceEntityList )
    sub_2213CDC(this, method);
}


UnityEngine_GameObject_o *ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596A5ED & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A5ED = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0, 0) )
    return 0;
  v7 = this->fields.buttonCancel;
  if ( !v7 )
    sub_2213CDC(0, v5);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFF5E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFF580;
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
  v12[0] = j_il2cpp_value_box_0(qword_5984328, v15);
  v12[1] = eventExpeditionEntity;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(qword_5984348, &v14);
  return sub_2213A14(this, v12, callback, object);
}


void ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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

  if ( (byte_596A5EF & 1) == 0 )
  {
    sub_2213A60(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_596A5EF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_2213A04(
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
    sub_2213CDC(this, 0);
  return x->fields._IsSelect_k__BackingField;
}


int32_t ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


void ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_2213CDC(this, 0);
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
  if ( (byte_596A5F0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_2213A60(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_596A5F0 = 1;
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
          sub_2213CE4(this);
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
      sub_2213CDC(this, x);
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
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0);
    v5->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.__9__2, (int32_t)_9__2, v26, v27, v28, v29, v30, v31);
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
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__26_3; // x21
  Il2CppObject *v8; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ExpeditionConfirmDialogComponent_o *v16; // x8

  v3 = this;
  if ( (byte_596A5F1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_viewDogIcon__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_2213A60(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_2213A60(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_596A5F1 = 1;
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
  static_fields = (struct ExpeditionConfirmDialogComponent___c_StaticFields *)*((_QWORD *)this + 23);
  _9__26_3 = (System_Action_object__o *)static_fields->__9__26_3;
  if ( !_9__26_3 )
  {
    if ( !*((_DWORD *)this + 57) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v2);
      static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__26_3 = (System_Action_object__o *)sub_2213CCC(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(_9__26_3, v8, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0);
    v9 = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    v9->__9__26_3 = (struct System_Action_viewDogIcon__o *)_9__26_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__26_3, (int32_t)_9__26_3, v10, v11, v12, v13, v14, v15);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)_9__26_3,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v16 = v3->fields.__4__this) == 0)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v16->fields.buttonDecide) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0)) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_16:
    sub_2213CDC(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v3->fields.isWarning,
    this->klass[1]._1.namespaze);
}