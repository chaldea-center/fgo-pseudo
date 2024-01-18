void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B6B3 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_418B6B3 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B6B2 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418B6B2 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_32180288(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32180288(
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
  System_Action_o *v11; // x20

  if ( (byte_418B6AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v10);
    byte_418B6AE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418B6AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B6AC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B6B0 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B6B0 = 1;
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

  if ( (byte_418B6B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_418B6B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B6AF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B6AF = 1;
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
  int64_t UserId; // x1
  System_Text_StringBuilder_o *v45; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v47; // x23
  UnityEngine_GameObject_o *v48; // x19
  PartyOrganizationConfirmMyServantMenu_c *v49; // x8
  __int64 v50; // x8
  unsigned __int64 v51; // x21
  int32_t v52; // w19
  UnityEngine_GameObject_o *v53; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x22
  const MethodInfo *v55; // x5
  __int64 v56; // x19
  UnityEngine_GameObject_o *v57; // x27
  unsigned __int64 v58; // x28
  int32_t v59; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int maxLimitCount; // w8
  int klass; // w8
  int32_t LimitCount; // w23
  unsigned int v64; // w24
  FollowerInfo_o *v65; // x19
  void *monitor; // x25
  UnityEngine_GameObject_c *v67; // x26
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v69; // x19
  const MethodInfo *v70; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v72; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v75; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v78; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v80; // x8
  UILabel_o *v81; // x19
  UILabel_o *v82; // x19
  System_String_o *v83; // x0
  UILabel_o *v84; // x19
  System_String_o *v85; // x0
  System_Action_o *v86; // x19
  __int64 v87; // x0
  const MethodInfo *v88; // [xsp+0h] [xbp-A0h]
  unsigned int v89; // [xsp+8h] [xbp-98h]
  int v90; // [xsp+Ch] [xbp-94h]
  PartyOrganizationConfirmMyServantMenu_o *v91; // [xsp+10h] [xbp-90h]
  System_Text_StringBuilder_o *v92; // [xsp+18h] [xbp-88h]
  signed __int64 v93; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  System_Int32_array *v96; // [xsp+38h] [xbp-68h]
  int v97; // [xsp+44h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_418B6AD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&NetworkManager_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B2C35C(&OptionManager_TypeInfo, v23);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v24);
    sub_B2C35C(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v25);
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v26);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v30);
    sub_B2C35C(&StringLiteral_10301/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v31);
    sub_B2C35C(&StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v32);
    sub_B2C35C(&StringLiteral_10306/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v33);
    sub_B2C35C(&StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v34);
    sub_B2C35C(&StringLiteral_10302/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v35);
    sub_B2C35C(&StringLiteral_10305/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v36);
    sub_B2C35C(&StringLiteral_10303/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_10307/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v38);
    sub_B2C35C(&StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v39);
    sub_B2C35C(&StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v40);
    sub_B2C35C(&StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v41);
    sub_B2C35C(&StringLiteral_10304/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v42);
    byte_418B6AD = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
    v45 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v45, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v47 = 0LL;
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
    v47 = FixedMyServantSingleSvtIdList;
LABEL_13:
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_139;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v49 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationConfirmMyServantMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
      v49 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    }
    v91 = this;
    GameObjectExtensions__SetLocalPositionY(v48, v49->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v92 = v45;
    v96 = v47;
    v89 = kind;
    if ( !v47 || (v50 = *(_QWORD *)&v47->max_length, (int)v50 < 1) )
    {
      v90 = 1;
      goto LABEL_31;
    }
    v51 = 0LL;
    do
    {
      if ( v51 >= (unsigned int)v50 )
        goto LABEL_140;
      v52 = v47->m_Items[v51 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_139;
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                 &entity,
                                                 v52,
                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( gameObject )
        {
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v53, 0.0, 0LL);
          v90 = 0;
          goto LABEL_31;
        }
        goto LABEL_139;
      }
      ++v51;
      LODWORD(v50) = v47->max_length;
    }
    while ( (__int64)v51 < (int)v50 );
    v90 = 1;
LABEL_31:
    v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v54,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v47 && v90 )
    {
      v56 = *(_QWORD *)&v47->max_length;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)gameObject,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( questRestrictionInfo )
          {
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)gameObject,
                                                         questRestrictionInfo->fields.questId,
                                                         questRestrictionInfo->fields.questPhase,
                                                         0LL);
              if ( (int)v56 >= 1 )
              {
                v57 = gameObject;
                v58 = 0LL;
                v93 = (int)v56;
                while ( v58 < v47->max_length )
                {
                  v59 = v47->m_Items[v58 + 1];
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  UserId = NetworkManager__get_UserId(0LL);
                  gameObject = (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster;
                  if ( !MasterData_WarQuestSelectionMaster )
                    goto LABEL_139;
                  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                       MasterData_WarQuestSelectionMaster,
                                       UserId,
                                       v59,
                                       0LL);
                  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !OptionManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_139;
                    maxLimitCount = -1;
                    if ( !v57 )
                      goto LABEL_139;
                  }
                  else
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_139;
                    gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                    if ( ((unsigned __int8)gameObject & 1) != 0 )
                    {
                      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                      if ( !v57 )
                        goto LABEL_139;
                    }
                    else
                    {
                      maxLimitCount = 0;
                      if ( !v57 )
                        goto LABEL_139;
                    }
                  }
                  v97 = maxLimitCount;
                  klass = (int)v57[1].klass;
                  LimitCount = EntityDefinitely->fields.maxLimitCount;
                  if ( klass >= 1 )
                  {
                    v64 = 0;
                    while ( 1 )
                    {
                      if ( v64 >= klass )
                        goto LABEL_140;
                      v65 = (FollowerInfo_o *)*((_QWORD *)&v57[1].monitor + (int)v64);
                      gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 questRestrictionInfo->fields.questId,
                                                                 0LL);
                      if ( !v65 )
                        goto LABEL_139;
                      gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                                 v65,
                                                                 0,
                                                                 (int32_t)gameObject,
                                                                 0LL);
                      if ( gameObject )
                      {
                        v67 = gameObject[2].klass;
                        monitor = gameObject[2].monitor;
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v99.fields.currentCryptoKey = v67;
                        *(_QWORD *)&v99.fields.fakeValue = monitor;
                        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                   v99,
                                                                   0LL);
                        if ( (_DWORD)gameObject == v59 )
                          break;
                      }
                      klass = (int)v57[1].klass;
                      if ( (int)++v64 >= klass )
                        goto LABEL_68;
                    }
                    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                            questRestrictionInfo->fields.questId,
                                            0LL);
                    LimitCount = FollowerInfo__getLimitCount(v65, 0, ReturnTypeByQuestId, 0LL);
LABEL_68:
                    v45 = v92;
                  }
                  v69 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_32179668(
                    v69,
                    v58,
                    v59,
                    LimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v88);
                  if ( !v69 )
                    goto LABEL_139;
                  v47 = v96;
                  v69->fields.nameLimitCount = v97;
                  if ( v58 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                               0LL);
                    if ( !v45 )
                      goto LABEL_139;
                    System_Text_StringBuilder__Append_42408700(v45, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_42408700(v45, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                             0LL);
                  if ( !v45 )
                    goto LABEL_139;
                  System_Text_StringBuilder__Append_42408700(v45, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v69, v70);
                  System_Text_StringBuilder__Append_42408700(v45, SvtNameText, 0LL);
                  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_42408700(v45, v72, 0LL);
                  if ( !v54 )
                    goto LABEL_139;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v54,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                  if ( (__int64)++v58 >= v93 )
                    goto LABEL_82;
                }
LABEL_140:
                v87 = sub_B2C460(gameObject);
                sub_B2C400(v87, 0LL);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_139:
      sub_B2C434(gameObject, UserId);
    }
LABEL_82:
    supportMemberBase = v91->fields.supportMemberBase;
    memberObjectList = v91->fields.memberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v54,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v55);
    if ( v89 <= 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)v91->fields.decideButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v91->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v91->fields.closeButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v91->fields.closeButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                                 gameObject,
                                                 0LL,
                                                 1LL,
                                                 gameObject->klass[1]._1.interfaceOffsets);
    }
    if ( !v45 )
      goto LABEL_139;
    gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v45->klass->vtable._3_ToString.method)(
                                               v45,
                                               v45->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v75 = (Il2CppObject *)gameObject;
    if ( v89 )
    {
      if ( v89 != 1 )
      {
LABEL_137:
        v91->fields.state = 1;
        v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v86, (Il2CppObject *)v91, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v91, v86, 0, 0LL);
        return;
      }
      titleLabel = v91->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10304/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_139;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v91->fields.messageLabel;
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v78, v75, 0LL);
      if ( !messageLabel )
        goto LABEL_139;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v91->fields.closeLabel;
      v80 = &StringLiteral_10302/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_139;
      v81 = v91->fields.titleLabel;
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10301/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v81 )
          goto LABEL_139;
        UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
        v82 = v91->fields.messageLabel;
        if ( v90 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v83, v75, 0LL);
          if ( !v82 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v82 )
            goto LABEL_139;
        }
        UILabel__set_text(v82, (System_String_o *)gameObject, 0LL);
        closeLabel = v91->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v80 = &StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10307/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v81 )
          goto LABEL_139;
        UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
        v84 = v91->fields.messageLabel;
        if ( v90 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10306/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v85, v75, 0LL);
          if ( !v84 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v84 )
            goto LABEL_139;
        }
        UILabel__set_text(v84, (System_String_o *)gameObject, 0LL);
        closeLabel = v91->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v80 = &StringLiteral_10305/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v80, 0LL);
    if ( !closeLabel )
      goto LABEL_139;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_418B6AA & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_418B6AA = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418B6AB & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_418B6AB = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationConfirmMyServantMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418528C & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_418528C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}