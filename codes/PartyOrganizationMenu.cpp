void PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int v9; // w8

  if ( (byte_4D2C409 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&PartyOrganizationMenu_TypeInfo);
    byte_4D2C409 = 1;
  }
  v1 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v1 )
    sub_1C93D2C(0, v2);
  v9 = *(_DWORD *)(v1 + 24);
  if ( !v9 || (*(_DWORD *)(v1 + 32) = -55, v9 == 1) )
    sub_1C93D34(v1);
  *(_DWORD *)(v1 + 36) = 45;
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = (struct System_Int32_array *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)PartyOrganizationMenu_TypeInfo->static_fields, v1, v3, v4, v5, v6, v7, v8);
}


void PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C408 & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2C408 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)n,
      v9->fields.method);
  }
}


void PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(
        PartyOrganizationMenu_o *this,
        int32_t num,
        System_Action_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  int64_t partyItem; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x8
  int64_t currentCryptoKey; // x22
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  int64_t v37; // x22
  __int64 v38; // x9
  __int64 v39; // x27
  __int64 v40; // x28
  __int64 v41; // x24
  __int64 v42; // x25
  int64_t v43; // x23
  Il2CppObject *Instance; // x26
  int32_t v45; // w27
  __int64 v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x21
  __int64 v48; // x23
  __int64 v49; // x24
  ServantEntity_o *Entity; // x23
  int32_t Value; // w21
  Il2CppObject *v52; // x0
  __int128 v53; // q0
  __int128 v54; // q1
  CommonUI_o *v55; // x22
  int32_t v56; // w25
  int64_t v57; // x24
  System_Action_bool__bool__int__o *v58; // x26
  PartyOrganizationUtility_o *v59; // x20
  System_String_o *ServantShortName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4D2C405 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__bool__int__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_PartyOrganizationMenu___c__DisplayClass58_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__);
    sub_1C93AD4(&PartyOrganizationMenu___c__DisplayClass58_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_7037/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_4D2C405 = 1;
  }
  v7 = sub_1C93D20(PartyOrganizationMenu___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_52;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = onComplete;
  v16 = v7 + 32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)onComplete, v17, v18, v19, v20, v21, v22);
  partyItem = (int64_t)this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_52;
  Member = PartyListViewItem__GetMember((PartyListViewItem_o *)partyItem, num, 0);
  *(_QWORD *)(v7 + 16) = Member;
  v24 = v7 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)Member, v25, v26, v27, v28, v29, v30);
  partyItem = *(_QWORD *)(v7 + 16);
  if ( !partyItem )
    goto LABEL_52;
  partyItem = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyItem, 0);
  if ( (partyItem & 1) != 0 )
    goto LABEL_7;
  if ( !*(_QWORD *)v24 )
LABEL_52:
    sub_1C93D2C(partyItem, v9);
  v31 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
  if ( v31 )
  {
    v62.fields.currentCryptoKey = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v62,
      *(_DWORD *)(v31 + 24),
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    currentCryptoKey = v62.fields.currentCryptoKey;
  }
  else
  {
    currentCryptoKey = 0;
  }
  partyItem = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    partyItem = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)currentCryptoKey && *(_DWORD *)(*(_QWORD *)(partyItem + 184) + 52LL) == HIDWORD(currentCryptoKey) )
  {
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v33 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
    if ( !v33 )
      goto LABEL_52;
    if ( !*(_DWORD *)(v33 + 24) )
      goto LABEL_53;
    if ( !*(_QWORD *)(v33 + 32) )
      goto LABEL_7;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    partyItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v34 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
    if ( !v34 )
      goto LABEL_52;
    if ( !*(_DWORD *)(v34 + 24) )
      goto LABEL_53;
    if ( !partyItem )
      goto LABEL_52;
    partyItem = (int64_t)DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)partyItem,
                           *(_QWORD *)(v34 + 32),
                           (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v35 = *(_QWORD *)v24;
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v36 = *(_QWORD *)(v35 + 120);
    if ( !v36 )
      goto LABEL_52;
    v37 = partyItem;
    if ( !partyItem )
      goto LABEL_52;
    v38 = *(_QWORD *)(v35 + 152);
    if ( !v38 )
      goto LABEL_52;
    if ( *(_DWORD *)(v38 + 24) <= 1u )
LABEL_53:
      sub_1C93D34(partyItem);
    v39 = *(_QWORD *)(v36 + 80);
    v40 = *(_QWORD *)(v36 + 88);
    v41 = *(_QWORD *)(partyItem + 80);
    v42 = *(_QWORD *)(partyItem + 88);
    v43 = *(_QWORD *)(v38 + 40);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v39;
    *(_QWORD *)&v63.fields.fakeValue = v40;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v63, 0);
    *(_QWORD *)&v64.fields.currentCryptoKey = v41;
    *(_QWORD *)&v64.fields.fakeValue = v42;
    partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v64, 0);
    if ( !Instance )
      goto LABEL_52;
    partyItem = PartyOrganizationUtility__IsShowBondEquipGuideDialog(
                  (PartyOrganizationUtility_o *)Instance,
                  v45,
                  partyItem,
                  v43,
                  0);
    if ( (partyItem & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( *(_QWORD *)v24 )
      {
        v46 = *(_QWORD *)(*(_QWORD *)v24 + 120LL);
        if ( v46 )
        {
          v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyItem;
          v49 = *(_QWORD *)(v46 + 80);
          v48 = *(_QWORD *)(v46 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v49;
          *(_QWORD *)&v65.fields.fakeValue = v48;
          partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v65, 0);
          if ( v47 )
          {
            Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          v47,
                                          partyItem,
                                          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7037/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
            v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v53 = *(_OWORD *)(v37 + 16);
            v54 = *(_OWORD *)(v37 + 32);
            v55 = (CommonUI_o *)v52;
            *(_OWORD *)&v62.fields.currentCryptoKey = v53;
            *(_OWORD *)&v62.fields.fakeValue = v54;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v61 = v62;
            partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v61, 0);
            if ( *(_QWORD *)v24 )
            {
              v56 = *(_DWORD *)(*(_QWORD *)v24 + 160LL);
              v57 = partyItem;
              v58 = (System_Action_bool__bool__int__o *)sub_1C93D20(System_Action_bool__bool__int__TypeInfo);
              System_Action_bool__bool__int____ctor(
                v58,
                (Il2CppObject *)v7,
                Method_PartyOrganizationMenu___c__DisplayClass58_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__,
                0);
              partyItem = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( Entity )
              {
                v59 = (PartyOrganizationUtility_o *)partyItem;
                partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(Entity->fields.id, 0);
                if ( v59 )
                {
                  ServantShortName = PartyOrganizationUtility__GetServantShortName(v59, partyItem, 0);
                  partyItem = (int64_t)ServantEntity__getClassName(Entity, 0);
                  if ( *(_QWORD *)v24 )
                  {
                    if ( v55 )
                    {
                      CommonUI__OpenGrandBondEquipTargetConfirmDialog(
                        v55,
                        v57,
                        Value,
                        v56,
                        v58,
                        ServantShortName,
                        (System_String_o *)partyItem,
                        *(_DWORD *)(*(_QWORD *)v24 + 216LL),
                        0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_52;
    }
  }
LABEL_7:
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v16 + 64LL),
    *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


void PartyOrganizationMenu__ClearItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0),
        (mainDeckBase = (UnityEngine_GameObject_o *)this->fields.partyOrganizationListViewManager) == 0) )
  {
    sub_1C93D2C(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_34936652(this, 0, v2);
}


void PartyOrganizationMenu__Close_34936652(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2C3FF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_EndClose__);
    byte_4D2C3FF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0);
}


void PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyOrganizationMenu__EndCloseTutorialArrowDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton) == 0)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0)) == 0 )
  {
    sub_1C93D2C(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x21
  System_Action_o *v14; // x22
  GrandQuestFolderBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v16; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v19; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4D2C3FE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_13694/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4D2C3FE = 1;
  }
  if ( this->fields.mode == 4 )
  {
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
    if ( !tutorialMaskBase )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppClass **))tutorialMaskBase->klass[1]._1.nestedTypes)(
      tutorialMaskBase,
      0,
      0,
      tutorialMaskBase->klass[1]._1.implementedInterfaces);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
    if ( !tutorialMaskBase )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)tutorialMaskBase,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 2, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13694/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0);
    v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0);
    if ( !Instance )
LABEL_21:
      sub_1C93D2C(tutorialMaskBase, method);
    v18.fields.x = AddOffset.fields.x + 422.0;
    v18.fields.y = AddOffset.fields.y + -231.0;
    v19.fields.m_XMin = AddOffset.fields.x + 329.0;
    v19.fields.m_YMin = AddOffset.fields.y + -291.0;
    v19.fields.m_Width = 190.0;
    v19.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v13, v18, v19, 0.0, 0, -1, v14, 0);
  }
  else if ( this->fields.callbackFunc )
  {
    this->fields.state = 2;
    PartyOrganizationMenu__SetInput(this, 1, v2);
  }
  else
  {
    this->fields.state = 3;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
  v16 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C93A78(p_openCallbackFunc, 0, (int32_t)v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v16->fields.invoke_impl)(v16->fields.method_code, v16->fields.method);
  }
}


void PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1C93D2C(0, method);
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, 0);
}


PartyListViewItem_o *PartyOrganizationMenu__GetItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}


void PartyOrganizationMenu__Init(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.partyItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, 0, v3, v4, v5, v6, v7, v8);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2C407 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C407 = 1;
  }
  entity = 0;
  v11 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v11, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_1C93D2C(Master_object, v7);
    }
    return 0;
  }
  return 1;
}


void PartyOrganizationMenu__ModifyItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v4; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  const MethodInfo *v6; // x2

  partyItem = this->fields.partyItem;
  if ( !partyItem
    || (PartyListViewItem__Modify(partyItem, this->fields.isOtherValidEventIdFilter, 0),
        (partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager) == 0)
    || (PartyOrganizationListViewManager__RequestListObject_34917280(
          this->fields.partyOrganizationListViewManager,
          9,
          v4),
        PartyOrganizationListViewManager__RequestDropObject_34917732(partyOrganizationListViewManager, 10, v6),
        (partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator) == 0) )
  {
    sub_1C93D2C(partyItem, method);
  }
  PartyListViewIndicator__UpdateCost((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0);
}


void PartyOrganizationMenu__OnClickCancel(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( this->fields.state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C93D2C(0, method);
    PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 0, -1, v5);
  }
}


void PartyOrganizationMenu__OnClickDecide(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4D2C401 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C401 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_31603748((CommonUI_o *)Instance, v8, 0);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v6);
      return;
    }
LABEL_11:
    sub_1C93D2C(partyOrganizationListViewManager, method);
  }
}


void PartyOrganizationMenu__OnClickInfomation(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4D2C402 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickInfomation__);
    byte_4D2C402 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C93D2C(0, v5);
    PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 3, -1, v8);
  }
}


void PartyOrganizationMenu__OnClickItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        int32_t o,
        const MethodInfo *method)
{
  __int64 v9; // x20
  PartyListViewItem_o *partyItem; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  PartyListViewItem_o *v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w1
  int v23; // w22
  const MethodInfo *v24; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x22
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  struct PartyOrganizationListViewManager_o *v35; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  const MethodInfo *v44; // x2

  if ( (byte_4D2C404 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickItem__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__0__);
    sub_1C93AD4(&PartyOrganizationMenu___c__DisplayClass57_0_TypeInfo);
    byte_4D2C404 = 1;
  }
  v9 = sub_1C93D20(PartyOrganizationMenu___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_55;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = n;
  if ( this->fields.state == 2 )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_55;
    partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, n, 0);
    if ( result == 2 )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, *(_DWORD *)(v9 + 24), 0);
        if ( partyItem )
        {
          partyItem = (PartyListViewItem_o *)PartyOrganizationListViewItem__RemoveEquipDuplication(
                                               (PartyOrganizationListViewItem_o *)partyItem,
                                               0);
          if ( this->fields.partyItem )
          {
            v23 = (int)partyItem;
            partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(this->fields.partyItem, o, 0);
            if ( partyItem )
            {
              if ( ((v23
                   | PartyOrganizationListViewItem__RemoveEquipDuplication(
                       (PartyOrganizationListViewItem_o *)partyItem,
                       0))
                  & 1) != 0 )
              {
                partyItem = this->fields.partyItem;
                if ( !partyItem )
                  goto LABEL_55;
                PartyListViewItem__CheckRestriction(partyItem, 0);
                partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
                if ( !partyOrganizationListViewManager )
                  goto LABEL_55;
                PartyOrganizationListViewManager__RequestListObject_34917280(
                  this->fields.partyOrganizationListViewManager,
                  9,
                  v24);
                PartyOrganizationListViewManager__RequestDropObject_34917732(partyOrganizationListViewManager, 10, v26);
              }
              partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
              if ( partyItem )
              {
                PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0);
                v27 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                System_Action___ctor(
                  v27,
                  (Il2CppObject *)v9,
                  Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__0__,
                  0);
                PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(this, o, v27, v28);
                return;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C93D2C(partyItem, v11);
    }
    v19 = partyItem;
    if ( result != 1 )
    {
      if ( !result )
      {
        if ( !partyItem )
          goto LABEL_55;
        if ( LOBYTE(partyItem[1].fields.sortValue1) )
        {
LABEL_11:
          partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
          this->fields.state = 3;
          if ( partyItem )
          {
            PartyOrganizationListViewManager__SetMode_34920604((PartyOrganizationListViewManager_o *)partyItem, 1, v18);
            goto LABEL_13;
          }
          goto LABEL_55;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortValue0)
          && !BYTE1(partyItem[1].fields.sortValue0)
          && PartyOrganizationListViewItem__IsEnabledChangeGrandSvt((PartyOrganizationListViewItem_o *)partyItem, 0) )
        {
          if ( !LOBYTE(v19[1].fields.sortValue1) )
          {
            partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !partyItem )
              goto LABEL_55;
            if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0) )
            {
              v31 = Method_PartyOrganizationMenu_OnClickItem__;
              if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
                v31 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickItem__);
              v32 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v31, v31[4]);
              OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
            }
          }
          goto LABEL_11;
        }
        v33 = Method_PartyOrganizationMenu_OnClickItem__;
        if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickItem__);
        v34 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0);
      }
      goto LABEL_53;
    }
    if ( !partyItem )
      goto LABEL_55;
    if ( LOBYTE(partyItem[1].fields.sortValue1) )
    {
      if ( !*(_QWORD *)&partyItem->fields.menuKind )
        goto LABEL_31;
    }
    else if ( LOBYTE(partyItem->fields.id)
           || LOBYTE(partyItem[1].fields.sortValue0)
           || BYTE1(partyItem[1].fields.sortValue0) )
    {
LABEL_53:
      v35 = this->fields.partyOrganizationListViewManager;
      v36 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C93D20(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
        v37);
      if ( !v35 )
        goto LABEL_55;
      v35->fields.callbackFunc = v36;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v35->fields.callbackFunc, (int32_t)v36, v38, v39, v40, v41, v42, v43);
      PartyOrganizationListViewManager__SetMode_34920604(v35, 2, v44);
      return;
    }
    v29 = Method_PartyOrganizationMenu_OnClickItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickItem__);
    v30 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
LABEL_31:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_34920604((PartyOrganizationListViewManager_o *)partyItem, 1, v18);
      if ( !LOBYTE(v19[1].fields.sortValue1) || *(_QWORD *)&v19->fields.menuKind )
      {
        v21 = *(_DWORD *)(v9 + 24);
        v22 = 6;
        goto LABEL_35;
      }
LABEL_13:
      v21 = *(_DWORD *)(v9 + 24);
      v22 = 5;
LABEL_35:
      PartyOrganizationMenu__Callback(this, v22, v21, v20);
      return;
    }
    goto LABEL_55;
  }
}


void PartyOrganizationMenu__OnClickPointEvent(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4D2C403 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickPointEvent__);
    byte_4D2C403 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C93D2C(0, v5);
    PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 4, -1, v8);
  }
}


void PartyOrganizationMenu__OnClickQuestInfo(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4D2C406 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickQuestInfo__);
    byte_4D2C406 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C93D2C(0, v5);
    PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v6);
    PartyOrganizationMenu__Callback(this, 7, -1, v8);
  }
}


void PartyOrganizationMenu__OnClickRemove(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x0
  const MethodInfo *v5; // x3

  if ( this->fields.state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C93D2C(0, method);
    PartyOrganizationListViewManager__SetMode_34920604(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 2, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__Open(
        PartyOrganizationMenu_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t tutorialMode,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  char *gameObject; // x0
  __int64 v44; // x1
  int v45; // w22
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v55; // x2
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  const MethodInfo *v80; // x2
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x2
  System_Action_o *v98; // x20

  if ( (byte_4D2C3FD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_EndOpen__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&StringLiteral_19924/*"func_group_icon_1009_starting"*/);
    sub_1C93AD4(&StringLiteral_12399/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    byte_4D2C3FD = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (int32_t)setupInfo,
        (System_String_o *)questRestrictionInfo,
        (int32_t)callback,
        (int64_t)openCallback,
        *(System_String_o **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      this->fields.partyItem = partyItem;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      this->fields.setupInfo = setupInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v80);
      PartyOrganizationMenu__SetInput(this, 0, v93);
      PartyOrganizationMenu__SetupButton(this, 1, v94);
      PartyOrganizationMenu__EndOpen(this, v95);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (int32_t)setupInfo,
        (System_String_o *)questRestrictionInfo,
        (int32_t)callback,
        (int64_t)openCallback,
        *(System_String_o **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      this->fields.partyItem = partyItem;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (int32_t)setupInfo,
        (System_String_o *)questRestrictionInfo,
        (int32_t)callback,
        (int64_t)openCallback,
        *(System_String_o **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this->fields.partyItem = partyItem;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      this->fields.setupInfo = setupInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (char *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (char *)BalanceConfig_TypeInfo;
        }
        if ( this->fields.startingMemberFriendshipSprite )
        {
          v45 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 1152LL);
          gameObject = (char *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                                 0);
          if ( gameObject )
          {
            if ( v45 < 1 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              gameObject = (char *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                  gameObject = (char *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                      goto LABEL_34;
                    }
                  }
                }
              }
            }
            else
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (char *)this->fields.startingMemberFriendshipLabel;
              if ( gameObject )
              {
                gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                  gameObject = (char *)this->fields.startingMemberFriendshipLabelOver;
                  if ( gameObject )
                  {
                    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                      gameObject = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *((_QWORD *)gameObject + 15) = partyItem;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(gameObject + 120),
                          (int32_t)partyItem,
                          v46,
                          v47,
                          v48,
                          v49,
                          v50,
                          v51);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19924/*"func_group_icon_1009_starting"*/,
                          0);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12399/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12399/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0);
LABEL_34:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v55);
                            PartyOrganizationMenu__SetInput(this, 0, v96);
                            PartyOrganizationMenu__SetupButton(this, 0, v97);
                            this->fields.state = 1;
                            v98 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                            System_Action___ctor(v98, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0);
                            BaseMenu__Open((BaseMenu_o *)this, v98, 0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_1C93D2C(gameObject, v44);
  }
}


void PartyOrganizationMenu__SelectItem(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t selectMember,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (selectMember & 0x80000000) == 0 )
    PartyOrganizationMenu__OnClickItem(this, result, selectMember, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetInput(PartyOrganizationMenu_o *this, bool isInput, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_4D2C3FC & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu_o *)sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4D2C3FC = 1;
  }
  klass = v4[6].klass;
  if ( !isInput )
  {
    if ( klass )
    {
      v14 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1C93D2C(this, isInput);
  }
  v6 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C93D20(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v6, v4, (intptr_t)Method_PartyOrganizationMenu_OnClickItem__, v7);
  if ( !klass )
    goto LABEL_9;
  klass->vtable[3].method = (const MethodInfo *)v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&klass->vtable[3].method, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_34920604((PartyOrganizationListViewManager_o *)klass, v14, method);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetItem(PartyOrganizationMenu_o *this, int32_t friendBonusVal, const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyListViewItem_o *partyItem; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_4D2C3FB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationMenu_ModifyItem__);
    byte_4D2C3FB = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0),
        partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager,
        partyItem = this->fields.partyItem,
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_ModifyItem__, 0),
        !partyOrganizationListViewManager) )
  {
    sub_1C93D2C(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  PartyOrganizationListViewManager__CreateList(partyOrganizationListViewManager, 8, partyItem, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetupButton(PartyOrganizationMenu_o *this, bool isMove, const MethodInfo *method)
{
  UnityEngine_Component_o *partyRemoveButton; // x0
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  char v8; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v11; // x1
  char v12; // w22
  UnityEngine_GameObject_o *v13; // x20
  PartyOrganizationMenu_c *v14; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  int v16; // w21
  float OffsetX; // s0
  bool v18; // w1
  struct QuestRestrictionInfo_o *v19; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v22; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_4D2C400 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PartyOrganizationMenu_TypeInfo);
    sub_1C93AD4(&QuestInformationComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_17804/*"buttontxt_formation_20"*/);
    byte_4D2C400 = 1;
  }
  if ( this->fields.menuKind == 9 )
  {
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
    if ( partyRemoveButton )
    {
      partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
      if ( partyRemoveButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0);
        classInfoButton = (UnityEngine_Object_o *)this->fields.classInfoButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(classInfoButton, 0, 0) )
        {
          partyRemoveButton = (UnityEngine_Component_o *)this->fields.classInfoButton;
          if ( !partyRemoveButton )
            goto LABEL_71;
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
          if ( !partyRemoveButton )
            goto LABEL_71;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0);
        }
        partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
        if ( partyRemoveButton )
        {
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
          if ( partyRemoveButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0);
            partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
            if ( partyRemoveButton )
            {
              partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
              if ( partyRemoveButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0);
                partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
                if ( partyRemoveButton )
                {
                  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   partyRemoveButton,
                                                                   0);
                  if ( partyRemoveButton )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_71:
    sub_1C93D2C(partyRemoveButton, isMove);
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_71;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)partyRemoveButton, 0) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_71;
    if ( QuestRestrictionInfo__IsUseEventDeck((QuestRestrictionInfo_o *)partyRemoveButton, 0) )
    {
LABEL_25:
      partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
        partyRemoveButton,
        3,
        isMove,
        partyRemoveButton->klass[1]._1.implementedInterfaces);
    }
  }
  if ( this->fields.setupInfo )
  {
    partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    if ( *(_BYTE *)(partyRemoveButton[7].fields.m_CachedPtr + 1169) )
    {
      v8 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_71;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_71;
      v8 = LODWORD(eventIdList->max_length) != 0;
    }
  }
  else
  {
    v8 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v8, 0);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
    partyRemoveButton,
    0,
    isMove,
    partyRemoveButton->klass[1]._1.implementedInterfaces);
  partyRemoveButton = (UnityEngine_Component_o *)PartyOrganizationMenu__IsHintDialog(this, v11);
  if ( !this->fields.hintDialogButton )
    goto LABEL_71;
  v12 = (char)partyRemoveButton;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                   0);
  v13 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v12 & 1) != 0 )
  {
    v14 = PartyOrganizationMenu_TypeInfo;
    if ( !PartyOrganizationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo);
      v14 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v14->static_fields->LAYOUT_POS_X_HINT;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_65479040(v8, 0);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_71;
    if ( (unsigned int)partyRemoveButton >= LODWORD(LAYOUT_POS_X_HINT->max_length) )
      sub_1C93D34(partyRemoveButton);
    v16 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton];
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
    GameObjectExtensions__SetLocalPositionX(v13, (float)v16 - OffsetX, 0);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_71;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
    if ( !partyRemoveButton )
      goto LABEL_71;
    v18 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_71;
    v18 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v18, 0);
  if ( this->fields.menuKind == 8 || (v19 = this->fields.questRestrictionInfo) == 0 )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v19->fields.questId;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_71;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
  if ( !partyRemoveButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0);
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v22->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17804/*"buttontxt_formation_20"*/, 0);
  }
}


void PartyOrganizationMenu__add_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationMenu_o *v11; // x0
  PartyOrganizationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2C3F9 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4D2C3F9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v8->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1C940C8(v8);
  PartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
}


bool PartyOrganizationMenu__get_IsOtherValidEventIdFilter(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  return this->fields.isOtherValidEventIdFilter;
}


void PartyOrganizationMenu__remove_callbackFunc(
        PartyOrganizationMenu_o *this,
        PartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2C3FA & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4D2C3FA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationMenu_CallbackFunc_c *)v8->klass != PartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1C940C8(v8);
  PartyOrganizationMenu__get_IsOtherValidEventIdFilter(v11, v12);
}


void PartyOrganizationMenu__set_IsOtherValidEventIdFilter(
        PartyOrganizationMenu_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isOtherValidEventIdFilter = value;
}


void PartyOrganizationMenu_CallbackFunc___ctor(
        PartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC30DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3084;
}


System_IAsyncResult_o *PartyOrganizationMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = n;
  v12 = result;
  if ( (byte_4D2C40A & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&PartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4D2C40A = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void PartyOrganizationMenu_CallbackFunc__Invoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    this->fields.method);
}


void PartyOrganizationMenu___c__DisplayClass57_0___ctor(
        PartyOrganizationMenu___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyOrganizationMenu___c__DisplayClass57_0___OnClickItem_b__0(
        PartyOrganizationMenu___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  PartyOrganizationMenu___c__DisplayClass57_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  PartyOrganizationMenu_o *_4__this; // x20
  int32_t n; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4D2C40B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass57_0_o *)sub_1C93AD4(&Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__1__);
    byte_4D2C40B = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  n = v3->fields.n;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(_4__this, n, _9__1, v2);
}


void PartyOrganizationMenu___c__DisplayClass57_0___OnClickItem_b__1(
        PartyOrganizationMenu___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  PartyOrganizationMenu___c__DisplayClass57_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  Il2CppClass *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4D2C40C & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass57_0_o *)sub_1C93AD4(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4D2C40C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v5 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C93D20(PartyOrganizationListViewManager_CallbackFunc_TypeInfo),
        PartyOrganizationListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
          v6),
        !klass) )
  {
    sub_1C93D2C(this, method);
  }
  klass->vtable[3].method = (const MethodInfo *)v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&klass->vtable[3].method, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  PartyOrganizationListViewManager__SetMode_34920604((PartyOrganizationListViewManager_o *)klass, 2, v13);
}


void PartyOrganizationMenu___c__DisplayClass58_0___ctor(
        PartyOrganizationMenu___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu___c__DisplayClass58_0___CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0(
        PartyOrganizationMenu___c__DisplayClass58_0_o *this,
        bool isDecide,
        bool changeBond,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  PartyOrganizationMenu___c__DisplayClass58_0_o *v5; // x19
  struct System_Action_o *onComplete; // x8

  v5 = this;
  if ( isDecide && changeBond )
  {
    this = (PartyOrganizationMenu___c__DisplayClass58_0_o *)this->fields.item;
    if ( !this
      || (*((_DWORD *)this + 40) = equipBondSkillChange,
          PartyOrganizationListViewItem__MoveBondEquip((PartyOrganizationListViewItem_o *)this, 0),
          (this = (PartyOrganizationMenu___c__DisplayClass58_0_o *)v5->fields.__4__this) == 0) )
    {
LABEL_8:
      sub_1C93D2C(this, isDecide);
    }
    PartyOrganizationMenu__ModifyItem((PartyOrganizationMenu_o *)this, (const MethodInfo *)isDecide);
  }
  onComplete = v5->fields.onComplete;
  if ( !onComplete )
    goto LABEL_8;
  ((void (__fastcall *)(intptr_t, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    onComplete->fields.method);
}