void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4BD81AE & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_4BD81AE = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD81AD & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD81AD = 1;
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
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_32982096(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32982096(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD81A9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_4BD81A9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C21DDC(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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

  if ( (byte_4BD81A7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD81A7 = 1;
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
    sub_1C22094(titleLabel, method);
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

  if ( (byte_4BD81AB & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_4BD81AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4BD81AC & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_4BD81AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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

  if ( (byte_4BD81AA & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_4BD81AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  System_Int32_array *v15; // x23
  UnityEngine_GameObject_o *v16; // x0
  PartyOrganizationConfirmMyServantMenu_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x21
  int32_t v21; // w19
  UnityEngine_GameObject_o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x25
  const MethodInfo *v24; // x5
  __int64 v25; // x19
  Il2CppObject *MasterData_object; // x22
  __int64 v27; // x27
  unsigned __int64 v28; // x28
  int32_t v29; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int v31; // w25
  int v32; // w8
  int32_t maxLimitCount; // w23
  unsigned int v34; // w24
  FollowerInfo_o *v35; // x19
  __int64 v36; // x26
  __int64 v37; // x29
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v39; // x19
  const MethodInfo *v40; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v49; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v52; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v54; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v56; // x19
  UILabel_o *v57; // x19
  System_String_o *v58; // x0
  UILabel_o *v59; // x19
  System_String_o *v60; // x0
  System_Action_o *v61; // x19
  const MethodInfo *v62; // [xsp+0h] [xbp-B0h]
  unsigned int v63; // [xsp+10h] [xbp-A0h]
  int v64; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v65; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v66; // [xsp+20h] [xbp-90h]
  __int64 v67; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_object__o *v68; // [xsp+30h] [xbp-80h]
  System_Int32_array *v70; // [xsp+40h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4BD81A8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_1C21E38(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_10416/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C21E38(&StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_1C21E38(&StringLiteral_10421/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_10414/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C21E38(&StringLiteral_10417/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_1C21E38(&StringLiteral_10420/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C21E38(&StringLiteral_10418/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C21E38(&StringLiteral_10415/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_1C21E38(&StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_1C21E38(&StringLiteral_10419/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_4BD81A8 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C21DDC(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v13 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v13, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v15 = 0LL;
        goto LABEL_13;
      }
      if ( !questRestrictionInfo )
        goto LABEL_129;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0LL);
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_129;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
    }
    v15 = FixedMyServantSingleSvtIdList;
LABEL_13:
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_129;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    v18 = v16;
    if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
      v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    }
    v65 = this;
    GameObjectExtensions__SetLocalPositionY(v18, v17->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v66 = v13;
    v70 = v15;
    v63 = kind;
    if ( !v15 || (v19 = *(_QWORD *)&v15->max_length, (int)v19 < 1) )
    {
      v64 = 1;
      goto LABEL_29;
    }
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
        goto LABEL_130;
      v21 = v15->m_Items[v20 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_129;
      gameObject = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     &entity,
                     v21,
                     (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (gameObject & 1) == 0 )
      {
        gameObject = (__int64)this->fields.messageLabel;
        if ( gameObject )
        {
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v22, 0.0, 0LL);
          v64 = 0;
          goto LABEL_29;
        }
        goto LABEL_129;
      }
      ++v20;
      LODWORD(v19) = v15->max_length;
    }
    while ( (__int64)v20 < (int)v19 );
    v64 = 1;
LABEL_29:
    v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v15 && v64 )
    {
      v25 = *(_QWORD *)&v15->max_length;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( questRestrictionInfo )
          {
            if ( gameObject )
            {
              gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                      (NpcFollowerMaster_o *)gameObject,
                                      questRestrictionInfo->fields.questId,
                                      questRestrictionInfo->fields.questPhase,
                                      0LL);
              if ( (int)v25 >= 1 )
              {
                v67 = (unsigned int)v25;
                v27 = gameObject;
                v28 = 0LL;
                v68 = v23;
                while ( v28 < v15->max_length )
                {
                  v29 = v15->m_Items[v28 + 1];
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4BD6FF5 )
                  {
                    sub_1C21E38(&NetworkManager_TypeInfo);
                    byte_4BD6FF5 = 1;
                  }
                  gameObject = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    gameObject = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( !MasterData_object )
                    goto LABEL_129;
                  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                       (UserServantCollectionMaster_o *)MasterData_object,
                                       *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                       v29,
                                       0LL);
                  if ( !OptionManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  gameObject = OptionManager__GetSpoilerSetting(0LL);
                  if ( (gameObject & 1) != 0 )
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_129;
                    v31 = -1;
                  }
                  else
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_129;
                    gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                    v31 = (gameObject & 1) != 0 ? EntityDefinitely->fields.maxLimitCount : 0;
                  }
                  if ( !v27 )
                    goto LABEL_129;
                  v32 = *(_DWORD *)(v27 + 24);
                  maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                  if ( v32 >= 1 )
                  {
                    v34 = 0;
                    while ( 1 )
                    {
                      if ( v34 >= v32 )
                        goto LABEL_130;
                      v35 = *(FollowerInfo_o **)(v27 + 8LL * (int)v34 + 32);
                      gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                      if ( !v35 )
                        goto LABEL_129;
                      gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v35, 0, gameObject, 0LL);
                      if ( gameObject )
                      {
                        v36 = *(_QWORD *)(gameObject + 48);
                        v37 = *(_QWORD *)(gameObject + 56);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v72.fields.currentCryptoKey = v36;
                        *(_QWORD *)&v72.fields.fakeValue = v37;
                        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v72, 0LL);
                        if ( (_DWORD)gameObject == v29 )
                          break;
                      }
                      v32 = *(_DWORD *)(v27 + 24);
                      if ( (int)++v34 >= v32 )
                        goto LABEL_66;
                    }
                    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                            questRestrictionInfo->fields.questId,
                                            0LL);
                    maxLimitCount = FollowerInfo__getLimitCount(v35, 0, ReturnTypeByQuestId, 0LL);
LABEL_66:
                    v13 = v66;
                  }
                  v39 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_32981460(
                    v39,
                    v28,
                    v29,
                    maxLimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v62);
                  if ( !v39 )
                    goto LABEL_129;
                  v39->fields.nameLimitCount = v31;
                  v15 = v70;
                  v23 = v68;
                  if ( v28 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                    if ( !v13 )
                      goto LABEL_129;
                    System_Text_StringBuilder__Append_62276628(v13, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_62276628(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
                  if ( !v13 )
                    goto LABEL_129;
                  System_Text_StringBuilder__Append_62276628(v13, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v39, v40);
                  System_Text_StringBuilder__Append_62276628(v13, SvtNameText, 0LL);
                  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (__int64)System_Text_StringBuilder__Append_62276628(v13, v42, 0LL);
                  if ( !v68 )
                    goto LABEL_129;
                  items = v68->fields._items;
                  v44 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v68->fields._version;
                  if ( !items )
                    goto LABEL_129;
                  size = v68->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v68,
                      (Il2CppObject *)v39,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v46 = &items->obj.klass + size;
                    v68->fields._size = size + 1;
                    v46[4] = (Il2CppClass *)v39;
                    gameObject = sub_1C21DDC(v46 + 4, v39);
                  }
                  if ( ++v28 == v67 )
                    goto LABEL_82;
                }
LABEL_130:
                sub_1C2209C(gameObject, v12);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_129:
      sub_1C22094(gameObject, v12);
    }
LABEL_82:
    supportMemberBase = v65->fields.supportMemberBase;
    memberObjectList = v65->fields.memberObjectList;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v23,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v24);
    if ( v63 <= 1 )
    {
      gameObject = (__int64)v65->fields.decideButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v65->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v65->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)v65->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    gameObject = (__int64)v66;
    if ( !v66 )
      goto LABEL_129;
    gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                   v66,
                   v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v49 = (Il2CppObject *)gameObject;
    if ( v63 )
    {
      if ( v63 != 1 )
      {
LABEL_127:
        v65->fields.state = 1;
        v61 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v61, (Il2CppObject *)v65, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v65, v61, 0, 0LL);
        return;
      }
      titleLabel = v65->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_129;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v65->fields.messageLabel;
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10418/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v52, v49, 0LL);
      if ( !messageLabel )
        goto LABEL_129;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v65->fields.closeLabel;
      v54 = &StringLiteral_10417/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_125:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v54, 0LL);
      if ( !closeLabel )
        goto LABEL_129;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
      goto LABEL_127;
    }
    if ( !questRestrictionInfo )
      goto LABEL_129;
    isFixedMyServantPosition = questRestrictionInfo->fields.isFixedMyServantPosition;
    v56 = v65->fields.titleLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
LABEL_104:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10416/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v56 )
          goto LABEL_129;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        v57 = v65->fields.messageLabel;
        if ( v64 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v58, v49, 0LL);
          if ( !v57 )
            goto LABEL_129;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
          if ( !v57 )
            goto LABEL_129;
        }
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        closeLabel = v65->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = &StringLiteral_10414/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_125;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isFixedMyServantPosition )
        goto LABEL_104;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
    if ( !v56 )
      goto LABEL_129;
    UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
    v59 = v65->fields.messageLabel;
    if ( v64 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10421/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v60, v49, 0LL);
      if ( !v59 )
        goto LABEL_129;
    }
    else
    {
      gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
      if ( !v59 )
        goto LABEL_129;
    }
    UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
    closeLabel = v65->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_10420/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
    goto LABEL_125;
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

  if ( (byte_4BD81A5 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4BD81A5 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C22354(v8);
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

  if ( (byte_4BD81A6 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4BD81A6 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C22354(v8);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5D66C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5D624;
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
  if ( (byte_4BD81AF & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD81AF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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