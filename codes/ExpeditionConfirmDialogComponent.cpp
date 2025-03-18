void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C25FA4 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25FA4 = 1;
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

  ExpeditionConfirmDialogComponent__Close_47299200(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_47299200(
        ExpeditionConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4C25FA0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10);
    byte_4C25FA0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ExpeditionConfirmDialogComponent__Init(this, this->fields.eventId, v2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C3B708(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v13->fields.m_target)(
      v13->fields.original_method_info,
      *(_QWORD *)&v13->fields.extra_arg);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *object__50405024; // x0
  __int64 v18; // x1
  _DWORD *monitor; // x8

  if ( (byte_4C25F9F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_First_viewDogIcon___, method);
    sub_1C3B764(&System_Func_viewDogIcon__bool__TypeInfo, v3);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v4);
    sub_1C3B764(&ExpeditionConfirmDialogComponent___c_TypeInfo, v5);
    byte_4C25F9F = 1;
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
    _9__28_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_viewDogIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__28_0,
      v9,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  object__50405024 = System_Linq_Enumerable__First_object__50405024(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_3011EA0 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__50405024 || (monitor = object__50405024[10].monitor) == 0LL )
    sub_1C3B9C0(object__50405024, v18);
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
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_object__o *v21; // x8
  int32_t v22; // w21
  viewDogIcon_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_4C25F9C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C25F9C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventExpeditionPieceEntityList,
    (int64_t)PieceEntityList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v20);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
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
LABEL_16:
    sub_1C3B9C0(Instance, v11);
  }
  v22 = 0;
  while ( v22 < v21->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v22,
                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v23 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v22,
                                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v23 )
        {
          viewDogIcon__Init(v23, (EventExpeditionPieceEntity_o *)Instance, v24);
          v21 = *p_eventExpeditionPieceEntityList;
          ++v22;
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

  if ( (byte_4C25FA2 & 1) == 0 )
  {
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__, method);
    byte_4C25FA2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    ExpeditionConfirmDialogComponent__Close_47299200(this, 0LL, v5);
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

  if ( (byte_4C25FA1 & 1) == 0 )
  {
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__, method);
    byte_4C25FA1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
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
  void *Instance; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct EventExpeditionEntity_o *v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  CommonConsumeEntity_o *v75; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v79; // x28
  System_String_o *v80; // x0
  int32_t v81; // w27
  int32_t v82; // w28
  int v83; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  Il2CppObject *MasterData_object; // x26
  float v92; // s0
  float v93; // s1
  float v94; // s2
  float v95; // s3
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v97; // x27
  Il2CppObject *Name; // x0
  ExpeditionConfirmDialogComponent___c_c *v99; // x8
  System_Collections_Generic_List_object__o *v100; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v102; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int32_t *v110; // x25
  ItemMaster_o *v111; // x26
  __int64 *v112; // x8
  System_String_o *v113; // x0
  int32_t v114; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v116; // x25
  System_String_o *v117; // x0
  int32_t v118; // w25
  int32_t v119; // w26
  int v120; // w25
  Il2CppObject *v121; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  System_Action_object__o *v123; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v125; // w25
  __int64 v126; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v128; // w23
  int v129; // w23
  System_Action_o *v130; // x21
  bool v131; // [xsp+10h] [xbp-70h]
  bool v132; // [xsp+14h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25F9D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_viewDogIcon__TypeInfo, eventExpeditionEntity);
    sub_1C3B764(&System_Action_TypeInfo, v13);
    sub_1C3B764(&AtlasManager_TypeInfo, v14);
    sub_1C3B764(&System_Comparison_GiftEntity__TypeInfo, v15);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v21);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v26);
    sub_1C3B764(&LocalizationManager_TypeInfo, v27);
    sub_1C3B764(&System_Math_TypeInfo, v28);
    sub_1C3B764(&NetworkManager_TypeInfo, v29);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v31);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v32);
    sub_1C3B764(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v33);
    sub_1C3B764(&ExpeditionConfirmDialogComponent___c_TypeInfo, v34);
    sub_1C3B764(&StringLiteral_3812/*"CP01143"*/, v35);
    sub_1C3B764(&StringLiteral_5915/*"EndSlideIn"*/, v36);
    sub_1C3B764(&StringLiteral_5912/*"EndSend"*/, v37);
    sub_1C3B764(&StringLiteral_5914/*"EndSlideDown"*/, v38);
    sub_1C3B764(&StringLiteral_5911/*"EndSelectDecideMove2"*/, v39);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v40);
    sub_1C3B764(&StringLiteral_5919/*"EndWaitVoice"*/, v41);
    sub_1C3B764(&StringLiteral_3813/*"CP01144"*/, v42);
    sub_1C3B764(&StringLiteral_5920/*"EndWrite can only be called once for each asynchronous operation."*/, v43);
    sub_1C3B764(&StringLiteral_1/*""*/, v44);
    sub_1C3B764(&StringLiteral_5916/*"EndSwitchFigure"*/, v45);
    byte_4C25F9D = 1;
  }
  v46 = sub_1C3B9B0(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_103;
  *(_QWORD *)(v46 + 24) = eventExpeditionEntity;
  v55 = v46 + 24;
  sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 24), (int64_t)eventExpeditionEntity, v49, v50, v51, v52, v53, v54);
  *(_QWORD *)(v46 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)this, v56, v57, v58, v59, v60, v61);
  v68 = *(struct EventExpeditionEntity_o **)(v46 + 24);
  if ( !v68 )
    return;
  v131 = isDecideSe;
  v132 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v68;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.currentExpeditionEntity,
    (int64_t)v68,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v55 || !Instance )
    goto LABEL_103;
  v75 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v55 + 36LL), 1, 0LL);
  if ( v75 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v75->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CP01143"*/, 0LL);
    v80 = System_Int32__ToString((int)v75 + 32, 0LL);
    Instance = System_String__Concat_63368612(v79, v80, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_103;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_103;
    v81 = *((_DWORD *)Instance + 42);
    Instance = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)Instance,
                 (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_103;
    v82 = *((_DWORD *)Instance + 12);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Instance = (void *)System_Math__Min_64188084(v81, v82, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_103;
    v83 = (int)Instance;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_103;
    v134.fields.x = -(float)v83;
    v134.fields.y = 1.0;
    v134.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v134, 0LL);
  }
  this->fields.clickFunc = func;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v69, v70, v71, v72, v73, v74);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5919/*"EndWaitVoice"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5916/*"EndSwitchFigure"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_103;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5914/*"EndSlideDown"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_103;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5912/*"EndSend"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5911/*"EndSelectDecideMove2"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_103;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5915/*"EndSlideIn"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_103;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v46 + 40) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v48);
    byte_4C1C955 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v75 || !MasterData_object )
    goto LABEL_103;
  Instance = (void *)UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)MasterData_object,
                       &entity,
                       *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                       v75->fields.objectId,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_42;
  if ( !entity )
    goto LABEL_103;
  if ( v75->fields.num > entity->fields.num )
  {
LABEL_42:
    *(_BYTE *)(v46 + 40) = 1;
    Instance = this->fields.consumptionNumLabel;
LABEL_43:
    v92 = 1.0;
    v93 = 0.0;
    goto LABEL_44;
  }
  Instance = this->fields.consumptionNumLabel;
  if ( *(_BYTE *)(v46 + 40) )
    goto LABEL_43;
  v92 = 1.0;
  v93 = 1.0;
LABEL_44:
  if ( !Instance )
    goto LABEL_103;
  v94 = v93;
  v95 = v92;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v92, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_5920/*"EndWrite can only be called once for each asynchronous operation."*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v75, 0LL);
  Instance = System_String__Format(v97, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_103;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_103;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v46 + 40), 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v55 || !Instance )
    goto LABEL_103;
  Instance = GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v55 + 40LL), 0LL);
  v99 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v100 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo);
    v99 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v99->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99);
      v99 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v102 = (Il2CppObject *)v99->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_GiftEntity__TypeInfo);
    System_Comparison_object____ctor(_9__26_0, v102, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__26_0,
      (int64_t)_9__26_0,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
  if ( !v100 )
    goto LABEL_103;
  System_Collections_Generic_List_object___Sort_57202480(
    v100,
    _9__26_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v100->fields._size < 1 )
    goto LABEL_77;
  Instance = System_Collections_Generic_List_object___get_Item(
               v100,
               0,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_103;
  v110 = (int32_t *)Instance;
  Instance = this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_103;
  ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)Instance, v110[5], v110[6], -1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_103;
  v111 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v110[6], 0LL) || ItemMaster__isFriendPoint(v111, v110[6], 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = &StringLiteral_3813/*"CP01144"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = &StringLiteral_3812/*"CP01143"*/;
  }
  v113 = LocalizationManager__Get((System_String_o *)*v112, 0LL);
  v114 = v110[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v116 = v113;
  v117 = BasicHelper__ToCommaString(v114, 0LL);
  Instance = System_String__Concat_63368612(v116, v117, 0LL);
  if ( !rewardNumLabel )
LABEL_103:
    sub_1C3B9C0(Instance, v48);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_77:
  Instance = this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v118 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  v119 = *((_DWORD *)Instance + 12);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Instance = (void *)System_Math__Min_64188084(v118, v119, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_103;
  v120 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_103;
  v135.fields.x = -(float)v120;
  v135.fields.y = 1.0;
  v135.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v135, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  v121 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v48);
    byte_4C1C955 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v121 )
    goto LABEL_103;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v121,
    (UserEventExpeditionEntity_o **)(v46 + 16),
    *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v123 = (System_Action_object__o *)sub_1C3B9B0(System_Action_viewDogIcon__TypeInfo);
  System_Action_object____ctor(
    v123,
    (Il2CppObject *)v46,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0LL);
  if ( !viewDogIcons )
    goto LABEL_103;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v123,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v55 )
    goto LABEL_103;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v125 = *(_DWORD *)(*(_QWORD *)v55 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (void *)AtlasManager__SetItem(acquiredPointIcon, v125, 0LL);
  v126 = *(_QWORD *)v55;
  if ( !*(_QWORD *)v55 )
    goto LABEL_103;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = BasicHelper__ToCommaString(*(_DWORD *)(v126 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_103;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_103;
  v128 = *((_DWORD *)Instance + 42);
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_103;
  Instance = (void *)System_Math__Min_64188084(v128, *((_DWORD *)Instance + 12), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_103;
  v129 = (int)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.acquiredPointIcon, 0LL);
  if ( !Instance )
    goto LABEL_103;
  v136.fields.x = -(float)v129;
  v136.fields.y = 1.0;
  v136.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v136, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v131;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v132, 0LL);
  v130 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v130, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v130, maskType, 0LL);
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
  if ( (byte_4C25F9E & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1C3B764(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method);
    byte_4C25F9E = 1;
  }
  eventExpeditionPieceEntityList = v2->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C25FA3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25FA3 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.buttonCancel;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A814C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A81468;
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
  if ( (byte_4C25FA5 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    sub_1C3B764(&int_TypeInfo, v11);
    byte_4C25FA5 = 1;
  }
  v17 = 0u;
  v16[0] = j_il2cpp_value_box_0(bool_TypeInfo, v19, eventExpeditionEntity, *(_QWORD *)&pieceIdx, callback);
  v16[1] = eventExpeditionEntity;
  *(_QWORD *)&v17 = j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v16, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C25FA6 & 1) == 0 )
  {
    sub_1C3B764(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1);
    byte_4C25FA6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ExpeditionConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C3B9C0(this, 0LL);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t v33; // w2

  v5 = this;
  if ( (byte_4C25FA7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, x);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3B764(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v6);
    byte_4C25FA7 = 1;
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
          sub_1C3B9C8(this, x);
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
      sub_1C3B9C0(this, x);
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
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&v5->fields.__9__2, (int64_t)_9__2, v27, v28, v29, v30, v31, v32);
  }
  if ( !x )
    goto LABEL_34;
  if ( durationSec == INFINITY )
    v33 = 0x80000000;
  else
    v33 = (int)durationSec;
  viewDogIcon__Set(x, v16, v33, eventId, _9__2, v3);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct ExpeditionConfirmDialogComponent_o *v18; // x8

  v2 = this;
  if ( (byte_4C25FA8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_viewDogIcon__TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v4);
    sub_1C3B764(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v5);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1C3B764(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v6);
    byte_4C25FA8 = 1;
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
    userId = (System_Action_object__o *)sub_1C3B9B0(System_Action_viewDogIcon__TypeInfo);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__26_3, (int64_t)userId, v12, v13, v14, v15, v16, v17);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v18 = v2->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v18->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_16:
    sub_1C3B9C0(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v2->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}