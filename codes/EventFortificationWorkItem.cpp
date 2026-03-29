void EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4D2ABC0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1303/*"11814B"*/);
    sub_1C93AD4(&StringLiteral_1832/*"A51B1B"*/);
    sub_1C93AD4(&StringLiteral_1366/*"2841AE"*/);
    byte_4D2ABC0 = 1;
  }
  v3 = StringLiteral_1832/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1832/*"A51B1B"*/;
  sub_1C93A78(&this->fields.colorCodeMilitsry, v3);
  v4 = StringLiteral_1366/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1366/*"2841AE"*/;
  sub_1C93A78(&this->fields.colorCodeInternal, v4);
  v5 = StringLiteral_1303/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1303/*"11814B"*/;
  sub_1C93A78(&this->fields.colorCodeFarmming, v5);
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

  if ( (byte_4D2ABBD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2ABBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
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

  if ( (byte_4D2ABB9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2ABB9 = 1;
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
  sub_1C93A78(&this->fields.userServantEntity, 0);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1C93A78(&this->fields.eventFortificationDetailEntity, eventFortificationDetailEntity);
  this->fields.enterUserSvtInfo = 0;
  sub_1C93A78(&this->fields.enterUserSvtInfo, 0);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0),
        this->fields.eventFortificationEntity = Entity,
        sub_1C93A78(&this->fields.eventFortificationEntity, Entity),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0 )
  {
LABEL_13:
    sub_1C93D2C(servantFaceIcon, eventFortificationDetailEntity);
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
  sub_1C93A78(p_orgPanel, orgPanel);
}


void EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4D2ABBB & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventFortificationWorkItem_OnClickItem__);
    byte_4D2ABBB = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1C93D2C(v5, v6);
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
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v12; // x8

  if ( (byte_4D2ABBC & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_EventFortificationWorkItem_EndShowServant__);
    sub_1C93AD4(&Method_EventFortificationWorkItem_OnLongPush__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2ABBC = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v3 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventFortificationWorkItem_OnLongPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_31590932(v7, 0, userServantEntity, v8, 0);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
    if ( v9 )
    {
      v12 = this->fields.orgPanel;
      if ( v12 )
      {
        v12->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_1C93D2C(v9, v10);
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
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v16; // q0
  int32_t v17; // w8
  int32_t v18; // w0
  int v19; // w8
  int m_CachedPtr; // t1
  struct UISprite_o *v21; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x24
  int32_t v24; // w0
  UISprite_o *v25; // x1
  System_String_o *v26; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v28; // x8
  UnityEngine_Object_o *selectSprite; // x23
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v32; // x1
  UISprite_o *v33; // x23
  System_String_o *v34; // x24
  UnityEngine_Object_o *v35; // x22
  const MethodInfo *v36; // x6
  struct EventFortificationEntity_o *v37; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v41; // x22
  const MethodInfo *v42; // x2
  struct EventFortificationDetailEntity_o *v43; // x8
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  System_String_o *v46; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v48; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v50; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-58h] BYREF
  int v55; // [xsp+7Ch] [xbp-44h] BYREF

  if ( (byte_4D2ABBA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&StringLiteral_20370/*"icon_class1002"*/);
    sub_1C93AD4(&StringLiteral_20453/*"icon_select"*/);
    sub_1C93AD4(&StringLiteral_20361/*"icon_class"*/);
    sub_1C93AD4(&StringLiteral_20369/*"icon_class1001"*/);
    sub_1C93AD4(&StringLiteral_6507/*"FORTIFICATION_ADD_POINT_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_19788/*"formation_fixing_bg"*/);
    sub_1C93AD4(&StringLiteral_20431/*"icon_guest"*/);
    sub_1C93AD4(&StringLiteral_4973/*"D3"*/);
    byte_4D2ABBA = 1;
  }
  v55 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C93A78(&this->fields.userServantEntity, userServantEntity);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_1C93A78(&this->fields.clickCallback, callback);
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
    v18 = (_DWORD)servantFaceIcon + 40;
    v19 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v19 )
      {
        if ( v19 != 8 )
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
              v55 = workType;
              v32 = System_Int32__ToString((int32_t)&v55, 0);
            }
            else
            {
              v32 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v33 = this->fields.selectSprite;
            v34 = System_String__Concat_64425724((System_String_o *)StringLiteral_20453/*"icon_select"*/, v32, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventUI_41320352(eventId, v33, v34, 0);
          }
          *p_userServantEntity = 0;
          sub_1C93A78(&this->fields.userServantEntity, 0);
          v17 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v28 = &StringLiteral_20370/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v28 = &StringLiteral_20369/*"icon_class1001"*/;
      }
      v26 = (System_String_o *)*v28;
      v24 = eventId;
      v25 = emptySprite;
    }
    else
    {
      v21 = this->fields.emptySprite;
      v22 = System_Int32__ToString_65934220(v18, (System_String_o *)StringLiteral_4973/*"D3"*/, 0);
      v23 = System_String__Concat_64425724((System_String_o *)StringLiteral_20361/*"icon_class"*/, v22, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v24 = eventId;
      v25 = v21;
      v26 = v23;
    }
    AtlasManager__SetEventUI_41320352(v24, v25, v26, 0);
    goto LABEL_28;
  }
  v13 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v13 )
    goto LABEL_92;
  IconLabelInfo__Set_41636824(v13, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_41811860((ServantFaceIconComponent_o *)servantFaceIcon, userServantEntity, v13, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v52, 0) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v17;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( !userServantEntity )
    goto LABEL_45;
  v35 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v35, 0, 0) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    v37 = this->fields.eventFortificationEntity;
    if ( !v37 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v37->fields.workType,
           v36) )
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
    v41 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6507/*"FORTIFICATION_ADD_POINT_INFO"*/, 0);
      v43 = this->fields.eventFortificationDetailEntity;
      if ( !v43 )
        goto LABEL_92;
      v44 = (System_String_o *)servantFaceIcon;
      LODWORD(v53.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v43->fields.eventId,
                                               v42);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v44, v45, 0);
      if ( !v41 )
        goto LABEL_92;
      v46 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v41 )
        goto LABEL_92;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v41, v46, 0);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0, 0) )
  {
    v48 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, v48, (System_String_o *)StringLiteral_20431/*"icon_guest"*/, 0);
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
    v50 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, v50, (System_String_o *)StringLiteral_19788/*"formation_fixing_bg"*/, 0);
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
      UIIconLabel__Set_41834012(
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
    sub_1C93D2C(servantFaceIcon, v12);
  }
}


void EventFortificationWorkItem___EndShowServant_b__27_0(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct FortificationOrganizationPanelComponent_o *v6; // x8

  if ( (byte_4D2ABC1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABC1 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.orgPanel;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
    v6->fields.isTouchEnabled = 1;
  }
}


int32_t EventFortificationWorkItem__get_AddPoint(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
  if ( (byte_4D2ABBF & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2ABBF = 1;
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
    sub_1C93D2C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v7, 0) == 0;
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2ABBE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2ABBE = 1;
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