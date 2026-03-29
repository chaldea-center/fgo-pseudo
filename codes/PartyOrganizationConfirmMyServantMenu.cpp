void PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C321 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    byte_4D2C321 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2C320 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2C320 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmMyServantMenu__Close(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMyServantMenu__Close_34808632(this, 0, v2);
}


void PartyOrganizationConfirmMyServantMenu__Close_34808632(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2C31C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__);
    byte_4D2C31C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationConfirmMyServantMenu__EndClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMyServantMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
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

  if ( (byte_4D2C31A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C31A = 1;
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
    sub_1C93D2C(titleLabel, method);
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

  if ( (byte_4D2C31E & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    byte_4D2C31E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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

  if ( (byte_4D2C31F & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    byte_4D2C31F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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

  if ( (byte_4D2C31D & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    byte_4D2C31D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  System_String_o *v7; // x7
  QuestRestrictionInfo_o *v9; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_Text_StringBuilder_o *v14; // x23
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v16; // x29
  UnityEngine_GameObject_o *v17; // x0
  PartyOrganizationConfirmMyServantMenu_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v21; // x21
  int32_t v22; // w19
  System_Collections_Generic_List_object__o *v23; // x25
  const MethodInfo *v24; // x5
  il2cpp_array_size_t v25; // x19
  Il2CppObject *MasterData_object; // x20
  UnityEngine_GameObject_o *v27; // x27
  unsigned __int64 v28; // x28
  int32_t v29; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  bool IsGrandSvt; // w22
  int klass; // w8
  unsigned int v33; // w25
  FollowerInfo_o *v34; // x19
  ServantLeaderInfo_o *v35; // x26
  UnityEngine_GameObject_c *v36; // x23
  void *monitor; // x24
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v39; // x19
  System_String_o *SvtNameText; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v54; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v57; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v59; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v61; // x19
  UILabel_o *v62; // x19
  System_String_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UILabel_o *v65; // x19
  System_String_o *v66; // x0
  System_Action_o *v67; // x19
  unsigned int v68; // [xsp+18h] [xbp-A8h]
  int v69; // [xsp+1Ch] [xbp-A4h]
  PartyOrganizationConfirmMyServantMenu_o *v70; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v71; // [xsp+28h] [xbp-98h]
  System_Text_StringBuilder_o *v72; // [xsp+30h] [xbp-90h]
  __int64 v73; // [xsp+38h] [xbp-88h]
  int maxLimitCount; // [xsp+48h] [xbp-78h]
  int32_t limitCount; // [xsp+4Ch] [xbp-74h]
  QuestRestrictionInfo_o *v77; // [xsp+50h] [xbp-70h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  v9 = questRestrictionInfo;
  if ( (byte_4D2C31B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__);
    sub_1C93AD4(&PartyOrganizationConfirmMyServantMenu_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/);
    sub_1C93AD4(&StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10204/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/);
    sub_1C93AD4(&StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/);
    sub_1C93AD4(&StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/);
    byte_4D2C31B = 1;
  }
  entity = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (int32_t)setupInfo,
      (System_String_o *)questRestrictionInfo,
      (int32_t)callback,
      (int64_t)method,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v14 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v14, 0);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v16 = 0;
LABEL_13:
        gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_128;
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        v18 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v19 = v17;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
          v18 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v70 = this;
        GameObjectExtensions__SetLocalPositionY(v19, v18->static_fields->MESSAGE_POS_Y_DEFAULT, 0);
        v77 = v9;
        v68 = kind;
        if ( v16 && (max_length = v16->max_length, (int)max_length >= 1) )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= (unsigned int)max_length )
              goto LABEL_129;
            v22 = v16->m_Items[v21];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_128;
            gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                       &entity,
                                                       v22,
                                                       (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
              break;
            LODWORD(max_length) = v16->max_length;
            if ( (__int64)++v21 >= (int)max_length )
              goto LABEL_25;
          }
          gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_128;
          v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v64, 0.0, 0);
          v69 = 0;
        }
        else
        {
LABEL_25:
          v69 = 1;
        }
        v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v16 && v69 )
        {
          v25 = v16->max_length;
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !v9 || !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     (NpcFollowerMaster_o *)gameObject,
                                                     v9->fields.questId,
                                                     v9->fields.questPhase,
                                                     0);
          if ( (int)v25 >= 1 )
          {
            v73 = (unsigned int)v25;
            v27 = gameObject;
            v28 = 0;
            v71 = v23;
            v72 = v14;
            while ( v28 < LODWORD(v16->max_length) )
            {
              v29 = v16->m_Items[v28];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4D2A55B )
              {
                sub_1C93AD4(&NetworkManager_TypeInfo);
                byte_4D2A55B = 1;
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
                                   v29,
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
              if ( !v27 )
                goto LABEL_128;
              klass = (int)v27[1].klass;
              limitCount = EntityDefinitely->fields.maxLimitCount;
              if ( klass >= 1 )
              {
                v33 = 0;
                while ( 1 )
                {
                  if ( v33 >= klass )
                    goto LABEL_129;
                  v34 = (FollowerInfo_o *)*((_QWORD *)&v27[1].monitor + (int)v33);
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0);
                  if ( !v34 )
                    goto LABEL_128;
                  gameObject = (UnityEngine_GameObject_o *)FollowerInfo__getServantLeaderInfo(
                                                             v34,
                                                             0,
                                                             (int32_t)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    v35 = (ServantLeaderInfo_o *)gameObject;
                    v36 = gameObject[2].klass;
                    monitor = gameObject[2].monitor;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v79.fields.currentCryptoKey = v36;
                    *(_QWORD *)&v79.fields.fakeValue = monitor;
                    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                               v79,
                                                               0);
                    v9 = v77;
                    if ( (_DWORD)gameObject == v29 )
                      break;
                  }
                  klass = (int)v27[1].klass;
                  if ( (int)++v33 >= klass )
                    goto LABEL_63;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v77->fields.questId, 0);
                limitCount = FollowerInfo__getLimitCount(v34, 0, ReturnTypeByQuestId, 0);
                IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(v35, 0);
LABEL_63:
                v23 = v71;
                v14 = v72;
              }
              v39 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34851484(
                v39,
                v28,
                v29,
                limitCount,
                setupInfo,
                v9,
                0,
                0,
                IsGrandSvt,
                0);
              if ( !v39 )
                goto LABEL_128;
              v39->fields.nameLimitCount = maxLimitCount;
              if ( v28 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10204/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/,
                                                           0);
                if ( !v14 )
                  goto LABEL_128;
                System_Text_StringBuilder__Append_64509684(v14, (System_String_o *)gameObject, 0);
                System_Text_StringBuilder__Append_64509684(v14, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/,
                                                         0);
              if ( !v14 )
                goto LABEL_128;
              System_Text_StringBuilder__Append_64509684(v14, (System_String_o *)gameObject, 0);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v39, 0);
              System_Text_StringBuilder__Append_64509684(v14, SvtNameText, 0);
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__Append_64509684(v14, v41, 0);
              if ( !v23 )
                goto LABEL_128;
              items = v23->fields._items;
              v49 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v23->fields._version;
              if ( !items )
                goto LABEL_128;
              size = v23->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  (Il2CppObject *)v39,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v51 = &items->obj.klass + size;
                v23->fields._size = size + 1;
                v51[4] = (Il2CppClass *)v39;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)v39, v42, v43, v44, v45, v46, v47);
              }
              if ( ++v28 == v73 )
                goto LABEL_79;
            }
LABEL_129:
            sub_1C93D34(gameObject);
          }
        }
LABEL_79:
        supportMemberBase = v70->fields.supportMemberBase;
        memberObjectList = v70->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v23,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v24);
        if ( v68 <= 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)v70->fields.decideButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v70->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v70->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)v70->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                                     gameObject,
                                                     0,
                                                     1,
                                                     gameObject->klass[1]._1.implementedInterfaces);
        }
        if ( !v14 )
          goto LABEL_128;
        gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v14->klass->vtable._3_ToString.methodPtr)(
                                                   v14,
                                                   v14->klass->vtable._3_ToString.method);
        v54 = (Il2CppObject *)gameObject;
        if ( v68 )
        {
          if ( v68 != 1 )
          {
LABEL_126:
            v70->fields.state = 1;
            v67 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v67, (Il2CppObject *)v70, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v70, v67, 0, 0, 0);
            return;
          }
          titleLabel = v70->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
                messageLabel = v70->fields.messageLabel,
                v57 = LocalizationManager__Get((System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0),
                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v57, v54, 0),
                !messageLabel) )
          {
LABEL_128:
            sub_1C93D2C(gameObject, v13);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          closeLabel = v70->fields.closeLabel;
          v59 = &StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_124:
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v59, 0);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
            goto LABEL_126;
          }
          goto LABEL_128;
        }
        if ( !v77 )
          goto LABEL_128;
        isFixedMyServantPosition = v77->fields.isFixedMyServantPosition;
        v61 = v70->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( v77->fields.isFixedMyServantPosition )
          {
LABEL_101:
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
            if ( !v61 )
              goto LABEL_128;
            UILabel__set_text(v61, (System_String_o *)gameObject, 0);
            v62 = v70->fields.messageLabel;
            if ( v69 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v63, v54, 0);
              if ( !v62 )
                goto LABEL_128;
            }
            else
            {
              gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageMySvtPos(v77, 0);
              if ( !v62 )
                goto LABEL_128;
            }
            UILabel__set_text(v62, (System_String_o *)gameObject, 0);
            closeLabel = v70->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v59 = &StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_124;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_101;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0);
        if ( !v61 )
          goto LABEL_128;
        UILabel__set_text(v61, (System_String_o *)gameObject, 0);
        v65 = v70->fields.messageLabel;
        if ( v69 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v66, v54, 0);
          if ( !v65 )
            goto LABEL_128;
        }
        else
        {
          gameObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__GetDialogMessageSvtPos(v77, 0);
          if ( !v65 )
            goto LABEL_128;
        }
        UILabel__set_text(v65, (System_String_o *)gameObject, 0);
        closeLabel = v70->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = &StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_124;
      }
      if ( !v9 )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(v9, 0);
    }
    else
    {
      if ( !v9 )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(v9, 0);
    }
    v16 = FixedMyServantSingleSvtIdList;
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

  if ( (byte_4D2C318 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4D2C318 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C319 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
    byte_4D2C319 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1C940C8(v8);
  PartyOrganizationConfirmMyServantMenu__Init(v11, v12);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC2E98;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2E50;
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
  if ( (byte_4D2C323 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C323 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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