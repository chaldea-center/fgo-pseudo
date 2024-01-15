void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDC50 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_40FDC50 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDC4F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FDC4F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Callback(
        PartyOrganizationConfirmMyServantMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_32279328(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32279328(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FDC4B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v10);
    byte_40FDC4B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__EndOpen(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Init(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FDC49 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FDC49 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC4D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FDC4E & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_40FDC4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC4C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMyServantMenu__Open(
        PartyOrganizationConfirmMyServantMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Text_StringBuilder_o *v48; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v50; // x23
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *v52; // x19
  PartyOrganizationConfirmMyServantMenu_c *v53; // x8
  void *QuestFollowerList; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x8
  unsigned __int64 v60; // x21
  int32_t v61; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x22
  const MethodInfo *v66; // x5
  __int64 v67; // x19
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v69; // x0
  NpcFollowerMaster_o *v70; // x0
  _DWORD *v71; // x27
  unsigned __int64 v72; // x28
  int32_t v73; // w21
  int64_t UserId; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  __int64 v76; // x3
  __int64 v77; // x4
  int maxLimitCount; // w8
  int v79; // w8
  int32_t LimitCount; // w23
  unsigned int v81; // w24
  FollowerInfo_o *v82; // x19
  int32_t ReturnTypeByQuestId; // w0
  __int64 v84; // x25
  __int64 v85; // x26
  int32_t v86; // w0
  PartyOrganizationListViewItem_o *v87; // x19
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  const MethodInfo *v90; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v92; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v100; // x0
  struct UICommonButton_o *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  Il2CppObject *v106; // x21
  UILabel_o *titleLabel; // x19
  System_String_o *v108; // x0
  UILabel_o *v109; // x19
  System_String_o *v110; // x0
  System_String_o *v111; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v113; // x8
  UILabel_o *v114; // x19
  System_String_o *v115; // x0
  UILabel_o *v116; // x19
  System_String_o *v117; // x0
  System_String_o *DialogMessageMySvtPos; // x0
  System_String_o *v119; // x0
  UILabel_o *v120; // x19
  System_String_o *v121; // x0
  System_String_o *DialogMessageSvtPos; // x0
  System_String_o *v123; // x0
  System_Action_o *v124; // x19
  const MethodInfo *v125; // [xsp+0h] [xbp-A0h]
  unsigned int v126; // [xsp+8h] [xbp-98h]
  int v127; // [xsp+Ch] [xbp-94h]
  PartyOrganizationConfirmMyServantMenu_o *v128; // [xsp+10h] [xbp-90h]
  System_Text_StringBuilder_o *v129; // [xsp+18h] [xbp-88h]
  signed __int64 v130; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  System_Int32_array *v133; // [xsp+38h] [xbp-68h]
  int v134; // [xsp+44h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  if ( (byte_40FDC4A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&NetworkManager_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&OptionManager_TypeInfo, v23);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v24);
    sub_B16FFC(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v25);
    sub_B16FFC(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v26);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v30);
    sub_B16FFC(&StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v31);
    sub_B16FFC(&StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v32);
    sub_B16FFC(&StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v33);
    sub_B16FFC(&StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v34);
    sub_B16FFC(&StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v35);
    sub_B16FFC(&StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v36);
    sub_B16FFC(&StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v37);
    sub_B16FFC(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v38);
    sub_B16FFC(&StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v39);
    sub_B16FFC(&StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v40);
    sub_B16FFC(&StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v41);
    sub_B16FFC(&StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v42);
    byte_40FDC4A = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)questRestrictionInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v48 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v44, v45, v46, v47);
    System_Text_StringBuilder___ctor(v48, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v50 = 0LL;
        goto LABEL_13;
      }
      if ( !questRestrictionInfo )
        goto LABEL_139;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0LL);
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_139;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
    }
    v50 = FixedMyServantSingleSvtIdList;
LABEL_13:
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_139;
    v52 = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
    v53 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationConfirmMyServantMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
      v53 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    }
    v128 = this;
    GameObjectExtensions__SetLocalPositionY(v52, v53->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v129 = v48;
    v133 = v50;
    v126 = kind;
    if ( !v50 || (v59 = *(_QWORD *)&v50->max_length, (int)v59 < 1) )
    {
      v127 = 1;
      goto LABEL_31;
    }
    v60 = 0LL;
    do
    {
      if ( v60 >= (unsigned int)v59 )
        goto LABEL_140;
      v61 = v50->m_Items[v60 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_139;
      QuestFollowerList = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    v61,
                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestFollowerList & 1) == 0 )
      {
        v63 = (UnityEngine_Component_o *)this->fields.messageLabel;
        if ( v63 )
        {
          v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
          GameObjectExtensions__SetLocalPositionY(v64, 0.0, 0LL);
          v127 = 0;
          goto LABEL_31;
        }
        goto LABEL_139;
      }
      ++v60;
      LODWORD(v59) = v50->max_length;
    }
    while ( (__int64)v60 < (int)v59 );
    v127 = 1;
LABEL_31:
    v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v65,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v50 && v127 )
    {
      v67 = *(_QWORD *)&v50->max_length;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        v69 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v69 )
        {
          v70 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v69,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( questRestrictionInfo )
          {
            if ( v70 )
            {
              QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                    v70,
                                    questRestrictionInfo->fields.questId,
                                    questRestrictionInfo->fields.questPhase,
                                    0LL);
              if ( (int)v67 >= 1 )
              {
                v71 = QuestFollowerList;
                v72 = 0LL;
                v130 = (int)v67;
                while ( v72 < v50->max_length )
                {
                  v73 = v50->m_Items[v72 + 1];
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  UserId = NetworkManager__get_UserId(0LL);
                  if ( !MasterData_WarQuestSelectionMaster )
                    goto LABEL_139;
                  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                       MasterData_WarQuestSelectionMaster,
                                       UserId,
                                       v73,
                                       0LL);
                  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !OptionManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  }
                  QuestFollowerList = (void *)OptionManager__GetSpoilerSetting(0LL);
                  if ( ((unsigned __int8)QuestFollowerList & 1) != 0 )
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_139;
                    maxLimitCount = -1;
                    if ( !v71 )
                      goto LABEL_139;
                  }
                  else
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_139;
                    QuestFollowerList = (void *)UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                    if ( ((unsigned __int8)QuestFollowerList & 1) != 0 )
                    {
                      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                      if ( !v71 )
                        goto LABEL_139;
                    }
                    else
                    {
                      maxLimitCount = 0;
                      if ( !v71 )
                        goto LABEL_139;
                    }
                  }
                  v134 = maxLimitCount;
                  v79 = v71[6];
                  LimitCount = EntityDefinitely->fields.maxLimitCount;
                  if ( v79 >= 1 )
                  {
                    v81 = 0;
                    while ( 1 )
                    {
                      if ( v81 >= v79 )
                        goto LABEL_140;
                      v82 = *(FollowerInfo_o **)&v71[2 * v81 + 8];
                      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                              questRestrictionInfo->fields.questId,
                                              0LL);
                      if ( !v82 )
                        goto LABEL_139;
                      QuestFollowerList = FollowerInfo__getServantLeaderInfo(v82, 0, ReturnTypeByQuestId, 0LL);
                      if ( QuestFollowerList )
                      {
                        v85 = *((_QWORD *)QuestFollowerList + 6);
                        v84 = *((_QWORD *)QuestFollowerList + 7);
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v136.fields.currentCryptoKey = v85;
                        *(_QWORD *)&v136.fields.fakeValue = v84;
                        QuestFollowerList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                      v136,
                                                      0LL);
                        if ( (_DWORD)QuestFollowerList == v73 )
                          break;
                      }
                      v79 = v71[6];
                      if ( (int)++v81 >= v79 )
                        goto LABEL_68;
                    }
                    v86 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                    LimitCount = FollowerInfo__getLimitCount(v82, 0, v86, 0LL);
LABEL_68:
                    v48 = v129;
                  }
                  v87 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                             PartyOrganizationListViewItem_TypeInfo,
                                                             v55,
                                                             v56,
                                                             v76,
                                                             v77);
                  PartyOrganizationListViewItem___ctor_32278708(
                    v87,
                    v72,
                    v73,
                    LimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v125);
                  if ( !v87 )
                    goto LABEL_139;
                  v50 = v133;
                  v87->fields.nameLimitCount = v134;
                  if ( v72 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                    if ( !v48 )
                      goto LABEL_139;
                    System_Text_StringBuilder__Append_41914240(v48, v88, 0LL);
                    System_Text_StringBuilder__Append_41914240(v48, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
                  if ( !v48 )
                    goto LABEL_139;
                  System_Text_StringBuilder__Append_41914240(v48, v89, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v87, v90);
                  System_Text_StringBuilder__Append_41914240(v48, SvtNameText, 0LL);
                  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  System_Text_StringBuilder__Append_41914240(v48, v92, 0LL);
                  if ( !v65 )
                    goto LABEL_139;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v65,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                  if ( (__int64)++v72 >= v130 )
                    goto LABEL_82;
                }
LABEL_140:
                sub_B17100(QuestFollowerList, v55, v56);
                sub_B170A0();
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_139:
      sub_B170D4();
    }
LABEL_82:
    supportMemberBase = v128->fields.supportMemberBase;
    memberObjectList = v128->fields.memberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v65,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v66);
    if ( v126 <= 1 )
    {
      decideButton = (UnityEngine_Component_o *)v128->fields.decideButton;
      if ( !decideButton )
        goto LABEL_139;
      v96 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
      if ( !v96 )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(v96, 0, 0LL);
      cancelButton = (UnityEngine_Component_o *)v128->fields.cancelButton;
      if ( !cancelButton )
        goto LABEL_139;
      v98 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
      if ( !v98 )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(v98, 0, 0LL);
      closeButton = (UnityEngine_Component_o *)v128->fields.closeButton;
      if ( !closeButton )
        goto LABEL_139;
      v100 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
      if ( !v100 )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(v100, 1, 0LL);
      v101 = v128->fields.closeButton;
      if ( !v101 )
        goto LABEL_139;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v101->klass->vtable._14_SetState.method)(
        v101,
        0LL,
        1LL,
        v101->klass->vtable._15_OnPress.methodPtr);
    }
    if ( !v48 )
      goto LABEL_139;
    v106 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                             v48,
                             v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( v126 )
    {
      if ( v126 != 1 )
      {
LABEL_137:
        v128->fields.state = 1;
        v124 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v102, v103, v104, v105);
        System_Action___ctor(v124, (Il2CppObject *)v128, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v128, v124, 0, 0LL);
        return;
      }
      titleLabel = v128->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_139;
      UILabel__set_text(titleLabel, v108, 0LL);
      v109 = v128->fields.messageLabel;
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      v111 = System_String__Format(v110, v106, 0LL);
      if ( !v109 )
        goto LABEL_139;
      UILabel__set_text(v109, v111, 0LL);
      closeLabel = v128->fields.closeLabel;
      v113 = &StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_139;
      v114 = v128->fields.titleLabel;
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v115 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v114 )
          goto LABEL_139;
        UILabel__set_text(v114, v115, 0LL);
        v116 = v128->fields.messageLabel;
        if ( v127 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          DialogMessageMySvtPos = System_String__Format(v117, v106, 0LL);
          if ( !v116 )
            goto LABEL_139;
        }
        else
        {
          DialogMessageMySvtPos = QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
          if ( !v116 )
            goto LABEL_139;
        }
        UILabel__set_text(v116, DialogMessageMySvtPos, 0LL);
        closeLabel = v128->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v113 = &StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v119 = LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v114 )
          goto LABEL_139;
        UILabel__set_text(v114, v119, 0LL);
        v120 = v128->fields.messageLabel;
        if ( v127 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v121 = LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          DialogMessageSvtPos = System_String__Format(v121, v106, 0LL);
          if ( !v120 )
            goto LABEL_139;
        }
        else
        {
          DialogMessageSvtPos = QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
          if ( !v120 )
            goto LABEL_139;
        }
        UILabel__set_text(v120, DialogMessageSvtPos, 0LL);
        closeLabel = v128->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v113 = &StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
    }
    v123 = LocalizationManager__Get((System_String_o *)*v113, 0LL);
    if ( !closeLabel )
      goto LABEL_139;
    UILabel__set_text(closeLabel, v123, 0LL);
    goto LABEL_137;
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__add_callbackFunc(
        PartyOrganizationConfirmMyServantMenu_o *this,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMyServantMenu_o *v11; // x0
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDC47 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC47 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(
        PartyOrganizationConfirmMyServantMenu_o *this,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMyServantMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDC48 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC48 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationConfirmMyServantMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F8376 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8376 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}