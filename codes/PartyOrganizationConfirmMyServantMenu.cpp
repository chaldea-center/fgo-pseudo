void PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4CB1C8F & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_4CB1C8F = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1C8E & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1C8E = 1;
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
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationConfirmMyServantMenu__Close_34412256(this, 0, v2);
}


void PartyOrganizationConfirmMyServantMenu__Close_34412256(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB1C8A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_4CB1C8A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6B9AC(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4CB1C88 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1C88 = 1;
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
    sub_1C6BC60(titleLabel, method);
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

  if ( (byte_4CB1C8C & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_4CB1C8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB1C8D & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_4CB1C8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB1C8B & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_4CB1C8B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
  __int64 v12; // x1
  System_Text_StringBuilder_o *v13; // x23
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v15; // x29
  UnityEngine_GameObject_o *v16; // x0
  PartyOrganizationConfirmMyServantMenu_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x21
  int32_t v21; // w19
  System_Collections_Generic_List_object__o *v22; // x25
  const MethodInfo *v23; // x5
  il2cpp_array_size_t v24; // x19
  Il2CppObject *MasterData_object; // x20
  UnityEngine_GameObject_o *v26; // x27
  unsigned __int64 v27; // x28
  int32_t v28; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  bool IsGrandSvt; // w22
  int klass; // w8
  unsigned int v32; // w25
  FollowerInfo_o *v33; // x19
  ServantLeaderInfo_o *v34; // x26
  UnityEngine_GameObject_c *v35; // x23
  void *monitor; // x24
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v38; // x19
  System_String_o *SvtNameText; // x0
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
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
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x19
  System_String_o *v61; // x0
  System_Action_o *v62; // x19
  unsigned int v63; // [xsp+18h] [xbp-A8h]
  int v64; // [xsp+1Ch] [xbp-A4h]
  PartyOrganizationConfirmMyServantMenu_o *v65; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v66; // [xsp+28h] [xbp-98h]
  System_Text_StringBuilder_o *v67; // [xsp+30h] [xbp-90h]
  __int64 v68; // [xsp+38h] [xbp-88h]
  int maxLimitCount; // [xsp+48h] [xbp-78h]
  int32_t limitCount; // [xsp+4Ch] [xbp-74h]
  QuestRestrictionInfo_o *v72; // [xsp+50h] [xbp-70h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4CB1C89 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_1C6BA08(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_1C6BA08(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_1C6BA08(&StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_1C6BA08(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_4CB1C89 = 1;
  }
  entity = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)setupInfo);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v13 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v13, 0);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v15 = 0;
LABEL_13:
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_128;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v18 = v16;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
          v17 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v65 = this;
        GameObjectExtensions__SetLocalPositionY(v18, v17->static_fields->MESSAGE_POS_Y_DEFAULT, 0);
        v72 = questRestrictionInfo;
        v63 = kind;
        if ( v15 && (max_length = v15->max_length, (int)max_length >= 1) )
        {
          v20 = 0;
          while ( 1 )
          {
            if ( v20 >= (unsigned int)max_length )
              goto LABEL_129;
            v21 = v15->m_Items[v20];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_128;
            gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                       &entity,
                                                       v21,
                                                       (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
              break;
            LODWORD(max_length) = v15->max_length;
            if ( (__int64)++v20 >= (int)max_length )
              goto LABEL_25;
          }
          gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_128;
          v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v59, 0.0, 0);
          v64 = 0;
        }
        else
        {
LABEL_25:
          v64 = 1;
        }
        v22 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v15 && v64 )
        {
          v24 = v15->max_length;
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     (NpcFollowerMaster_o *)gameObject,
                                                     questRestrictionInfo->fields.questId,
                                                     questRestrictionInfo->fields.questPhase,
                                                     0);
          if ( (int)v24 >= 1 )
          {
            v68 = (unsigned int)v24;
            v26 = gameObject;
            v27 = 0;
            v66 = v22;
            v67 = v13;
            while ( v27 < LODWORD(v15->max_length) )
            {
              v28 = v15->m_Items[v27];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CB002A )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB002A = 1;
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
                                   v28,
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
              if ( !v26 )
                goto LABEL_128;
              klass = (int)v26[1].klass;
              limitCount = EntityDefinitely->fields.maxLimitCount;
              if ( klass >= 1 )
              {
                v32 = 0;
                while ( 1 )
                {
                  if ( v32 >= klass )
                    goto LABEL_129;
                  v33 = (FollowerInfo_o *)*((_QWORD *)&v26[1].monitor + (int)v32);
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             questRestrictionInfo->fields.questId,
                                                             0);
                  if ( !v33 )
                    goto LABEL_128;
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                             v33,
                                                             0,
                                                             (int32_t)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    v34 = (ServantLeaderInfo_o *)gameObject;
                    v35 = gameObject[2].klass;
                    monitor = gameObject[2].monitor;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v74.fields.currentCryptoKey = v35;
                    *(_QWORD *)&v74.fields.fakeValue = monitor;
                    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                               v74,
                                                               0);
                    questRestrictionInfo = v72;
                    if ( (_DWORD)gameObject == v28 )
                      break;
                  }
                  klass = (int)v26[1].klass;
                  if ( (int)++v32 >= klass )
                    goto LABEL_63;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v72->fields.questId, 0);
                limitCount = FollowerInfo__getLimitCount(v33, 0, ReturnTypeByQuestId, 0);
                IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(v34, 0);
LABEL_63:
                v22 = v66;
                v13 = v67;
              }
              v38 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34454416(
                v38,
                v27,
                v28,
                limitCount,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                IsGrandSvt,
                0);
              if ( !v38 )
                goto LABEL_128;
              v38->fields.nameLimitCount = maxLimitCount;
              if ( v27 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                           0);
                if ( !v13 )
                  goto LABEL_128;
                System_Text_StringBuilder__Append_64050752(v13, (System_String_o *)gameObject, 0);
                System_Text_StringBuilder__Append_64050752(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                         0);
              if ( !v13 )
                goto LABEL_128;
              System_Text_StringBuilder__Append_64050752(v13, (System_String_o *)gameObject, 0);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v38, 0);
              System_Text_StringBuilder__Append_64050752(v13, SvtNameText, 0);
              v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_64050752(v13, v40, 0);
              if ( !v22 )
                goto LABEL_128;
              items = v22->fields._items;
              v44 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v22->fields._version;
              if ( !items )
                goto LABEL_128;
              size = v22->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)v38,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v46[4] = (Il2CppClass *)v38;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v38, v41, v42);
              }
              if ( ++v27 == v68 )
                goto LABEL_79;
            }
LABEL_129:
            sub_1C6BC68(gameObject);
          }
        }
LABEL_79:
        supportMemberBase = v65->fields.supportMemberBase;
        memberObjectList = v65->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v22,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v23);
        if ( v63 <= 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)v65->fields.decideButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v65->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v65->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)v65->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                                     gameObject,
                                                     0,
                                                     1,
                                                     gameObject->klass[1]._1.implementedInterfaces);
        }
        if ( !v13 )
          goto LABEL_128;
        gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                                                   v13,
                                                   v13->klass->vtable._3_ToString.method);
        v49 = (Il2CppObject *)gameObject;
        if ( v63 )
        {
          if ( v63 != 1 )
          {
LABEL_126:
            v65->fields.state = 1;
            v62 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
            System_Action___ctor(v62, (Il2CppObject *)v65, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v65, v62, 0, 0, 0);
            return;
          }
          titleLabel = v65->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
                messageLabel = v65->fields.messageLabel,
                v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0),
                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v49, 0),
                !messageLabel) )
          {
LABEL_128:
            sub_1C6BC60(gameObject, v12);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          closeLabel = v65->fields.closeLabel;
          v54 = &StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_124:
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v54, 0);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
            goto LABEL_126;
          }
          goto LABEL_128;
        }
        if ( !v72 )
          goto LABEL_128;
        isFixedMyServantPosition = v72->fields.isFixedMyServantPosition;
        v56 = v65->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( v72->fields.isFixedMyServantPosition )
          {
LABEL_101:
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
            if ( !v56 )
              goto LABEL_128;
            UILabel__set_text(v56, (System_String_o *)gameObject, 0);
            v57 = v65->fields.messageLabel;
            if ( v64 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v58, v49, 0);
              if ( !v57 )
                goto LABEL_128;
            }
            else
            {
              gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(v72, 0);
              if ( !v57 )
                goto LABEL_128;
            }
            UILabel__set_text(v57, (System_String_o *)gameObject, 0);
            closeLabel = v65->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v54 = &StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_124;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_101;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
        if ( !v56 )
          goto LABEL_128;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0);
        v60 = v65->fields.messageLabel;
        if ( v64 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v61, v49, 0);
          if ( !v60 )
            goto LABEL_128;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(v72, 0);
          if ( !v60 )
            goto LABEL_128;
        }
        UILabel__set_text(v60, (System_String_o *)gameObject, 0);
        closeLabel = v65->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = &StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
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
    v15 = FixedMyServantSingleSvtIdList;
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

  if ( (byte_4CB1C86 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4CB1C86 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C6BFFC(v8);
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

  if ( (byte_4CB1C87 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4CB1C87 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C6BFFC(v8);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9BE24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9BDDC;
}


System_IAsyncResult_o *PartyOrganizationConfirmMyServantMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB1C91 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB1C91 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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