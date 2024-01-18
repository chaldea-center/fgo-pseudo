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

  if ( (byte_41890CB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1097/*"11814B"*/, method);
    sub_B2C35C(&StringLiteral_1613/*"A51B1B"*/, v9);
    sub_B2C35C(&StringLiteral_1147/*"2841AE"*/, v10);
    byte_41890CB = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_1613/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1613/*"A51B1B"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1147/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1147/*"2841AE"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1097/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1097/*"11814B"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41890C8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41890C8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x3
  struct EventFortificationEntity_o *Entity; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x5
  bool v37; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_41890C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, eventFortificationDetailEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41890C4 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationDetailEntity,
    (System_Int32_array **)eventFortificationDetailEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.enterUserSvtInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.enterUserSvtInfo, 0LL, v22, v23, v24, v25, v26, v27);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   v28),
        this->fields.eventFortificationEntity = Entity,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
          (System_Int32_array **)Entity,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_B2C434(servantFaceIcon, eventFortificationDetailEntity);
  }
  v37 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          v36);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v37;
  sub_B2C2F8((BattleServantConfConponent_o *)p_orgPanel, (System_Int32_array **)orgPanel, v39, v40, v41, v42, v43, v44);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_41890C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41890C6 = 1;
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
      sub_B2C434(0LL, v4);
    System_Action_int___Invoke(
      clickCallback,
      this->fields.position,
      (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
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
  ServantStatusDialog_EndDelegate_o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v14; // x8

  if ( (byte_41890C7 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B2C35C(&Method_EventFortificationWorkItem_EndShowServant__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_41890C7 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v9 )
      goto LABEL_15;
    CommonUI__OpenServantStatusDialog_17982092(v9, 0, userServantEntity, v10, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
    if ( v11 )
    {
      v14 = this->fields.orgPanel;
      if ( v14 )
      {
        v14->fields.isTouchEnabled = 0;
        return;
      }
LABEL_15:
      sub_B2C434(v11, v12);
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
  IconLabelInfo_o *v35; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v38; // q1
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
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
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
  Il2CppObject *v71; // x0
  System_String_o *v72; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v74; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v76; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-48h] BYREF
  int v81; // [xsp+6Ch] [xbp-34h] BYREF

  if ( (byte_41890C5 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, userServantEntity);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_19294/*"icon_class1002"*/, v18);
    sub_B2C35C(&StringLiteral_19362/*"icon_select"*/, v19);
    sub_B2C35C(&StringLiteral_19285/*"icon_class"*/, v20);
    sub_B2C35C(&StringLiteral_19293/*"icon_class1001"*/, v21);
    sub_B2C35C(&StringLiteral_6412/*"FORTIFICATION_ADD_POINT_INFO"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    sub_B2C35C(&StringLiteral_18821/*"formation_fixing_bg"*/, v24);
    sub_B2C35C(&StringLiteral_19345/*"icon_guest"*/, v25);
    sub_B2C35C(&StringLiteral_4547/*"D3"*/, v26);
    byte_41890C5 = 1;
  }
  v81 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.eventFortificationDetailEntity;
    if ( !servantFaceIcon )
      goto LABEL_107;
    m_CachedPtr = servantFaceIcon[1].fields.m_CachedPtr;
    v40 = (_DWORD)servantFaceIcon + 40;
    v41 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v41 )
      {
        if ( v41 != 8 )
          goto LABEL_32;
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v50 = &StringLiteral_19294/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v50 = &StringLiteral_19293/*"icon_class1001"*/;
      }
      v48 = (System_String_o *)*v50;
      v46 = eventId;
      v47 = emptySprite;
    }
    else
    {
      v43 = this->fields.emptySprite;
      v44 = System_Int32__ToString_38381416(v40, (System_String_o *)StringLiteral_4547/*"D3"*/, 0LL);
      v45 = System_String__Concat_44305532((System_String_o *)StringLiteral_19285/*"icon_class"*/, v44, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v46 = eventId;
      v47 = v43;
      v48 = v45;
    }
    AtlasManager__SetEventUI_28451336(v46, v47, v48, 0LL);
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
        v81 = workType;
        v60 = System_Int32__ToString((int32_t)&v81, 0LL);
      }
      else
      {
        v60 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v61 = this->fields.selectSprite;
      v62 = System_String__Concat_44305532((System_String_o *)StringLiteral_19362/*"icon_select"*/, v60, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_28451336(eventId, v61, v62, 0LL);
    }
    *p_userServantEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v52, v53, v54, v55, v56, v57);
    v39 = 2;
    goto LABEL_45;
  }
  v35 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v35 )
    goto LABEL_107;
  IconLabelInfo__Set_27362128(v35, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_107;
  ServantFaceIconComponent__Set_30719352(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v35,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_107;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v38 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v79.fields.fakeValue = v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v78 = v79;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v78, 0LL) == 0;
LABEL_45:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v39;
  if ( !servantFaceIcon )
    goto LABEL_107;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_52;
  v63 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v63, 0LL, 0LL) )
  {
LABEL_52:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_107;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v64 = this->fields.eventFortificationEntity;
    if ( !v64 )
      goto LABEL_107;
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
        goto LABEL_107;
      UIWidget__set_color((UIWidget_o *)servantFaceIcon, color, 0LL);
    }
  }
  zodiacNameLabel = (UnityEngine_Object_o *)this->fields.zodiacNameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(zodiacNameLabel, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      goto LABEL_107;
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacNameLabel;
    if ( !servantFaceIcon )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)servantFaceIcon, eventFortificationDetailEntity->fields.name, 0LL);
  }
  addPointLabel = (UnityEngine_Object_o *)this->fields.addPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(addPointLabel, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v68 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6412/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v69 = this->fields.eventFortificationDetailEntity;
      if ( !v69 )
        goto LABEL_107;
      v70 = (System_String_o *)servantFaceIcon;
      LODWORD(v79.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                               *p_userServantEntity,
                                               v69->fields.eventId,
                                               0LL);
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v70, v71, 0LL);
      if ( !v68 )
        goto LABEL_107;
      v72 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v68 )
        goto LABEL_107;
      v72 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v68, v72, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v74 = this->fields.guestSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(eventId, v74, (System_String_o *)StringLiteral_19345/*"icon_guest"*/, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.guestSprite;
    if ( !servantFaceIcon )
      goto LABEL_107;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, this->fields.type == 1, 0LL);
  }
  zodiacBgSprite = (UnityEngine_Object_o *)this->fields.zodiacBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(zodiacBgSprite, 0LL, 0LL) )
  {
    v76 = this->fields.zodiacBgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(eventId, v76, (System_String_o *)StringLiteral_18821/*"formation_fixing_bg"*/, 0LL);
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.zodiacBgSprite;
    if ( !servantFaceIcon )
      goto LABEL_107;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      this->fields.isSvtDataSetInMaster,
      0LL);
  }
  lvIconLabel = (UnityEngine_Object_o *)this->fields.lvIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lvIconLabel, 0LL, 0LL) && *p_userServantEntity )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.lvIconLabel;
    if ( servantFaceIcon )
    {
      UIIconLabel__Set_41609428(
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
LABEL_107:
    sub_B2C434(servantFaceIcon, v34);
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

  if ( (byte_41890CC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41890CC = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.orgPanel;
    if ( !v6 )
      sub_B2C434(v4, v5);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool __fastcall EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  EventFortificationWorkItem_o *v2; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_41890CA & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_41890CA = 1;
  }
  if ( !v2->fields.isSvtDataSetInMaster )
    return 0;
  eventFortificationSvtEntity = v2->fields.eventFortificationSvtEntity;
  if ( !eventFortificationSvtEntity )
    goto LABEL_13;
  if ( eventFortificationSvtEntity->fields.type != 1 )
    return 0;
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_13:
    sub_B2C434(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL) == 0;
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
    sub_B2C434(this, method);
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

  if ( (byte_41890C9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41890C9 = 1;
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