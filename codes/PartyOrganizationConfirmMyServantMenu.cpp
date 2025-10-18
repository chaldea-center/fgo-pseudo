void PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4C3E9B9 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_4C3E9B9 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3E9B8 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3E9B8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMyServantMenu__Callback(
        PartyOrganizationConfirmMyServantMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_34199504(this, 0, v2);
}


void PartyOrganizationConfirmMyServantMenu__Close_34199504(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3E9B4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_4C3E9B4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void PartyOrganizationConfirmMyServantMenu__EndOpen(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmMyServantMenu__Init(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C3E9B2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E9B2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_9:
    sub_1C372B4(titleLabel);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E9B6 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_4C3E9B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__OnClickClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E9B7 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_4C3E9B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E9B5 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_4C3E9B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmMyServantMenu__Open(
        PartyOrganizationConfirmMyServantMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Text_StringBuilder_o *v12; // x23
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v14; // x29
  UnityEngine_GameObject_o *v15; // x0
  PartyOrganizationConfirmMyServantMenu_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x21
  int32_t v20; // w19
  System_Collections_Generic_List_object__o *v21; // x25
  const MethodInfo *v22; // x5
  il2cpp_array_size_t v23; // x19
  Il2CppObject *MasterData_object; // x20
  UnityEngine_GameObject_o *v25; // x27
  unsigned __int64 v26; // x28
  int32_t v27; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  bool IsGrandSvt; // w22
  int klass; // w8
  unsigned int v31; // w25
  FollowerInfo_o *v32; // x19
  ServantLeaderInfo_o *v33; // x26
  UnityEngine_GameObject_c *v34; // x23
  void *monitor; // x24
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v37; // x19
  System_String_o *SvtNameText; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v48; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v51; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v53; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v55; // x19
  UILabel_o *v56; // x19
  System_String_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UILabel_o *v59; // x19
  System_String_o *v60; // x0
  System_Action_o *v61; // x19
  unsigned int v62; // [xsp+18h] [xbp-A8h]
  int v63; // [xsp+1Ch] [xbp-A4h]
  PartyOrganizationConfirmMyServantMenu_o *v64; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v65; // [xsp+28h] [xbp-98h]
  System_Text_StringBuilder_o *v66; // [xsp+30h] [xbp-90h]
  __int64 v67; // [xsp+38h] [xbp-88h]
  int maxLimitCount; // [xsp+48h] [xbp-78h]
  int32_t limitCount; // [xsp+4Ch] [xbp-74h]
  QuestRestrictionInfo_o *v71; // [xsp+50h] [xbp-70h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4C3E9B3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_1C37058(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C37058(&StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_1C37058(&StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C37058(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_1C37058(&StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C37058(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C37058(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_1C37058(&StringLiteral_10144/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_1C37058(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_4C3E9B3 = 1;
  }
  entity = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)setupInfo);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v12 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v12, 0);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v14 = 0;
LABEL_13:
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_128;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        v16 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v17 = v15;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
          v16 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v64 = this;
        GameObjectExtensions__SetLocalPositionY(v17, v16->static_fields->MESSAGE_POS_Y_DEFAULT, 0);
        v71 = questRestrictionInfo;
        v62 = kind;
        if ( v14 && (max_length = v14->max_length, (int)max_length >= 1) )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= (unsigned int)max_length )
              goto LABEL_129;
            v20 = v14->m_Items[v19];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_128;
            gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                       &entity,
                                                       v20,
                                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
              break;
            LODWORD(max_length) = v14->max_length;
            if ( (__int64)++v19 >= (int)max_length )
              goto LABEL_25;
          }
          gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_128;
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v58, 0.0, 0);
          v63 = 0;
        }
        else
        {
LABEL_25:
          v63 = 1;
        }
        v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v14 && v63 )
        {
          v23 = v14->max_length;
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     (NpcFollowerMaster_o *)gameObject,
                                                     questRestrictionInfo->fields.questId,
                                                     questRestrictionInfo->fields.questPhase,
                                                     0);
          if ( (int)v23 >= 1 )
          {
            v67 = (unsigned int)v23;
            v25 = gameObject;
            v26 = 0;
            v65 = v21;
            v66 = v12;
            while ( v26 < LODWORD(v14->max_length) )
            {
              v27 = v14->m_Items[v26];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C3CD62 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C3CD62 = 1;
              }
              gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_128;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                   v27,
                                   0);
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                if ( !EntityDefinitely )
                  goto LABEL_128;
                IsGrandSvt = 0;
                maxLimitCount = -1;
              }
              else
              {
                if ( !EntityDefinitely )
                  goto LABEL_128;
                gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__IsGet(EntityDefinitely, 0);
                if ( ((unsigned __int8)gameObject & 1) != 0 )
                {
                  maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                  gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__IsGrandServant(
                                                             EntityDefinitely,
                                                             0);
                  IsGrandSvt = (char)gameObject;
                }
                else
                {
                  IsGrandSvt = 0;
                  maxLimitCount = 0;
                }
              }
              if ( !v25 )
                goto LABEL_128;
              klass = (int)v25[1].klass;
              limitCount = EntityDefinitely->fields.maxLimitCount;
              if ( klass >= 1 )
              {
                v31 = 0;
                while ( 1 )
                {
                  if ( v31 >= klass )
                    goto LABEL_129;
                  v32 = (FollowerInfo_o *)*((_QWORD *)&v25[1].monitor + (int)v31);
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             questRestrictionInfo->fields.questId,
                                                             0);
                  if ( !v32 )
                    goto LABEL_128;
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                             v32,
                                                             0,
                                                             (int32_t)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    v33 = (ServantLeaderInfo_o *)gameObject;
                    v34 = gameObject[2].klass;
                    monitor = gameObject[2].monitor;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v73.fields.currentCryptoKey = v34;
                    *(_QWORD *)&v73.fields.fakeValue = monitor;
                    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v73,
                                                               0);
                    questRestrictionInfo = v71;
                    if ( (_DWORD)gameObject == v27 )
                      break;
                  }
                  klass = (int)v25[1].klass;
                  if ( (int)++v31 >= klass )
                    goto LABEL_63;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v71->fields.questId, 0);
                limitCount = FollowerInfo__getLimitCount(v32, 0, ReturnTypeByQuestId, 0);
                IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(v33, 0);
LABEL_63:
                v21 = v65;
                v12 = v66;
              }
              v37 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34241268(
                v37,
                v26,
                v27,
                limitCount,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                IsGrandSvt,
                0);
              if ( !v37 )
                goto LABEL_128;
              v37->fields.nameLimitCount = maxLimitCount;
              if ( v26 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                           0);
                if ( !v12 )
                  goto LABEL_128;
                System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)gameObject, 0);
                System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10144/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                         0);
              if ( !v12 )
                goto LABEL_128;
              System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)gameObject, 0);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v37, 0);
              System_Text_StringBuilder__Append_63646720(v12, SvtNameText, 0);
              v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_63646720(v12, v39, 0);
              if ( !v21 )
                goto LABEL_128;
              items = v21->fields._items;
              v43 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v21->fields._version;
              if ( !items )
                goto LABEL_128;
              size = v21->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v37,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v45[4] = (Il2CppClass *)v37;
                sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v37, v40, v41);
              }
              if ( ++v26 == v67 )
                goto LABEL_79;
            }
LABEL_129:
            sub_1C372BC(gameObject);
          }
        }
LABEL_79:
        supportMemberBase = v64->fields.supportMemberBase;
        memberObjectList = v64->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v21,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v22);
        if ( v62 <= 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)v64->fields.decideButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v64->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v64->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)v64->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                                     gameObject,
                                                     0,
                                                     1,
                                                     gameObject->klass[1]._1.implementedInterfaces);
        }
        if ( !v12 )
          goto LABEL_128;
        gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                                   v12,
                                                   v12->klass->vtable._3_ToString.method);
        v48 = (Il2CppObject *)gameObject;
        if ( v62 )
        {
          if ( v62 != 1 )
          {
LABEL_126:
            v64->fields.state = 1;
            v61 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v61, (Il2CppObject *)v64, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v64, v61, 0, 0, 0);
            return;
          }
          titleLabel = v64->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
                messageLabel = v64->fields.messageLabel,
                v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0),
                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v51, v48, 0),
                !messageLabel) )
          {
LABEL_128:
            sub_1C372B4(gameObject);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          closeLabel = v64->fields.closeLabel;
          v53 = &StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_124:
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v53, 0);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
            goto LABEL_126;
          }
          goto LABEL_128;
        }
        if ( !v71 )
          goto LABEL_128;
        isFixedMyServantPosition = v71->fields.isFixedMyServantPosition;
        v55 = v64->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( v71->fields.isFixedMyServantPosition )
          {
LABEL_101:
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
            if ( !v55 )
              goto LABEL_128;
            UILabel__set_text(v55, (System_String_o *)gameObject, 0);
            v56 = v64->fields.messageLabel;
            if ( v63 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v57 = LocalizationManager__Get((System_String_o *)StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v57, v48, 0);
              if ( !v56 )
                goto LABEL_128;
            }
            else
            {
              gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(v71, 0);
              if ( !v56 )
                goto LABEL_128;
            }
            UILabel__set_text(v56, (System_String_o *)gameObject, 0);
            closeLabel = v64->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v53 = &StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_124;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_101;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
        if ( !v55 )
          goto LABEL_128;
        UILabel__set_text(v55, (System_String_o *)gameObject, 0);
        v59 = v64->fields.messageLabel;
        if ( v63 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v60, v48, 0);
          if ( !v59 )
            goto LABEL_128;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(v71, 0);
          if ( !v59 )
            goto LABEL_128;
        }
        UILabel__set_text(v59, (System_String_o *)gameObject, 0);
        closeLabel = v64->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_124;
      }
      if ( !questRestrictionInfo )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0);
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
    }
    v14 = FixedMyServantSingleSvtIdList;
    goto LABEL_13;
  }
}


void PartyOrganizationConfirmMyServantMenu__add_callbackFunc(
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

  if ( (byte_4C3E9B0 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4C3E9B0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C37574(v8);
  PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationConfirmMyServantMenu__remove_callbackFunc(
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

  if ( (byte_4C3E9B1 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4C3E9B1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMyServantMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C37574(v8);
  PartyOrganizationConfirmMyServantMenu__Init(v11, v12);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A75DC4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75D7C;
}


System_IAsyncResult_o *PartyOrganizationConfirmMyServantMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C3E9BB & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3E9BB = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}