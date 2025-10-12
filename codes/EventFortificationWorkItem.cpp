void EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4C31D82 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1310/*"11814B"*/);
    sub_1C32C20(&StringLiteral_1837/*"A51B1B"*/);
    sub_1C32C20(&StringLiteral_1373/*"2841AE"*/);
    byte_4C31D82 = 1;
  }
  v3 = StringLiteral_1837/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1837/*"A51B1B"*/;
  sub_1C32BC4(&this->fields.colorCodeMilitsry, v3);
  v4 = StringLiteral_1373/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1373/*"2841AE"*/;
  sub_1C32BC4(&this->fields.colorCodeInternal, v4);
  v5 = StringLiteral_1310/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1310/*"11814B"*/;
  sub_1C32BC4(&this->fields.colorCodeFarmming, v5);
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

  if ( (byte_4C31D7F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31D7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantFaceIcon; // x0
  struct EventFortificationEntity_o *Entity; // x0
  bool v9; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20

  if ( (byte_4C31D7B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D7B = 1;
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
  sub_1C32BC4(&this->fields.userServantEntity, 0);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1C32BC4(&this->fields.eventFortificationDetailEntity, eventFortificationDetailEntity);
  this->fields.enterUserSvtInfo = 0;
  sub_1C32BC4(&this->fields.enterUserSvtInfo, 0);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0),
        this->fields.eventFortificationEntity = Entity,
        sub_1C32BC4(&this->fields.eventFortificationEntity, Entity),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(servantFaceIcon);
  }
  v9 = EventFortificationSvtMaster__TryGetEntity(
         (EventFortificationSvtMaster_o *)servantFaceIcon,
         &this->fields.eventFortificationSvtEntity,
         eventFortificationDetailEntity->fields.eventId,
         eventFortificationDetailEntity->fields.fortificationIdx,
         eventFortificationDetailEntity->fields.position,
         0);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v9;
  sub_1C32BC4(p_orgPanel, orgPanel);
}


void EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4C31D7D & 1) == 0 )
  {
    sub_1C32C20(&Method_EventFortificationWorkItem_OnClickItem__);
    byte_4C31D7D = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1C32E7C(v5);
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
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v11; // x8

  if ( (byte_4C31D7E & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_EventFortificationWorkItem_EndShowServant__);
    sub_1C32C20(&Method_EventFortificationWorkItem_OnLongPush__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31D7E = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v3 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventFortificationWorkItem_OnLongPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_31201148(v7, 0, userServantEntity, v8, 0);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
    if ( v9 )
    {
      v11 = this->fields.orgPanel;
      if ( v11 )
      {
        v11->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_1C32E7C(v9);
    }
  }
}


void EventFortificationWorkItem__SerializeFieldNotNullCheck(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  ;
}


void EventFortificationWorkItem__SetServantInfo(
        EventFortificationWorkItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t position,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  UserServantEntity_o **p_userServantEntity; // x21
  IconLabelInfo_o *v12; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v15; // q0
  int32_t v16; // w8
  int32_t v17; // w0
  int v18; // w8
  int m_CachedPtr; // t1
  struct UISprite_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x24
  int32_t v23; // w0
  UISprite_o *v24; // x1
  System_String_o *v25; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v27; // x8
  UnityEngine_Object_o *selectSprite; // x23
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v31; // x1
  UISprite_o *v32; // x23
  System_String_o *v33; // x24
  UnityEngine_Object_o *v34; // x22
  const MethodInfo *v35; // x6
  struct EventFortificationEntity_o *v36; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v40; // x22
  const MethodInfo *v41; // x2
  struct EventFortificationDetailEntity_o *v42; // x8
  System_String_o *v43; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  System_String_o *v51; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v53; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v55; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-58h] BYREF
  int v60; // [xsp+7Ch] [xbp-44h] BYREF

  if ( (byte_4C31D7C & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&StringLiteral_20144/*"icon_class1002"*/);
    sub_1C32C20(&StringLiteral_20225/*"icon_select"*/);
    sub_1C32C20(&StringLiteral_20135/*"icon_class"*/);
    sub_1C32C20(&StringLiteral_20143/*"icon_class1001"*/);
    sub_1C32C20(&StringLiteral_6476/*"FORTIFICATION_ADD_POINT_INFO"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19575/*"formation_fixing_bg"*/);
    sub_1C32C20(&StringLiteral_20203/*"icon_guest"*/);
    sub_1C32C20(&StringLiteral_4953/*"D3"*/);
    byte_4C31D7C = 1;
  }
  v60 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C32BC4(&this->fields.userServantEntity, userServantEntity);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_1C32BC4(&this->fields.clickCallback, callback);
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
    v17 = (_DWORD)servantFaceIcon + 40;
    v18 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v18 )
      {
        if ( v18 != 8 )
        {
LABEL_28:
          selectSprite = (UnityEngine_Object_o *)this->fields.selectSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(selectSprite, 0, 0) )
          {
            eventFortificationEntity = this->fields.eventFortificationEntity;
            if ( eventFortificationEntity && (workType = eventFortificationEntity->fields.workType, workType >= 2) )
            {
              v60 = workType;
              v31 = System_Int32__ToString((int32_t)&v60, 0);
            }
            else
            {
              v31 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v32 = this->fields.selectSprite;
            v33 = System_String__Concat_63518544((System_String_o *)StringLiteral_20225/*"icon_select"*/, v31, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventUI_40507600(eventId, v32, v33, 0);
          }
          *p_userServantEntity = 0;
          sub_1C32BC4(&this->fields.userServantEntity, 0);
          v16 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v27 = &StringLiteral_20144/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v27 = &StringLiteral_20143/*"icon_class1001"*/;
      }
      v25 = (System_String_o *)*v27;
      v23 = eventId;
      v24 = emptySprite;
    }
    else
    {
      v20 = this->fields.emptySprite;
      v21 = System_Int32__ToString_65028652(v17, (System_String_o *)StringLiteral_4953/*"D3"*/, 0);
      v22 = System_String__Concat_63518544((System_String_o *)StringLiteral_20135/*"icon_class"*/, v21, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v23 = eventId;
      v24 = v20;
      v25 = v22;
    }
    AtlasManager__SetEventUI_40507600(v23, v24, v25, 0);
    goto LABEL_28;
  }
  v12 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v12 )
    goto LABEL_92;
  IconLabelInfo__Set_40818388(v12, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_40905852((ServantFaceIconComponent_o *)servantFaceIcon, userServantEntity, v12, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v57 = v58;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v57, 0) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v16;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( !userServantEntity )
    goto LABEL_45;
  v34 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v34, 0, 0) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    v36 = this->fields.eventFortificationEntity;
    if ( !v36 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v36->fields.workType,
           v35) )
    {
      servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
      if ( !servantFaceIcon )
        goto LABEL_92;
      UIWidget__set_color((UIWidget_o *)servantFaceIcon, color, 0);
    }
  }
  zodiacNameLabel = (UnityEngine_Object_o *)this->fields.zodiacNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(addPointLabel, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v40 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FORTIFICATION_ADD_POINT_INFO"*/, 0);
      v42 = this->fields.eventFortificationDetailEntity;
      if ( !v42 )
        goto LABEL_92;
      v43 = (System_String_o *)servantFaceIcon;
      LODWORD(v58.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v42->fields.eventId,
                                               v41);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v44, v45, v46, v47, v48, v49);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v43, v50, 0);
      if ( !v40 )
        goto LABEL_92;
      v51 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v40 )
        goto LABEL_92;
      v51 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v40, v51, 0);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0, 0) )
  {
    v53 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40507600(eventId, v53, (System_String_o *)StringLiteral_20203/*"icon_guest"*/, 0);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.guestSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.type == 1, 0);
  }
  zodiacBgSprite = (UnityEngine_Object_o *)this->fields.zodiacBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0, 0) )
  {
    v55 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40507600(eventId, v55, (System_String_o *)StringLiteral_19575/*"formation_fixing_bg"*/, 0);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacBgSprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.isSvtDataSetInMaster, 0);
  }
  lvIconLabel = (UnityEngine_Object_o *)this->fields.lvIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0, 0) && *p_userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.lvIconLabel;
    if ( servantFaceIcon )
    {
      UIIconLabel__Set_41010828(
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
    sub_1C32E7C(servantFaceIcon);
  }
}


void EventFortificationWorkItem___EndShowServant_b__27_0(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v4; // x0
  struct FortificationOrganizationPanelComponent_o *v5; // x8

  if ( (byte_4C31D83 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D83 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.orgPanel;
    if ( !v5 )
      sub_1C32E7C(v4);
    v5->fields.isTouchEnabled = 1;
  }
}


int32_t EventFortificationWorkItem__get_AddPoint(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1C32E7C(this);
  return EventFortificationDataLogic__CalculationGetPoint(
           this->fields.userServantEntity,
           eventFortificationDetailEntity->fields.eventId,
           v2);
}


int32_t EventFortificationWorkItem__get_ClassId(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  EventFortificationWorkItem_o *v2; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C31D81 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D81 = 1;
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
    sub_1C32E7C(this);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v7, 0) == 0;
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
    sub_1C32E7C(this);
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

  if ( (byte_4C31D80 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31D80 = 1;
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