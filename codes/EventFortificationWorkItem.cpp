void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4B169B5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1301/*"11814B"*/, method);
    sub_1BCAFF8(&StringLiteral_1828/*"A51B1B"*/, v3);
    sub_1BCAFF8(&StringLiteral_1364/*"2841AE"*/, v4);
    byte_4B169B5 = 1;
  }
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1828/*"A51B1B"*/;
  sub_1BCAF9C(&this->fields.colorCodeMilitsry);
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1364/*"2841AE"*/;
  sub_1BCAF9C(&this->fields.colorCodeInternal);
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1301/*"11814B"*/;
  sub_1BCAF9C(&this->fields.colorCodeFarmming);
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

  if ( (byte_4B169B2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B169B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
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
  bool Entity; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20

  if ( (byte_4B169AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventFortificationMaster___, eventFortificationDetailEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B169AE = 1;
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
  sub_1BCAF9C(&this->fields.userServantEntity);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_1BCAF9C(&this->fields.eventFortificationDetailEntity);
  this->fields.enterUserSvtInfo = 0LL;
  sub_1BCAF9C(&this->fields.enterUserSvtInfo);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (this->fields.eventFortificationEntity = EventFortificationMaster__GetEntity(
                                                  (EventFortificationMaster_o *)servantFaceIcon,
                                                  eventFortificationDetailEntity->fields.eventId,
                                                  eventFortificationDetailEntity->fields.fortificationIdx,
                                                  0LL),
        sub_1BCAF9C(&this->fields.eventFortificationEntity),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(servantFaceIcon, eventFortificationDetailEntity);
  }
  Entity = EventFortificationSvtMaster__TryGetEntity(
             (EventFortificationSvtMaster_o *)servantFaceIcon,
             &this->fields.eventFortificationSvtEntity,
             eventFortificationDetailEntity->fields.eventId,
             eventFortificationDetailEntity->fields.fortificationIdx,
             eventFortificationDetailEntity->fields.position,
             0LL);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = Entity;
  sub_1BCAF9C(p_orgPanel);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4B169B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventFortificationWorkItem_OnClickItem__, method);
    byte_4B169B0 = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventFortificationWorkItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventFortificationWorkItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1BCB254(v5, v6);
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

  if ( (byte_4B169B1 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_EventFortificationWorkItem_EndShowServant__, v3);
    sub_1BCAFF8(&Method_EventFortificationWorkItem_OnLongPush__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B169B1 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    v7 = Method_EventFortificationWorkItem_OnLongPush__;
    if ( (*((_BYTE *)Method_EventFortificationWorkItem_OnLongPush__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_EventFortificationWorkItem_OnLongPush__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v11 )
      goto LABEL_13;
    CommonUI__OpenServantStatusDialog_30774148(v11, 0, userServantEntity, v12, 0LL);
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
      sub_1BCB254(v13, v14);
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
  __int64 v11; // x1
  __int64 v12; // x1
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
  UserServantEntity_o **p_userServantEntity; // x21
  __int64 v26; // x1
  IconLabelInfo_o *v27; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v30; // q0
  int32_t v31; // w8
  int32_t v32; // w0
  intptr_t v33; // w8
  intptr_t m_CachedPtr; // t1
  struct UISprite_o *v35; // x23
  System_String_o *v36; // x0
  System_String_o *v37; // x24
  int32_t v38; // w0
  UISprite_o *v39; // x1
  System_String_o *v40; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v42; // x8
  UnityEngine_Object_o *selectSprite; // x23
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v46; // x1
  UISprite_o *v47; // x23
  System_String_o *v48; // x24
  UnityEngine_Object_o *v49; // x22
  const MethodInfo *v50; // x6
  struct EventFortificationEntity_o *v51; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v55; // x22
  const MethodInfo *v56; // x2
  struct EventFortificationDetailEntity_o *v57; // x8
  System_String_o *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  System_String_o *v63; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v65; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v67; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-58h] BYREF
  int v72; // [xsp+7Ch] [xbp-44h] BYREF

  if ( (byte_4B169AF & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, userServantEntity);
    sub_1BCAFF8(&IconLabelInfo_TypeInfo, v11);
    sub_1BCAFF8(&int_TypeInfo, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_19967/*"icon_class1002"*/, v16);
    sub_1BCAFF8(&StringLiteral_20048/*"icon_select"*/, v17);
    sub_1BCAFF8(&StringLiteral_19958/*"icon_class"*/, v18);
    sub_1BCAFF8(&StringLiteral_19966/*"icon_class1001"*/, v19);
    sub_1BCAFF8(&StringLiteral_6428/*"FORTIFICATION_ADD_POINT_INFO"*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    sub_1BCAFF8(&StringLiteral_19405/*"formation_fixing_bg"*/, v22);
    sub_1BCAFF8(&StringLiteral_20026/*"icon_guest"*/, v23);
    sub_1BCAFF8(&StringLiteral_4913/*"D3"*/, v24);
    byte_4B169AF = 1;
  }
  v72 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCAF9C(&this->fields.userServantEntity);
  this->fields.clickCallback = callback;
  this->fields.position = position;
  sub_1BCAF9C(&this->fields.clickCallback);
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
    v32 = (_DWORD)servantFaceIcon + 40;
    v33 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v33 )
      {
        if ( v33 != 8 )
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
              v72 = workType;
              v46 = System_Int32__ToString((int32_t)&v72, 0LL);
            }
            else
            {
              v46 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v47 = this->fields.selectSprite;
            v48 = System_String__Concat_62450424((System_String_o *)StringLiteral_20048/*"icon_select"*/, v46, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventUI_39794720(eventId, v47, v48, 0LL);
          }
          *p_userServantEntity = 0LL;
          sub_1BCAF9C(&this->fields.userServantEntity);
          v31 = 2;
          goto LABEL_39;
        }
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v42 = &StringLiteral_19967/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v42 = &StringLiteral_19966/*"icon_class1001"*/;
      }
      v40 = (System_String_o *)*v42;
      v38 = eventId;
      v39 = emptySprite;
    }
    else
    {
      v35 = this->fields.emptySprite;
      v36 = System_Int32__ToString_63959136(v32, (System_String_o *)StringLiteral_4913/*"D3"*/, 0LL);
      v37 = System_String__Concat_62450424((System_String_o *)StringLiteral_19958/*"icon_class"*/, v36, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v38 = eventId;
      v39 = v35;
      v40 = v37;
    }
    AtlasManager__SetEventUI_39794720(v38, v39, v40, 0LL);
    goto LABEL_28;
  }
  v27 = (IconLabelInfo_o *)sub_1BCB244(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v27 )
    goto LABEL_92;
  IconLabelInfo__Set_40103972(v27, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  ServantFaceIconComponent__Set_40190236(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v27,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v69 = v70;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v69, 0LL) == 0;
LABEL_39:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v31;
  if ( !servantFaceIcon )
    goto LABEL_92;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_45;
  v49 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v49, 0LL, 0LL) )
  {
LABEL_45:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_92;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v51 = this->fields.eventFortificationEntity;
    if ( !v51 )
      goto LABEL_92;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v51->fields.workType,
           v50) )
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
    v55 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6428/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v57 = this->fields.eventFortificationDetailEntity;
      if ( !v57 )
        goto LABEL_92;
      v58 = (System_String_o *)servantFaceIcon;
      LODWORD(v70.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v57->fields.eventId,
                                               v56);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v59, v60, v61);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v58, v62, 0LL);
      if ( !v55 )
        goto LABEL_92;
      v63 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v55 )
        goto LABEL_92;
      v63 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v55, v63, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v65 = this->fields.guestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39794720(eventId, v65, (System_String_o *)StringLiteral_20026/*"icon_guest"*/, 0LL);
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
    v67 = this->fields.zodiacBgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39794720(eventId, v67, (System_String_o *)StringLiteral_19405/*"formation_fixing_bg"*/, 0LL);
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
      UIIconLabel__Set_40290232(
        (UIIconLabel_o *)servantFaceIcon,
        2,
        (*p_userServantEntity)->fields.lv,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      return;
    }
LABEL_92:
    sub_1BCB254(servantFaceIcon, v26);
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

  if ( (byte_4B169B6 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B169B6 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.orgPanel;
    if ( !v6 )
      sub_1BCB254(v4, v5);
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
    sub_1BCB254(this, method);
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
    sub_1BCB254(this, method);
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
    sub_1BCB254(this, method);
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
  if ( (byte_4B169B4 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B169B4 = 1;
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
    sub_1BCB254(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v7, 0LL) == 0;
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
    sub_1BCB254(this, method);
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

  if ( (byte_4B169B3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B169B3 = 1;
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