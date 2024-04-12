void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_42B357A & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_42B357A = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3579 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B3579 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_31234612(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_31234612(
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

  if ( (byte_42B3575 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_42B3575 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B3573 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3573 = 1;
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
    sub_B52A5C(titleLabel, method);
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

  if ( (byte_42B3577 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3577 = 1;
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

  if ( (byte_42B3578 & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_42B3578 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B3576 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3576 = 1;
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
  const MethodInfo *v39; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v41; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v44; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v47; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v49; // x8
  UILabel_o *v50; // x19
  UILabel_o *v51; // x19
  System_String_o *v52; // x0
  UILabel_o *v53; // x19
  System_String_o *v54; // x0
  System_Action_o *v55; // x19
  __int64 v56; // x0
  const MethodInfo *v57; // [xsp+0h] [xbp-A0h]
  unsigned int v58; // [xsp+8h] [xbp-98h]
  int v59; // [xsp+Ch] [xbp-94h]
  PartyOrganizationConfirmMyServantMenu_o *v60; // [xsp+10h] [xbp-90h]
  System_Text_StringBuilder_o *v61; // [xsp+18h] [xbp-88h]
  signed __int64 v62; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  System_Int32_array *v65; // [xsp+38h] [xbp-68h]
  int v66; // [xsp+44h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42B3574 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_B52984(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_B52984(&StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_B52984(&StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_B52984(&StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B52984(&StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_B52984(&StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B52984(&StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_B52984(&StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_B52984(&StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_B52984(&StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_B52984(&StringLiteral_10315/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_B52984(&StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_42B3574 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
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
    v14 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
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
    v60 = this;
    GameObjectExtensions__SetLocalPositionY(v17, v18->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v61 = v14;
    v65 = v16;
    v58 = kind;
    if ( !v16 || (v19 = *(_QWORD *)&v16->max_length, (int)v19 < 1) )
    {
      v59 = 1;
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
      gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_139;
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                 &entity,
                                                 v21,
                                                 (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( gameObject )
        {
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v22, 0.0, 0LL);
          v59 = 0;
          goto LABEL_31;
        }
        goto LABEL_139;
      }
      ++v20;
      LODWORD(v19) = v16->max_length;
    }
    while ( (__int64)v20 < (int)v19 );
    v59 = 1;
LABEL_31:
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v16 && v59 )
    {
      v25 = *(_QWORD *)&v16->max_length;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)gameObject,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                v62 = (int)v25;
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
                  v66 = maxLimitCount;
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
                        *(_QWORD *)&v68.fields.currentCryptoKey = v36;
                        *(_QWORD *)&v68.fields.fakeValue = monitor;
                        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                   v68,
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
                    v14 = v61;
                  }
                  v38 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_31233976(
                    v38,
                    v27,
                    v28,
                    LimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v57);
                  if ( !v38 )
                    goto LABEL_139;
                  v16 = v65;
                  v38->fields.nameLimitCount = v66;
                  if ( v27 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                               0LL);
                    if ( !v14 )
                      goto LABEL_139;
                    System_Text_StringBuilder__Append_42994048(v14, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_42994048(v14, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                             0LL);
                  if ( !v14 )
                    goto LABEL_139;
                  System_Text_StringBuilder__Append_42994048(v14, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v38, v39);
                  System_Text_StringBuilder__Append_42994048(v14, SvtNameText, 0LL);
                  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_42994048(v14, v41, 0LL);
                  if ( !v23 )
                    goto LABEL_139;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v23,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                  if ( (__int64)++v27 >= v62 )
                    goto LABEL_82;
                }
LABEL_140:
                v56 = sub_B52A88(gameObject);
                sub_B52A28(v56, 0LL);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_139:
      sub_B52A5C(gameObject, UserId);
    }
LABEL_82:
    supportMemberBase = v60->fields.supportMemberBase;
    memberObjectList = v60->fields.memberObjectList;
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
    if ( v58 <= 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)v60->fields.decideButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v60->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v60->fields.closeButton;
      if ( !gameObject )
        goto LABEL_139;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v60->fields.closeButton;
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
    v44 = (Il2CppObject *)gameObject;
    if ( v58 )
    {
      if ( v58 != 1 )
      {
LABEL_137:
        v60->fields.state = 1;
        v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v55, (Il2CppObject *)v60, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v60, v55, 0, 0LL);
        return;
      }
      titleLabel = v60->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_139;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v60->fields.messageLabel;
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v47, v44, 0LL);
      if ( !messageLabel )
        goto LABEL_139;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v60->fields.closeLabel;
      v49 = &StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_139;
      v50 = v60->fields.titleLabel;
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v50 )
          goto LABEL_139;
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        v51 = v60->fields.messageLabel;
        if ( v59 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v44, 0LL);
          if ( !v51 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v51 )
            goto LABEL_139;
        }
        UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
        closeLabel = v60->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = &StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v50 )
          goto LABEL_139;
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        v53 = v60->fields.messageLabel;
        if ( v59 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v54, v44, 0LL);
          if ( !v53 )
            goto LABEL_139;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(
                                                     questRestrictionInfo,
                                                     0LL);
          if ( !v53 )
            goto LABEL_139;
        }
        UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
        closeLabel = v60->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = &StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
      }
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v49, 0LL);
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

  if ( (byte_42B3571 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_42B3571 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B3572 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_42B3572 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD40F & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD40F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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