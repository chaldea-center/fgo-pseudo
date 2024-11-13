void __fastcall ExpeditionConfirmDialogComponent___ctor(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A086 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A086 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__Close(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExpeditionConfirmDialogComponent__Close_46433476(this, 0LL, v2);
}


void __fastcall ExpeditionConfirmDialogComponent__Close_46433476(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1A082 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent_EndClose__, v10, v11);
    byte_4B1A082 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ExpeditionConfirmDialogComponent___c_c *v11; // x0
  struct System_Collections_Generic_List_viewDogIcon__o *viewDogIcons; // x19
  System_Func_object__bool__o *_9__28_0; // x20
  Il2CppObject *v14; // x21
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *object__49493664; // x0
  __int64 v23; // x1
  _DWORD *monitor; // x8

  if ( (byte_4B1A081 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_viewDogIcon___, method, v2);
    sub_1BCA7E0(&System_Func_viewDogIcon__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__, v7, v8);
    sub_1BCA7E0(&ExpeditionConfirmDialogComponent___c_TypeInfo, v9, v10);
    byte_4B1A081 = 1;
  }
  v11 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  viewDogIcons = this->fields.viewDogIcons;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, method);
    v11 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__bool__o *)v11->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__28_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_viewDogIcon__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__28_0,
      v14,
      Method_ExpeditionConfirmDialogComponent___c__GetCurrentSelectPieceIdx_b__28_0__,
      0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_viewDogIcon__bool__o *)_9__28_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  object__49493664 = System_Linq_Enumerable__First_object__49493664(
                       (System_Collections_Generic_IEnumerable_TSource__o *)viewDogIcons,
                       (System_Func_TSource__bool__o *)_9__28_0,
                       (const MethodInfo_2F336A0 *)Method_System_Linq_Enumerable_First_viewDogIcon___);
  if ( !object__49493664 || (monitor = object__49493664[10].monitor) == 0LL )
    sub_1BCAA3C(object__49493664, v23);
  return monitor[5];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionConfirmDialogComponent__Init(
        ExpeditionConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *PieceEntityList; // x0
  System_Collections_Generic_List_object__o **p_eventExpeditionPieceEntityList; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_object__o *v26; // x8
  int32_t v27; // w21
  viewDogIcon_o *v28; // x22
  const MethodInfo *v29; // x2

  if ( (byte_4B1A07E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_viewDogIcon__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1A07E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !Instance )
    goto LABEL_16;
  PieceEntityList = EventExpeditionPieceMaster__GetPieceEntityList(
                      (EventExpeditionPieceMaster_o *)Instance,
                      eventId,
                      0LL);
  p_eventExpeditionPieceEntityList = (System_Collections_Generic_List_object__o **)&this->fields.eventExpeditionPieceEntityList;
  this->fields.eventExpeditionPieceEntityList = PieceEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventExpeditionPieceEntityList,
    (int64_t)PieceEntityList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(this, v25);
  Instance = (DataManager_o *)this->fields.buttonDecide;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(DataManager_o *, _QWORD, void *))Instance->klass[1]._1.namespaze)(
          Instance,
          0LL,
          Instance->klass[1]._1.byval_arg.data),
        this->fields.eventId = eventId,
        *(_WORD *)&this->fields.isButtonEnable = 0,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (v26 = *p_eventExpeditionPieceEntityList) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v16);
  }
  v27 = 0;
  while ( v27 < v26->fields._size )
  {
    Instance = (DataManager_o *)this->fields.viewDogIcons;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v27,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_viewDogIcon__get_Item__);
      if ( *p_eventExpeditionPieceEntityList )
      {
        v28 = (viewDogIcon_o *)Instance;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      *p_eventExpeditionPieceEntityList,
                                      v27,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Item__);
        if ( v28 )
        {
          viewDogIcon__Init(v28, (EventExpeditionPieceEntity_o *)Instance, v29);
          v26 = *p_eventExpeditionPieceEntityList;
          ++v27;
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B1A084 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A084 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ExpeditionConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ExpeditionConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    ExpeditionConfirmDialogComponent__Close_46433476(this, 0LL, v6);
  }
}


void __fastcall ExpeditionConfirmDialogComponent__OnClickDecide(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ExpeditionConfirmDialogComponent_ClickDelegate_o *clickFunc; // x21
  struct EventExpeditionEntity_o *currentExpeditionEntity; // x20
  unsigned int CurrentSelectPieceIdx; // w0

  if ( (byte_4B1A083 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B1A083 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v5 = Method_ExpeditionConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExpeditionConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_ExpeditionConfirmDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8 * isDecideBtnSe, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      currentExpeditionEntity = this->fields.currentExpeditionEntity;
      CurrentSelectPieceIdx = ExpeditionConfirmDialogComponent__GetCurrentSelectPieceIdx(this, v7);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x24
  int64_t Instance; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x23
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct EventExpeditionEntity_o *v101; // x1
  bool v102; // w22
  CommonConsumeEntity_o *v103; // x0
  __int64 v104; // x1
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  CommonConsumeEntity_o *v111; // x25
  UISprite_o *consumIcon; // x27
  int32_t objectId; // w28
  __int64 v114; // x1
  UILabel_o *consumptionNumLabel; // x27
  System_String_o *v116; // x28
  System_String_o *v117; // x0
  int32_t v118; // w27
  int32_t v119; // w28
  int v120; // w27
  __int64 v121; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *dialogDescriptionLabel; // x26
  UILabel_o *consumptionLabel; // x26
  UILabel_o *acquiredRewardLabel; // x26
  UILabel_o *acquiredPointLabel; // x26
  UILabel_o *buttonCancelLabel; // x26
  UILabel_o *buttonDecideLabel; // x26
  __int64 v129; // x1
  Il2CppObject *MasterData_object; // x26
  float v131; // s0
  float v132; // s1
  float v133; // s2
  float v134; // s3
  __int64 v135; // x1
  UILabel_o *confirmationWarningLabel; // x26
  System_String_o *v137; // x27
  Il2CppObject *Name; // x0
  __int64 v139; // x2
  __int64 v140; // x3
  ExpeditionConfirmDialogComponent___c_c *v141; // x8
  System_Collections_Generic_List_object__o *v142; // x25
  System_Comparison_T__o *_9__26_0; // x26
  Il2CppObject *v144; // x27
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  int32_t *v152; // x25
  ItemMaster_o *v153; // x26
  __int64 v154; // x1
  __int64 *v155; // x8
  System_String_o *v156; // x0
  int32_t v157; // w8
  UILabel_o *rewardNumLabel; // x26
  System_String_o *v159; // x25
  System_String_o *v160; // x0
  int32_t v161; // w25
  int32_t v162; // w26
  int v163; // w25
  __int64 v164; // x1
  Il2CppObject *v165; // x25
  System_Collections_Generic_List_object__o *viewDogIcons; // x25
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  System_Action_object__o *v170; // x26
  UISprite_o *acquiredPointIcon; // x24
  int32_t v172; // w25
  __int64 v173; // x8
  UILabel_o *acquiredPointNumLabel; // x23
  int32_t v175; // w23
  int v176; // w23
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  System_Action_o *v180; // x21
  int32_t type; // [xsp+0h] [xbp-70h]
  bool v182; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v184; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A07F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_viewDogIcon__TypeInfo, eventExpeditionEntity, isDecideSe);
    sub_1BCA7E0(&System_Action_TypeInfo, v13, v14);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Comparison_GiftEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v29, v30);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent_EndOpen__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v39, v40);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Math_TypeInfo, v43, v44);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, v49, v50);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__, v51, v52);
    sub_1BCA7E0(&ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo, v53, v54);
    sub_1BCA7E0(&ExpeditionConfirmDialogComponent___c_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_5879/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_5876/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_5878/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_5875/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_5883/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_5884/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_5880/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, v77, v78);
    byte_4B1A07F = 1;
  }
  v79 = sub_1BCAA2C(
          ExpeditionConfirmDialogComponent___c__DisplayClass26_0_TypeInfo,
          eventExpeditionEntity,
          isDecideSe,
          func);
  System_Object___ctor((Il2CppObject *)v79, 0LL);
  if ( !v79 )
    goto LABEL_95;
  *(_QWORD *)(v79 + 24) = eventExpeditionEntity;
  v88 = v79 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 24), (int64_t)eventExpeditionEntity, v82, v83, v84, v85, v86, v87);
  *(_QWORD *)(v79 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 32), (int64_t)this, v89, v90, v91, v92, v93, v94);
  v101 = *(struct EventExpeditionEntity_o **)(v79 + 24);
  if ( !v101 )
    return;
  v182 = isDecideSe;
  v102 = canMaskTouchClose;
  this->fields.currentExpeditionEntity = v101;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentExpeditionEntity,
    (int64_t)v101,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*(_QWORD *)v88 || !Instance )
    goto LABEL_95;
  v103 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v88 + 36LL), 1, 0LL);
  v111 = v103;
  if ( v103 )
  {
    consumIcon = this->fields.consumIcon;
    objectId = v103->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v104);
    AtlasManager__SetItem(consumIcon, objectId, 0LL);
    consumptionNumLabel = this->fields.consumptionNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v114);
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
    v117 = System_Int32__ToString((int)v111 + 32, 0LL);
    Instance = (int64_t)System_String__Concat_62401220(v116, v117, 0LL);
    if ( !consumptionNumLabel )
      goto LABEL_95;
    UILabel__set_text(consumptionNumLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !Instance )
      goto LABEL_95;
    v118 = *(_DWORD *)(Instance + 168);
    Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !Instance )
      goto LABEL_95;
    v119 = *(_DWORD *)(Instance + 48);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v81);
    Instance = System_Math__Min_63220524(v118, v119, 0LL);
    if ( !this->fields.consumIcon )
      goto LABEL_95;
    v120 = Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.consumIcon, 0LL);
    if ( !Instance )
      goto LABEL_95;
    v184.fields.x = -(float)v120;
    v184.fields.y = 1.0;
    v184.fields.z = 1.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v184, 0LL);
  }
  type = maskType;
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v105, v106, v107, v108, v109, v110);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5883/*"EXPEDITION_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_95;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  dialogDescriptionLabel = this->fields.dialogDescriptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5880/*"EXPEDITION_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
  if ( !dialogDescriptionLabel )
    goto LABEL_95;
  UILabel__set_text(dialogDescriptionLabel, (System_String_o *)Instance, 0LL);
  consumptionLabel = this->fields.consumptionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5878/*"EXPEDITION_CONFIRM_DIALOG_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, (System_String_o *)Instance, 0LL);
  acquiredRewardLabel = this->fields.acquiredRewardLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5876/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_REWARD"*/, 0LL);
  if ( !acquiredRewardLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredRewardLabel, (System_String_o *)Instance, 0LL);
  acquiredPointLabel = this->fields.acquiredPointLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5875/*"EXPEDITION_CONFIRM_DIALOG_ACQUIRED_POINT"*/, 0LL);
  if ( !acquiredPointLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointLabel, (System_String_o *)Instance, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_95;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Instance, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5879/*"EXPEDITION_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_95;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)Instance, 0LL);
  *(_BYTE *)(v79 + 40) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v129);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v111 || !MasterData_object )
    goto LABEL_95;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               v111->fields.objectId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_38;
  if ( !entity )
    goto LABEL_95;
  if ( v111->fields.num <= entity->fields.num )
  {
    Instance = (int64_t)this->fields.consumptionNumLabel;
    if ( !*(_BYTE *)(v79 + 40) )
    {
      v131 = 1.0;
      v132 = 1.0;
      if ( !Instance )
        goto LABEL_95;
      goto LABEL_40;
    }
  }
  else
  {
LABEL_38:
    *(_BYTE *)(v79 + 40) = 1;
    Instance = (int64_t)this->fields.consumptionNumLabel;
  }
  v131 = 1.0;
  v132 = 0.0;
  if ( !Instance )
    goto LABEL_95;
LABEL_40:
  v133 = v132;
  v134 = v131;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v131, 0LL);
  confirmationWarningLabel = this->fields.confirmationWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v135);
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_5884/*"EXPEDITION_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  Name = (Il2CppObject *)CommonConsumeEntity__GetName(v111, 0LL);
  Instance = (int64_t)System_String__Format(v137, Name, 0LL);
  if ( !confirmationWarningLabel )
    goto LABEL_95;
  UILabel__set_text(confirmationWarningLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.confirmationWarningLabel;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(v79 + 40), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*(_QWORD *)v88 || !Instance )
    goto LABEL_95;
  Instance = (int64_t)GiftMaster__GetListById((GiftMaster_o *)Instance, *(_DWORD *)(*(_QWORD *)v88 + 40LL), 0LL);
  v141 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  v142 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, v81);
    v141 = ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Comparison_T__o *)v141->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v141->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v141, v81);
      v141 = ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    v144 = (Il2CppObject *)v141->static_fields->__9;
    _9__26_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GiftEntity__TypeInfo, v81, v139, v140);
    System_Comparison_object____ctor(_9__26_0, v144, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_0__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Comparison_GiftEntity__o *)_9__26_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__26_0,
      (int64_t)_9__26_0,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
  }
  if ( !v142 )
    goto LABEL_95;
  System_Collections_Generic_List_object___Sort_56244000(
    v142,
    _9__26_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
  if ( v142->fields._size < 1 )
    goto LABEL_73;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v142,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  if ( !Instance )
    goto LABEL_95;
  v152 = (int32_t *)Instance;
  Instance = (int64_t)this->fields.rewardIcon;
  if ( !Instance )
    goto LABEL_95;
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v152[5], v152[6], -1, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_95;
  v153 = (ItemMaster_o *)Instance;
  if ( ItemMaster__isQP((ItemMaster_o *)Instance, v152[6], 0LL) || ItemMaster__isFriendPoint(v153, v152[6], 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
    v155 = &StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
    v155 = &StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/;
  }
  v156 = LocalizationManager__Get((System_String_o *)*v155, 0LL);
  v157 = v152[7];
  rewardNumLabel = this->fields.rewardNumLabel;
  v159 = v156;
  v160 = BasicHelper__ToCommaString(v157, 0LL);
  Instance = (int64_t)System_String__Concat_62401220(v159, v160, 0LL);
  if ( !rewardNumLabel )
LABEL_95:
    sub_1BCAA3C(Instance, v81);
  UILabel__set_text(rewardNumLabel, (System_String_o *)Instance, 0LL);
LABEL_73:
  Instance = (int64_t)this->fields.rewardNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v161 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  v162 = *(_DWORD *)(Instance + 48);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v81);
  Instance = System_Math__Min_63220524(v161, v162, 0LL);
  if ( !this->fields.rewardIcon )
    goto LABEL_95;
  v163 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.rewardIcon, 0LL);
  if ( !Instance )
    goto LABEL_95;
  v185.fields.x = -(float)v163;
  v185.fields.y = 1.0;
  v185.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v185, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v165 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v164);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v165 )
    goto LABEL_95;
  UserEventExpeditionMaster__TryGetEntity(
    (UserEventExpeditionMaster_o *)v165,
    (UserEventExpeditionEntity_o **)(v79 + 16),
    Instance,
    this->fields.eventId,
    0LL);
  viewDogIcons = (System_Collections_Generic_List_object__o *)this->fields.viewDogIcons;
  v170 = (System_Action_object__o *)sub_1BCAA2C(System_Action_viewDogIcon__TypeInfo, v167, v168, v169);
  System_Action_object____ctor(
    v170,
    (Il2CppObject *)v79,
    Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__1__,
    0LL);
  if ( !viewDogIcons )
    goto LABEL_95;
  System_Collections_Generic_List_object___ForEach(
    viewDogIcons,
    (System_Action_T__o *)v170,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__);
  if ( !*(_QWORD *)v88 )
    goto LABEL_95;
  acquiredPointIcon = this->fields.acquiredPointIcon;
  v172 = *(_DWORD *)(*(_QWORD *)v88 + 44LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v81);
  Instance = AtlasManager__SetItem(acquiredPointIcon, v172, 0LL);
  v173 = *(_QWORD *)v88;
  if ( !*(_QWORD *)v88 )
    goto LABEL_95;
  acquiredPointNumLabel = this->fields.acquiredPointNumLabel;
  Instance = (int64_t)BasicHelper__ToCommaString(*(_DWORD *)(v173 + 48), 0LL);
  if ( !acquiredPointNumLabel )
    goto LABEL_95;
  UILabel__set_text(acquiredPointNumLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.acquiredPointNumLabel;
  if ( !Instance )
    goto LABEL_95;
  v175 = *(_DWORD *)(Instance + 168);
  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !Instance )
    goto LABEL_95;
  Instance = System_Math__Min_63220524(v175, *(_DWORD *)(Instance + 48), 0LL);
  if ( !this->fields.acquiredPointIcon )
    goto LABEL_95;
  v176 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.acquiredPointIcon,
                        0LL);
  if ( !Instance )
    goto LABEL_95;
  v186.fields.x = -(float)v176;
  v186.fields.y = 1.0;
  v186.fields.z = 1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v186, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v182;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v102, 0LL);
  v180 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v177, v178, v179);
  System_Action___ctor(v180, (Il2CppObject *)this, Method_ExpeditionConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v180, type, 0LL);
}


void __fastcall ExpeditionConfirmDialogComponent__SerializeFieldNotNullCheck(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ExpeditionConfirmDialogComponent_o *v3; // x19
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *eventExpeditionPieceEntityList; // x8
  int size; // w8
  int v6; // w9

  v3 = this;
  if ( (byte_4B1A080 & 1) == 0 )
  {
    this = (ExpeditionConfirmDialogComponent_o *)sub_1BCA7E0(
                                                   &Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__,
                                                   method,
                                                   v2);
    byte_4B1A080 = 1;
  }
  eventExpeditionPieceEntityList = v3->fields.eventExpeditionPieceEntityList;
  if ( !eventExpeditionPieceEntityList )
    sub_1BCAA3C(this, method);
  size = eventExpeditionPieceEntityList->fields._size;
  v6 = -1;
  do
    ++v6;
  while ( v6 < size );
}


UnityEngine_GameObject_o *__fastcall ExpeditionConfirmDialogComponent__get_closeBtnObject(
        ExpeditionConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B1A085 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A085 = 1;
  }
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(buttonCancel, 0LL, 0LL) )
    return 0LL;
  v7 = this->fields.buttonCancel;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_GameObject__get_gameObject(v7, 0LL);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11C8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11C2C;
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
  _QWORD v14[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  char v17[4]; // [xsp+2Ch] [xbp-44h] BYREF

  v17[0] = isDecide;
  v16 = pieceIdx;
  if ( (byte_4B1A087 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, eventExpeditionEntity);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    byte_4B1A087 = 1;
  }
  v15 = 0u;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v14[1] = eventExpeditionEntity;
  *(_QWORD *)&v15 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v14, callback, object);
}


void __fastcall ExpeditionConfirmDialogComponent_ClickDelegate__EndInvoke(
        ExpeditionConfirmDialogComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A088 & 1) == 0 )
  {
    sub_1BCA7E0(&ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A088 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ExpeditionConfirmDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionConfirmDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsSelect_k__BackingField;
}


int32_t __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_0(
        ExpeditionConfirmDialogComponent___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ExpeditionConfirmDialogComponent___c___Open_b__26_3(
        ExpeditionConfirmDialogComponent___c_o *this,
        viewDogIcon_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct UserEventExpeditionEntity_o *userEventExpeditionEntity; // x8
  struct ExpeditionInfo_array *expeditionInfos; // x8
  int max_length; // w9
  int v12; // w10
  ExpeditionInfo_o *v13; // x12
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x13
  struct EventExpeditionEntity_o *eventExpeditionEntity; // x8
  struct System_Int32_array *changePieceIdxs; // x12
  __int64 v17; // x10
  int32_t v18; // w21
  float durationSec; // s8
  struct EventExpeditionPieceEntity_o *v20; // x11
  unsigned __int64 v21; // x9
  __int64 v22; // x10
  int32_t *v23; // x12
  struct System_Int32_array *changeDurationRates; // x15
  __int64 v25; // x15
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  int32_t eventId; // w22
  System_Action_o *_9__2; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w2

  v6 = this;
  if ( (byte_4B1A089 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, x, method);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                                         &Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
                                                                         v7,
                                                                         v8);
    byte_4B1A089 = 1;
  }
  userEventExpeditionEntity = v6->fields.userEventExpeditionEntity;
  if ( userEventExpeditionEntity )
  {
    expeditionInfos = userEventExpeditionEntity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_34;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( max_length == v12 )
LABEL_35:
          sub_1BCAA44(this, x);
        v13 = expeditionInfos->m_Items[v12];
        if ( !v13 )
          break;
        if ( !x )
          break;
        EventExpeditionPieceEntity_k__BackingField = x->fields._EventExpeditionPieceEntity_k__BackingField;
        if ( !EventExpeditionPieceEntity_k__BackingField )
          break;
        if ( v13->fields.pieceIdx == EventExpeditionPieceEntity_k__BackingField->fields.idx )
          x->fields._IsDoingTheExpedition_k__BackingField = 1;
        if ( max_length == ++v12 )
          goto LABEL_14;
      }
LABEL_34:
      sub_1BCAA3C(this, x);
    }
  }
LABEL_14:
  eventExpeditionEntity = v6->fields.eventExpeditionEntity;
  if ( !eventExpeditionEntity )
    goto LABEL_34;
  changePieceIdxs = eventExpeditionEntity->fields.changePieceIdxs;
  if ( !changePieceIdxs )
    goto LABEL_34;
  v17 = *(_QWORD *)&changePieceIdxs->max_length;
  v18 = 0;
  durationSec = (float)eventExpeditionEntity->fields.durationSec;
  if ( v17 && (int)v17 >= 1 )
  {
    if ( x )
    {
      v20 = x->fields._EventExpeditionPieceEntity_k__BackingField;
      v21 = 0LL;
      v18 = 0;
      v22 = (unsigned int)*(_QWORD *)&changePieceIdxs->max_length;
      v23 = &changePieceIdxs->m_Items[1];
      while ( v20 )
      {
        if ( v20->fields.idx == v23[v21] )
        {
          changeDurationRates = eventExpeditionEntity->fields.changeDurationRates;
          if ( !changeDurationRates )
            goto LABEL_34;
          if ( v21 >= changeDurationRates->max_length )
            goto LABEL_35;
          v25 = changeDurationRates->m_Items[v21 + 1];
          v18 = ((unsigned int)((unsigned __int64)(-1717986919 * v25) >> 32) >> 31)
              + ((int)((unsigned __int64)(-1717986919 * v25) >> 32) >> 2)
              + 100;
          durationSec = durationSec * (float)((float)(int)v25 / 1000.0);
        }
        if ( v22 == ++v21 )
          goto LABEL_26;
      }
    }
    goto LABEL_34;
  }
LABEL_26:
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventId = _4__this->fields.eventId;
  _9__2 = v6->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, x, method, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v6,
      Method_ExpeditionConfirmDialogComponent___c__DisplayClass26_0__Open_b__2__,
      0LL);
    v6->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.__9__2, (int64_t)_9__2, v29, v30, v31, v32, v33, v34);
  }
  if ( !x )
    goto LABEL_34;
  if ( durationSec == INFINITY )
    v35 = 0x80000000;
  else
    v35 = (int)durationSec;
  viewDogIcon__Set(x, v18, v35, eventId, _9__2, v4);
}


void __fastcall ExpeditionConfirmDialogComponent___c__DisplayClass26_0___Open_b__2(
        ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct ExpeditionConfirmDialogComponent_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDogIcons; // x20
  System_Action_object__o *userId; // x21
  Il2CppObject *klass; // x22
  struct ExpeditionConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ExpeditionConfirmDialogComponent_o *v24; // x8

  v4 = this;
  if ( (byte_4B1A08A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_viewDogIcon__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_viewDogIcon__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, v9, v10);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                                         &ExpeditionConfirmDialogComponent___c_TypeInfo,
                                                                         v11,
                                                                         v12);
    byte_4B1A08A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  viewDogIcons = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDogIcons;
  this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  if ( !ExpeditionConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionConfirmDialogComponent___c_TypeInfo, method);
    this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
  }
  userId = (System_Action_object__o *)this[3].fields.userEventExpeditionEntity->fields.userId;
  if ( !userId )
  {
    if ( !LODWORD(this[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)ExpeditionConfirmDialogComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[3].fields.userEventExpeditionEntity->klass;
    userId = (System_Action_object__o *)sub_1BCAA2C(System_Action_viewDogIcon__TypeInfo, method, v2, v3);
    System_Action_object____ctor(userId, klass, Method_ExpeditionConfirmDialogComponent___c__Open_b__26_3__, 0LL);
    static_fields = ExpeditionConfirmDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Action_viewDogIcon__o *)userId;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__26_3, (int64_t)userId, v18, v19, v20, v21, v22, v23);
  }
  if ( !viewDogIcons
    || (System_Collections_Generic_List_object___ForEach(
          viewDogIcons,
          (System_Action_T__o *)userId,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_viewDogIcon__ForEach__),
        (v24 = v4->fields.__4__this) == 0LL)
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)v24->fields.buttonDecide) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__get_gameObject(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             0LL)) == 0LL
    || (this = (ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(this, method);
  }
  ((void (__fastcall *)(ExpeditionConfirmDialogComponent___c__DisplayClass26_0_o *, bool, void *))this->klass[1]._1.namespaze)(
    this,
    !v4->fields.isWarning,
    this->klass[1]._1.byval_arg.data);
}