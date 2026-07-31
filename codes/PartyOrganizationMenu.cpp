void PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  int v9; // w8
  __int64 v10; // x1
  MissionNaviTransitionBoardItem_o *static_fields; // x0

  if ( (byte_5933F9B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&PartyOrganizationMenu_TypeInfo);
    byte_5933F9B = 1;
  }
  v1 = sub_21FFD10(int___TypeInfo, 2);
  if ( !v1 )
    sub_21FFECC(0, v2);
  v9 = *(_DWORD *)(v1 + 24);
  v10 = v1;
  if ( !v9 || (*(_DWORD *)(v1 + 32) = -55, v9 == 1) )
    sub_21FFED4(v1);
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = (struct System_Int32_array *)v1;
  static_fields = (MissionNaviTransitionBoardItem_o *)PartyOrganizationMenu_TypeInfo->static_fields;
  *(_DWORD *)(v10 + 36) = 45;
  sub_21FFBF4(static_fields, v10, v3, v4, v5, v6, v7, v8);
}


void PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933F9A & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5933F9A = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__Callback(
        PartyOrganizationMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, *(System_String_o **)&n, (System_String_o *)method, v4, v5, v6, v7);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v24; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x2
  __int64 v32; // x8
  System_Nullable_int__o v33; // x0
  int32_t v34; // w1
  int64_t currentCryptoKey; // x22
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x8
  int64_t v40; // x24
  __int64 v41; // x9
  __int64 v42; // x27
  __int64 v43; // x28
  __int64 v44; // x25
  __int64 v45; // x26
  int64_t v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *Instance; // x23
  int32_t v50; // w27
  ServantEntity_o *ServantEntity; // x23
  int32_t Value; // w21
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppObject *v55; // x22
  __int128 v56; // q1
  int64_t v57; // x24
  int32_t v58; // w25
  System_Action_bool__bool__int__o *v59; // x26
  __int64 v60; // x8
  PartyOrganizationUtility_o *v61; // x20
  __int64 v62; // x2
  __int64 v63; // x27
  __int64 v64; // x28
  int32_t v65; // w27
  System_String_o *ServantShortName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_5933F97 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__bool__int__TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_PartyOrganizationMenu___c__DisplayClass58_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__);
    sub_21FFC50(&PartyOrganizationMenu___c__DisplayClass58_0_TypeInfo);
    sub_21FFC50(&StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_5933F97 = 1;
  }
  v7 = sub_21FFEBC(PartyOrganizationMenu___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_52;
  *(_QWORD *)(v7 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = onComplete;
  v16 = v7 + 32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)onComplete, v17, v18, v19, v20, v21, v22);
  partyItem = (int64_t)this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_52;
  Member = PartyListViewItem__GetMember((PartyListViewItem_o *)partyItem, num, 0);
  *(_QWORD *)(v7 + 16) = Member;
  v24 = v7 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)Member, v25, v26, v27, v28, v29, v30);
  partyItem = *(_QWORD *)(v7 + 16);
  if ( !partyItem )
    goto LABEL_52;
  partyItem = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyItem, 0);
  if ( (partyItem & 1) != 0 )
    goto LABEL_7;
  if ( !*(_QWORD *)v24 )
LABEL_52:
    sub_21FFECC(partyItem, v9);
  v32 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
  if ( v32 )
  {
    v33 = (System_Nullable_int__o)&v68;
    v34 = *(_DWORD *)(v32 + 24);
    v68.fields.currentCryptoKey = 0;
    System_Nullable_int____ctor(v33, v34, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    currentCryptoKey = v68.fields.currentCryptoKey;
  }
  else
  {
    currentCryptoKey = 0;
  }
  partyItem = (int64_t)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v31);
    partyItem = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)currentCryptoKey && *(_DWORD *)(*(_QWORD *)(partyItem + 184) + 52LL) == HIDWORD(currentCryptoKey) )
  {
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v36 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
    if ( !v36 )
      goto LABEL_52;
    if ( !*(_DWORD *)(v36 + 24) )
      goto LABEL_53;
    if ( !*(_QWORD *)(v36 + 32) )
      goto LABEL_7;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v31);
    partyItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v37 = *(_QWORD *)(*(_QWORD *)v24 + 152LL);
    if ( !v37 )
      goto LABEL_52;
    if ( !*(_DWORD *)(v37 + 24) )
      goto LABEL_53;
    if ( !partyItem )
      goto LABEL_52;
    partyItem = (int64_t)DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)partyItem,
                           *(_QWORD *)(v37 + 32),
                           (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v38 = *(_QWORD *)v24;
    if ( !*(_QWORD *)v24 )
      goto LABEL_52;
    v39 = *(_QWORD *)(v38 + 120);
    if ( !v39 )
      goto LABEL_52;
    v40 = partyItem;
    if ( !partyItem )
      goto LABEL_52;
    v41 = *(_QWORD *)(v38 + 152);
    if ( !v41 )
      goto LABEL_52;
    if ( (*(_DWORD *)(v41 + 24) & 0xFFFFFFFE) == 0 )
LABEL_53:
      sub_21FFED4(partyItem);
    v42 = *(_QWORD *)(v39 + 80);
    v43 = *(_QWORD *)(v39 + 88);
    v44 = *(_QWORD *)(partyItem + 80);
    v45 = *(_QWORD *)(partyItem + 88);
    v46 = *(_QWORD *)(v41 + 40);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48);
    *(_QWORD *)&v69.fields.currentCryptoKey = v42;
    *(_QWORD *)&v69.fields.fakeValue = v43;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v69, 0);
    *(_QWORD *)&v70.fields.currentCryptoKey = v44;
    *(_QWORD *)&v70.fields.fakeValue = v45;
    partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v70, 0);
    if ( !Instance )
      goto LABEL_52;
    partyItem = PartyOrganizationUtility__IsShowBondEquipGuideDialog(
                  (PartyOrganizationUtility_o *)Instance,
                  v50,
                  partyItem,
                  v46,
                  0);
    if ( (partyItem & 1) != 0 )
    {
      if ( *(_QWORD *)v24 )
      {
        partyItem = *(_QWORD *)(*(_QWORD *)v24 + 120LL);
        if ( partyItem )
        {
          ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)partyItem, -1, 0);
          Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
          v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v56 = *(_OWORD *)(v40 + 32);
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v40 + 16);
          *(_OWORD *)&v68.fields.fakeValue = v56;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53, v54);
          v67 = v68;
          partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v67, 0);
          if ( *(_QWORD *)v24 )
          {
            v57 = partyItem;
            v58 = *(_DWORD *)(*(_QWORD *)v24 + 160LL);
            v59 = (System_Action_bool__bool__int__o *)sub_21FFEBC(System_Action_bool__bool__int__TypeInfo);
            System_Action_bool__bool__int____ctor(
              v59,
              (Il2CppObject *)v7,
              Method_PartyOrganizationMenu___c__DisplayClass58_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__,
              0);
            partyItem = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            v60 = *(_QWORD *)(v7 + 16);
            if ( v60 )
            {
              v61 = (PartyOrganizationUtility_o *)partyItem;
              partyItem = *(_QWORD *)(v60 + 120);
              if ( partyItem )
              {
                partyItem = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)partyItem, 0);
                if ( partyItem )
                {
                  v63 = *(_QWORD *)(partyItem + 16);
                  v64 = *(_QWORD *)(partyItem + 24);
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v62);
                  *(_QWORD *)&v71.fields.currentCryptoKey = v63;
                  *(_QWORD *)&v71.fields.fakeValue = v64;
                  partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v71, 0);
                  if ( ServantEntity )
                  {
                    v65 = partyItem;
                    partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                  ServantEntity->fields.id,
                                  0);
                    if ( v61 )
                    {
                      ServantShortName = PartyOrganizationUtility__GetServantShortName(v61, v65, partyItem, 1, 0);
                      partyItem = (int64_t)ServantEntity__getClassName(ServantEntity, 0);
                      if ( *(_QWORD *)v24 )
                      {
                        if ( v55 )
                        {
                          CommonUI__OpenGrandBondEquipTargetConfirmDialog(
                            (CommonUI_o *)v55,
                            v57,
                            Value,
                            v58,
                            v59,
                            ServantShortName,
                            (System_String_o *)partyItem,
                            *(_DWORD *)(*(_QWORD *)v24 + 208LL),
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
    sub_21FFECC(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_41056664(this, 0, v2);
}


void PartyOrganizationMenu__Close_41056664(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5933F91 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_EndClose__);
    byte_5933F91 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


void PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
    sub_21FFECC(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x21
  System_Action_o *v18; // x22
  MissionNaviTransitionBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v23; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_5933F90 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_14123/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_5933F90 = 1;
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
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v10, v11);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 2, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14123/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0);
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0);
    if ( !Instance )
LABEL_21:
      sub_21FFECC(tutorialMaskBase, method);
    v23.fields.m_Width = 190.0;
    v22.fields.x = AddOffset.fields.x + 422.0;
    v22.fields.y = AddOffset.fields.y + -231.0;
    v23.fields.m_XMin = AddOffset.fields.x + 329.0;
    v23.fields.m_YMin = AddOffset.fields.y + -291.0;
    v23.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v17, v22, v23, 0.0, 0, -1, v18, 0);
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
  p_openCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
  v20 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_21FFBF4(p_openCallbackFunc, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_21FFECC(0, method);
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, 0);
}


PartyListViewItem_o *PartyOrganizationMenu__GetItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}


void PartyOrganizationMenu__Init(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.partyItem = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, 0, v3, v4, v5, v6, v7, v8);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyOrganizationMenu__IsHintDialog(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w19
  int32_t questPhase; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5933F99 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933F99 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  entity = 0;
  v14 = 0;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v14, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_21FFECC(Master_object, v8);
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
    || (PartyOrganizationListViewManager__RequestListObject_41037424(
          this->fields.partyOrganizationListViewManager,
          9,
          v4),
        PartyOrganizationListViewManager__RequestDropObject_41037864(partyOrganizationListViewManager, 10, v6),
        (partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator) == 0) )
  {
    sub_21FFECC(partyItem, method);
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
      sub_21FFECC(0, method);
    PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v2);
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

  if ( (byte_5933F93 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933F93 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_37315056((CommonUI_o *)Instance, v8, 0);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v6);
      return;
    }
LABEL_11:
    sub_21FFECC(partyOrganizationListViewManager, method);
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

  if ( (byte_5933F94 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationMenu_OnClickInfomation__);
    byte_5933F94 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_21FFECC(0, v5);
    PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v6);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t state; // w8
  const MethodInfo *v19; // x2
  PartyListViewItem_o *v20; // x22
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  PartyOrganizationMenu_o *v23; // x0
  int32_t v24; // w1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int v27; // w22
  const MethodInfo *v28; // x2
  PartyOrganizationListViewManager_o *v29; // x22
  const MethodInfo *v30; // x2
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3
  System_Reflection_MethodBase_o *v33; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  struct PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2

  if ( (byte_5933F96 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_OnClickItem__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__0__);
    sub_21FFC50(&PartyOrganizationMenu___c__DisplayClass57_0_TypeInfo);
    byte_5933F96 = 1;
  }
  v9 = sub_21FFEBC(PartyOrganizationMenu___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_53;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  state = this->fields.state;
  *(_DWORD *)(v9 + 24) = n;
  if ( state == 2 )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_53;
    partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, n, 0);
    if ( result != 2 )
    {
      v20 = partyItem;
      if ( result != 1 )
      {
        if ( !result )
        {
          if ( !partyItem )
            goto LABEL_53;
          if ( LOBYTE(partyItem[1].fields.sortValue0B) )
          {
LABEL_11:
            partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
            this->fields.state = 3;
            if ( partyItem )
            {
              PartyOrganizationListViewManager__SetMode_41040696(
                (PartyOrganizationListViewManager_o *)partyItem,
                1,
                v19);
              goto LABEL_13;
            }
            goto LABEL_53;
          }
          if ( !LOBYTE(partyItem->fields.id)
            && !HIBYTE(partyItem[1].fields.index)
            && !LOBYTE(partyItem[1].fields.sortIndex)
            && PartyOrganizationListViewItem__IsEnabledChangeGrandSvt((PartyOrganizationListViewItem_o *)partyItem, 0) )
          {
            if ( !LOBYTE(v20[1].fields.sortValue0B) )
            {
              partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !partyItem )
                goto LABEL_53;
              if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0) )
              {
                v33 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_PartyOrganizationMenu_OnClickItem__);
                OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
              }
            }
            goto LABEL_11;
          }
          v34 = Method_PartyOrganizationMenu_OnClickItem__;
          if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
            v34 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationMenu_OnClickItem__);
          v35 = (System_Reflection_MethodBase_o *)sub_21FFC34(v34, v34[4]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
        }
        goto LABEL_51;
      }
      if ( !partyItem )
        goto LABEL_53;
      if ( LOBYTE(partyItem[1].fields.sortValue0B) )
      {
        if ( !*(_QWORD *)&partyItem->fields.menuKind )
          goto LABEL_21;
      }
      else if ( LOBYTE(partyItem->fields.id)
             || HIBYTE(partyItem[1].fields.index)
             || LOBYTE(partyItem[1].fields.sortIndex) )
      {
LABEL_51:
        partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
        v37 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
        PartyOrganizationListViewManager_CallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
          v38);
        if ( !partyOrganizationListViewManager )
          goto LABEL_53;
        partyOrganizationListViewManager->fields.callbackFunc = v37;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&partyOrganizationListViewManager->fields.callbackFunc,
          (int32_t)v37,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 2, v45);
        return;
      }
      v25 = Method_PartyOrganizationMenu_OnClickItem__;
      if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationMenu_OnClickItem__);
      v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
LABEL_21:
      partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
      this->fields.state = 3;
      if ( partyItem )
      {
        PartyOrganizationListViewManager__SetMode_41040696((PartyOrganizationListViewManager_o *)partyItem, 1, v19);
        if ( !LOBYTE(v20[1].fields.sortValue0B) || *(_QWORD *)&v20->fields.menuKind )
        {
          v22 = *(_DWORD *)(v9 + 24);
          v23 = this;
          v24 = 6;
          goto LABEL_25;
        }
LABEL_13:
        v22 = *(_DWORD *)(v9 + 24);
        v23 = this;
        v24 = 5;
LABEL_25:
        PartyOrganizationMenu__Callback(v23, v24, v22, v21);
        return;
      }
LABEL_53:
      sub_21FFECC(partyItem, v11);
    }
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_53;
    partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, *(_DWORD *)(v9 + 24), 0);
    if ( !partyItem )
      goto LABEL_53;
    partyItem = (PartyListViewItem_o *)PartyOrganizationListViewItem__RemoveEquipDuplication(
                                         (PartyOrganizationListViewItem_o *)partyItem,
                                         0);
    if ( !this->fields.partyItem )
      goto LABEL_53;
    v27 = (int)partyItem;
    partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(this->fields.partyItem, o, 0);
    if ( !partyItem )
      goto LABEL_53;
    if ( ((v27 | PartyOrganizationListViewItem__RemoveEquipDuplication((PartyOrganizationListViewItem_o *)partyItem, 0))
        & 1) != 0 )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem )
        goto LABEL_53;
      PartyListViewItem__CheckRestriction(partyItem, 0);
      v29 = this->fields.partyOrganizationListViewManager;
      if ( !v29 )
        goto LABEL_53;
      PartyOrganizationListViewManager__RequestListObject_41037424(
        this->fields.partyOrganizationListViewManager,
        9,
        v28);
      PartyOrganizationListViewManager__RequestDropObject_41037864(v29, 10, v30);
    }
    partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
    if ( !partyItem )
      goto LABEL_53;
    PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0);
    v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v9,
      Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__0__,
      0);
    PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(this, o, v31, v32);
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

  if ( (byte_5933F95 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationMenu_OnClickPointEvent__);
    byte_5933F95 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_21FFECC(0, v5);
    PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v6);
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

  if ( (byte_5933F98 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationMenu_OnClickQuestInfo__);
    byte_5933F98 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_21FFECC(0, v5);
    PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v6);
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
      sub_21FFECC(0, method);
    PartyOrganizationListViewManager__SetMode_41040696(partyOrganizationListViewManager, 1, v2);
    PartyOrganizationMenu__Callback(this, 2, -1, v5);
  }
}


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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  char *gameObject; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  BalanceConfig_c *v46; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  __int64 v55; // x2
  UISprite_o *startingMemberFriendshipSprite; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v61; // x2
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  const MethodInfo *v74; // x2
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x2
  const MethodInfo *v103; // x2
  System_Action_o *v104; // x20

  if ( (byte_5933F8F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_EndOpen__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_20603/*"func_group_icon_1009_starting"*/);
    sub_21FFC50(&StringLiteral_12802/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    byte_5933F8F = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)partyItem,
        (System_String_o *)setupInfo,
        (int32_t)questRestrictionInfo,
        (int32_t)callback,
        (bool)openCallback,
        tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      this->fields.partyItem = partyItem;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      this->fields.setupInfo = setupInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
        (int32_t)questRestrictionInfo,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v74);
      PartyOrganizationMenu__SetInput(this, 0, v99);
      PartyOrganizationMenu__SetupButton(this, 1, v100);
      PartyOrganizationMenu__EndOpen(this, v101);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)partyItem,
        (System_String_o *)setupInfo,
        (int32_t)questRestrictionInfo,
        (int32_t)callback,
        (bool)openCallback,
        tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      this->fields.partyItem = partyItem;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)partyItem,
        (System_String_o *)setupInfo,
        (int32_t)questRestrictionInfo,
        (int32_t)callback,
        (bool)openCallback,
        tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this->fields.partyItem = partyItem;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
        (int32_t)partyItem,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      this->fields.setupInfo = setupInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
        (int32_t)setupInfo,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
        v46 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v45);
          v46 = BalanceConfig_TypeInfo;
        }
        static_fields = v46->static_fields;
        gameObject = (char *)this->fields.startingMemberFriendshipSprite;
        if ( static_fields->StartingMemberFriendshipRate < 1 )
        {
          if ( gameObject )
          {
            gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
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
                      goto LABEL_36;
                    }
                  }
                }
              }
            }
          }
        }
        else if ( gameObject )
        {
          gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
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
                    gameObject = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                    if ( gameObject )
                    {
                      *((_QWORD *)gameObject + 15) = partyItem;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(gameObject + 120),
                        (int32_t)partyItem,
                        v48,
                        v49,
                        v50,
                        v51,
                        v52,
                        v53);
                      startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v54, v55);
                      AtlasManager__SetEventUI(
                        startingMemberFriendshipSprite,
                        (System_String_o *)StringLiteral_20603/*"func_group_icon_1009_starting"*/,
                        0);
                      startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
                      gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12802/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                      if ( startingMemberFriendshipLabel )
                      {
                        UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0);
                        startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                        gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12802/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                        if ( startingMemberFriendshipLabelOver )
                        {
                          UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0);
LABEL_36:
                          PartyOrganizationMenu__SetItem(this, friendBonusVal, v61);
                          PartyOrganizationMenu__SetInput(this, 0, v102);
                          PartyOrganizationMenu__SetupButton(this, 0, v103);
                          this->fields.state = 1;
                          v104 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                          System_Action___ctor(v104, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0);
                          BaseMenu__Open((BaseMenu_o *)this, v104, 0);
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
LABEL_37:
      sub_21FFECC(gameObject, v44);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_5933F8E & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu_o *)sub_21FFC50(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_5933F8E = 1;
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
    sub_21FFECC(this, isInput);
  }
  v6 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v6, v4, (intptr_t)Method_PartyOrganizationMenu_OnClickItem__, v7);
  if ( !klass )
    goto LABEL_9;
  klass->vtable[3].method = (const MethodInfo *)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&klass->vtable[3].method, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_41040696((PartyOrganizationListViewManager_o *)klass, v14, method);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetItem(PartyOrganizationMenu_o *this, int32_t friendBonusVal, const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x21
  PartyListViewItem_o *partyItem; // x20
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_5933F8D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationMenu_ModifyItem__);
    byte_5933F8D = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0),
        partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager,
        partyItem = this->fields.partyItem,
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_ModifyItem__, 0),
        !partyOrganizationListViewManager) )
  {
    sub_21FFECC(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  PartyOrganizationListViewManager__CreateList(partyOrganizationListViewManager, 8, partyItem, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetupButton(PartyOrganizationMenu_o *this, bool isMove, const MethodInfo *method)
{
  UnityEngine_Component_o *partyRemoveButton; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *classInfoButton; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  char v10; // w21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  const MethodInfo *v13; // x1
  bool IsHintDialog; // w8
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  PartyOrganizationMenu_c *v18; // x8
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x22
  __int64 v20; // x2
  int v21; // w21
  float OffsetX; // s0
  bool v23; // w1
  __int64 v24; // x2
  struct QuestRestrictionInfo_o *v25; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  __int64 v28; // x1
  __int64 v29; // x2
  BalanceConfig_c *v30; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v32; // x1
  __int64 v33; // x2
  UISprite_o *classInfoSprite; // x19

  if ( (byte_5933F92 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PartyOrganizationMenu_TypeInfo);
    sub_21FFC50(&QuestInformationComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_18405/*"buttontxt_formation_20"*/);
    byte_5933F92 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        if ( UnityEngine_Object__op_Inequality(classInfoButton, 0, 0) )
        {
          partyRemoveButton = (UnityEngine_Component_o *)this->fields.classInfoButton;
          if ( !partyRemoveButton )
            goto LABEL_72;
          partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
          if ( !partyRemoveButton )
            goto LABEL_72;
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
LABEL_72:
    sub_21FFECC(partyRemoveButton, isMove);
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_72;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)partyRemoveButton, 0) )
      goto LABEL_25;
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_72;
    if ( QuestRestrictionInfo__IsUseEventDeck((QuestRestrictionInfo_o *)partyRemoveButton, 0) )
    {
LABEL_25:
      partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_72;
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
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isMove, method);
      partyRemoveButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    if ( *(_BYTE *)(partyRemoveButton[7].fields.m_CachedPtr + 1169) )
    {
      v10 = 1;
    }
    else
    {
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_72;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_72;
      v10 = LODWORD(eventIdList->max_length) != 0;
    }
  }
  else
  {
    v10 = 0;
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_72;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
  if ( !partyRemoveButton )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v10, 0);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_72;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, bool, Il2CppClass **))partyRemoveButton->klass[1]._1.nestedTypes)(
    partyRemoveButton,
    0,
    isMove,
    partyRemoveButton->klass[1]._1.implementedInterfaces);
  IsHintDialog = PartyOrganizationMenu__IsHintDialog(this, v13);
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
  if ( IsHintDialog )
  {
    if ( !partyRemoveButton )
      goto LABEL_72;
    gameObject = UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
    v18 = PartyOrganizationMenu_TypeInfo;
    if ( !*(&PartyOrganizationMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationMenu_TypeInfo, v15, v16);
      v18 = PartyOrganizationMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v18->static_fields->LAYOUT_POS_X_HINT;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v15, v16);
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_76444076(v10, 0);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_72;
    if ( (unsigned int)partyRemoveButton >= LODWORD(LAYOUT_POS_X_HINT->max_length) )
      sub_21FFED4(partyRemoveButton);
    v21 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton];
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, isMove, v20);
    OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, (float)v21 - OffsetX, 0);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_72;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
    if ( !partyRemoveButton )
      goto LABEL_72;
    v23 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_72;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
    if ( !partyRemoveButton )
      goto LABEL_72;
    v23 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v23, 0);
  if ( this->fields.menuKind == 8 || (v25 = this->fields.questRestrictionInfo) == 0 )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v25->fields.questId;
    if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, isMove, v24);
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0);
  }
  partyRemoveButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_72;
  partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
  if ( !partyRemoveButton )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0);
  v30 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
    v30 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v30->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v28, v29);
  if ( CondType__IsQuestClear_47254560(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32, v33);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_18405/*"buttontxt_formation_20"*/, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationMenu_o *v13; // x0
  PartyOrganizationMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933F8B & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_5933F8B = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationMenu_o *)sub_220024C(v8, PartyOrganizationMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5933F8C & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_5933F8C = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationMenu_o *)sub_220024C(v8, PartyOrganizationMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationMenu__get_IsOtherValidEventIdFilter(v13, v14);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF19E8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF1990;
}


System_IAsyncResult_o *PartyOrganizationMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = n;
  if ( (byte_5933F9C & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationMenu_ResultKind_TypeInfo);
    byte_5933F9C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_Action_o *_9__1; // x23
  PartyOrganizationMenu_o *_4__this; // x20
  int32_t n; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_5933F9D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass57_0_o *)sub_21FFC50(&Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__1__);
    byte_5933F9D = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  n = v3->fields.n;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_PartyOrganizationMenu___c__DisplayClass57_0__OnClickItem_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_5933F9E & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass57_0_o *)sub_21FFC50(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_5933F9E = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v5 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo),
        PartyOrganizationListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
          v6),
        !klass) )
  {
    sub_21FFECC(this, method);
  }
  klass->vtable[3].method = (const MethodInfo *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&klass->vtable[3].method, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  PartyOrganizationListViewManager__SetMode_41040696((PartyOrganizationListViewManager_o *)klass, 2, v13);
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
      || (LODWORD(this[4].klass) = equipBondSkillChange,
          PartyOrganizationListViewItem__MoveBondEquip((PartyOrganizationListViewItem_o *)this, 0),
          (this = (PartyOrganizationMenu___c__DisplayClass58_0_o *)v5->fields.__4__this) == 0) )
    {
LABEL_8:
      sub_21FFECC(this, isDecide);
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