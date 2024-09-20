void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EE97 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EE97 = 1;
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

  ExpeditionConfirmDialogComponent__Close_45558776(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_45558776(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EE93 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent_EndClose__);
    byte_4A5EE93 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v9 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  ExpeditionConfirmDialogComponent___c_c *v3; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v6; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *object__48898360; // x0
  __int64 v11; // x1
  _DWORD *monitor; // x8

  if ( (byte_4A5EE92 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_viewDogIcon___);
    sub_1B885B0(&System_Func_viewDogIcon__bool__TypeInfo);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__);
    sub_1B885B0(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4A5EE92 = 1;
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
    _9__28_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v6,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v8, v9);
  }
  object__48898360 = System_Linq_Enumerable__First_object__48898360(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_2EA2138 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__48898360 || (monitor = object__48898360[10].monitor) == 0LL )
    sub_1B8880C(object__48898360, v11);
  return monitor[5];
}


void __fastcall ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  int32_t v13; // w21
  viewDogIcon_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4A5EE8F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventExpeditionPieceEntityList,
    (int32_t)PieceEntityList,
    v9,
    v10);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v11);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v12 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(Instance, v6);
  }
  v13 = 0;
  while ( v13 < v12->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v13,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v14 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v13,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v14 )
        {
          viewDogIcon__Init(v14, (EventExpeditionPieceEntity_o *)Instance, v15);
          v12 = *p_eventExpeditionPieceEntityList;
          ++v13;
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

  if ( (byte_4A5EE95 & 1) == 0 )
  {
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    byte_4A5EE95 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    ExpeditionConfirmDialogComponent__Close_45558776(this, 0LL, v5);
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

  if ( (byte_4A5EE94 & 1) == 0 )
  {
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    byte_4A5EE94 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0LL);
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
  __int64 v13; // x24
  int64_t Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventExpeditionEntity_o *v23; // x1
  bool v24; // w22
  CommonConsumeEntity_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  CommonConsumeEntity_o *v28; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v32; // x28
  System_String_o *v33; // x0
  int32_t v34; // w27
  int32_t v35; // w28
  int v36; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v45; // s0
  float v46; // s1
  float v47; // s2
  float v48; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v50; // x27
  Il2CppObject *Name; // x0
  ExpeditionConfirmDialogComponent___c_c *v52; // x8
  System_Collections_Generic_List_object__o *v53; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v55; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t *v59; // x25
  ItemMaster_o *v60; // x26
  __int64 *v61; // x8
  System_String_o *v62; // x0
  int32_t v63; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v65; // x25
  System_String_o *v66; // x0
  int32_t v67; // w25
  int32_t v68; // w26
  int v69; // w25
  Il2CppObject *v70; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v72; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v74; // w25
  __int64 v75; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v77; // w23
  int v78; // w23
  System_Action_o *v79; // x21
  int32_t type; // [xsp+0h] [xbp-70h]
  bool v81; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EE90 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_viewDogIcon__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&System_Comparison_GiftEntity__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent_EndOpen__);
    sub_1B885B0(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__);
    sub_1B885B0(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3768/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    sub_1B885B0(&StringLiteral_5767/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_5764/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/);
    sub_1B885B0(&StringLiteral_5766/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/);
    sub_1B885B0(&StringLiteral_5763/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5771/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    sub_1B885B0(&StringLiteral_5772/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5768/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4A5EE90 = 1;
  }
  v13 = sub_1B887FC(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_95;
  *(_QWORD *)(v13 + 24) = eventExpeditionEntity;
  v18 = v13 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)eventExpeditionEntity, v16, v17);
  *(_QWORD *)(v13 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v19, v20);
  v23 = *(struct EventExpeditionEntity_o **)(v13 + 24);
  if ( !v23 )
    return;
  v81 = isDecideSe;
  v24 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentExpeditionEntity, (int32_t)v23, v21, v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v18 || !Instance )
    goto LABEL_95;
  v25 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v18 + 36LL), 1, 0LL);
  v28 = v25;
  if ( v25 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v25->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v33 = System_Int32__ToString((int)v28 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_61707032(v32, v33, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_95;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_95;
    v34 = *(_DWORD *)(Instance + 168);
    Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_95;
    v35 = *(_DWORD *)(Instance + 48);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_62526008(v34, v35, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_95;
    v36 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_95;
    v83.fields.x = -(float)v36;
    v83.fields.y = 1.0;
    v83.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v83, 0LL);
  }
  type = maskType;
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v26, v27);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5771/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_95;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5768/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_95;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_95;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_95;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v13 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_object )
    goto LABEL_95;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               v28->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_38;
  if ( !entity )
    goto LABEL_95;
  if ( v28->fields.num <= entity->fields.num )
  {
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v13 + 40) )
    {
      v45 = 1.0;
      v46 = 1.0;
      if ( !Instance )
        goto LABEL_95;
      goto LABEL_40;
    }
  }
  else
  {
LABEL_38:
    *(_BYTE *)(v13 + 40) = 1;
    Instance = (int64_t)this->fields.consumptionNumLabel;
  }
  v45 = 1.0;
  v46 = 0.0;
  if ( !Instance )
    goto LABEL_95;
LABEL_40:
  v47 = v46;
  v48 = v45;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v45, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v28, 0LL);
  Instance = (int64_t)System_String__Format(v50, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_95;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v13 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v18 || !Instance )
    goto LABEL_95;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v18 + 40LL), 0LL);
  v52 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v53 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v52 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v52->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v55, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v57, v58);
  }
  if ( !v53 )
    goto LABEL_95;
  System_Collections_Generic_List_object___Sort_55571192(
    v53,
    _9__26_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v53->fields._size < 1 )
    goto LABEL_73;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v53,
                        0,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_95;
  v59 = (int32_t *)Instance;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_95;
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)Instance, v59[5], v59[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_95;
  v60 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v59[6], 0LL) || ItemMaster__isFriendPoint(v60, v59[6], 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_3768/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v62 = LocalizationManager__Get((System_String_o *)*v61, 0LL);
  v63 = v59[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v65 = v62;
  v66 = BasicHelper__ToCommaString(v63, 0LL);
  Instance = (int64_t)System_String__Concat_61707032(v65, v66, 0LL);
  if ( !rewardNumLabel )
LABEL_95:
    sub_1B8880C(Instance, v15);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_73:
  Instance = (int64_t)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v67 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  v68 = *(_DWORD *)(Instance + 48);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_62526008(v67, v68, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_95;
  v69 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_95;
  v84.fields.x = -(float)v69;
  v84.fields.y = 1.0;
  v84.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v84, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v70 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v70 )
    goto LABEL_95;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v70,
    (UserEventExpeditionEntity_o **)(v13 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v72 = (System_Action_object__o *)sub_1B887FC(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v72,
    (Il2CppObject *)v13,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0LL);
  if ( !viewDogIcons )
    goto LABEL_95;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v72,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v18 )
    goto LABEL_95;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v74 = *(_DWORD *)(*(_QWORD *)v18 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v74, 0LL);
  v75 = *(_QWORD *)v18;
  if ( !*(_QWORD *)v18 )
    goto LABEL_95;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v75 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v77 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  Instance = System_Math__Min_62526008(v77, *(_DWORD *)(Instance + 48), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_95;
  v78 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_95;
  v85.fields.x = -(float)v78;
  v85.fields.y = 1.0;
  v85.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v85, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v81;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v24, 0LL);
  v79 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, type, 0LL);
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
  if ( (byte_4A5EE91 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    byte_4A5EE91 = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5EE96 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE96 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D36E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3684;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v16; // [xsp+10h] [xbp-60h]
  int32_t v17; // [xsp+28h] [xbp-48h] BYREF
  char v18[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v18[0] = isDecide;
  v17 = pieceIdx;
  if ( (byte_4A5EE98 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5EE98 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(bool_TypeInfo, v18, eventExpeditionEntity, *(_QWORD *)&pieceIdx, callback);
  v15[1] = eventExpeditionEntity;
  *(_QWORD *)&v16 = j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  return (System_IAsyncResult_o *)sub_1B88564(this, v15, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EE99 & 1) == 0 )
  {
    sub_1B885B0(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4A5EE99 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1B8880C(this, 0LL);
  viewDogIcon__IsSelectSetFalse(y, (const MethodInfo *)y);
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
  const MethodInfo *v3; // x5
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v5; // x20
  struct UserEventExpeditionEntity_o *userEventExpeditionEntity; // x8
  struct ExpeditionInfo_array *expeditionInfos; // x8
  int max_length; // w9
  int v9; // w10
  ExpeditionInfo_o *v10; // x12
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x13
  struct EventExpeditionEntity_o *eventExpeditionEntity; // x8
  struct System_Int32_array *changePieceIdxs; // x12
  __int64 v14; // x10
  int32_t v15; // w21
  float durationSec; // s8
  struct EventExpeditionPieceEntity_o *v17; // x11
  unsigned __int64 v18; // x9
  __int64 v19; // x10
  int32_t *v20; // x12
  struct System_Int32_array *changeDurationRates; // x15
  __int64 v22; // x15
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  int32_t eventId; // w22
  System_Action_o *_9__2; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2

  v5 = this;
  if ( (byte_4A5EE9A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1B885B0(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__);
    byte_4A5EE9A = 1;
  }
  userEventExpeditionEntity = v5->fields.userEventExpeditionEntity;
  if ( userEventExpeditionEntity )
  {
    expeditionInfos = userEventExpeditionEntity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_34;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( max_length == v9 )
LABEL_35:
          sub_1B88814(this, x);
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
        if ( max_length == ++v9 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1B8880C(this, x);
    }
  }
LABEL_14:
  eventExpeditionEntity = v5->fields.eventExpeditionEntity;
  if ( !eventExpeditionEntity )
    goto LABEL_34;
  changePieceIdxs = eventExpeditionEntity->fields.changePieceIdxs;
  if ( !changePieceIdxs )
    goto LABEL_34;
  v14 = *(_QWORD *)&changePieceIdxs->max_length;
  v15 = 0;
  durationSec = (float)eventExpeditionEntity->fields.durationSec;
  if ( v14 && (int)v14 >= 1 )
  {
    if ( x )
    {
      v17 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v18 = 0LL;
      v15 = 0;
      v19 = (unsigned int)*(_QWORD *)&changePieceIdxs->max_length;
      v20 = &changePieceIdxs->m_Items[1];
      while ( v17 )
      {
        if ( v17->fields.idx == v20[v18] )
        {
          changeDurationRates = eventExpeditionEntity->fields.changeDurationRates;
          if ( !changeDurationRates )
            goto LABEL_34;
          if ( v18 >= changeDurationRates->max_length )
            goto LABEL_35;
          v22 = changeDurationRates->m_Items[v18 + 1];
          v15 = ((unsigned int)((unsigned __int64)(-1717986919 * v22) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v22) >> 32) >> 2)
              + 100;
          durationSec = durationSec * (float)((float)(int)v22 / 1000.0);
        }
        if ( v19 == ++v18 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventId = _4__this->fields.eventId;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.__9__2, (int32_t)_9__2, v26, v27);
  }
  if ( !x )
    goto LABEL_34;
  if ( durationSec == INFINITY )
    v28 = 0x80000000;
  else
    v28 = (int)durationSec;
  viewDogIcon__Set(x, v15, v28, eventId, _9__2, v3);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v2; // x19
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  System_Action_object__o *userId; // x21
  Il2CppObject *klass; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct ExpeditionConfirmDialogComponent_o *v10; // x8

  v2 = this;
  if ( (byte_4A5EE9B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_viewDogIcon__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
    sub_1B885B0(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1B885B0(&ExpeditionConfirmDialogComponent___c_TypeInfo);
    byte_4A5EE9B = 1;
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
    userId = (System_Action_object__o *)sub_1B887FC(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_3, (int32_t)userId, v8, v9);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v10 = v2->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v10->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}