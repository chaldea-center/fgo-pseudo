void PartyOrganizationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  int v5; // w8

  if ( (byte_4C22DE7 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&PartyOrganizationMenu_TypeInfo);
    byte_4C22DE7 = 1;
  }
  v1 = sub_1C2D538(int___TypeInfo, 2);
  if ( !v1 )
    sub_1C2D6EC(0, v2);
  v5 = *(_DWORD *)(v1 + 24);
  if ( !v5 || (*(_DWORD *)(v1 + 32) = -55, v5 == 1) )
    sub_1C2D6F4(v1, v1, v3);
  *(_DWORD *)(v1 + 36) = 45;
  PartyOrganizationMenu_TypeInfo->static_fields->LAYOUT_POS_X_HINT = (struct System_Int32_array *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PartyOrganizationMenu_TypeInfo->static_fields, v1, v3, v4);
}


void PartyOrganizationMenu___ctor(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22DE6 & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C22DE6 = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationMenu_CallbackFunc_o *v5; // x21
  struct PartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, n, method);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      (unsigned int)n,
      v5->fields.method);
  }
}


void PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(
        PartyOrganizationMenu_o *this,
        int32_t num,
        System_Action_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t partyItem; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  __int64 v20; // x8
  System_Nullable_int__o v21; // x0
  int64_t currentCryptoKey; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  Il2CppObject *Entity; // x22
  __int64 v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  ServantEntity_o *v30; // x24
  int32_t v31; // w0
  Il2CppObject *v32; // x0
  int32_t Value; // w21
  Il2CppObject *Instance; // x0
  Il2CppObject v35; // q0
  Il2CppObject v36; // q1
  CommonUI_o *v37; // x22
  int32_t v38; // w23
  int64_t v39; // x20
  System_Action_bool__bool__int__o *v40; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C22DE3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__bool__int__TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_PartyOrganizationMenu___c__DisplayClass54_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__);
    sub_1C2D490(&PartyOrganizationMenu___c__DisplayClass54_0_TypeInfo);
    sub_1C2D490(&StringLiteral_6995/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_4C22DE3 = 1;
  }
  v7 = sub_1C2D6DC(PartyOrganizationMenu___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = onComplete;
  v12 = v7 + 32;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)onComplete, v13, v14);
  partyItem = (int64_t)this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_40;
  Member = PartyListViewItem__GetMember((PartyListViewItem_o *)partyItem, num, 0);
  *(_QWORD *)(v7 + 16) = Member;
  v16 = v7 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Member, v17, v18);
  partyItem = *(_QWORD *)(v7 + 16);
  if ( !partyItem )
    goto LABEL_40;
  partyItem = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyItem, 0);
  if ( (partyItem & 1) != 0 )
    goto LABEL_7;
  if ( !*(_QWORD *)v16 )
LABEL_40:
    sub_1C2D6EC(partyItem, v9);
  v20 = *(_QWORD *)(*(_QWORD *)v16 + 152LL);
  if ( v20 )
  {
    v42.fields.currentCryptoKey = 0;
    v21 = (System_Nullable_int__o)&v42;
    System_Nullable_int____ctor(
      v21,
      *(_DWORD *)(v20 + 24),
      (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
    currentCryptoKey = v42.fields.currentCryptoKey;
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
    if ( !*(_QWORD *)v16 )
      goto LABEL_40;
    v23 = *(_QWORD *)(*(_QWORD *)v16 + 152LL);
    if ( !v23 )
      goto LABEL_40;
    if ( !*(_DWORD *)(v23 + 24) )
      goto LABEL_41;
    if ( !*(_QWORD *)(v23 + 32) )
      goto LABEL_7;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    partyItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !*(_QWORD *)v16 )
      goto LABEL_40;
    v24 = *(_QWORD *)(*(_QWORD *)v16 + 152LL);
    if ( !v24 )
      goto LABEL_40;
    if ( !*(_DWORD *)(v24 + 24) )
LABEL_41:
      sub_1C2D6F4(partyItem, v9, v19);
    if ( !partyItem )
      goto LABEL_40;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)partyItem,
               *(_QWORD *)(v24 + 32),
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    partyItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !*(_QWORD *)v16 )
      goto LABEL_40;
    v26 = *(_QWORD *)(*(_QWORD *)v16 + 120LL);
    if ( !v26 )
      goto LABEL_40;
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyItem;
    v29 = *(_QWORD *)(v26 + 80);
    v28 = *(_QWORD *)(v26 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v29;
    *(_QWORD *)&v43.fields.fakeValue = v28;
    partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v43, 0);
    if ( !v27 )
      goto LABEL_40;
    partyItem = (int64_t)DataMasterBase_object__object__int___GetEntity(
                           v27,
                           partyItem,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_40;
    v30 = (ServantEntity_o *)partyItem;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
            0);
    v32 = DataMasterBase_object__object__int___GetEntity(
            v27,
            v31,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    partyItem = ServantMaster__CheckFriendShipSvtEquip((ServantMaster_o *)v27, v30, (ServantEntity_o *)v32, 0);
    if ( (partyItem & 1) != 0 )
    {
      Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6995/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = Entity[1];
      v36 = Entity[2];
      v37 = (CommonUI_o *)Instance;
      *(Il2CppObject *)&v42.fields.currentCryptoKey = v35;
      *(Il2CppObject *)&v42.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v41 = v42;
      partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
      if ( *(_QWORD *)v16 )
      {
        v38 = *(_DWORD *)(*(_QWORD *)v16 + 160LL);
        v39 = partyItem;
        v40 = (System_Action_bool__bool__int__o *)sub_1C2D6DC(System_Action_bool__bool__int__TypeInfo);
        System_Action_bool__bool__int____ctor(
          v40,
          (Il2CppObject *)v7,
          Method_PartyOrganizationMenu___c__DisplayClass54_0__CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0__,
          0);
        if ( v37 )
        {
          CommonUI__OpenGrandBondEquipTargetConfirmDialog(v37, v39, Value, v38, v40, 0);
          return;
        }
      }
      goto LABEL_40;
    }
  }
LABEL_7:
  if ( !*(_QWORD *)v12 )
    goto LABEL_40;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v12 + 64LL),
    *(_QWORD *)(*(_QWORD *)v12 + 40LL));
}


void PartyOrganizationMenu__ClearItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0),
        (mainDeckBase = (UnityEngine_GameObject_o *)this->fields.partyOrganizationListViewManager) == 0) )
  {
    sub_1C2D6EC(mainDeckBase, method);
  }
  PartyOrganizationListViewManager__DestroyList((PartyOrganizationListViewManager_o *)mainDeckBase, method);
}


void PartyOrganizationMenu__Close(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationMenu__Close_34114252(this, 0, v2);
}


void PartyOrganizationMenu__Close_34114252(
        PartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C22DDD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_EndClose__);
    byte_4C22DDD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0);
}


void PartyOrganizationMenu__EndClose(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyOrganizationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
    sub_1C2D6EC(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  this->fields.state = 3;
  PartyOrganizationMenu__Callback(this, 1, -1, v4);
}


void PartyOrganizationMenu__EndOpen(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr00_8
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_Action_o *v10; // x22
  CGThumbnailListItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v15; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C22DDC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_EndOpenTutorialArrow__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_13591/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/);
    byte_4C22DDC = 1;
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
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13591/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0);
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpenTutorialArrow__, 0);
    if ( !Instance )
LABEL_21:
      sub_1C2D6EC(tutorialMaskBase, method);
    v14.fields.x = AddOffset.fields.x + 422.0;
    v14.fields.y = AddOffset.fields.y + -231.0;
    v15.fields.m_XMin = AddOffset.fields.x + 329.0;
    v15.fields.m_YMin = AddOffset.fields.y + -291.0;
    v15.fields.m_Width = 190.0;
    v15.fields.m_Height = 90.0;
    CommonUI__OpenTutorialNotificationDialogArrow((CommonUI_o *)Instance, v9, v14, v15, 0.0, 0, -1, v10, 0);
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
  p_openCallbackFunc = (CGThumbnailListItem_o *)&this->fields.openCallbackFunc;
  v12 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C2D434(p_openCallbackFunc, 0, (int32_t)v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void PartyOrganizationMenu__EndOpenTutorialArrow(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_1C2D6EC(0, method);
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, 0);
}


PartyListViewItem_o *PartyOrganizationMenu__GetItem(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}


void PartyOrganizationMenu__Init(PartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  PartyOrganizationMenu__ClearItem(this, method);
  this->fields.partyItem = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partyItem, 0, v3, v4);
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

  if ( (byte_4C22DE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22DE5 = 1;
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
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      sub_1C2D6EC(Master_object, v7);
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
    || (PartyListViewItem__Modify(partyItem, 0),
        (partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager) == 0)
    || (PartyOrganizationListViewManager__RequestListObject_34094904(
          this->fields.partyOrganizationListViewManager,
          9,
          v4),
        PartyOrganizationListViewManager__RequestDropObject_34095356(partyOrganizationListViewManager, 10, v6),
        (partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator) == 0) )
  {
    sub_1C2D6EC(partyItem, method);
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
      sub_1C2D6EC(0, method);
    PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v2);
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

  if ( (byte_4C22DDF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22DDF = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 4 )
    {
      this->fields.state = 8;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndCloseTutorialArrowDecide__, 0);
      if ( !Instance )
        goto LABEL_11;
      CommonUI__CloseTutorialNotificationDialogArrow_31193232((CommonUI_o *)Instance, v8, 0);
    }
  }
  else if ( state == 2 )
  {
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyOrganizationListViewManager )
    {
      PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v2);
      PartyOrganizationMenu__Callback(this, 1, -1, v6);
      return;
    }
LABEL_11:
    sub_1C2D6EC(partyOrganizationListViewManager, method);
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

  if ( (byte_4C22DE0 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationMenu_OnClickInfomation__);
    byte_4C22DE0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickInfomation__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickInfomation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickInfomation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C2D6EC(0, v5);
    PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v6);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  PartyListViewItem_o *v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w1
  int v19; // w22
  const MethodInfo *v20; // x2
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x22
  const MethodInfo *v22; // x2
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct PartyOrganizationListViewManager_o *v31; // x20
  PartyOrganizationListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2

  if ( (byte_4C22DE2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_OnClickItem__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_PartyOrganizationMenu___c__DisplayClass53_0__OnClickItem_b__0__);
    sub_1C2D490(&PartyOrganizationMenu___c__DisplayClass53_0_TypeInfo);
    byte_4C22DE2 = 1;
  }
  v9 = sub_1C2D6DC(PartyOrganizationMenu___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_55;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
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
            v19 = (int)partyItem;
            partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(this->fields.partyItem, o, 0);
            if ( partyItem )
            {
              if ( ((v19
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
                PartyOrganizationListViewManager__RequestListObject_34094904(
                  this->fields.partyOrganizationListViewManager,
                  9,
                  v20);
                PartyOrganizationListViewManager__RequestDropObject_34095356(partyOrganizationListViewManager, 10, v22);
              }
              partyItem = (PartyListViewItem_o *)this->fields.partyListViewIndicator;
              if ( partyItem )
              {
                PartyListViewIndicator__DrawPartyInfo((PartyListViewIndicator_o *)partyItem, this->fields.partyItem, 0);
                v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v23,
                  (Il2CppObject *)v9,
                  Method_PartyOrganizationMenu___c__DisplayClass53_0__OnClickItem_b__0__,
                  0);
                PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(this, o, v23, v24);
                return;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C2D6EC(partyItem, v11);
    }
    v15 = partyItem;
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
            PartyOrganizationListViewManager__SetMode_34098228((PartyOrganizationListViewManager_o *)partyItem, 1, v14);
            goto LABEL_13;
          }
          goto LABEL_55;
        }
        if ( !LOBYTE(partyItem->fields.id)
          && !LOBYTE(partyItem[1].fields.sortValue0)
          && !BYTE1(partyItem[1].fields.sortValue0)
          && PartyOrganizationListViewItem__IsEnabledChangeGrandSvt((PartyOrganizationListViewItem_o *)partyItem, 0) )
        {
          if ( !LOBYTE(v15[1].fields.sortValue1) )
          {
            partyItem = (PartyListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !partyItem )
              goto LABEL_55;
            if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)partyItem, 0) )
            {
              v27 = Method_PartyOrganizationMenu_OnClickItem__;
              if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
                v27 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickItem__);
              v28 = (System_Reflection_MethodBase_o *)sub_1C2D474(v27, v27[4]);
              OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
            }
          }
          goto LABEL_11;
        }
        v29 = Method_PartyOrganizationMenu_OnClickItem__;
        if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
          v29 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickItem__);
        v30 = (System_Reflection_MethodBase_o *)sub_1C2D474(v29, v29[4]);
        OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
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
      v31 = this->fields.partyOrganizationListViewManager;
      v32 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
      PartyOrganizationListViewManager_CallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
        v33);
      if ( !v31 )
        goto LABEL_55;
      v31->fields.callbackFunc = v32;
      sub_1C2D434((CGThumbnailListItem_o *)&v31->fields.callbackFunc, (int32_t)v32, v34, v35);
      PartyOrganizationListViewManager__SetMode_34098228(v31, 2, v36);
      return;
    }
    v25 = Method_PartyOrganizationMenu_OnClickItem__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickItem__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickItem__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C2D474(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
LABEL_31:
    partyItem = (PartyListViewItem_o *)this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( partyItem )
    {
      PartyOrganizationListViewManager__SetMode_34098228((PartyOrganizationListViewManager_o *)partyItem, 1, v14);
      if ( !LOBYTE(v15[1].fields.sortValue1) || *(_QWORD *)&v15->fields.menuKind )
      {
        v17 = *(_DWORD *)(v9 + 24);
        v18 = 6;
        goto LABEL_35;
      }
LABEL_13:
      v17 = *(_DWORD *)(v9 + 24);
      v18 = 5;
LABEL_35:
      PartyOrganizationMenu__Callback(this, v18, v17, v16);
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

  if ( (byte_4C22DE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationMenu_OnClickPointEvent__);
    byte_4C22DE1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickPointEvent__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickPointEvent__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickPointEvent__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C2D6EC(0, v5);
    PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v6);
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

  if ( (byte_4C22DE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationMenu_OnClickQuestInfo__);
    byte_4C22DE4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyOrganizationMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager;
    this->fields.state = 3;
    if ( !partyOrganizationListViewManager )
      sub_1C2D6EC(0, v5);
    PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v6);
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
      sub_1C2D6EC(0, method);
    PartyOrganizationListViewManager__SetMode_34098228(partyOrganizationListViewManager, 1, v2);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  char *gameObject; // x0
  __int64 v28; // x1
  int v29; // w22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UISprite_o *startingMemberFriendshipSprite; // x21
  UILabel_o *startingMemberFriendshipLabel; // x21
  UILabel_o *startingMemberFriendshipLabelOver; // x21
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  System_Action_o *v54; // x20

  if ( (byte_4C22DDB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_EndOpen__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_19699/*"func_group_icon_1009_starting"*/);
    sub_1C2D490(&StringLiteral_12303/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    byte_4C22DDB = 1;
  }
  state = this->fields.state;
  this->fields.mode = tutorialMode;
  switch ( state )
  {
    case 5:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (const MethodInfo *)setupInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v36, v37);
      this->fields.partyItem = partyItem;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v38, v39);
      this->fields.setupInfo = setupInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v40, v41);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v42, v43);
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_27:
      PartyOrganizationMenu__SetItem(this, friendBonusVal, v44);
      PartyOrganizationMenu__SetInput(this, 0, v49);
      PartyOrganizationMenu__SetupButton(this, 1, v50);
      PartyOrganizationMenu__EndOpen(this, v51);
      return;
    case 3:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (const MethodInfo *)setupInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v45, v46);
      this->fields.partyItem = partyItem;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v47, v48);
      goto LABEL_27;
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.callbackFunc = callback;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        (const MethodInfo *)setupInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v19, v20);
      this->fields.partyItem = partyItem;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v21, v22);
      this->fields.setupInfo = setupInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v25, v26);
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
          v29 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 1136LL);
          gameObject = (char *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.startingMemberFriendshipSprite,
                                 0);
          if ( gameObject )
          {
            if ( v29 < 1 )
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
                      gameObject = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                      if ( gameObject )
                      {
                        *((_QWORD *)gameObject + 12) = partyItem;
                        sub_1C2D434((CGThumbnailListItem_o *)(gameObject + 96), (int32_t)partyItem, v30, v31);
                        startingMemberFriendshipSprite = this->fields.startingMemberFriendshipSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetEventUI(
                          startingMemberFriendshipSprite,
                          (System_String_o *)StringLiteral_19699/*"func_group_icon_1009_starting"*/,
                          0);
                        startingMemberFriendshipLabel = this->fields.startingMemberFriendshipLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                        if ( startingMemberFriendshipLabel )
                        {
                          UILabel__set_text(startingMemberFriendshipLabel, (System_String_o *)gameObject, 0);
                          startingMemberFriendshipLabelOver = this->fields.startingMemberFriendshipLabelOver;
                          gameObject = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                          if ( startingMemberFriendshipLabelOver )
                          {
                            UILabel__set_text(startingMemberFriendshipLabelOver, (System_String_o *)gameObject, 0);
LABEL_34:
                            PartyOrganizationMenu__SetItem(this, friendBonusVal, v35);
                            PartyOrganizationMenu__SetInput(this, 0, v52);
                            PartyOrganizationMenu__SetupButton(this, 0, v53);
                            this->fields.state = 1;
                            v54 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                            System_Action___ctor(v54, (Il2CppObject *)this, Method_PartyOrganizationMenu_EndOpen__, 0);
                            BaseMenu__Open((BaseMenu_o *)this, v54, 0);
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
      sub_1C2D6EC(gameObject, v28);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  v4 = (Il2CppObject *)this;
  if ( (byte_4C22DDA & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu_o *)sub_1C2D490(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4C22DDA = 1;
  }
  klass = v4[6].klass;
  if ( !isInput )
  {
    if ( klass )
    {
      v10 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1C2D6EC(this, isInput);
  }
  v6 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
  PartyOrganizationListViewManager_CallbackFunc___ctor(v6, v4, (intptr_t)Method_PartyOrganizationMenu_OnClickItem__, v7);
  if ( !klass )
    goto LABEL_9;
  klass->vtable[3].method = (const MethodInfo *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&klass->vtable[3].method, (int32_t)v6, v8, v9);
  v10 = 2;
LABEL_8:
  PartyOrganizationListViewManager__SetMode_34098228((PartyOrganizationListViewManager_o *)klass, v10, method);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu__SetItem(PartyOrganizationMenu_o *this, int32_t friendBonusVal, const MethodInfo *method)
{
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  PartyOrganizationListViewManager_o *partyOrganizationListViewManager; // x20
  PartyListViewItem_o *partyItem; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_4C22DD9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationMenu_ModifyItem__);
    byte_4C22DD9 = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, 0),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, 0),
        partyOrganizationListViewManager = this->fields.partyOrganizationListViewManager,
        partyItem = this->fields.partyItem,
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationMenu_ModifyItem__, 0),
        !partyOrganizationListViewManager) )
  {
    sub_1C2D6EC(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
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
  __int64 v16; // x2
  int v17; // w21
  float OffsetX; // s0
  bool v19; // w1
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v23; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_4C22DDE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationMenu_TypeInfo);
    sub_1C2D490(&QuestInformationComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_17659/*"buttontxt_formation_20"*/);
    byte_4C22DDE = 1;
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
    sub_1C2D6EC(partyRemoveButton, isMove);
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
    if ( *(_BYTE *)(partyRemoveButton[7].fields.m_CachedPtr + 1153) )
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
    partyRemoveButton = (UnityEngine_Component_o *)System_Convert__ToInt32_64513868(v8, 0);
    if ( !LAYOUT_POS_X_HINT )
      goto LABEL_71;
    if ( (unsigned int)partyRemoveButton >= LODWORD(LAYOUT_POS_X_HINT->max_length) )
      sub_1C2D6F4(partyRemoveButton, isMove, v16);
    v17 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton];
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
    GameObjectExtensions__SetLocalPositionX(v13, (float)v17 - OffsetX, 0);
    partyRemoveButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
    if ( !partyRemoveButton )
      goto LABEL_71;
    partyRemoveButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyRemoveButton, 0);
    if ( !partyRemoveButton )
      goto LABEL_71;
    v19 = 1;
  }
  else
  {
    if ( !partyRemoveButton )
      goto LABEL_71;
    v19 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v19, 0);
  if ( this->fields.menuKind == 8 || (v20 = this->fields.questRestrictionInfo) == 0 )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v20->fields.questId;
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
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v23->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17659/*"buttontxt_formation_20"*/, 0);
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

  if ( (byte_4C22DD7 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4C22DD7 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
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

  if ( (byte_4C22DD8 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4C22DD8 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationMenu__GetItem(v11, v12);
}


void PartyOrganizationMenu_CallbackFunc___ctor(
        PartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6C5B0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C558;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *PartyOrganizationMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_4C22DE8 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&PartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4C22DE8 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationMenu_ResultKind_TypeInfo, &v15, *(_QWORD *)&n, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void PartyOrganizationMenu_CallbackFunc__EndInvoke(
        PartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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


void PartyOrganizationMenu___c__DisplayClass53_0___ctor(
        PartyOrganizationMenu___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyOrganizationMenu___c__DisplayClass53_0___OnClickItem_b__0(
        PartyOrganizationMenu___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  PartyOrganizationMenu___c__DisplayClass53_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  PartyOrganizationMenu_o *_4__this; // x20
  int32_t n; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C22DE9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass53_0_o *)sub_1C2D490(&Method_PartyOrganizationMenu___c__DisplayClass53_0__OnClickItem_b__1__);
    byte_4C22DE9 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  n = v3->fields.n;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_PartyOrganizationMenu___c__DisplayClass53_0__OnClickItem_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  PartyOrganizationMenu__CheckAndOpenGrandBondEquipTargetConfirmDialog(_4__this, n, _9__1, v2);
}


void PartyOrganizationMenu___c__DisplayClass53_0___OnClickItem_b__1(
        PartyOrganizationMenu___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  PartyOrganizationMenu___c__DisplayClass53_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  Il2CppClass *klass; // x19
  PartyOrganizationListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4C22DEA & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo);
    this = (PartyOrganizationMenu___c__DisplayClass53_0_o *)sub_1C2D490(&Method_PartyOrganizationMenu_OnClickItem__);
    byte_4C22DEA = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v5 = (PartyOrganizationListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyOrganizationListViewManager_CallbackFunc_TypeInfo),
        PartyOrganizationListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_PartyOrganizationMenu_OnClickItem__,
          v6),
        !klass) )
  {
    sub_1C2D6EC(this, method);
  }
  klass->vtable[3].method = (const MethodInfo *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&klass->vtable[3].method, (int32_t)v5, v7, v8);
  PartyOrganizationListViewManager__SetMode_34098228((PartyOrganizationListViewManager_o *)klass, 2, v9);
}


void PartyOrganizationMenu___c__DisplayClass54_0___ctor(
        PartyOrganizationMenu___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationMenu___c__DisplayClass54_0___CheckAndOpenGrandBondEquipTargetConfirmDialog_b__0(
        PartyOrganizationMenu___c__DisplayClass54_0_o *this,
        bool isDecide,
        bool changeBond,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  PartyOrganizationMenu___c__DisplayClass54_0_o *v5; // x19
  struct System_Action_o *onComplete; // x8

  v5 = this;
  if ( isDecide && changeBond )
  {
    this = (PartyOrganizationMenu___c__DisplayClass54_0_o *)this->fields.item;
    if ( !this
      || (LODWORD(this[4].klass) = equipBondSkillChange,
          PartyOrganizationListViewItem__MoveBondEquip((PartyOrganizationListViewItem_o *)this, 0),
          (this = (PartyOrganizationMenu___c__DisplayClass54_0_o *)v5->fields.__4__this) == 0) )
    {
LABEL_8:
      sub_1C2D6EC(this, isDecide);
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