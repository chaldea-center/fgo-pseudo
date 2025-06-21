void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B16916 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B16916 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__Close(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_31052392(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_31052392(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B16912 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent_EndClose__, v5);
    byte_4B16912 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__EndClose(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      *(_QWORD *)&v7->fields.extra_arg);
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
  ExpeditionConfirmDialogComponent___c_c *v6; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v9; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  Il2CppObject *object__50584840; // x0
  __int64 v12; // x1
  _DWORD *monitor; // x8

  if ( (byte_4B16911 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_1BCAFF8(&System_Func_viewDogIcon__bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v4);
    sub_1BCAFF8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v5);
    byte_4B16911 = 1;
  }
  v6 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  viewDogIcons = this->fields.viewDogIcons;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v6 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__bool__o *)v6->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__28_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v9,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1BCAF9C(&static_fields->__9__28_0);
  }
  object__50584840 = System_Linq_Enumerable__First_object__50584840(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_303DD08 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__50584840 || (monitor = object__50584840[10].monitor) == 0LL )
    sub_1BCB254(object__50584840, v12);
  return monitor[5];
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
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x8
  int32_t v15; // w21
  viewDogIcon_o *v16; // x22

  if ( (byte_4B1690E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1690E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                                                  (EventExpeditionPieceMaster_o *)Instance,
                                                  eventId,
                                                  0LL);
  sub_1BCAF9C(&this->fields.eventExpeditionPieceEntityList);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v13);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v14 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(Instance, v11);
  }
  v15 = 0;
  while ( v15 < v14->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v15,
                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v16 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v15,
                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v16 )
        {
          viewDogIcon__Init(v16, (EventExpeditionPieceEntity_o *)Instance, 0LL);
          v14 = *p_eventExpeditionPieceEntityList;
          ++v15;
          if ( *p_eventExpeditionPieceEntityList )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickCancel(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B16914 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__, method);
    byte_4B16914 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    ExpeditionConfirmDialogComponent__Close_31052392(this, 0LL, v5);
  }
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickDecide(
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

  if ( (byte_4B16913 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__, method);
    byte_4B16913 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      currentExpeditionEntity = this->fields.currentExpeditionEntity;
      CurrentSelectPieceIdx = ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(this, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct EventExpeditionEntity_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        currentExpeditionEntity,
        CurrentSelectPieceIdx,
        *(_QWORD *)&clickFunc->fields.extra_arg);
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
  __int64 v46; // x24
  __int64 Instance; // x0
  __int64 v48; // x1
  __int64 v49; // x23
  CommonConsumeEntity_o *v50; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v54; // x28
  System_String_o *v55; // x0
  int32_t v56; // w27
  int32_t v57; // w28
  int v58; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v72; // x27
  Il2CppObject *Name; // x0
  ExpeditionConfirmDialogComponent___c_c *v74; // x8
  System_Collections_Generic_List_object__o *v75; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v77; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t *v79; // x25
  ItemMaster_o *v80; // x26
  __int64 *v81; // x8
  System_String_o *v82; // x0
  int32_t v83; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v85; // x25
  System_String_o *v86; // x0
  int32_t v87; // w25
  int32_t v88; // w26
  int v89; // w25
  Il2CppObject *v90; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v92; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v94; // w25
  __int64 v95; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v97; // w23
  int v98; // w23
  System_Action_o *v99; // x21
  bool v100; // [xsp+10h] [xbp-70h]
  bool v101; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1690F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_viewDogIcon__TypeInfo, eventExpeditionEntity);
    sub_1BCAFF8(&System_Action_TypeInfo, v13);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v14);
    sub_1BCAFF8(&System_Comparison_GiftEntity__TypeInfo, v15);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GiftMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v21);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v26);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v27);
    sub_1BCAFF8(&System_Math_TypeInfo, v28);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v29);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v31);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v32);
    sub_1BCAFF8(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v33);
    sub_1BCAFF8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v34);
    sub_1BCAFF8(&StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/, v35);
    sub_1BCAFF8(&StringLiteral_5755/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v36);
    sub_1BCAFF8(&StringLiteral_5752/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v37);
    sub_1BCAFF8(&StringLiteral_5754/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v38);
    sub_1BCAFF8(&StringLiteral_5751/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v39);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v40);
    sub_1BCAFF8(&StringLiteral_5759/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v41);
    sub_1BCAFF8(&StringLiteral_3665/*"COMMON_COUNT_OPERATOR_PLUS"*/, v42);
    sub_1BCAFF8(&StringLiteral_5760/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v43);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v44);
    sub_1BCAFF8(&StringLiteral_5756/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v45);
    byte_4B1690F = 1;
  }
  v46 = sub_1BCB244(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_103;
  *(_QWORD *)(v46 + 24) = eventExpeditionEntity;
  v49 = v46 + 24;
  sub_1BCAF9C(v46 + 24);
  *(_QWORD *)(v46 + 32) = this;
  sub_1BCAF9C(v46 + 32);
  if ( !*(_QWORD *)(v46 + 24) )
    return;
  v100 = isDecideSe;
  v101 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = *(struct EventExpeditionEntity_o **)(v46 + 24);
  sub_1BCAF9C(&this->fields.currentExpeditionEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v49 || !Instance )
    goto LABEL_103;
  v50 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v49 + 36LL), 1, 0LL);
  if ( v50 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v50->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v55 = System_Int32__ToString((int)v50 + 32, 0LL);
    Instance = (__int64)System_String__Concat_62450424(v54, v55, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_103;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_103;
    v56 = *(_DWORD *)(Instance + 168);
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_103;
    v57 = *(_DWORD *)(Instance + 48);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_63972788(v56, v57, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_103;
    v58 = Instance;
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_103;
    v103.fields.x = -(float)v58;
    v103.fields.y = 1.0;
    v103.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v103, 0LL);
  }
  this->fields.clickFunc = func;
  sub_1BCAF9C(&this->fields.clickFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_103;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_103;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_103;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5755/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_103;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v46 + 40) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v48);
    byte_4B165D1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v50 || !MasterData_object )
    goto LABEL_103;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               v50->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_42;
  if ( !entity )
    goto LABEL_103;
  if ( v50->fields.num > entity->fields.num )
  {
LABEL_42:
    *(_BYTE *)(v46 + 40) = 1;
    Instance = (__int64)this->fields.consumptionNumLabel;
LABEL_43:
    v67 = 1.0;
    v68 = 0.0;
    goto LABEL_44;
  }
  Instance = (__int64)this->fields.consumptionNumLabel;
  if ( *(_BYTE *)(v46 + 40) )
    goto LABEL_43;
  v67 = 1.0;
  v68 = 1.0;
LABEL_44:
  if ( !Instance )
    goto LABEL_103;
  v69 = v68;
  v70 = v67;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v67, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v50, 0LL);
  Instance = (__int64)System_String__Format(v72, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_103;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v46 + 40), 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v49 || !Instance )
    goto LABEL_103;
  Instance = (__int64)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v49 + 40LL), 0LL);
  v74 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v75 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v74 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v74->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v74 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v74->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v77, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    Instance = sub_1BCAF9C(&static_fields->__9__26_0);
  }
  if ( !v75 )
    goto LABEL_103;
  System_Collections_Generic_List_object___Sort_57390740(
    v75,
    _9__26_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v75->fields._size < 1 )
    goto LABEL_77;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v75,
                        0,
                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_103;
  v79 = (int32_t *)Instance;
  Instance = (__int64)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_103;
  ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)Instance, v79[5], v79[6], -1, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_103;
  v80 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v79[6], 0LL) || ItemMaster__isFriendPoint(v80, v79[6], 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v81 = &StringLiteral_3665/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v81 = &StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v82 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
  v83 = v79[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v85 = v82;
  v86 = BasicHelper__ToCommaString(v83, 0LL);
  Instance = (__int64)System_String__Concat_62450424(v85, v86, 0LL);
  if ( !rewardNumLabel )
LABEL_103:
    sub_1BCB254(Instance, v48);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_77:
  Instance = (__int64)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v87 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  v88 = *(_DWORD *)(Instance + 48);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_63972788(v87, v88, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_103;
  v89 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_103;
  v104.fields.x = -(float)v89;
  v104.fields.y = 1.0;
  v104.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v104, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  v90 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v48);
    byte_4B165D1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v90 )
    goto LABEL_103;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v90,
    (UserEventExpeditionEntity_o **)(v46 + 16),
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v92 = (System_Action_object__o *)sub_1BCB244(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v92,
    (Il2CppObject *)v46,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0LL);
  if ( !viewDogIcons )
    goto LABEL_103;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v92,
    (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v49 )
    goto LABEL_103;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v94 = *(_DWORD *)(*(_QWORD *)v49 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v94, 0LL);
  v95 = *(_QWORD *)v49;
  if ( !*(_QWORD *)v49 )
    goto LABEL_103;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (__int64)BasicHelper__ToCommaString(*(_DWORD *)(v95 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v97 = *(_DWORD *)(Instance + 168);
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  Instance = System_Math__Min_63972788(v97, *(_DWORD *)(Instance + 48), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_103;
  v98 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_103;
  v105.fields.x = -(float)v98;
  v105.fields.y = 1.0;
  v105.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v105, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v100;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v101, 0LL);
  v99 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v99, maskType, 0LL);
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
  if ( (byte_4B16910 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1BCAFF8(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method);
    byte_4B16910 = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1BCB254(this, method);
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

  if ( (byte_4B16915 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16915 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0CA2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C9CC;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  _QWORD v16[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v17; // [xsp+10h] [xbp-60h]
  int32_t v18; // [xsp+28h] [xbp-48h] BYREF
  char v19[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v19[0] = isDecide;
  v18 = pieceIdx;
  if ( (byte_4B16917 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isDecide);
    sub_1BCAFF8(&int_TypeInfo, v11);
    byte_4B16917 = 1;
  }
  v17 = 0u;
  v16[0] = j_il2cpp_value_box_0(bool_TypeInfo, v19, eventExpeditionEntity, *(_QWORD *)&pieceIdx, callback);
  v16[1] = eventExpeditionEntity;
  *(_QWORD *)&v17 = j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v16, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__Invoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, EventExpeditionEntity_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    eventExpeditionEntity,
    pieceIdx,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ExpeditionConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B16918 & 1) == 0 )
  {
    sub_1BCAFF8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_4B16918 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v2;
  sub_1BCAF9C(ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BCB254(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BCB254(this, 0LL);
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
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  _DWORD *data; // x21
  int v9; // w8
  unsigned int v10; // w22
  __int64 v11; // x8
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x9
  int *monitor; // x8
  __int64 v14; // x12
  __int64 v15; // x10
  int32_t v16; // w21
  float v17; // s8
  struct EventExpeditionPieceEntity_o *v18; // x11
  unsigned __int64 v19; // x9
  __int64 v20; // x10
  __int64 v21; // x12
  __int64 v22; // x15
  __int64 v23; // x15
  Il2CppClass *v24; // x8
  int32_t token; // w22
  System_Action_o *v26; // x23
  int32_t v27; // w2

  v5 = (Il2CppObject *)this;
  if ( (byte_4B16919 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCAFF8(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v6);
    byte_4B16919 = 1;
  }
  klass = v5[1].klass;
  if ( klass )
  {
    data = klass->_1.byval_arg.data;
    if ( !data )
      goto LABEL_34;
    v9 = data[6];
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v9 )
LABEL_35:
          sub_1BCB25C(this, x, method, v3);
        v11 = *(_QWORD *)&data[2 * v10 + 8];
        if ( !v11 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( *(_DWORD *)(v11 + 20) == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          viewDogIcon__IsDoingTheExpeditionTrue(x, 0LL);
        v9 = data[6];
        if ( (int)++v10 >= v9 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1BCB254(this, x);
    }
  }
LABEL_14:
  monitor = (int *)v5[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  v14 = *((_QWORD *)monitor + 7);
  if ( !v14 )
    goto LABEL_34;
  v15 = *(_QWORD *)(v14 + 24);
  v16 = 0;
  v17 = (float)monitor[13];
  if ( v15 && (int)v15 >= 1 )
  {
    if ( x )
    {
      v18 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v19 = 0LL;
      v16 = 0;
      v20 = (unsigned int)*(_QWORD *)(v14 + 24);
      v21 = v14 + 32;
      while ( v18 )
      {
        if ( v18->fields.idx == *(_DWORD *)(v21 + 4 * v19) )
        {
          v22 = *((_QWORD *)monitor + 8);
          if ( !v22 )
            goto LABEL_34;
          if ( v19 >= *(unsigned int *)(v22 + 24) )
            goto LABEL_35;
          v23 = *(int *)(v22 + 4 * v19 + 32);
          v16 = ((unsigned int)((unsigned __int64)(-1717986919 * v23) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v23) >> 32) >> 2)
              + 100;
          v17 = v17 * (float)((float)(int)v23 / 1000.0);
        }
        if ( v20 == ++v19 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  v24 = v5[2].klass;
  if ( !v24 )
    goto LABEL_34;
  token = v24->_2.token;
  v26 = (System_Action_o *)v5[3].klass;
  if ( !v26 )
  {
    v26 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v26, v5, Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__, 0LL);
    v5[3].klass = (Il2CppClass *)v26;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCAF9C(&v5[3]);
  }
  if ( !x )
    goto LABEL_34;
  if ( v17 == INFINITY )
    v27 = 0x80000000;
  else
    v27 = (int)v17;
  viewDogIcon__Set(x, v16, v27, token, v26, 0LL);
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
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  System_Action_object__o *userId; // x21
  Il2CppObject *klass; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  struct ExpeditionConfirmDialogComponent_o *v12; // x8

  v2 = this;
  if ( (byte_4B1691A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_viewDogIcon__TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v4);
    sub_1BCAFF8(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v5);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCAFF8(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v6);
    byte_4B1691A = 1;
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
    userId = (System_Action_object__o *)sub_1BCB244(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCAF9C(&static_fields->__9__26_3);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v12 = v2->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v12->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_16:
    sub_1BCB254(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}