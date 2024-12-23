void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B6ABB2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1402/*"11814B"*/, method);
    sub_1BE4ACC(&StringLiteral_1966/*"A51B1B"*/, v9);
    sub_1BE4ACC(&StringLiteral_1466/*"2841AE"*/, v10);
    byte_4B6ABB2 = 1;
  }
  v11 = StringLiteral_1966/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1966/*"A51B1B"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1466/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1466/*"2841AE"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_1402/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1402/*"11814B"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B6ABAF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B6ABAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct EventFortificationEntity_o *Entity; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool v35; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B6ABAB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventFortificationMaster___, eventFortificationDetailEntity);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B6ABAB = 1;
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationDetailEntity,
    (int64_t)eventFortificationDetailEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.enterUserSvtInfo = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.enterUserSvtInfo, 0LL, v22, v23, v24, v25, v26, v27);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0LL),
        this->fields.eventFortificationEntity = Entity,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.eventFortificationEntity,
          (int64_t)Entity,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BE4D28(servantFaceIcon, eventFortificationDetailEntity);
  }
  v35 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          0LL);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_orgPanel, (int64_t)orgPanel, v37, v38, v39, v40, v41, v42);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4B6ABAD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_EventFortificationWorkItem_OnClickItem__, method);
    byte_4B6ABAD = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1BE4D28(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
      clickCallback->fields.original_method_info,
      (unsigned int)this->fields.position,
      *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  UserServantEntity_o *userServantEntity; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v16; // x8

  if ( (byte_4B6ABAE & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_EventFortificationWorkItem_EndShowServant__, v3);
    sub_1BE4ACC(&Method_EventFortificationWorkItem_OnLongPush__, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B6ABAE = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v7 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BE4AE4(Method_EventFortificationWorkItem_OnLongPush__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v11 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_30884204(v11, 0, userServantEntity, v12, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
    if ( v13 )
    {
      v16 = this->fields.orgPanel;
      if ( v16 )
      {
        v16->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_1BE4D28(v13, v14);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  IconLabelInfo_o *v35; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v38; // q0
  int32_t v39; // w8
  int32_t v40; // w0
  intptr_t v41; // w8
  intptr_t m_CachedPtr; // t1
  struct UISprite_o *v43; // x23
  System_String_o *v44; // x0
  System_String_o *v45; // x24
  int32_t v46; // w0
  UISprite_o *v47; // x1
  System_String_o *v48; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v50; // x8
  UnityEngine_Object_o *selectSprite; // x23
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v60; // x1
  UISprite_o *v61; // x23
  System_String_o *v62; // x24
  UnityEngine_Object_o *v63; // x22
  struct EventFortificationEntity_o *v64; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v68; // x22
  struct EventFortificationDetailEntity_o *v69; // x8
  System_String_o *v70; // x23
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  System_String_o *v75; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v77; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v79; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-58h] BYREF
  int v84; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_4B6ABAC & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, userServantEntity);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v13);
    sub_1BE4ACC(&int_TypeInfo, v14);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_20380/*"icon_class1002"*/, v18);
    sub_1BE4ACC(&StringLiteral_20458/*"icon_select"*/, v19);
    sub_1BE4ACC(&StringLiteral_20371/*"icon_class"*/, v20);
    sub_1BE4ACC(&StringLiteral_20379/*"icon_class1001"*/, v21);
    sub_1BE4ACC(&StringLiteral_6580/*"FORTIFICATION_ADD_POINT_INFO"*/, v22);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v23);
    sub_1BE4ACC(&StringLiteral_19816/*"formation_fixing_bg"*/, v24);
    sub_1BE4ACC(&StringLiteral_20436/*"icon_guest"*/, v25);
    sub_1BE4ACC(&StringLiteral_5072/*"D3"*/, v26);
    byte_4B6ABAC = 1;
  }
  v84 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BE4A70(
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)callback,
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
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.eventFortificationDetailEntity;
    if ( !servantFaceIcon )
      goto LABEL_92;
    m_CachedPtr = servantFaceIcon[1].fields.m_CachedPtr;
    v40 = (_DWORD)servantFaceIcon + 40;
    v41 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v41 )
      {
        if ( v41 != 8 )
        {
LABEL_28:
          selectSprite = (UnityEngine_Object_o *)this->fields.selectSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(selectSprite, 0LL, 0LL) )
          {
            eventFortificationEntity = this->fields.eventFortificationEntity;
            if ( eventFortificationEntity && (workType = eventFortificationEntity->fields.workType, workType >= 2) )
            {
              v84 = workType;
              v60 = System_Int32__ToString((int32_t)&v84, 0LL);
            }
            else
            {
              v60 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v61 = this->fields.selectSprite;
            v62 = System_String__Concat_62698808((System_String_o *)StringLiteral_20458/*"icon_select"*/, v60, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventUI_38766888(eventId, v61, v62, 0LL);
          }
          *p_userServantEntity = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v52, v53, v54, v55, v56, v57);
          v39 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v50 = &StringLiteral_20380/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v50 = &StringLiteral_20379/*"icon_class1001"*/;
      }
      v48 = (System_String_o *)*v50;
      v46 = eventId;
      v47 = emptySprite;
    }
    else
    {
      v43 = this->fields.emptySprite;
      v44 = System_Int32__ToString_63504416(v40, (System_String_o *)StringLiteral_5072/*"D3"*/, 0LL);
      v45 = System_String__Concat_62698808((System_String_o *)StringLiteral_20371/*"icon_class"*/, v44, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v46 = eventId;
      v47 = v43;
      v48 = v45;
    }
    AtlasManager__SetEventUI_38766888(v46, v47, v48, 0LL);
    goto LABEL_28;
  }
  v35 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v35 )
    goto LABEL_92;
  IconLabelInfo__Set_39043324(v35, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_39125412(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v35,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v38 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v81, 0LL) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v39;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_45;
  v63 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v63, 0LL, 0LL) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v64 = this->fields.eventFortificationEntity;
    if ( !v64 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v64->fields.workType,
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(addPointLabel, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v68 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6580/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v69 = this->fields.eventFortificationDetailEntity;
      if ( !v69 )
        goto LABEL_92;
      v70 = (System_String_o *)servantFaceIcon;
      LODWORD(v82.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v69->fields.eventId,
                                               0LL);
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v71, v72, v73);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v70, v74, 0LL);
      if ( !v68 )
        goto LABEL_92;
      v75 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v68 )
        goto LABEL_92;
      v75 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v68, v75, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v77 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_38766888(eventId, v77, (System_String_o *)StringLiteral_20436/*"icon_guest"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0LL, 0LL) )
  {
    v79 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_38766888(eventId, v79, (System_String_o *)StringLiteral_19816/*"formation_fixing_bg"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0LL, 0LL) && *p_userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.lvIconLabel;
    if ( servantFaceIcon )
    {
      UIIconLabel__Set_39141664(
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
    sub_1BE4D28(servantFaceIcon, v34);
  }
}


void __fastcall EventFortificationWorkItem___EndShowServant_b__27_0(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct FortificationOrganizationPanelComponent_o *v6; // x8

  if ( (byte_4B6ABB3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6ABB3 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.orgPanel;
    if ( !v6 )
      sub_1BE4D28(v4, v5);
    v6->fields.isTouchEnabled = 1;
  }
}


int32_t __fastcall EventFortificationWorkItem__get_AddPoint(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool __fastcall EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  EventFortificationWorkItem_o *v2; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B6ABB1 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B6ABB1 = 1;
  }
  if ( !v2->fields.isSvtDataSetInMaster )
    return 0;
  eventFortificationSvtEntity = v2->fields.eventFortificationSvtEntity;
  if ( !eventFortificationSvtEntity )
    goto LABEL_12;
  if ( eventFortificationSvtEntity->fields.type != 1 )
    return 0;
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_12:
    sub_1BE4D28(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v7, 0LL) == 0;
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
    sub_1BE4D28(this, method);
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

  if ( (byte_4B6ABB0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B6ABB0 = 1;
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