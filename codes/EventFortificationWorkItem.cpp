void EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A68A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1385/*"11814B"*/);
    sub_2213A60(&StringLiteral_1918/*"A51B1B"*/);
    sub_2213A60(&StringLiteral_1448/*"2841AE"*/);
    byte_596A68A = 1;
  }
  v9 = StringLiteral_1918/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1918/*"A51B1B"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeMilitsry, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1448/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1448/*"2841AE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeInternal, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1385/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1385/*"11814B"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeFarmming, v17, v18, v19, v20, v21, v22, v23);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventFortificationWorkItem__EndShowServant(
        EventFortificationWorkItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596A687 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A687 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantFaceIcon; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventFortificationEntity_o *Entity; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool v33; // w0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596A683 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A683 = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_13;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !servantFaceIcon )
    goto LABEL_13;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v8, v9, v10, v11, v12, v13);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationDetailEntity,
    (int32_t)eventFortificationDetailEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.enterUserSvtInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.enterUserSvtInfo, 0, v20, v21, v22, v23, v24, v25);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0),
        this->fields.eventFortificationEntity = Entity,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationEntity,
          (int32_t)Entity,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0 )
  {
LABEL_13:
    sub_2213CDC(servantFaceIcon, eventFortificationDetailEntity);
  }
  v33 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          0);
  this->fields.orgPanel = orgPanel;
  this->fields.isSvtDataSetInMaster = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.orgPanel,
    (int32_t)orgPanel,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_596A685 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationWorkItem_OnClickItem__);
    byte_596A685 = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
      clickCallback->fields.method_code,
      (unsigned int)this->fields.position,
      clickCallback->fields.method);
  }
}


void EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  UserServantEntity_o *userServantEntity; // x20
  CommonUI_o *v7; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v14; // x8

  if ( (byte_596A686 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EventFortificationWorkItem_EndShowServant__);
    sub_2213A60(&Method_EventFortificationWorkItem_OnLongPush__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A686 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v3 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventFortificationWorkItem_OnLongPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_37383588(v7, 0, userServantEntity, v8, 0);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    v9 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
    if ( v9 )
    {
      v14 = this->fields.orgPanel;
      if ( v14 )
      {
        v14->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_2213CDC(v9, v10);
    }
  }
}


void EventFortificationWorkItem__SerializeFieldNotNullCheck(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationWorkItem__SetServantInfo(
        EventFortificationWorkItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t position,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  IconLabelInfo_o *v21; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int128 v26; // q1
  int v27; // w8
  int32_t v28; // w8
  __int64 v29; // x2
  int32_t v30; // w0
  int v31; // w8
  int m_CachedPtr; // t1
  struct UISprite_o *v33; // x23
  System_String_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x24
  int32_t v38; // w0
  UISprite_o *v39; // x1
  System_String_o *v40; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v42; // x8
  UnityEngine_Object_o *selectSprite; // x23
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v52; // x1
  UISprite_o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  System_String_o *v56; // x24
  __int64 v57; // x2
  UnityEngine_Object_o *v58; // x22
  __int64 v59; // x2
  struct EventFortificationEntity_o *v60; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  __int64 v62; // x2
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  __int64 v65; // x2
  UILabel_o *v66; // x22
  struct EventFortificationDetailEntity_o *v67; // x8
  System_String_o *v68; // x23
  Il2CppObject *v69; // x0
  System_String_o *v70; // x1
  UnityEngine_Object_o *guestSprite; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  UISprite_o *v74; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  UISprite_o *v78; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-58h] BYREF
  int v83; // [xsp+7Ch] [xbp-44h] BYREF

  if ( (byte_596A684 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_21118/*"icon_class1002"*/);
    sub_2213A60(&StringLiteral_21205/*"icon_select"*/);
    sub_2213A60(&StringLiteral_21109/*"icon_class"*/);
    sub_2213A60(&StringLiteral_21117/*"icon_class1001"*/);
    sub_2213A60(&StringLiteral_6762/*"FORTIFICATION_ADD_POINT_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20506/*"formation_fixing_bg"*/);
    sub_2213A60(&StringLiteral_21182/*"icon_guest"*/);
    sub_2213A60(&StringLiteral_5142/*"D3"*/);
    byte_596A684 = 1;
  }
  v83 = 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    *(System_String_o **)&eventId,
    *(System_String_o **)&position,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallback,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.eventFortificationDetailEntity;
    if ( !servantFaceIcon )
      goto LABEL_92;
    m_CachedPtr = servantFaceIcon[1].fields.m_CachedPtr;
    v30 = (_DWORD)servantFaceIcon + 40;
    v31 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v31 )
      {
        if ( v31 != 8 )
        {
LABEL_28:
          selectSprite = (UnityEngine_Object_o *)this->fields.selectSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v29);
          if ( UnityEngine_Object__op_Inequality(selectSprite, 0, 0) )
          {
            eventFortificationEntity = this->fields.eventFortificationEntity;
            if ( eventFortificationEntity && (workType = eventFortificationEntity->fields.workType, workType >= 2) )
            {
              v83 = workType;
              v52 = System_Int32__ToString((int32_t)&v83, 0);
            }
            else
            {
              v52 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v53 = this->fields.selectSprite;
            v56 = System_String__Concat_75651716((System_String_o *)StringLiteral_21205/*"icon_select"*/, v52, 0);
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v54, v55);
            AtlasManager__SetEventUI_47569484(eventId, v53, v56, 0);
          }
          *p_userServantEntity = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
            0,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          v28 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v29);
        v42 = &StringLiteral_21118/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v29);
        v42 = &StringLiteral_21117/*"icon_class1001"*/;
      }
      v40 = (System_String_o *)*v42;
      v38 = eventId;
      v39 = emptySprite;
    }
    else
    {
      v33 = this->fields.emptySprite;
      v34 = System_Int32__ToString_77138656(v30, (System_String_o *)StringLiteral_5142/*"D3"*/, 0);
      v37 = System_String__Concat_75651716((System_String_o *)StringLiteral_21109/*"icon_class"*/, v34, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35, v36);
      v38 = eventId;
      v39 = v33;
      v40 = v37;
    }
    AtlasManager__SetEventUI_47569484(v38, v39, v40, 0);
    goto LABEL_28;
  }
  v21 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v21 )
    goto LABEL_92;
  IconLabelInfo__Set_47880948(v21, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_48049524((ServantFaceIconComponent_o *)servantFaceIcon, userServantEntity, v21, 0, 1, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v27 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v26;
  if ( !v27 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
  v80 = v81;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v80, 0) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v28;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( !userServantEntity )
    goto LABEL_45;
  v58 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v57);
  if ( UnityEngine_Object__op_Equality(v58, 0, 0) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    v60 = this->fields.eventFortificationEntity;
    if ( !v60 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v60->fields.workType,
           0) )
    {
      servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
      if ( !servantFaceIcon )
        goto LABEL_92;
      UIWidget__set_color((UIWidget_o *)servantFaceIcon, color, 0);
    }
  }
  zodiacNameLabel = (UnityEngine_Object_o *)this->fields.zodiacNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v59);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(zodiacNameLabel, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacNameLabel;
    if ( !servantFaceIcon )
      goto LABEL_92;
    UILabel__set_text((UILabel_o *)servantFaceIcon, eventFortificationDetailEntity->fields.name, 0);
  }
  addPointLabel = (UnityEngine_Object_o *)this->fields.addPointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v62);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(addPointLabel, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v66 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v65);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6762/*"FORTIFICATION_ADD_POINT_INFO"*/, 0);
      v67 = this->fields.eventFortificationDetailEntity;
      if ( !v67 )
        goto LABEL_92;
      v68 = (System_String_o *)servantFaceIcon;
      LODWORD(v81.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v67->fields.eventId,
                                               0);
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v81);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v68, v69, 0);
      if ( !v66 )
        goto LABEL_92;
      v70 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v66 )
        goto LABEL_92;
      v70 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v66, v70, 0);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v65);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0, 0) )
  {
    v74 = this->fields.guestSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v72, v73);
    AtlasManager__SetEventUI_47569484(eventId, v74, (System_String_o *)StringLiteral_21182/*"icon_guest"*/, 0);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.guestSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.type == 1, 0);
  }
  zodiacBgSprite = (UnityEngine_Object_o *)this->fields.zodiacBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72, v73);
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0, 0) )
  {
    v78 = this->fields.zodiacBgSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v76, v77);
    AtlasManager__SetEventUI_47569484(eventId, v78, (System_String_o *)StringLiteral_20506/*"formation_fixing_bg"*/, 0);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacBgSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.isSvtDataSetInMaster, 0);
  }
  lvIconLabel = (UnityEngine_Object_o *)this->fields.lvIconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76, v77);
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0, 0) && *p_userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.lvIconLabel;
    if ( servantFaceIcon )
    {
      UIIconLabel__Set_48071660(
        (UIIconLabel_o *)servantFaceIcon,
        2,
        (*p_userServantEntity)->fields.lv,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      return;
    }
LABEL_92:
    sub_2213CDC(servantFaceIcon, v20);
  }
}


void EventFortificationWorkItem___EndShowServant_b__27_0(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct FortificationOrganizationPanelComponent_o *v7; // x8

  if ( (byte_596A68B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A68B = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.orgPanel;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    v7->fields.isTouchEnabled = 1;
  }
}


int32_t EventFortificationWorkItem__get_AddPoint(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_2213CDC(this, method);
  return EventFortificationDataLogic__CalculationGetPoint(
           this->fields.userServantEntity,
           eventFortificationDetailEntity->fields.eventId,
           0);
}


int32_t EventFortificationWorkItem__get_ClassId(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_2213CDC(this, method);
  return eventFortificationDetailEntity->fields.classId;
}


EnterUserSvtInfo_o *EventFortificationWorkItem__get_EnterUserSvtInfo(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enterUserSvtInfo;
}


int32_t EventFortificationWorkItem__get_FortificationIdx(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_2213CDC(this, method);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventFortificationWorkItem_o *v3; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596A689 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A689 = 1;
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
    sub_2213CDC(this, method);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0) == 0;
}


bool EventFortificationWorkItem__get_IsSvtDataSetInMaster(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  return this->fields.isSvtDataSetInMaster;
}


System_String_o *EventFortificationWorkItem__get_Name(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_2213CDC(this, method);
  return eventFortificationDetailEntity->fields.name;
}


int32_t EventFortificationWorkItem__get_Position(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  return this->fields.position;
}


System_String_o *EventFortificationWorkItem__get_TeamName(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_596A688 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A688 = 1;
  }
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    p_name = &eventFortificationEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


UserServantEntity_o *EventFortificationWorkItem__get_UserServantEntity(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t EventFortificationWorkItem__get_WorkType(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationEntity_o *eventFortificationEntity; // x8

  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    return eventFortificationEntity->fields.workType;
  else
    return 0;
}