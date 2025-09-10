void ExpeditionConfirmDialogComponent___ctor(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C21614 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21614 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExpeditionConfirmDialogComponent__Close(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_31548908(this, 0, v2);
}


void ExpeditionConfirmDialogComponent__Close_31548908(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C21610 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_4C21610 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ExpeditionConfirmDialogComponent__EndClose(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C2D434(p_closeCallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
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
  ExpeditionConfirmDialogComponent___c_c *v3; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v6; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  Il2CppObject *object__51338124; // x0
  __int64 v9; // x1
  _DWORD *monitor; // x8

  if ( (byte_4C2160F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_1C2D490(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_1C2D490(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C2160F = 1;
  }
  v3 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  viewDogIcons = this->fields.viewDogIcons;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v3 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__bool__o *)v3->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__28_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v6,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1C2D434(&static_fields->__9__28_0);
  }
  object__51338124 = System_Linq_Enumerable__First_object__51338124(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_30F5B8C *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__51338124 || (monitor = object__51338124[10].monitor) == 0 )
    sub_1C2D6EC(object__51338124, v9);
  return monitor[5];
}


void ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x8
  int32_t v10; // w21
  viewDogIcon_o *v11; // x22

  if ( (byte_4C2160C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2160C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                                                  (EventExpeditionPieceMaster_o *)Instance,
                                                  eventId,
                                                  0);
  sub_1C2D434(&this->fields.eventExpeditionPieceEntityList);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v8);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(DataManager_o *, _QWORD, const char *))Instance->klass[1]._1.name)(
          Instance,
          0,
          Instance->klass[1]._1.namespaze),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (v9 = *p_eventExpeditionPieceEntityList) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(Instance, v6);
  }
  v10 = 0;
  while ( v10 < v9->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v10,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v11 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v10,
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v11 )
        {
          viewDogIcon__Init(v11, (EventExpeditionPieceEntity_o *)Instance, 0);
          v9 = *p_eventExpeditionPieceEntityList;
          ++v10;
          if ( *p_eventExpeditionPieceEntityList )
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

  if ( (byte_4C21612 & 1) == 0 )
  {
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    byte_4C21612 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        0,
        0,
        clickFunc->fields.method);
    ExpeditionConfirmDialogComponent__Close_31548908(this, 0, v5);
  }
}


void ExpeditionConfirmDialogComponent__OnClickDecide(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x21
  struct EventExpeditionEntity_o *currentExpeditionEntity; // x20
  unsigned int CurrentSelectPieceIdx; // w0

  if ( (byte_4C21611 & 1) == 0 )
  {
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    byte_4C21611 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0);
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
  __int64 Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x23
  CommonConsumeEntity_o *v17; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v21; // x28
  System_String_o *v22; // x0
  int32_t v23; // w27
  int32_t v24; // w28
  int v25; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v34; // s0 OVERLAPPED
  float v35; // s1
  float v36; // s2
  float v37; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v39; // x27
  Il2CppObject *Name; // x0
  ExpeditionConfirmDialogComponent___c_c *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v44; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t *v46; // x25
  ItemMaster_o *v47; // x26
  __int64 *v48; // x8
  System_String_o *v49; // x0
  int32_t v50; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v52; // x25
  System_String_o *v53; // x0
  int32_t v54; // w25
  int32_t v55; // w26
  int v56; // w25
  Il2CppObject *v57; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v59; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v61; // w25
  __int64 v62; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v64; // w23
  int v65; // w23
  System_Action_o *v66; // x21
  bool v67; // [xsp+10h] [xbp-70h]
  bool v68; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2160D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_viewDogIcon__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_1C2D490(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_1C2D490(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_1C2D490(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_1C2D490(&StringLiteral_5792/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_5789/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_1C2D490(&StringLiteral_5791/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_1C2D490(&StringLiteral_5788/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5796/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3693/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_1C2D490(&StringLiteral_5797/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_5793/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4C2160D = 1;
  }
  v13 = sub_1C2D6DC(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_103;
  *(_QWORD *)(v13 + 24) = eventExpeditionEntity;
  v16 = v13 + 24;
  sub_1C2D434(v13 + 24);
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2D434(v13 + 32);
  if ( !*(_QWORD *)(v13 + 24) )
    return;
  v67 = isDecideSe;
  v68 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = *(struct EventExpeditionEntity_o **)(v13 + 24);
  sub_1C2D434(&this->fields.currentExpeditionEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v16 || !Instance )
    goto LABEL_103;
  v17 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v16 + 36LL), 1, 0);
  if ( v17 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v17->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
    v22 = System_Int32__ToString((int)v17 + 32, 0);
    Instance = (__int64)System_String__Concat_63457864(v21, v22, 0);
    if ( !consumptionNumLabel )
      goto LABEL_103;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_103;
    v23 = *(_DWORD *)(Instance + 168);
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_103;
    v24 = *(_DWORD *)(Instance + 56);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_64982368(v23, v24, 0);
    if ( !this->fields.consumIcon )
      goto LABEL_103;
    v25 = Instance;
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0);
    if ( !Instance )
      goto LABEL_103;
    v70.fields.x = -(float)v25;
    v70.fields.y = 1.0;
    v70.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v70, 0);
  }
  this->fields.clickFunc = func;
  sub_1C2D434(&this->fields.clickFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5796/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5793/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  if ( !dialogDescriptionLabel )
    goto LABEL_103;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_103;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0);
  if ( !acquiredRewardLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0);
  if ( !acquiredPointLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_103;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5792/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_103;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0);
  *(_BYTE *)(v13 + 40) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v17 || !MasterData_object )
    goto LABEL_103;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               v17->fields.objectId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_42;
  if ( !entity )
    goto LABEL_103;
  if ( v17->fields.num > entity->fields.num )
  {
LABEL_42:
    *(_BYTE *)(v13 + 40) = 1;
    Instance = (__int64)this->fields.consumptionNumLabel;
LABEL_43:
    v34 = 1.0;
    v35 = 0.0;
    goto LABEL_44;
  }
  Instance = (__int64)this->fields.consumptionNumLabel;
  if ( *(_BYTE *)(v13 + 40) )
    goto LABEL_43;
  v34 = 1.0;
  v35 = 1.0;
LABEL_44:
  if ( !Instance )
    goto LABEL_103;
  v36 = v35;
  v37 = v34;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v34, 0);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5797/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v17, 0);
  Instance = (__int64)System_String__Format(v39, Name, 0);
  if ( !confirmationWarningLabel )
    goto LABEL_103;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v13 + 40), 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v16 || !Instance )
    goto LABEL_103;
  Instance = (__int64)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v16 + 40LL), 0);
  v41 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v41 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v41->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v44, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    Instance = sub_1C2D434(&static_fields->__9__26_0);
  }
  if ( !v42 )
    goto LABEL_103;
  System_Collections_Generic_List_object___Sort_58242632(
    v42,
    _9__26_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v42->fields._size < 1 )
    goto LABEL_77;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v42,
                        0,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_103;
  v46 = (int32_t *)Instance;
  Instance = (__int64)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_103;
  ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v46[5], v46[6], -1, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_103;
  v47 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v46[6], 0) || ItemMaster__isFriendPoint(v47, v46[6], 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = &StringLiteral_3693/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = &StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v49 = LocalizationManager__Get((System_String_o *)*v48, 0);
  v50 = v46[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v52 = v49;
  v53 = BasicHelper__ToCommaString(v50, 0);
  Instance = (__int64)System_String__Concat_63457864(v52, v53, 0);
  if ( !rewardNumLabel )
LABEL_103:
    sub_1C2D6EC(Instance, v15);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0);
LABEL_77:
  Instance = (__int64)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v54 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  v55 = *(_DWORD *)(Instance + 56);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_64982368(v54, v55, 0);
  if ( !this->fields.rewardIcon )
    goto LABEL_103;
  v56 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0);
  if ( !Instance )
    goto LABEL_103;
  v71.fields.x = -(float)v56;
  v71.fields.y = 1.0;
  v71.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v71, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  v57 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v57 )
    goto LABEL_103;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v57,
    (UserEventExpeditionEntity_o **)(v13 + 16),
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    this->fields.eventId,
    0);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v59 = (System_Action_object__o *)sub_1C2D6DC(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v59,
    (Il2CppObject *)v13,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0);
  if ( !viewDogIcons )
    goto LABEL_103;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v59,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v16 )
    goto LABEL_103;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v61 = *(_DWORD *)(*(_QWORD *)v16 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v61, 0);
  v62 = *(_QWORD *)v16;
  if ( !*(_QWORD *)v16 )
    goto LABEL_103;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (__int64)BasicHelper__ToCommaString(*(_DWORD *)(v62 + 48), 0);
  if ( !acquiredPointNumLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v64 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  Instance = System_Math__Min_64982368(v64, *(_DWORD *)(Instance + 56), 0);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_103;
  v65 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0);
  if ( !Instance )
    goto LABEL_103;
  v72.fields.x = -(float)v65;
  v72.fields.y = 1.0;
  v72.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v72, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v67;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v68, 0);
  v66 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v66, maskType, 0);
}


void ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent_o *v2; // x19
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_4C2160E & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_4C2160E = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1C2D6EC(this, method);
  size = eventExpeditionPieceEntityList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


UnityEngine_GameObject_o *ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C21613 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21613 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0, 0) )
    return 0;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0);
}


void ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A692E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69280;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ExpeditionConfirmDialogComponent_ClickDelegate__BeginInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v16; // [xsp+10h] [xbp-60h]
  int32_t v17; // [xsp+28h] [xbp-48h] BYREF
  bool v18[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v18[0] = isDecide;
  v17 = pieceIdx;
  if ( (byte_4C21615 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C21615 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(bool_TypeInfo, v18, eventExpeditionEntity, *(_QWORD *)&pieceIdx, callback);
  v15[1] = eventExpeditionEntity;
  *(_QWORD *)&v16 = j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v15, callback, object);
}


void ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C21616 & 1) == 0 )
  {
    sub_1C2D490(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C21616 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_1C2D434(ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, 0);
  return x->fields._IsSelect_k__BackingField;
}


int32_t ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


void ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C2D6EC(this, 0);
  viewDogIcon__IsSelectSetFalse(y, 0);
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
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v8; // w8
  unsigned int v9; // w22
  __int64 v10; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v13; // x12
  __int64 v14; // x10
  int32_t v15; // w21
  float v16; // s8
  struct EventExpeditionPieceEntity_o *v17; // x11
  unsigned __int64 v18; // x9
  __int64 v19; // x10
  __int64 v20; // x12
  __int64 v21; // x15
  __int64 v22; // x15
  Il2CppClass *v23; // x8
  int32_t thread_static_fields_offset; // w22
  System_Action_o *v25; // x23
  int32_t v26; // w2

  v5 = (Il2CppObject *)this;
  if ( (byte_4C21617 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C2D490(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_4C21617 = 1;
  }
  klass = v5[1].klass;
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
LABEL_35:
          sub_1C2D6F4(this, x, method, v3);
        v10 = *(_QWORD *)&data[2 * v9 + 8];
        if ( !v10 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v10 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0);
        v8 = data[6];
        if ( (int)++v9 >= v8 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1C2D6EC(this, x);
    }
  }
LABEL_14:
  monitor = (int *)v5[1].monitor;
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
      v18 = 0;
      v15 = 0;
      v19 = (unsigned int)*(_QWORD *)(v13 + 24);
      v20 = v13 + 32;
      while ( v17 )
      {
        if ( v17->fields.idx == *(_DWORD *)(v20 + 4 * v18) )
        {
          v21 = *((_QWORD *)monitor + 8);
          if ( !v21 )
            goto LABEL_34;
          if ( v18 >= *(unsigned int *)(v21 + 24) )
            goto LABEL_35;
          v22 = *(int *)(v21 + 4 * v18 + 32);
          v15 = ((unsigned int)((unsigned __int64)(-1717986919 * v22) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v22) >> 32) >> 2)
              + 100;
          v16 = v16 * (float)((float)(int)v22 / 1000.0);
        }
        if ( v19 == ++v18 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v23 = v5[2].klass;
  if ( !v23 )
    goto LABEL_34;
  thread_static_fields_offset = v23->_2.thread_static_fields_offset;
  v25 = (System_Action_o *)v5[3].klass;
  if ( !v25 )
  {
    v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v25, v5, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0);
    v5[3].klass = (Il2CppClass *)v25;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C2D434(&v5[3]);
  }
  if ( !x )
    goto LABEL_34;
  if ( v16 == INFINITY )
    v26 = 0x80000000;
  else
    v26 = (int)v16;
  viewDogIcon__Set(x, v15, v26, thread_static_fields_offset, v25, 0);
}


void ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v2; // x19
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  System_Action_object__o *userId; // x21
  Il2CppObject *klass; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v8; // x8

  v2 = this;
  if ( (byte_4C21618 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_viewDogIcon__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C2D490(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1C2D490(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C2D490(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C21618 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  viewDogIcons = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDogIcons;
  this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  userId = (System_Action_object__o *)this[3].fields.userEventExpeditionEntity->fields.userId;
  if ( !userId )
  {
    if ( !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[3].fields.userEventExpeditionEntity->klass;
    userId = (System_Action_object__o *)sub_1C2D6DC(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C2D434(&static_fields->__9__26_3);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v8 = v2->fields.__4__this) == 0)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v8->fields.buttonDecide) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0)) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_16:
    sub_1C2D6EC(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.namespaze);
}