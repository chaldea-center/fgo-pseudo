void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FB68F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1095/*"11814B"*/, method);
    sub_B16FFC(&StringLiteral_1615/*"A51B1B"*/, v9);
    sub_B16FFC(&StringLiteral_1145/*"2841AE"*/, v10);
    byte_40FB68F = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_1615/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1615/*"A51B1B"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1145/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1145/*"2841AE"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1095/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1095/*"11814B"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkItem__EndShowServant(
        EventFortificationWorkItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FB68C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB68C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *servantFaceIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *emptySprite; // x0
  UnityEngine_GameObject_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewManager_o *Instance; // x0
  EventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v33; // x3
  struct EventFortificationEntity_o *Entity; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x0
  EventFortificationSvtMaster_o *v42; // x0
  const MethodInfo *v43; // x5
  bool v44; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FB688 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, eventFortificationDetailEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB688 = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  emptySprite = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !emptySprite )
    goto LABEL_13;
  v12 = UnityEngine_Component__get_gameObject(emptySprite, 0LL);
  if ( !v12 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationDetailEntity,
    (System_Int32_array **)eventFortificationDetailEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.enterUserSvtInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.enterUserSvtInfo, 0LL, v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !MasterData_WarQuestSelectionMaster
    || (Entity = EventFortificationMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   v33),
        this->fields.eventFortificationEntity = Entity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
          (System_Int32_array **)Entity,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40),
        (v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v42 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v41,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v44 = EventFortificationSvtMaster__TryGetEntity(
          v42,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          v43);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v44;
  sub_B16F98((BattleServantConfConponent_o *)p_orgPanel, (System_Int32_array **)orgPanel, v46, v47, v48, v49, v50, v51);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_40FB68A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB68A = 1;
  }
  if ( this->fields.clickCallback )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_B170D4();
    System_Action_int___Invoke(
      clickCallback,
      this->fields.position,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userServantEntity; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusDialog_EndDelegate_o *v14; // x22
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v16; // x8

  if ( (byte_40FB68B & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationWorkItem_EndShowServant__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FB68B = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
    ServantStatusDialog_EndDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v9 )
      goto LABEL_15;
    CommonUI__OpenServantStatusDialog_18248328(v9, 0, userServantEntity, v14, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL) )
    {
      v16 = this->fields.orgPanel;
      if ( v16 )
      {
        v16->fields.isTouchEnabled = 0;
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall EventFortificationWorkItem__SerializeFieldNotNullCheck(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkItem__SetServantInfo(
        EventFortificationWorkItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t position,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  IconLabelInfo_o *v38; // x23
  int32_t lv; // w24
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  __int128 v44; // q1
  int32_t v45; // w8
  UnityEngine_Component_o *servantFaceIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x0
  int32_t v49; // w0
  int32_t v50; // w8
  int32_t classId; // t1
  struct UISprite_o *v52; // x23
  System_String_o *v53; // x0
  System_String_o *v54; // x24
  int32_t v55; // w0
  UISprite_o *v56; // x1
  System_String_o *v57; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v59; // x8
  UnityEngine_Object_o *selectSprite; // x23
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v69; // x1
  UISprite_o *v70; // x23
  System_String_o *v71; // x24
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Object_o *v74; // x22
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  struct EventFortificationEntity_o *v77; // x8
  UIWidget_o *v78; // x0
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *v80; // x8
  UILabel_o *v81; // x0
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v83; // x22
  System_String_o *v84; // x0
  struct EventFortificationDetailEntity_o *v85; // x8
  System_String_o *v86; // x23
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v91; // x22
  UnityEngine_Component_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v95; // x22
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_Object_o *lvIconLabel; // x20
  UIIconLabel_o *v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-48h] BYREF
  int v103; // [xsp+6Ch] [xbp-34h] BYREF

  if ( (byte_40FB689 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, userServantEntity);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_19220/*"icon_class1002"*/, v18);
    sub_B16FFC(&StringLiteral_19288/*"icon_select"*/, v19);
    sub_B16FFC(&StringLiteral_19211/*"icon_class"*/, v20);
    sub_B16FFC(&StringLiteral_19219/*"icon_class1001"*/, v21);
    sub_B16FFC(&StringLiteral_6394/*"FORTIFICATION_ADD_POINT_INFO"*/, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    sub_B16FFC(&StringLiteral_18749/*"formation_fixing_bg"*/, v24);
    sub_B16FFC(&StringLiteral_19271/*"icon_guest"*/, v25);
    sub_B16FFC(&StringLiteral_4533/*"D3"*/, v26);
    byte_40FB689 = 1;
  }
  v103 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    *(System_String_array ***)&eventId,
    *(System_String_array ***)&position,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_107;
    gameObject = UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_107;
    classId = eventFortificationDetailEntity->fields.classId;
    v49 = (_DWORD)eventFortificationDetailEntity + 40;
    v50 = classId;
    if ( (unsigned int)(classId - 1) >= 7 )
    {
      if ( v50 )
      {
        if ( v50 != 8 )
          goto LABEL_32;
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v59 = &StringLiteral_19220/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v59 = &StringLiteral_19219/*"icon_class1001"*/;
      }
      v57 = (System_String_o *)*v59;
      v55 = eventId;
      v56 = emptySprite;
    }
    else
    {
      v52 = this->fields.emptySprite;
      v53 = System_Int32__ToString_38275808(v49, (System_String_o *)StringLiteral_4533/*"D3"*/, 0LL);
      v54 = System_String__Concat_43743732((System_String_o *)StringLiteral_19211/*"icon_class"*/, v53, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v55 = eventId;
      v56 = v52;
      v57 = v54;
    }
    AtlasManager__SetEventUI_28584872(v55, v56, v57, 0LL);
LABEL_32:
    selectSprite = (UnityEngine_Object_o *)this->fields.selectSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectSprite, 0LL, 0LL) )
    {
      eventFortificationEntity = this->fields.eventFortificationEntity;
      if ( eventFortificationEntity && (workType = eventFortificationEntity->fields.workType, workType >= 2) )
      {
        v103 = workType;
        v69 = System_Int32__ToString((int32_t)&v103, 0LL);
      }
      else
      {
        v69 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v70 = this->fields.selectSprite;
      v71 = System_String__Concat_43743732((System_String_o *)StringLiteral_19288/*"icon_select"*/, v69, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_28584872(eventId, v70, v71, 0LL);
    }
    *p_userServantEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v61, v62, v63, v64, v65, v66);
    v45 = 2;
    goto LABEL_45;
  }
  v38 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v34, v35, v36, v37);
  IconLabelInfo___ctor(v38, 0LL);
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v38 )
    goto LABEL_107;
  IconLabelInfo__Set_28888132(v38, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  v41 = this->fields.servantFaceIcon;
  if ( !v41 )
    goto LABEL_107;
  ServantFaceIconComponent__Set_30631556(v41, userServantEntity, v38, 0LL, 0LL);
  v42 = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !v42 )
    goto LABEL_107;
  v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
  if ( !v43 )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive(v43, 1, 0LL);
  v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v100 = v101;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v100, 0LL) == 0;
LABEL_45:
  v72 = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v45;
  if ( !v72 )
    goto LABEL_107;
  v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
  if ( !v73 )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive(v73, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_52;
  v74 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v74, 0LL, 0LL) )
  {
LABEL_52:
    v75 = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !v75 )
      goto LABEL_107;
    v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
    if ( !v76 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(v76, 1, 0LL);
    v77 = this->fields.eventFortificationEntity;
    if ( !v77 )
      goto LABEL_107;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v77->fields.workType,
           0LL) )
    {
      v78 = (UIWidget_o *)this->fields.emptySprite;
      if ( !v78 )
        goto LABEL_107;
      UIWidget__set_color(v78, color, 0LL);
    }
  }
  zodiacNameLabel = (UnityEngine_Object_o *)this->fields.zodiacNameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(zodiacNameLabel, 0LL, 0LL) )
  {
    v80 = this->fields.eventFortificationDetailEntity;
    if ( !v80 )
      goto LABEL_107;
    v81 = this->fields.zodiacNameLabel;
    if ( !v81 )
      goto LABEL_107;
    UILabel__set_text(v81, v80->fields.name, 0LL);
  }
  addPointLabel = (UnityEngine_Object_o *)this->fields.addPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(addPointLabel, 0LL, 0LL) )
  {
    v83 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_6394/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v85 = this->fields.eventFortificationDetailEntity;
      if ( !v85 )
        goto LABEL_107;
      v86 = v84;
      LODWORD(v101.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                                *p_userServantEntity,
                                                v85->fields.eventId,
                                                0LL);
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
      v88 = System_String__Format(v86, v87, 0LL);
      if ( !v83 )
        goto LABEL_107;
      v89 = v88;
    }
    else
    {
      if ( !v83 )
        goto LABEL_107;
      v89 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v83, v89, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v91 = this->fields.guestSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v91, (System_String_o *)StringLiteral_19271/*"icon_guest"*/, 0LL);
    v92 = (UnityEngine_Component_o *)this->fields.guestSprite;
    if ( !v92 )
      goto LABEL_107;
    v93 = UnityEngine_Component__get_gameObject(v92, 0LL);
    if ( !v93 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(v93, this->fields.type == 1, 0LL);
  }
  zodiacBgSprite = (UnityEngine_Object_o *)this->fields.zodiacBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0LL, 0LL) )
  {
    v95 = this->fields.zodiacBgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v95, (System_String_o *)StringLiteral_18749/*"formation_fixing_bg"*/, 0LL);
    v96 = (UnityEngine_Component_o *)this->fields.zodiacBgSprite;
    if ( !v96 )
      goto LABEL_107;
    v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
    if ( !v97 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(v97, this->fields.isSvtDataSetInMaster, 0LL);
  }
  lvIconLabel = (UnityEngine_Object_o *)this->fields.lvIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0LL, 0LL) && *p_userServantEntity )
  {
    v99 = this->fields.lvIconLabel;
    if ( v99 )
    {
      UIIconLabel__Set_40377052(v99, 2, (*p_userServantEntity)->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
      return;
    }
LABEL_107:
    sub_B170D4();
  }
}


void __fastcall EventFortificationWorkItem___EndShowServant_b__27_0(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v4; // x8

  if ( (byte_40FB690 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB690 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL) )
  {
    v4 = this->fields.orgPanel;
    if ( !v4 )
      sub_B170D4();
    v4->fields.isTouchEnabled = 1;
  }
}


int32_t __fastcall EventFortificationWorkItem__get_AddPoint(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_B170D4();
  return EventFortificationDataLogic__CalculationGetPoint(
           this->fields.userServantEntity,
           eventFortificationDetailEntity->fields.eventId,
           0LL);
}


int32_t __fastcall EventFortificationWorkItem__get_ClassId(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_B170D4();
  return eventFortificationDetailEntity->fields.classId;
}


EnterUserSvtInfo_o *__fastcall EventFortificationWorkItem__get_EnterUserSvtInfo(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enterUserSvtInfo;
}


int32_t __fastcall EventFortificationWorkItem__get_FortificationIdx(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_B170D4();
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool __fastcall EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FB68E & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FB68E = 1;
  }
  if ( !this->fields.isSvtDataSetInMaster )
    return 0;
  eventFortificationSvtEntity = this->fields.eventFortificationSvtEntity;
  if ( !eventFortificationSvtEntity )
    goto LABEL_13;
  if ( eventFortificationSvtEntity->fields.type != 1 )
    return 0;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_13:
    sub_B170D4();
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL) == 0;
}


bool __fastcall EventFortificationWorkItem__get_IsSvtDataSetInMaster(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtDataSetInMaster;
}


System_String_o *__fastcall EventFortificationWorkItem__get_Name(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_B170D4();
  return eventFortificationDetailEntity->fields.name;
}


int32_t __fastcall EventFortificationWorkItem__get_Position(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.position;
}


System_String_o *__fastcall EventFortificationWorkItem__get_TeamName(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_40FB68D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FB68D = 1;
  }
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    p_name = &eventFortificationEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


UserServantEntity_o *__fastcall EventFortificationWorkItem__get_UserServantEntity(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t __fastcall EventFortificationWorkItem__get_WorkType(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationEntity_o *eventFortificationEntity; // x8

  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    return eventFortificationEntity->fields.workType;
  else
    return 0;
}