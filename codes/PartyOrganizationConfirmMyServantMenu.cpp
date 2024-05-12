void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_438E52D & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_438E52D = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E52C & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E52C = 1;
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
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_31254580(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_31254580(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438E528 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_438E528 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438E526 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E526 = 1;
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
    sub_B7769C(titleLabel, method);
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

  if ( (byte_438E52A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E52A = 1;
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

  if ( (byte_438E52B & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_438E52B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438E529 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E529 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t UserId; // x1
  System_Text_StringBuilder_o *v14; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v16; // x23
  UnityEngine_GameObject_o *v17; // x19
  PartyOrganizationConfirmMyServantMenu_c *v18; // x8
  __int64 v19; // x8
  unsigned __int64 v20; // x21
  int32_t v21; // w19
  UnityEngine_GameObject_o *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  const MethodInfo *v24; // x5
  __int64 v25; // x19
  UnityEngine_GameObject_o *v26; // x27
  unsigned __int64 v27; // x28
  int32_t v28; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int maxLimitCount; // w8
  int klass; // w8
  int32_t LimitCount; // w23
  unsigned int v33; // w24
  FollowerInfo_o *v34; // x19
  void *monitor; // x25
  UnityEngine_GameObject_c *v36; // x26
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v38; // x19
  System_String_o *SvtNameText; // x0
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v43; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v46; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v48; // x8
  UILabel_o *v49; // x19
  UILabel_o *v50; // x19
  System_String_o *v51; // x0
  UILabel_o *v52; // x19
  System_String_o *v53; // x0
  System_Action_o *v54; // x19
  __int64 v55; // x0
  unsigned int v56; // [xsp+8h] [xbp-98h]
  int v57; // [xsp+Ch] [xbp-94h]
  PartyOrganizationConfirmMyServantMenu_o *v58; // [xsp+10h] [xbp-90h]
  System_Text_StringBuilder_o *v59; // [xsp+18h] [xbp-88h]
  signed __int64 v60; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  System_Int32_array *v63; // [xsp+38h] [xbp-68h]
  int v64; // [xsp+44h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_438E527 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_B775C4(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_10485/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_B775C4(&StringLiteral_10433/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_B775C4(&StringLiteral_10490/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10483/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B775C4(&StringLiteral_10486/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_B775C4(&StringLiteral_10489/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B775C4(&StringLiteral_10487/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10491/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_B775C4(&StringLiteral_10484/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10434/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_B775C4(&StringLiteral_10435/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_B775C4(&StringLiteral_10488/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_438E527 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(
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
    v14 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v14, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v16 = 0LL;
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
    v16 = FixedMyServantSingleSvtIdList;
LABEL_13:
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_139;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v18 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationConfirmMyServantMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
      v18 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    }
    v58 = this;
    GameObjectExtensions__SetLocalPositionY(v17, v18->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v59 = v14;
    v63 = v16;
    v56 = kind;
    if ( !v16 || (v19 = *(_QWORD *)&v16->max_length, (int)v19 < 1) )
    {
      v57 = 1;
      goto LABEL_31;
    }
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
        goto LABEL_140;
      v21 = v16->m_Items[v20 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_139;
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                 &entity,
                                                 v21,
                                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( gameObject )
        {
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v22, 0.0, 0LL);
          v57 = 0;
          goto LABEL_31;
        }
        goto LABEL_139;
      }
      ++v20;
      LODWORD(v19) = v16->max_length;
    }
    while ( (__int64)v20 < (int)v19 );
    v57 = 1;
LABEL_31:
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v16 && v57 )
    {
      v25 = *(_QWORD *)&v16->max_length;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)gameObject,
                                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( questRestrictionInfo )
          {
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)gameObject,
                                                         questRestrictionInfo->fields.questId,
                                                         questRestrictionInfo->fields.questPhase,
                                                         0LL);
              if ( (int)v25 >= 1 )
              {
                v26 = gameObject;
                v27 = 0LL;
                v60 = (int)v25;
                while ( v27 < v16->max_length )
                {
                  v28 = v16->m_Items[v27 + 1];
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
                                       v28,
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
                    if ( !v26 )
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
                      if ( !v26 )
                        goto LABEL_139;
                    }
                    else
                    {
                      maxLimitCount = 0;
                      if ( !v26 )
                        goto LABEL_139;
                    }
                  }
                  v64 = maxLimitCount;
                  klass = (int)v26[1].klass;
                  LimitCount = EntityDefinitely->fields.maxLimitCount;
                  if ( klass >= 1 )
                  {
                    v33 = 0;
                    while ( 1 )
                    {
                      if ( v33 >= klass )
                        goto LABEL_140;
                      v34 = (FollowerInfo_o *)*((_QWORD *)&v26[1].monitor + (int)v33);
                      gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 questRestrictionInfo->fields.questId,
                                                                 0LL);
                      if ( !v34 )
                        goto LABEL_139;
                      gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                                 v34,
                                                                 0,
                                                                 (int32_t)gameObject,
                                                                 0LL);
                      if ( gameObject )
                      {
                        v36 = gameObject[2].klass;
                        monitor = gameObject[2].monitor;
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v66.fields.currentCryptoKey = v36;
                        *(_QWORD *)&v66.fields.fakeValue = monitor;
                        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                   v66,
                                                                   0LL);
                        if ( (_DWORD)gameObject == v28 )
                          break;
                      }
                      klass = (int)v26[1].klass;
                      if ( (int)++v33 >= klass )
                        goto LABEL_68;
                    }
                    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                            questRestrictionInfo->fields.questId,
                                            0LL);
                    LimitCount = FollowerInfo__getLimitCount(v34, 0, ReturnTypeByQuestId, 0LL);
LABEL_68:
                    v14 = v59;
                  }
                  v38 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_38652640(
                    v38,
                    v27,
                    v28,
                    LimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    0LL);
                  if ( !v38 )
                    goto LABEL_139;
                  v16 = v63;
                  v38->fields.nameLimitCount = v64;
                  if ( v27 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10434/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                               0LL);
                    if ( !v14 )
                      goto LABEL_139;
                    System_Text_StringBuilder__Append_42951964(v14, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_42951964(v14, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10435/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                             0LL);
                  if ( !v14 )
                    goto LABEL_139;
                  System_Text_StringBuilder__Append_42951964(v14, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v38, 0LL);
                  System_Text_StringBuilder__Append_42951964(v14, SvtNameText, 0LL);
                  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10433/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_42951964(v14, v40, 0LL);
                  if ( !v23 )
                    goto LABEL_139;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v23,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                  if ( (__int64)++v27 >= v60 )
                    goto LABEL_82;
                }
LABEL_140:
                v55 = sub_B776C8(gameObject);
                sub_B77668(v55, 0LL);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_139:
      sub_B7769C(gameObject, UserId);
    }
LABEL_82:
    supportMemberBase = v58->fields.supportMemberBase;
    memberObjectList = v58->fields.memberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v23,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v24);
    if ( v56 <= 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)v58->fields.decideButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v58->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v58->fields.closeButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v58->fields.closeButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                                 gameObject,
                                                 0LL,
                                                 1LL,
                                                 gameObject->klass[1]._1.interfaceOffsets);
    }
    if ( !v14 )
      goto LABEL_139;
    gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                                               v14,
                                               v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v43 = (Il2CppObject *)gameObject;
    if ( v56 )
    {
      if ( v56 != 1 )
      {
LABEL_137:
        v58->fields.state = 1;
        v54 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v54, (Il2CppObject *)v58, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v58, v54, 0, 0LL);
        return;
      }
      titleLabel = v58->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10488/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_139;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v58->fields.messageLabel;
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v46, v43, 0LL);
      if ( !messageLabel )
        goto LABEL_139;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v58->fields.closeLabel;
      v48 = &StringLiteral_10486/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_139;
      v49 = v58->fields.titleLabel;
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v49 )
          goto LABEL_139;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        v50 = v58->fields.messageLabel;
        if ( v57 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v51, v43, 0LL);
          if ( !v50 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v50 )
            goto LABEL_139;
        }
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        closeLabel = v58->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_10483/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10491/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v49 )
          goto LABEL_139;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        v52 = v58->fields.messageLabel;
        if ( v57 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v53, v43, 0LL);
          if ( !v52 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v52 )
            goto LABEL_139;
        }
        UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
        closeLabel = v58->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_10489/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
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

  if ( (byte_438E524 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_438E524 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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

  if ( (byte_438E525 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_438E525 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_438A0B6 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0B6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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