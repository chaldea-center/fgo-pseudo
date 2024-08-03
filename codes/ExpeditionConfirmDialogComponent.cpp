void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A000AC & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A000AC = 1;
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

  ExpeditionConfirmDialogComponent__Close_45188668(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_45188668(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A000A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent_EndClose__, v6);
    byte_4A000A8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__EndClose(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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
  ExpeditionConfirmDialogComponent___c_c *v7; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v10; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *object__48608204; // x0
  _DWORD *monitor; // x8

  if ( (byte_4A000A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_1B640C8(&System_Func_viewDogIcon__bool__TypeInfo, v4);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v5);
    sub_1B640C8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v6);
    byte_4A000A7 = 1;
  }
  v7 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  viewDogIcons = this->fields.viewDogIcons;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v7 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__bool__o *)v7->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__28_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_viewDogIcon__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__28_0,
      v10,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v12, v13);
  }
  object__48608204 = System_Linq_Enumerable__First_object__48608204(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_2E5B3CC *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__48608204 || (monitor = object__48608204[10].monitor) == 0LL )
    sub_1B64324(object__48608204);
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
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *v16; // x8
  int32_t v17; // w21
  viewDogIcon_o *v18; // x22
  const MethodInfo *v19; // x2

  if ( (byte_4A000A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A000A4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventExpeditionPieceEntityList,
    (int32_t)PieceEntityList,
    v13,
    v14);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v15);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
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
LABEL_16:
    sub_1B64324(Instance);
  }
  v17 = 0;
  while ( v17 < v16->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v17,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v18 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v17,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v18 )
        {
          viewDogIcon__Init(v18, (EventExpeditionPieceEntity_o *)Instance, v19);
          v16 = *p_eventExpeditionPieceEntityList;
          ++v17;
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

  if ( (byte_4A000AA & 1) == 0 )
  {
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__, method);
    byte_4A000AA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    ExpeditionConfirmDialogComponent__Close_45188668(this, 0LL, v5);
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

  if ( (byte_4A000A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__, method);
    byte_4A000A9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  int64_t Instance; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  struct EventExpeditionEntity_o *v55; // x1
  bool v56; // w22
  CommonConsumeEntity_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  CommonConsumeEntity_o *v60; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v64; // x28
  System_String_o *v65; // x0
  int32_t v66; // w27
  int32_t v67; // w28
  int v68; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v77; // s0
  float v78; // s1
  float v79; // s2
  float v80; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v82; // x27
  Il2CppObject *Name; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  ExpeditionConfirmDialogComponent___c_c *v86; // x8
  System_Collections_Generic_List_object__o *v87; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v89; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t *v93; // x25
  ItemMaster_o *v94; // x26
  __int64 *v95; // x8
  System_String_o *v96; // x0
  int32_t v97; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v99; // x25
  System_String_o *v100; // x0
  int32_t v101; // w25
  int32_t v102; // w26
  int v103; // w25
  Il2CppObject *v104; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  __int64 v106; // x1
  __int64 v107; // x2
  System_Action_object__o *v108; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v110; // w25
  __int64 v111; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v113; // w23
  int v114; // w23
  __int64 v115; // x1
  __int64 v116; // x2
  System_Action_o *v117; // x21
  int32_t type; // [xsp+0h] [xbp-70h]
  bool v119; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A000A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_viewDogIcon__TypeInfo, eventExpeditionEntity);
    sub_1B640C8(&System_Action_TypeInfo, v13);
    sub_1B640C8(&AtlasManager_TypeInfo, v14);
    sub_1B640C8(&System_Comparison_GiftEntity__TypeInfo, v15);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v21);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v26);
    sub_1B640C8(&LocalizationManager_TypeInfo, v27);
    sub_1B640C8(&System_Math_TypeInfo, v28);
    sub_1B640C8(&NetworkManager_TypeInfo, v29);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v31);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v32);
    sub_1B640C8(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v33);
    sub_1B640C8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v34);
    sub_1B640C8(&StringLiteral_3745/*"COMMON_COUNT_OPERATOR_CROSS"*/, v35);
    sub_1B640C8(&StringLiteral_5741/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v36);
    sub_1B640C8(&StringLiteral_5738/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v37);
    sub_1B640C8(&StringLiteral_5740/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v38);
    sub_1B640C8(&StringLiteral_5737/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v39);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v40);
    sub_1B640C8(&StringLiteral_5745/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v41);
    sub_1B640C8(&StringLiteral_3746/*"COMMON_COUNT_OPERATOR_PLUS"*/, v42);
    sub_1B640C8(&StringLiteral_5746/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v43);
    sub_1B640C8(&StringLiteral_1/*""*/, v44);
    sub_1B640C8(&StringLiteral_5742/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v45);
    byte_4A000A5 = 1;
  }
  v46 = sub_1B64314(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, eventExpeditionEntity, isDecideSe);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_95;
  *(_QWORD *)(v46 + 24) = eventExpeditionEntity;
  v50 = v46 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 24), (int32_t)eventExpeditionEntity, v48, v49);
  *(_QWORD *)(v46 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)this, v51, v52);
  v55 = *(struct EventExpeditionEntity_o **)(v46 + 24);
  if ( !v55 )
    return;
  v119 = isDecideSe;
  v56 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentExpeditionEntity, (int32_t)v55, v53, v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v50 || !Instance )
    goto LABEL_95;
  v57 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v50 + 36LL), 1, 0LL);
  v60 = v57;
  if ( v57 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v57->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v65 = System_Int32__ToString((int)v60 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_61375396(v64, v65, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_95;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_95;
    v66 = *(_DWORD *)(Instance + 168);
    Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_95;
    v67 = *(_DWORD *)(Instance + 48);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = System_Math__Min_62194364(v66, v67, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_95;
    v68 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_95;
    v121.fields.x = -(float)v68;
    v121.fields.y = 1.0;
    v121.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v121, 0LL);
  }
  type = maskType;
  this->fields.clickFunc = func;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v58, v59);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5745/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_95;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_95;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5738/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_95;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_95;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v46 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v60 || !MasterData_object )
    goto LABEL_95;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               v60->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_38;
  if ( !entity )
    goto LABEL_95;
  if ( v60->fields.num <= entity->fields.num )
  {
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v46 + 40) )
    {
      v77 = 1.0;
      v78 = 1.0;
      if ( !Instance )
        goto LABEL_95;
      goto LABEL_40;
    }
  }
  else
  {
LABEL_38:
    *(_BYTE *)(v46 + 40) = 1;
    Instance = (int64_t)this->fields.consumptionNumLabel;
  }
  v77 = 1.0;
  v78 = 0.0;
  if ( !Instance )
    goto LABEL_95;
LABEL_40:
  v79 = v78;
  v80 = v77;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v77, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v60, 0LL);
  Instance = (int64_t)System_String__Format(v82, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_95;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v46 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v50 || !Instance )
    goto LABEL_95;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v50 + 40LL), 0LL);
  v86 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v87 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v86 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v86->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86);
      v86 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v86->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_GiftEntity__TypeInfo, v84, v85);
    System_Comparison_object____ctor(_9__26_0, v89, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v91, v92);
  }
  if ( !v87 )
    goto LABEL_95;
  System_Collections_Generic_List_object___Sort_55243320(
    v87,
    _9__26_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v87->fields._size < 1 )
    goto LABEL_73;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v87,
                        0,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_95;
  v93 = (int32_t *)Instance;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_95;
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Instance, v93[5], v93[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_95;
  v94 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v93[6], 0LL) || ItemMaster__isFriendPoint(v94, v93[6], 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = &StringLiteral_3746/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = &StringLiteral_3745/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v96 = LocalizationManager__Get((System_String_o *)*v95, 0LL);
  v97 = v93[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v99 = v96;
  v100 = BasicHelper__ToCommaString(v97, 0LL);
  Instance = (int64_t)System_String__Concat_61375396(v99, v100, 0LL);
  if ( !rewardNumLabel )
LABEL_95:
    sub_1B64324(Instance);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_73:
  Instance = (int64_t)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v101 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  v102 = *(_DWORD *)(Instance + 48);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = System_Math__Min_62194364(v101, v102, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_95;
  v103 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_95;
  v122.fields.x = -(float)v103;
  v122.fields.y = 1.0;
  v122.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v122, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v104 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v104 )
    goto LABEL_95;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v104,
    (UserEventExpeditionEntity_o **)(v46 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v108 = (System_Action_object__o *)sub_1B64314(System_Action_viewDogIcon__TypeInfo, v106, v107);
  System_Action_object____ctor(
    v108,
    (Il2CppObject *)v46,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0LL);
  if ( !viewDogIcons )
    goto LABEL_95;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v108,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v50 )
    goto LABEL_95;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v110 = *(_DWORD *)(*(_QWORD *)v50 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v110, 0LL);
  v111 = *(_QWORD *)v50;
  if ( !*(_QWORD *)v50 )
    goto LABEL_95;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v111 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v113 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  Instance = System_Math__Min_62194364(v113, *(_DWORD *)(Instance + 48), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_95;
  v114 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_95;
  v123.fields.x = -(float)v114;
  v123.fields.y = 1.0;
  v123.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v123, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v119;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v56, 0LL);
  v117 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v115, v116);
  System_Action___ctor(v117, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v117, type, 0LL);
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
  if ( (byte_4A000A6 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1B640C8(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method);
    byte_4A000A6 = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1B64324(this);
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

  if ( (byte_4A000AB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A000AB = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.buttonCancel;
  if ( !v5 )
    sub_1B64324(0LL);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0E6C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0E0C;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+28h] [xbp-48h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v16[0] = isDecide;
  v15 = pieceIdx;
  if ( (byte_4A000AD & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    sub_1B640C8(&int_TypeInfo, v11);
    byte_4A000AD = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  v13[1] = eventExpeditionEntity;
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v13, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A000AE & 1) == 0 )
  {
    sub_1B640C8(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_4A000AE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1B64324(this);
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
  __int64 v6; // x1
  struct UserEventExpeditionEntity_o *userEventExpeditionEntity; // x8
  struct ExpeditionInfo_array *expeditionInfos; // x8
  int max_length; // w9
  int v10; // w10
  ExpeditionInfo_o *v11; // x12
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x13
  struct EventExpeditionEntity_o *eventExpeditionEntity; // x8
  struct System_Int32_array *changePieceIdxs; // x12
  __int64 v15; // x10
  int32_t v16; // w21
  float durationSec; // s8
  struct EventExpeditionPieceEntity_o *v18; // x11
  unsigned __int64 v19; // x9
  __int64 v20; // x10
  int32_t *v21; // x12
  struct System_Int32_array *changeDurationRates; // x15
  __int64 v23; // x15
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  int32_t eventId; // w22
  System_Action_o *_9__2; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2

  v5 = this;
  if ( (byte_4A000AF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1B640C8(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v6);
    byte_4A000AF = 1;
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
      v10 = 0;
      while ( 1 )
      {
        if ( max_length == v10 )
LABEL_35:
          sub_1B6432C(this, x);
        v11 = expeditionInfos->m_Items[v10];
        if ( !v11 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( v11->fields.pieceIdx == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          x->fields._IsDoingTheExpedition_k__BackingField = 1;
        if ( max_length == ++v10 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1B64324(this);
    }
  }
LABEL_14:
  eventExpeditionEntity = v5->fields.eventExpeditionEntity;
  if ( !eventExpeditionEntity )
    goto LABEL_34;
  changePieceIdxs = eventExpeditionEntity->fields.changePieceIdxs;
  if ( !changePieceIdxs )
    goto LABEL_34;
  v15 = *(_QWORD *)&changePieceIdxs->max_length;
  v16 = 0;
  durationSec = (float)eventExpeditionEntity->fields.durationSec;
  if ( v15 && (int)v15 >= 1 )
  {
    if ( x )
    {
      v18 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v19 = 0LL;
      v16 = 0;
      v20 = (unsigned int)*(_QWORD *)&changePieceIdxs->max_length;
      v21 = &changePieceIdxs->m_Items[1];
      while ( v18 )
      {
        if ( v18->fields.idx == v21[v19] )
        {
          changeDurationRates = eventExpeditionEntity->fields.changeDurationRates;
          if ( !changeDurationRates )
            goto LABEL_34;
          if ( v19 >= changeDurationRates->max_length )
            goto LABEL_35;
          v23 = changeDurationRates->m_Items[v19 + 1];
          v16 = ((unsigned int)((unsigned __int64)(-1717986919 * v23) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v23) >> 32) >> 2)
              + 100;
          durationSec = durationSec * (float)((float)(int)v23 / 1000.0);
        }
        if ( v20 == ++v19 )
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
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, x, method);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.__9__2, (int32_t)_9__2, v27, v28);
  }
  if ( !x )
    goto LABEL_34;
  if ( durationSec == INFINITY )
    v29 = 0x80000000;
  else
    v29 = (int)durationSec;
  viewDogIcon__Set(x, v16, v29, eventId, _9__2, v3);
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
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  System_Action_object__o *userId; // x21
  Il2CppObject *klass; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct ExpeditionConfirmDialogComponent_o *v15; // x8

  v3 = this;
  if ( (byte_4A000B0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_viewDogIcon__TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v5);
    sub_1B640C8(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v6);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1B640C8(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v7);
    byte_4A000B0 = 1;
  }
  _4__this = v3->fields.__4__this;
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
    userId = (System_Action_object__o *)sub_1B64314(System_Action_viewDogIcon__TypeInfo, method, v2);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_3, (int32_t)userId, v13, v14);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v15 = v3->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v15->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_16:
    sub_1B64324(this);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v3->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}