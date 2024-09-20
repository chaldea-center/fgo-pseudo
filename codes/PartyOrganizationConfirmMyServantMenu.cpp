void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4A5704D & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_4A5704D = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5704C & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5704C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Callback(
        PartyOrganizationConfirmMyServantMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_32026400(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32026400(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A57048 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_4A57048 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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

  if ( (byte_4A57046 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57046 = 1;
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
    sub_1B8880C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5704A & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_4A5704A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5704B & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_4A5704B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A57049 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_4A57049 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v5);
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
  __int64 gameObject; // x0
  __int64 v12; // x1
  System_Text_StringBuilder_o *v13; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v15; // x29
  UnityEngine_GameObject_o *v16; // x0
  PartyOrganizationConfirmMyServantMenu_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x21
  int32_t v21; // w19
  System_Collections_Generic_List_object__o *v22; // x25
  const MethodInfo *v23; // x5
  __int64 v24; // x19
  Il2CppObject *MasterData_object; // x21
  __int64 v26; // x27
  unsigned __int64 v27; // x28
  int32_t v28; // w29
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int v30; // w23
  int v31; // w8
  int32_t maxLimitCount; // w19
  unsigned int v33; // w24
  FollowerInfo_o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x26
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v38; // x21
  const MethodInfo *v39; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v50; // x22
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v53; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v55; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v57; // x19
  UILabel_o *v58; // x19
  System_String_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *v61; // x19
  System_String_o *v62; // x0
  System_Action_o *v63; // x19
  const MethodInfo *v64; // [xsp+0h] [xbp-B0h]
  unsigned int v65; // [xsp+10h] [xbp-A0h]
  int v66; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v67; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v68; // [xsp+20h] [xbp-90h]
  __int64 v69; // [xsp+28h] [xbp-88h]
  Il2CppObject *v70; // [xsp+30h] [xbp-80h]
  System_Int32_array *v71; // [xsp+38h] [xbp-78h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4A57047 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_1B885B0(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1B885B0(&StringLiteral_10166/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_1B885B0(&StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1B885B0(&StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10167/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_1B885B0(&StringLiteral_10168/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_1B885B0(&StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_4A57047 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (int32_t)setupInfo);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v13 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v13, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v15 = 0LL;
LABEL_13:
        gameObject = (__int64)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_124;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v18 = v16;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
          v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v67 = this;
        GameObjectExtensions__SetLocalPositionY(v18, v17->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
        v68 = v13;
        v65 = kind;
        if ( v15 && (v19 = *(_QWORD *)&v15->max_length, (int)v19 >= 1) )
        {
          v20 = 0LL;
          while ( 1 )
          {
            if ( v20 >= (unsigned int)v19 )
              goto LABEL_125;
            v21 = v15->m_Items[v20 + 1];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_124;
            gameObject = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           &entity,
                           v21,
                           (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (gameObject & 1) == 0 )
              break;
            LODWORD(v19) = v15->max_length;
            if ( (__int64)++v20 >= (int)v19 )
              goto LABEL_25;
          }
          gameObject = (__int64)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_124;
          v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v60, 0.0, 0LL);
          v66 = 0;
        }
        else
        {
LABEL_25:
          v66 = 1;
        }
        v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v15 && v66 )
        {
          v24 = *(_QWORD *)&v15->max_length;
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_124;
          gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                  (NpcFollowerMaster_o *)gameObject,
                                  questRestrictionInfo->fields.questId,
                                  questRestrictionInfo->fields.questPhase,
                                  0LL);
          if ( (int)v24 >= 1 )
          {
            v26 = gameObject;
            v27 = 0LL;
            v69 = (unsigned int)v24;
            v70 = MasterData_object;
            v71 = v15;
            while ( v27 < v15->max_length )
            {
              v28 = v15->m_Items[v27 + 1];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              gameObject = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_124;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   gameObject,
                                   v28,
                                   0LL);
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              gameObject = OptionManager__GetSpoilerSetting(0LL);
              if ( (gameObject & 1) != 0 )
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                v30 = -1;
              }
              else
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                v30 = (gameObject & 1) != 0 ? EntityDefinitely->fields.maxLimitCount : 0;
              }
              if ( !v26 )
                goto LABEL_124;
              v31 = *(_DWORD *)(v26 + 24);
              maxLimitCount = EntityDefinitely->fields.maxLimitCount;
              if ( v31 >= 1 )
              {
                v33 = 0;
                while ( 1 )
                {
                  if ( v33 >= v31 )
                    goto LABEL_125;
                  v34 = *(FollowerInfo_o **)(v26 + 8LL * (int)v33 + 32);
                  gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                  if ( !v34 )
                    goto LABEL_124;
                  gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v34, 0, gameObject, 0LL);
                  if ( gameObject )
                  {
                    v36 = *(_QWORD *)(gameObject + 48);
                    v35 = *(_QWORD *)(gameObject + 56);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v74.fields.currentCryptoKey = v36;
                    *(_QWORD *)&v74.fields.fakeValue = v35;
                    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v74, 0LL);
                    if ( (_DWORD)gameObject == v28 )
                      break;
                  }
                  v31 = *(_DWORD *)(v26 + 24);
                  if ( (int)++v33 >= v31 )
                    goto LABEL_59;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                maxLimitCount = FollowerInfo__getLimitCount(v34, 0, ReturnTypeByQuestId, 0LL);
LABEL_59:
                v13 = v68;
              }
              v38 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32025764(
                v38,
                v27,
                v28,
                maxLimitCount,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v64);
              if ( !v38 )
                goto LABEL_124;
              v15 = v71;
              v38->fields.nameLimitCount = v30;
              if ( v27 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10167/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                if ( !v13 )
                  goto LABEL_124;
                System_Text_StringBuilder__Append_60868928(v13, (System_String_o *)gameObject, 0LL);
                System_Text_StringBuilder__Append_60868928(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10168/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
              if ( !v13 )
                goto LABEL_124;
              System_Text_StringBuilder__Append_60868928(v13, (System_String_o *)gameObject, 0LL);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v38, v39);
              System_Text_StringBuilder__Append_60868928(v13, SvtNameText, 0LL);
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10166/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
              gameObject = (__int64)System_Text_StringBuilder__Append_60868928(v13, v41, 0LL);
              if ( !v22 )
                goto LABEL_124;
              items = v22->fields._items;
              v45 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v22->fields._version;
              if ( !items )
                goto LABEL_124;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)v38,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v47[4] = (Il2CppClass *)v38;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v38, v42, v43);
              }
              MasterData_object = v70;
              if ( ++v27 == v69 )
                goto LABEL_75;
            }
LABEL_125:
            sub_1B88814(gameObject, v12);
          }
        }
LABEL_75:
        supportMemberBase = v67->fields.supportMemberBase;
        memberObjectList = v67->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v22,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v23);
        if ( v65 <= 1 )
        {
          gameObject = (__int64)v67->fields.decideButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v67->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v67->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)v67->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        }
        gameObject = (__int64)v68;
        if ( !v68 )
          goto LABEL_124;
        gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v68->klass->vtable._3_ToString.method)(
                       v68,
                       v68->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v50 = (Il2CppObject *)gameObject;
        if ( v65 )
        {
          if ( v65 != 1 )
          {
LABEL_122:
            v67->fields.state = 1;
            v63 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v63, (Il2CppObject *)v67, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)v67, v63, 0, 0LL);
            return;
          }
          titleLabel = v67->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
                messageLabel = v67->fields.messageLabel,
                v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL),
                gameObject = (__int64)System_String__Format(v53, v50, 0LL),
                !messageLabel) )
          {
LABEL_124:
            sub_1B8880C(gameObject, v12);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          closeLabel = v67->fields.closeLabel;
          v55 = &StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_120:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v55, 0LL);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
            goto LABEL_122;
          }
          goto LABEL_124;
        }
        if ( !questRestrictionInfo )
          goto LABEL_124;
        isFixedMyServantPosition = questRestrictionInfo->fields.isFixedMyServantPosition;
        v57 = v67->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( questRestrictionInfo->fields.isFixedMyServantPosition )
          {
LABEL_97:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
            if ( !v57 )
              goto LABEL_124;
            UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
            v58 = v67->fields.messageLabel;
            if ( v66 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
              gameObject = (__int64)System_String__Format(v59, v50, 0LL);
              if ( !v58 )
                goto LABEL_124;
            }
            else
            {
              gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
              if ( !v58 )
                goto LABEL_124;
            }
            UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
            closeLabel = v67->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = &StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_120;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_97;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v57 )
          goto LABEL_124;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        v61 = v67->fields.messageLabel;
        if ( v66 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v62, v50, 0LL);
          if ( !v61 )
            goto LABEL_124;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
          if ( !v61 )
            goto LABEL_124;
        }
        UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
        closeLabel = v67->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_120;
      }
      if ( !questRestrictionInfo )
        goto LABEL_124;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0LL);
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_124;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
    }
    v15 = FixedMyServantSingleSvtIdList;
    goto LABEL_13;
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

  if ( (byte_4A57044 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4A57044 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A57045 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4A57045 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B88ACC(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C90B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9068;
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A5704E & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5704E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}