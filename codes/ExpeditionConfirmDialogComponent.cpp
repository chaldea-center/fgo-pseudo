void ExpeditionConfirmDialogComponent___ctor(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5104D & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5104D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExpeditionConfirmDialogComponent__Close(ExpeditionConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_31787864(this, 0, v2);
}


void ExpeditionConfirmDialogComponent__Close_31787864(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C51049 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_4C51049 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3E508(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
    sub_1C3E7C0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C3E508(p_closeCallbackFunc, 0);
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
  Il2CppObject *object__51514760; // x0
  __int64 v9; // x1
  _DWORD *monitor; // x8

  if ( (byte_4C51048 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_1C3E564(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_1C3E564(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C51048 = 1;
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
    _9__28_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v6,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1C3E508(&static_fields->__9__28_0, _9__28_0);
  }
  object__51514760 = System_Linq_Enumerable__First_object__51514760(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_3120D88 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__51514760 || (monitor = object__51514760[10].monitor) == 0 )
    sub_1C3E7C0(object__51514760, v9);
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
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *v10; // x8
  int32_t v11; // w21
  viewDogIcon_o *v12; // x22

  if ( (byte_4C51045 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C51045 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList((EventExpeditionPieceMaster_o *)Instance, eventId, 0);
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_1C3E508(&this->fields.eventExpeditionPieceEntityList, PieceEntityList);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v9);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(DataManager_o *, _QWORD, const char *))Instance->klass[1]._1.name)(
          Instance,
          0,
          Instance->klass[1]._1.namespaze),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (v10 = *p_eventExpeditionPieceEntityList) == 0) )
  {
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  }
  v11 = 0;
  while ( v11 < v10->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v11,
                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v12 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v11,
                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v12 )
        {
          viewDogIcon__Init(v12, (EventExpeditionPieceEntity_o *)Instance, 0);
          v10 = *p_eventExpeditionPieceEntityList;
          ++v11;
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

  if ( (byte_4C5104B & 1) == 0 )
  {
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    byte_4C5104B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        0,
        0,
        clickFunc->fields.method);
    ExpeditionConfirmDialogComponent__Close_31787864(this, 0, v5);
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

  if ( (byte_4C5104A & 1) == 0 )
  {
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    byte_4C5104A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
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
  struct EventExpeditionEntity_o *v17; // x1
  CommonConsumeEntity_o *v18; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v22; // x28
  System_String_o *v23; // x0
  int32_t v24; // w27
  int32_t v25; // w28
  int v26; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v35; // s0 OVERLAPPED
  float v36; // s1
  float v37; // s2
  float v38; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v40; // x27
  Il2CppObject *Name; // x0
  ExpeditionConfirmDialogComponent___c_c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v45; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t *v47; // x25
  ItemMaster_o *v48; // x26
  __int64 *v49; // x8
  System_String_o *v50; // x0
  int32_t v51; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v53; // x25
  System_String_o *v54; // x0
  int32_t v55; // w25
  int32_t v56; // w26
  int v57; // w25
  Il2CppObject *v58; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v60; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v62; // w25
  __int64 v63; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v65; // w23
  int v66; // w23
  System_Action_o *v67; // x21
  bool v68; // [xsp+10h] [xbp-70h]
  bool v69; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C51046 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_viewDogIcon__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_1C3E564(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_1C3E564(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_1C3E564(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_1C3E564(&StringLiteral_5801/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C3E564(&StringLiteral_5798/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_1C3E564(&StringLiteral_5800/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_1C3E564(&StringLiteral_5797/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_1C3E564(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C3E564(&StringLiteral_5805/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_3700/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_1C3E564(&StringLiteral_5806/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_5802/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4C51046 = 1;
  }
  v13 = sub_1C3E7B0(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_103;
  *(_QWORD *)(v13 + 24) = eventExpeditionEntity;
  v16 = v13 + 24;
  sub_1C3E508(v13 + 24, eventExpeditionEntity);
  *(_QWORD *)(v13 + 32) = this;
  sub_1C3E508(v13 + 32, this);
  v17 = *(struct EventExpeditionEntity_o **)(v13 + 24);
  if ( !v17 )
    return;
  v68 = isDecideSe;
  v69 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v17;
  sub_1C3E508(&this->fields.currentExpeditionEntity, v17);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v16 || !Instance )
    goto LABEL_103;
  v18 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v16 + 36LL), 1, 0);
  if ( v18 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v18->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
    v23 = System_Int32__ToString((int)v18 + 32, 0);
    Instance = (__int64)System_String__Concat_63636468(v22, v23, 0);
    if ( !consumptionNumLabel )
      goto LABEL_103;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_103;
    v24 = *(_DWORD *)(Instance + 168);
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_103;
    v25 = *(_DWORD *)(Instance + 56);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_65160228(v24, v25, 0);
    if ( !this->fields.consumIcon )
      goto LABEL_103;
    v26 = Instance;
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0);
    if ( !Instance )
      goto LABEL_103;
    v71.fields.x = -(float)v26;
    v71.fields.y = 1.0;
    v71.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v71, 0);
  }
  this->fields.clickFunc = func;
  sub_1C3E508(&this->fields.clickFunc, func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5802/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
  if ( !dialogDescriptionLabel )
    goto LABEL_103;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5800/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_103;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5798/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0);
  if ( !acquiredRewardLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5797/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0);
  if ( !acquiredPointLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_103;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_103;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0);
  *(_BYTE *)(v13 + 40) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v18 || !MasterData_object )
    goto LABEL_103;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               v18->fields.objectId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_42;
  if ( !entity )
    goto LABEL_103;
  if ( v18->fields.num > entity->fields.num )
  {
LABEL_42:
    *(_BYTE *)(v13 + 40) = 1;
    Instance = (__int64)this->fields.consumptionNumLabel;
LABEL_43:
    v35 = 1.0;
    v36 = 0.0;
    goto LABEL_44;
  }
  Instance = (__int64)this->fields.consumptionNumLabel;
  if ( *(_BYTE *)(v13 + 40) )
    goto LABEL_43;
  v35 = 1.0;
  v36 = 1.0;
LABEL_44:
  if ( !Instance )
    goto LABEL_103;
  v37 = v36;
  v38 = v35;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v35, 0);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v18, 0);
  Instance = (__int64)System_String__Format(v40, Name, 0);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v16 || !Instance )
    goto LABEL_103;
  Instance = (__int64)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v16 + 40LL), 0);
  v42 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v42 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v42->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v45, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    Instance = sub_1C3E508(&static_fields->__9__26_0, _9__26_0);
  }
  if ( !v43 )
    goto LABEL_103;
  System_Collections_Generic_List_object___Sort_58421028(
    v43,
    _9__26_0,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v43->fields._size < 1 )
    goto LABEL_77;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v43,
                        0,
                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_103;
  v47 = (int32_t *)Instance;
  Instance = (__int64)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_103;
  ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)Instance, v47[5], v47[6], -1, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_103;
  v48 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v47[6], 0) || ItemMaster__isFriendPoint(v48, v47[6], 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = &StringLiteral_3700/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = &StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v50 = LocalizationManager__Get((System_String_o *)*v49, 0);
  v51 = v47[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v53 = v50;
  v54 = BasicHelper__ToCommaString(v51, 0);
  Instance = (__int64)System_String__Concat_63636468(v53, v54, 0);
  if ( !rewardNumLabel )
LABEL_103:
    sub_1C3E7C0(Instance, v15);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0);
LABEL_77:
  Instance = (__int64)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v55 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  v56 = *(_DWORD *)(Instance + 56);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_65160228(v55, v56, 0);
  if ( !this->fields.rewardIcon )
    goto LABEL_103;
  v57 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0);
  if ( !Instance )
    goto LABEL_103;
  v72.fields.x = -(float)v57;
  v72.fields.y = 1.0;
  v72.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v72, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  v58 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v58 )
    goto LABEL_103;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v58,
    (UserEventExpeditionEntity_o **)(v13 + 16),
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    this->fields.eventId,
    0);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v60 = (System_Action_object__o *)sub_1C3E7B0(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v60,
    (Il2CppObject *)v13,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0);
  if ( !viewDogIcons )
    goto LABEL_103;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v60,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v16 )
    goto LABEL_103;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v62 = *(_DWORD *)(*(_QWORD *)v16 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v62, 0);
  v63 = *(_QWORD *)v16;
  if ( !*(_QWORD *)v16 )
    goto LABEL_103;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (__int64)BasicHelper__ToCommaString(*(_DWORD *)(v63 + 48), 0);
  if ( !acquiredPointNumLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v65 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  Instance = System_Math__Min_65160228(v65, *(_DWORD *)(Instance + 56), 0);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_103;
  v66 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0);
  if ( !Instance )
    goto LABEL_103;
  v73.fields.x = -(float)v66;
  v73.fields.y = 1.0;
  v73.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v73, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v68;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v69, 0);
  v67 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v67, maskType, 0, 0);
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
  if ( (byte_4C51047 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1C3E564(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_4C51047 = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5104C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5104C = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0, 0) )
    return 0;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_1C3E7C0(0, v4);
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
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7A0E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7A080;
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
  __int64 v7; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD v19[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v20; // [xsp+10h] [xbp-60h]
  int32_t v21; // [xsp+28h] [xbp-48h] BYREF
  bool v22[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v22[0] = isDecide;
  v21 = pieceIdx;
  if ( (byte_4C5104E & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C5104E = 1;
  }
  v20 = 0u;
  v19[0] = j_il2cpp_value_box_0(
             bool_TypeInfo,
             v22,
             eventExpeditionEntity,
             *(_QWORD *)&pieceIdx,
             callback,
             object,
             method,
             v7);
  v19[1] = eventExpeditionEntity;
  *(_QWORD *)&v20 = j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v19, callback, object);
}


void ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  if ( (byte_4C5104F & 1) == 0 )
  {
    sub_1C3E564(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C5104F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_1C3E508(ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C3E7C0(this, 0);
  return x->fields._IsSelect_k__BackingField;
}


int32_t ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


void ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C3E7C0(this, 0);
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
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v7; // w8
  unsigned int v8; // w22
  __int64 v9; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v12; // x12
  __int64 v13; // x10
  int32_t v14; // w21
  float v15; // s8
  struct EventExpeditionPieceEntity_o *v16; // x11
  unsigned __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x12
  __int64 v20; // x15
  __int64 v21; // x15
  Il2CppClass *v22; // x8
  int32_t thread_static_fields_offset; // w22
  System_Action_o *v24; // x23
  int32_t v25; // w2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C51050 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3E564(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_4C51050 = 1;
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
LABEL_35:
          sub_1C3E7C8(this, x);
        v9 = *(_QWORD *)&data[2 * v8 + 8];
        if ( !v9 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v9 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0);
        v7 = data[6];
        if ( (int)++v8 >= v7 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1C3E7C0(this, x);
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
      v17 = 0;
      v14 = 0;
      v18 = (unsigned int)*(_QWORD *)(v12 + 24);
      v19 = v12 + 32;
      while ( v16 )
      {
        if ( v16->fields.idx == *(_DWORD *)(v19 + 4 * v17) )
        {
          v20 = *((_QWORD *)monitor + 8);
          if ( !v20 )
            goto LABEL_34;
          if ( v17 >= *(unsigned int *)(v20 + 24) )
            goto LABEL_35;
          v21 = *(int *)(v20 + 4 * v17 + 32);
          v14 = ((unsigned int)((unsigned __int64)(-1717986919 * v21) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v21) >> 32) >> 2)
              + 100;
          v15 = v15 * (float)((float)(int)v21 / 1000.0);
        }
        if ( v18 == ++v17 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v22 = v4[2].klass;
  if ( !v22 )
    goto LABEL_34;
  thread_static_fields_offset = v22->_2.thread_static_fields_offset;
  v24 = (System_Action_o *)v4[3].klass;
  if ( !v24 )
  {
    v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v24, v4, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0);
    v4[3].klass = (Il2CppClass *)v24;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3E508(&v4[3], v24);
  }
  if ( !x )
    goto LABEL_34;
  if ( v15 == INFINITY )
    v25 = 0x80000000;
  else
    v25 = (int)v15;
  viewDogIcon__Set(x, v14, v25, thread_static_fields_offset, v24, 0);
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
  if ( (byte_4C51051 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_viewDogIcon__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C3E564(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1C3E564(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3E564(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4C51051 = 1;
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
    userId = (System_Action_object__o *)sub_1C3E7B0(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3E508(&static_fields->__9__26_3, userId);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v8 = v2->fields.__4__this) == 0)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v8->fields.buttonDecide) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0)) == 0
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_16:
    sub_1C3E7C0(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.namespaze);
}