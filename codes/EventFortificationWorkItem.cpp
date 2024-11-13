void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1A124 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1402/*"11814B"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1961/*"A51B1B"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1465/*"2841AE"*/, v11, v12);
    byte_4B1A124 = 1;
  }
  v13 = StringLiteral_1961/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1961/*"A51B1B"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeMilitsry, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_1465/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1465/*"2841AE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeInternal, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_1402/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1402/*"11814B"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeFarmming, v21, v22, v23, v24, v25, v26, v27);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1A121 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1A121 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *servantFaceIcon; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventFortificationEntity_o *Entity; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool v37; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B1A11D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationMaster___, eventFortificationDetailEntity, orgPanel);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1A11D = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_13;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !servantFaceIcon )
    goto LABEL_13;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationDetailEntity,
    (int64_t)eventFortificationDetailEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.enterUserSvtInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enterUserSvtInfo, 0LL, v24, v25, v26, v27, v28, v29);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0LL),
        this->fields.eventFortificationEntity = Entity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.eventFortificationEntity,
          (int64_t)Entity,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(servantFaceIcon, eventFortificationDetailEntity);
  }
  v37 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          0LL);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)p_orgPanel, (int64_t)orgPanel, v39, v40, v41, v42, v43, v44);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4B1A11F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationWorkItem_OnClickItem__, method, v2);
    byte_4B1A11F = 1;
  }
  if ( this->fields.clickCallback )
  {
    v4 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationWorkItem_OnClickItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
      clickCallback->fields.original_method_info,
      (unsigned int)this->fields.position,
      *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  UserServantEntity_o *userServantEntity; // x20
  CommonUI_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantStatusDialog_EndDelegate_o *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v25; // x8

  if ( (byte_4B1A120 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationWorkItem_EndShowServant__, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationWorkItem_OnLongPush__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B1A120 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v12 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationWorkItem_OnLongPush__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v16 = (CommonUI_o *)Instance;
    v20 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18, v19);
    ServantStatusDialog_EndDelegate___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v16 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_30776796(v16, 0, userServantEntity, v20, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    v21 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
    if ( v21 )
    {
      v25 = this->fields.orgPanel;
      if ( v25 )
      {
        v25->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_1BCAA3C(v21, v22);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  UserServantEntity_o **p_userServantEntity; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  IconLabelInfo_o *v51; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int64 v54; // x1
  __int128 v55; // q0
  int32_t v56; // w8
  int32_t v57; // w0
  intptr_t v58; // w8
  intptr_t m_CachedPtr; // t1
  struct UISprite_o *v60; // x23
  System_String_o *v61; // x0
  __int64 v62; // x1
  System_String_o *v63; // x24
  int32_t v64; // w0
  UISprite_o *v65; // x1
  System_String_o *v66; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v68; // x8
  UnityEngine_Object_o *selectSprite; // x23
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v78; // x1
  UISprite_o *v79; // x23
  __int64 v80; // x1
  System_String_o *v81; // x24
  UnityEngine_Object_o *v82; // x22
  struct EventFortificationEntity_o *v83; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v87; // x22
  struct EventFortificationDetailEntity_o *v88; // x8
  System_String_o *v89; // x23
  Il2CppObject *v90; // x0
  System_String_o *v91; // x1
  UnityEngine_Object_o *guestSprite; // x22
  __int64 v93; // x1
  UISprite_o *v94; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  __int64 v96; // x1
  UISprite_o *v97; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-58h] BYREF
  int v102; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_4B1A11E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userServantEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_20312/*"icon_class1002"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20390/*"icon_select"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20303/*"icon_class"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_20311/*"icon_class1001"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_6564/*"FORTIFICATION_ADD_POINT_INFO"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19757/*"formation_fixing_bg"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_20368/*"icon_guest"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v39, v40);
    byte_4B1A11E = 1;
  }
  v102 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    *(int64_t *)&eventId,
    position,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)callback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.eventFortificationDetailEntity;
    if ( !servantFaceIcon )
      goto LABEL_92;
    m_CachedPtr = servantFaceIcon[1].fields.m_CachedPtr;
    v57 = (_DWORD)servantFaceIcon + 40;
    v58 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v58 )
      {
        if ( v58 != 8 )
        {
LABEL_28:
          selectSprite = (UnityEngine_Object_o *)this->fields.selectSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
          if ( UnityEngine_Object__op_Inequality(selectSprite, 0LL, 0LL) )
          {
            eventFortificationEntity = this->fields.eventFortificationEntity;
            if ( eventFortificationEntity && (workType = eventFortificationEntity->fields.workType, workType >= 2) )
            {
              v102 = workType;
              v78 = System_Int32__ToString((int32_t)&v102, 0LL);
            }
            else
            {
              v78 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v79 = this->fields.selectSprite;
            v81 = System_String__Concat_62401220((System_String_o *)StringLiteral_20390/*"icon_select"*/, v78, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v80);
            AtlasManager__SetEventUI_38574572(eventId, v79, v81, 0LL);
          }
          *p_userServantEntity = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v70, v71, v72, v73, v74, v75);
          v56 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v48);
        v68 = &StringLiteral_20312/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v48);
        v68 = &StringLiteral_20311/*"icon_class1001"*/;
      }
      v66 = (System_String_o *)*v68;
      v64 = eventId;
      v65 = emptySprite;
    }
    else
    {
      v60 = this->fields.emptySprite;
      v61 = System_Int32__ToString_63206828(v57, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
      v63 = System_String__Concat_62401220((System_String_o *)StringLiteral_20303/*"icon_class"*/, v61, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62);
      v64 = eventId;
      v65 = v60;
      v66 = v63;
    }
    AtlasManager__SetEventUI_38574572(v64, v65, v66, 0LL);
    goto LABEL_28;
  }
  v51 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v48, v49, v50);
  IconLabelInfo___ctor(v51, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v51 )
    goto LABEL_92;
  IconLabelInfo__Set_38850420(v51, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_38931252(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v51,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v55 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54);
  v99 = v100;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v99, 0LL) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v56;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_45;
  v82 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Equality(v82, 0LL, 0LL) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v83 = this->fields.eventFortificationEntity;
    if ( !v83 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v83->fields.workType,
           0LL) )
    {
      servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
      if ( !servantFaceIcon )
        goto LABEL_92;
      UIWidget__set_color((UIWidget_o *)servantFaceIcon, color, 0LL);
    }
  }
  zodiacNameLabel = (UnityEngine_Object_o *)this->fields.zodiacNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(zodiacNameLabel, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacNameLabel;
    if ( !servantFaceIcon )
      goto LABEL_92;
    UILabel__set_text((UILabel_o *)servantFaceIcon, eventFortificationDetailEntity->fields.name, 0LL);
  }
  addPointLabel = (UnityEngine_Object_o *)this->fields.addPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(addPointLabel, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v87 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6564/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v88 = this->fields.eventFortificationDetailEntity;
      if ( !v88 )
        goto LABEL_92;
      v89 = (System_String_o *)servantFaceIcon;
      LODWORD(v100.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                                *p_userServantEntity,
                                                v88->fields.eventId,
                                                0LL);
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v89, v90, 0LL);
      if ( !v87 )
        goto LABEL_92;
      v91 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v87 )
        goto LABEL_92;
      v91 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v87, v91, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v94 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v93);
    AtlasManager__SetEventUI_38574572(eventId, v94, (System_String_o *)StringLiteral_20368/*"icon_guest"*/, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.guestSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.type == 1, 0LL);
  }
  zodiacBgSprite = (UnityEngine_Object_o *)this->fields.zodiacBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0LL, 0LL) )
  {
    v97 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v96);
    AtlasManager__SetEventUI_38574572(eventId, v97, (System_String_o *)StringLiteral_19757/*"formation_fixing_bg"*/, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacBgSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      this->fields.isSvtDataSetInMaster,
      0LL);
  }
  lvIconLabel = (UnityEngine_Object_o *)this->fields.lvIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0LL, 0LL) && *p_userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.lvIconLabel;
    if ( servantFaceIcon )
    {
      UIIconLabel__Set_38947284(
        (UIIconLabel_o *)servantFaceIcon,
        2,
        (*p_userServantEntity)->fields.lv,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      return;
    }
LABEL_92:
    sub_1BCAA3C(servantFaceIcon, v48);
  }
}


void __fastcall EventFortificationWorkItem___EndShowServant_b__27_0(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct FortificationOrganizationPanelComponent_o *v7; // x8

  if ( (byte_4B1A125 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A125 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.orgPanel;
    if ( !v7 )
      sub_1BCAA3C(v5, v6);
    v7->fields.isTouchEnabled = 1;
  }
}


int32_t __fastcall EventFortificationWorkItem__get_AddPoint(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool __fastcall EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventFortificationWorkItem_o *v3; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B1A123 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             method,
                                             v2);
    byte_4B1A123 = 1;
  }
  if ( !v3->fields.isSvtDataSetInMaster )
    return 0;
  eventFortificationSvtEntity = v3->fields.eventFortificationSvtEntity;
  if ( !eventFortificationSvtEntity )
    goto LABEL_12;
  if ( eventFortificationSvtEntity->fields.type != 1 )
    return 0;
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_12:
    sub_1BCAA3C(this, method);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v8, 0LL) == 0;
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B1A122 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1A122 = 1;
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