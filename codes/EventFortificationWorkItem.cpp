void __fastcall EventFortificationWorkItem___ctor(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E9F64 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1117/*"11814B"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1638/*"A51B1B"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1168/*"2841AE"*/, v12, v13, v14);
    byte_42E9F64 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_1638/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1638/*"A51B1B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_1168/*"2841AE"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1168/*"2841AE"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_1117/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1117/*"11814B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v23, v24, v25, v26, v27, v28, v29);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkItem__EndShowServant(
        EventFortificationWorkItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9F61 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventFortificationWorkItem__EndShowServant_b__27_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E9F61 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventFortificationWorkItem__EndShowServant_b__27_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall EventFortificationWorkItem__Init(
        EventFortificationWorkItem_o *this,
        EventFortificationDetailEntity_o *eventFortificationDetailEntity,
        FortificationOrganizationPanelComponent_o *orgPanel,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *servantFaceIcon; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3
  struct EventFortificationEntity_o *Entity; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x5
  bool v41; // w0
  struct FortificationOrganizationPanelComponent_o **p_orgPanel; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E9F5D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventFortificationMaster___,
      (_DWORD)eventFortificationDetailEntity,
      (_DWORD)orgPanel,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9F5D = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.position = -1;
  this->fields.eventFortificationDetailEntity = eventFortificationDetailEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationDetailEntity,
    (System_Int32_array **)eventFortificationDetailEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.enterUserSvtInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.enterUserSvtInfo, 0LL, v26, v27, v28, v29, v30, v31);
  servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantFaceIcon
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___),
        !eventFortificationDetailEntity)
    || !servantFaceIcon
    || (Entity = EventFortificationMaster__GetEntity(
                   (EventFortificationMaster_o *)servantFaceIcon,
                   eventFortificationDetailEntity->fields.eventId,
                   eventFortificationDetailEntity->fields.fortificationIdx,
                   v32),
        this->fields.eventFortificationEntity = Entity,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
          (System_Int32_array **)Entity,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (servantFaceIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (servantFaceIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)servantFaceIcon,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(servantFaceIcon, eventFortificationDetailEntity);
  }
  v41 = EventFortificationSvtMaster__TryGetEntity(
          (EventFortificationSvtMaster_o *)servantFaceIcon,
          &this->fields.eventFortificationSvtEntity,
          eventFortificationDetailEntity->fields.eventId,
          eventFortificationDetailEntity->fields.fortificationIdx,
          eventFortificationDetailEntity->fields.position,
          v40);
  this->fields.orgPanel = orgPanel;
  p_orgPanel = &this->fields.orgPanel;
  *((_BYTE *)p_orgPanel - 48) = v41;
  sub_B5D560((BattleServantConfConponent_o *)p_orgPanel, (System_Int32_array **)orgPanel, v43, v44, v45, v46, v47, v48);
}


void __fastcall EventFortificationWorkItem__OnClickItem(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_42E9F5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9F5F = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_int___Invoke(
      clickCallback,
      this->fields.position,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventFortificationWorkItem__OnLongPush(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userServantEntity; // x20
  CommonUI_o *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *orgPanel; // x20
  struct FortificationOrganizationPanelComponent_o *v24; // x8

  if ( (byte_42E9F60 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationWorkItem_EndShowServant__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E9F60 = 1;
  }
  if ( !EventFortificationWorkItem__get_IsNpc(this, method) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    userServantEntity = this->fields.userServantEntity;
    v19 = (CommonUI_o *)Instance;
    v20 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventFortificationWorkItem_EndShowServant__,
      0LL);
    if ( !v19 )
      goto LABEL_15;
    CommonUI__OpenServantStatusDialog_18212884(v19, 0, userServantEntity, v20, 0LL);
    orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
    if ( v21 )
    {
      v24 = this->fields.orgPanel;
      if ( v24 )
      {
        v24->fields.isTouchEnabled = 0;
        return;
      }
LABEL_15:
      sub_B5D69C(v21, v22);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  IconLabelInfo_o *v63; // x23
  int32_t lv; // w24
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int128 v66; // q1
  int32_t v67; // w8
  int32_t v68; // w0
  intptr_t v69; // w8
  intptr_t m_CachedPtr; // t1
  struct UISprite_o *v71; // x23
  System_String_o *v72; // x0
  System_String_o *v73; // x24
  int32_t v74; // w0
  UISprite_o *v75; // x1
  System_String_o *v76; // x2
  struct UISprite_o *emptySprite; // x23
  __int64 *v78; // x8
  UnityEngine_Object_o *selectSprite; // x23
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int workType; // w8
  System_String_o *v88; // x1
  UISprite_o *v89; // x23
  System_String_o *v90; // x24
  UnityEngine_Object_o *v91; // x22
  struct EventFortificationEntity_o *v92; // x8
  UnityEngine_Object_o *zodiacNameLabel; // x22
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8
  UnityEngine_Object_o *addPointLabel; // x22
  UILabel_o *v96; // x22
  struct EventFortificationDetailEntity_o *v97; // x8
  System_String_o *v98; // x23
  Il2CppObject *v99; // x0
  System_String_o *v100; // x1
  UnityEngine_Object_o *guestSprite; // x22
  UISprite_o *v102; // x22
  UnityEngine_Object_o *zodiacBgSprite; // x22
  UISprite_o *v104; // x22
  UnityEngine_Object_o *lvIconLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-48h] BYREF
  int v109; // [xsp+6Ch] [xbp-34h] BYREF

  if ( (byte_42E9F5E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)userServantEntity, eventId, *(_QWORD *)&position);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19538/*"icon_class1002"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19606/*"icon_select"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_19529/*"icon_class"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19537/*"icon_class1001"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_6491/*"FORTIFICATION_ADD_POINT_INFO"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1/*""*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_19057/*"formation_fixing_bg"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_19589/*"icon_guest"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_4620/*"D3"*/, v52, v53, v54);
    byte_42E9F5E = 1;
  }
  v109 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)callback,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
    v68 = (_DWORD)servantFaceIcon + 40;
    v69 = m_CachedPtr;
    if ( (unsigned int)(m_CachedPtr - 1) >= 7 )
    {
      if ( v69 )
      {
        if ( v69 != 8 )
          goto LABEL_32;
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v78 = &StringLiteral_19538/*"icon_class1002"*/;
      }
      else
      {
        emptySprite = this->fields.emptySprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v78 = &StringLiteral_19537/*"icon_class1001"*/;
      }
      v76 = (System_String_o *)*v78;
      v74 = eventId;
      v75 = emptySprite;
    }
    else
    {
      v71 = this->fields.emptySprite;
      v72 = System_Int32__ToString_39741776(v68, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
      v73 = System_String__Concat_44577788((System_String_o *)StringLiteral_19529/*"icon_class"*/, v72, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v74 = eventId;
      v75 = v71;
      v76 = v73;
    }
    AtlasManager__SetEventUI_31190412(v74, v75, v76, 0LL);
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
        v109 = workType;
        v88 = System_Int32__ToString((int32_t)&v109, 0LL);
      }
      else
      {
        v88 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v89 = this->fields.selectSprite;
      v90 = System_String__Concat_44577788((System_String_o *)StringLiteral_19606/*"icon_select"*/, v88, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_31190412(eventId, v89, v90, 0LL);
    }
    *p_userServantEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v80, v81, v82, v83, v84, v85);
    v67 = 2;
    goto LABEL_45;
  }
  v63 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v63, 0LL);
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (UnityEngine_Component_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v63 )
    goto LABEL_107;
  IconLabelInfo__Set_28463004(v63, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_107;
  ServantFaceIconComponent__Set_30775392(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    userServantEntity,
    v63,
    0LL,
    0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_107;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  v66 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v66;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v106 = v107;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v106, 0LL) == 0;
LABEL_45:
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  this->fields.type = v67;
  if ( !servantFaceIcon )
    goto LABEL_107;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_52;
  v91 = (UnityEngine_Object_o *)this->fields.selectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v91, 0LL, 0LL) )
  {
LABEL_52:
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !servantFaceIcon )
      goto LABEL_107;
    servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    v92 = this->fields.eventFortificationEntity;
    if ( !v92 )
      goto LABEL_107;
    if ( EventFortificationDataLogic__TryGetColorByWorkType(
           &color,
           this->fields.colorCodeMilitsry,
           this->fields.colorCodeInternal,
           this->fields.colorCodeFarmming,
           this->fields.colorCodeA,
           v92->fields.workType,
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
    v96 = this->fields.addPointLabel;
    if ( this->fields.userServantEntity )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantFaceIcon = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6491/*"FORTIFICATION_ADD_POINT_INFO"*/, 0LL);
      v97 = this->fields.eventFortificationDetailEntity;
      if ( !v97 )
        goto LABEL_107;
      v98 = (System_String_o *)servantFaceIcon;
      LODWORD(v107.fields.currentCryptoKey) = EventFortificationDataLogic__CalculationGetPoint(
                                                *p_userServantEntity,
                                                v97->fields.eventId,
                                                0LL);
      v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
      servantFaceIcon = (UnityEngine_Component_o *)System_String__Format(v98, v99, 0LL);
      if ( !v96 )
        goto LABEL_107;
      v100 = (System_String_o *)servantFaceIcon;
    }
    else
    {
      if ( !v96 )
        goto LABEL_107;
      v100 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v96, v100, 0LL);
  }
  guestSprite = (UnityEngine_Object_o *)this->fields.guestSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(guestSprite, 0LL, 0LL) )
  {
    v102 = this->fields.guestSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, v102, (System_String_o *)StringLiteral_19589/*"icon_guest"*/, 0LL);
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
    v104 = this->fields.zodiacBgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, v104, (System_String_o *)StringLiteral_19057/*"formation_fixing_bg"*/, 0LL);
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
      UIIconLabel__Set_41886452(
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
    sub_B5D69C(servantFaceIcon, v62);
  }
}


void __fastcall EventFortificationWorkItem___EndShowServant_b__27_0(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *orgPanel; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct FortificationOrganizationPanelComponent_o *v8; // x8

  if ( (byte_42E9F65 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F65 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.orgPanel;
    if ( !v8 )
      sub_B5D69C(v6, v7);
    v8->fields.isTouchEnabled = 1;
  }
}


int32_t __fastcall EventFortificationWorkItem__get_AddPoint(
        EventFortificationWorkItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  eventFortificationDetailEntity = this->fields.eventFortificationDetailEntity;
  if ( !eventFortificationDetailEntity )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return eventFortificationDetailEntity->fields.fortificationIdx;
}


bool __fastcall EventFortificationWorkItem__get_IsNpc(EventFortificationWorkItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventFortificationWorkItem_o *v4; // x19
  struct EventFortificationSvtEntity_o *eventFortificationSvtEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E9F63 & 1) == 0 )
  {
    this = (EventFortificationWorkItem_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             (_DWORD)method,
                                             v2,
                                             v3);
    byte_42E9F63 = 1;
  }
  if ( !v4->fields.isSvtDataSetInMaster )
    return 0;
  eventFortificationSvtEntity = v4->fields.eventFortificationSvtEntity;
  if ( !eventFortificationSvtEntity )
    goto LABEL_13;
  if ( eventFortificationSvtEntity->fields.type != 1 )
    return 0;
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_13:
    sub_B5D69C(this, method);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v9, 0LL) == 0;
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E9F62 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9F62 = 1;
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