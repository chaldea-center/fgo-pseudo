void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EF35 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1406/*"11814B"*/);
    sub_1B885B0(&StringLiteral_1964/*"A51B1B"*/);
    sub_1B885B0(&StringLiteral_1469/*"2841AE"*/);
    byte_4A5EF35 = 1;
  }
  v5 = StringLiteral_1964/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1964/*"A51B1B"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeMilitsry, v5, v2, v3);
  v6 = StringLiteral_1469/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1469/*"2841AE"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeInternal, v6, v7, v8);
  v9 = StringLiteral_1406/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1406/*"11814B"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeFarmming, v9, v10, v11);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkItem__EndShowServant(
        EventFortificationWorkItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5EF32 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0LL);
}


void __fastcall EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantFaceIcon; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventFortificationEntity_o *Entity; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  bool v17; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5EF2E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF2E = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v8, v9);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationDetailEntity,
    (int32_t)eventFortificationDetailEntity,
    v10,
    v11);
  this->fields.enterUserSvtInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enterUserSvtInfo, 0, v12, v13);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   0LL),
        this->fields.eventFortificationEntity = Entity,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationEntity,
          (int32_t)Entity,
          v15,
          v16),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(servantFaceIcon, eventFortificationDetailEntity);
  }
  v17 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          0LL);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_orgPanel, (int32_t)orgPanel, v19, v20);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4A5EF30 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationWorkItem_OnClickItem__);
    byte_4A5EF30 = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
      clickCallback->fields.original_method_info,
      (unsigned int)this->fields.position,
      *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
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

  if ( (byte_4A5EF31 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_EventFortificationWorkItem_EndShowServant__);
    sub_1B885B0(&Method_EventFortificationWorkItem_OnLongPush__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF31 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v3 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationWorkItem_OnLongPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_30504496(v7, 0, userServantEntity, v8, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
    if ( v9 )
    {
      v12 = this->fields.orgPanel;
      if ( v12 )
      {
        v12->fields.isTouchEnabled = 0;
        return;
      }
LABEL_13:
      sub_1B8880C(v9, v10);
    }
  }
}


void __fastcall EventFortificationWorkItem__SerializeFieldNotNullCheck(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationWorkItem__SetServantInfo(
        EventFortificationWorkItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t position,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  IconLabelInfo_o *v15; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v18; // q0
  int32_t v19; // w8
  int32_t v20; // w0
  intptr_t v21; // w8
  intptr_t m_CachedPtr; // t1
  struct UISprite_o *v23; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x24
  int32_t v26; // w0
  UISprite_o *v27; // x1
  System_String_o *v28; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v30; // x8
  UnityEngine_Object_o *selectSprite; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v36; // x1
  UISprite_o *v37; // x23
  System_String_o *v38; // x24
  UnityEngine_Object_o *v39; // x22
  const MethodInfo *v40; // x6
  struct EventFortificationEntity_o *v41; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v45; // x22
  const MethodInfo *v46; // x2
  struct EventFortificationDetailEntity_o *v47; // x8
  System_String_o *v48; // x23
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  System_String_o *v53; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v55; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v57; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-58h] BYREF
  int v62; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_4A5EF2F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&StringLiteral_20104/*"icon_class1002"*/);
    sub_1B885B0(&StringLiteral_20176/*"icon_select"*/);
    sub_1B885B0(&StringLiteral_20095/*"icon_class"*/);
    sub_1B885B0(&StringLiteral_20103/*"icon_class1001"*/);
    sub_1B885B0(&StringLiteral_6445/*"FORTIFICATION_ADD_POINT_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_19555/*"formation_fixing_bg"*/);
    sub_1B885B0(&StringLiteral_20155/*"icon_guest"*/);
    sub_1B885B0(&StringLiteral_4988/*"D3"*/);
    byte_4A5EF2F = 1;
  }
  v62 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    eventId,
    position);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallback, (int32_t)callback, v12, v13);
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
    v20 = (_DWORD)servantFaceIcon + 40;
    v21 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v21 )
      {
        if ( v21 != 8 )
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
              v62 = workType;
              v36 = System_Int32__ToString((int32_t)&v62, 0LL);
            }
            else
            {
              v36 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v37 = this->fields.selectSprite;
            v38 = System_String__Concat_61707032((System_String_o *)StringLiteral_20176/*"icon_select"*/, v36, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventUI_37859364(eventId, v37, v38, 0LL);
          }
          *p_userServantEntity = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v32, v33);
          v19 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v30 = &StringLiteral_20104/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v30 = &StringLiteral_20103/*"icon_class1001"*/;
      }
      v28 = (System_String_o *)*v30;
      v26 = eventId;
      v27 = emptySprite;
    }
    else
    {
      v23 = this->fields.emptySprite;
      v24 = System_Int32__ToString_62512312(v20, (System_String_o *)StringLiteral_4988/*"D3"*/, 0LL);
      v25 = System_String__Concat_61707032((System_String_o *)StringLiteral_20095/*"icon_class"*/, v24, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v26 = eventId;
      v27 = v23;
      v28 = v25;
    }
    AtlasManager__SetEventUI_37859364(v26, v27, v28, 0LL);
    goto LABEL_28;
  }
  v15 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v15 )
    goto LABEL_92;
  IconLabelInfo__Set_38140136(v15, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_38220260(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v15,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v59 = v60;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v59, 0LL) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v19;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_45;
  v39 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v41 = this->fields.eventFortificationEntity;
    if ( !v41 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v41->fields.workType,
           v40) )
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
    v45 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6445/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v47 = this->fields.eventFortificationDetailEntity;
      if ( !v47 )
        goto LABEL_92;
      v48 = (System_String_o *)servantFaceIcon;
      LODWORD(v60.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v47->fields.eventId,
                                               v46);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v49, v50, v51);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v48, v52, 0LL);
      if ( !v45 )
        goto LABEL_92;
      v53 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v45 )
        goto LABEL_92;
      v53 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v45, v53, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v55 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, v55, (System_String_o *)StringLiteral_20155/*"icon_guest"*/, 0LL);
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
    v57 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, v57, (System_String_o *)StringLiteral_19555/*"formation_fixing_bg"*/, 0LL);
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
      UIIconLabel__Set_38235604(
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
    sub_1B8880C(servantFaceIcon, v14);
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

  if ( (byte_4A5EF36 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF36 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.orgPanel;
    if ( !v6 )
      sub_1B8880C(v4, v5);
    v6->fields.isTouchEnabled = 1;
  }
}


int32_t __fastcall EventFortificationWorkItem__get_AddPoint(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1B8880C(this, method);
  return EventFortificationDataLogic__CalculationGetPoint(
           this->fields.userServantEntity,
           eventFortificationDetailEntity->fields.eventId,
           v2);
}


int32_t __fastcall EventFortificationWorkItem__get_ClassId(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5EF34 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EF34 = 1;
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
    sub_1B8880C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL) == 0;
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5EF33 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EF33 = 1;
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