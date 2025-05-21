void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B40576 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_4B40576 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B40575 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B40575 = 1;
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationConfirmMyServantMenu__Close_33329064(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_33329064(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B40571 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v6);
    byte_4B40571 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__EndClose(
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
    p_closeCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4B4056F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B4056F = 1;
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
    sub_1BDBAD4(titleLabel, method);
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

  if ( (byte_4B40573 & 1) == 0 )
  {
    sub_1BDB878(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__, method);
    byte_4B40573 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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

  if ( (byte_4B40574 & 1) == 0 )
  {
    sub_1BDB878(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_4B40574 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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

  if ( (byte_4B40572 & 1) == 0 )
  {
    sub_1BDB878(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__, method);
    byte_4B40572 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v5);
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
  __int64 v11; // x1
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
  __int64 gameObject; // x0
  __int64 v43; // x1
  System_Text_StringBuilder_o *v44; // x23
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v46; // x29
  UnityEngine_GameObject_o *v47; // x0
  PartyOrganizationConfirmMyServantMenu_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x19
  __int64 v50; // x2
  __int64 v51; // x8
  unsigned __int64 v52; // x21
  int32_t v53; // w19
  System_Collections_Generic_List_object__o *v54; // x25
  const MethodInfo *v55; // x5
  __int64 v56; // x19
  Il2CppObject *MasterData_object; // x20
  __int64 v58; // x27
  unsigned __int64 v59; // x28
  int32_t v60; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  bool IsGrandSvt; // w22
  int v63; // w8
  unsigned int v64; // w25
  FollowerInfo_o *v65; // x19
  ServantLeaderInfo_o *v66; // x26
  __int64 v67; // x23
  __int64 v68; // x24
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v70; // x19
  System_String_o *SvtNameText; // x0
  System_String_o *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v81; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v84; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v86; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v88; // x19
  UILabel_o *v89; // x19
  System_String_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UILabel_o *v92; // x19
  System_String_o *v93; // x0
  System_Action_o *v94; // x19
  unsigned int v95; // [xsp+18h] [xbp-A8h]
  int v96; // [xsp+1Ch] [xbp-A4h]
  PartyOrganizationConfirmMyServantMenu_o *v97; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v98; // [xsp+28h] [xbp-98h]
  System_Text_StringBuilder_o *v99; // [xsp+30h] [xbp-90h]
  __int64 v100; // [xsp+38h] [xbp-88h]
  int maxLimitCount; // [xsp+48h] [xbp-78h]
  int32_t limitCount; // [xsp+4Ch] [xbp-74h]
  QuestRestrictionInfo_o *v104; // [xsp+50h] [xbp-70h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_4B40570 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1BDB878(&DataManager_TypeInfo, v14);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v18);
    sub_1BDB878(&LocalizationManager_TypeInfo, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BDB878(&OptionManager_TypeInfo, v22);
    sub_1BDB878(&PartyOrganizationConfirmItemDraw_TypeInfo, v23);
    sub_1BDB878(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v24);
    sub_1BDB878(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v25);
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v29);
    sub_1BDB878(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v30);
    sub_1BDB878(&StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v31);
    sub_1BDB878(&StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v32);
    sub_1BDB878(&StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v33);
    sub_1BDB878(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v34);
    sub_1BDB878(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v35);
    sub_1BDB878(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v36);
    sub_1BDB878(&StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v37);
    sub_1BDB878(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v38);
    sub_1BDB878(&StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v39);
    sub_1BDB878(&StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v40);
    sub_1BDB878(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v41);
    byte_4B40570 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)setupInfo);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v44 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v44, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v46 = 0LL;
LABEL_13:
        gameObject = (__int64)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_128;
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        v48 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v49 = v47;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
          v48 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v97 = this;
        GameObjectExtensions__SetLocalPositionY(v49, v48->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
        v104 = questRestrictionInfo;
        v95 = kind;
        if ( v46 && (v51 = *(_QWORD *)&v46->max_length, (int)v51 >= 1) )
        {
          v52 = 0LL;
          while ( 1 )
          {
            if ( v52 >= (unsigned int)v51 )
              goto LABEL_129;
            v53 = v46->m_Items[v52 + 1];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_128;
            gameObject = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           &entity,
                           v53,
                           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (gameObject & 1) == 0 )
              break;
            LODWORD(v51) = v46->max_length;
            if ( (__int64)++v52 >= (int)v51 )
              goto LABEL_25;
          }
          gameObject = (__int64)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_128;
          v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v91, 0.0, 0LL);
          v96 = 0;
        }
        else
        {
LABEL_25:
          v96 = 1;
        }
        v54 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v54,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v46 && v96 )
        {
          v56 = *(_QWORD *)&v46->max_length;
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_128;
          gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                  (NpcFollowerMaster_o *)gameObject,
                                  questRestrictionInfo->fields.questId,
                                  questRestrictionInfo->fields.questPhase,
                                  0LL);
          if ( (int)v56 >= 1 )
          {
            v100 = (unsigned int)v56;
            v58 = gameObject;
            v59 = 0LL;
            v98 = v54;
            v99 = v44;
            while ( v59 < v46->max_length )
            {
              v60 = v46->m_Items[v59 + 1];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B3ED56 )
              {
                sub_1BDB878(&NetworkManager_TypeInfo, v43);
                byte_4B3ED56 = 1;
              }
              gameObject = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                gameObject = (__int64)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_128;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                   v60,
                                   0LL);
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              gameObject = OptionManager__GetSpoilerSetting(0LL);
              if ( (gameObject & 1) != 0 )
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
                gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                if ( (gameObject & 1) != 0 )
                {
                  maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                  gameObject = UserServantCollectionEntity__IsGrandServant(EntityDefinitely, 0LL);
                  IsGrandSvt = gameObject;
                }
                else
                {
                  IsGrandSvt = 0;
                  maxLimitCount = 0;
                }
              }
              if ( !v58 )
                goto LABEL_128;
              v63 = *(_DWORD *)(v58 + 24);
              limitCount = EntityDefinitely->fields.maxLimitCount;
              if ( v63 >= 1 )
              {
                v64 = 0;
                while ( 1 )
                {
                  if ( v64 >= v63 )
                    goto LABEL_129;
                  v65 = *(FollowerInfo_o **)(v58 + 8LL * (int)v64 + 32);
                  gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                  if ( !v65 )
                    goto LABEL_128;
                  gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v65, 0, gameObject, 0LL);
                  if ( gameObject )
                  {
                    v66 = (ServantLeaderInfo_o *)gameObject;
                    v67 = *(_QWORD *)(gameObject + 48);
                    v68 = *(_QWORD *)(gameObject + 56);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v106.fields.currentCryptoKey = v67;
                    *(_QWORD *)&v106.fields.fakeValue = v68;
                    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v106, 0LL);
                    questRestrictionInfo = v104;
                    if ( (_DWORD)gameObject == v60 )
                      break;
                  }
                  v63 = *(_DWORD *)(v58 + 24);
                  if ( (int)++v64 >= v63 )
                    goto LABEL_63;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v104->fields.questId, 0LL);
                limitCount = FollowerInfo__getLimitCount(v65, 0, ReturnTypeByQuestId, 0LL);
                IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(v66, 0LL);
LABEL_63:
                v54 = v98;
                v44 = v99;
              }
              v70 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33387792(
                v70,
                v59,
                v60,
                limitCount,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                IsGrandSvt,
                0LL);
              if ( !v70 )
                goto LABEL_128;
              v70->fields.nameLimitCount = maxLimitCount;
              if ( v59 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                if ( !v44 )
                  goto LABEL_128;
                System_Text_StringBuilder__Append_62657444(v44, (System_String_o *)gameObject, 0LL);
                System_Text_StringBuilder__Append_62657444(v44, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
              if ( !v44 )
                goto LABEL_128;
              System_Text_StringBuilder__Append_62657444(v44, (System_String_o *)gameObject, 0LL);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v70, 0LL);
              System_Text_StringBuilder__Append_62657444(v44, SvtNameText, 0LL);
              v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
              gameObject = (__int64)System_Text_StringBuilder__Append_62657444(v44, v72, 0LL);
              if ( !v54 )
                goto LABEL_128;
              items = v54->fields._items;
              v76 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v54->fields._version;
              if ( !items )
                goto LABEL_128;
              size = v54->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v54,
                  (Il2CppObject *)v70,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
              }
              else
              {
                v78 = &items->obj.klass + size;
                v54->fields._size = size + 1;
                v78[4] = (Il2CppClass *)v70;
                sub_1BDB81C((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v70, v73, v74);
              }
              if ( ++v59 == v100 )
                goto LABEL_79;
            }
LABEL_129:
            sub_1BDBADC(gameObject, v43, v50);
          }
        }
LABEL_79:
        supportMemberBase = v97->fields.supportMemberBase;
        memberObjectList = v97->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v54,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v55);
        if ( v95 <= 1 )
        {
          gameObject = (__int64)v97->fields.decideButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v97->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v97->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_128;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)v97->fields.closeButton;
          if ( !gameObject )
            goto LABEL_128;
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                         gameObject,
                         0LL,
                         1LL,
                         *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        }
        if ( !v44 )
          goto LABEL_128;
        gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                       v44,
                       v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v81 = (Il2CppObject *)gameObject;
        if ( v95 )
        {
          if ( v95 != 1 )
          {
LABEL_126:
            v97->fields.state = 1;
            v94 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(v94, (Il2CppObject *)v97, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)v97, v94, 0, 0LL);
            return;
          }
          titleLabel = v97->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
                messageLabel = v97->fields.messageLabel,
                v84 = LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL),
                gameObject = (__int64)System_String__Format(v84, v81, 0LL),
                !messageLabel) )
          {
LABEL_128:
            sub_1BDBAD4(gameObject, v43);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          closeLabel = v97->fields.closeLabel;
          v86 = &StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_124:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v86, 0LL);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
            goto LABEL_126;
          }
          goto LABEL_128;
        }
        if ( !v104 )
          goto LABEL_128;
        isFixedMyServantPosition = v104->fields.isFixedMyServantPosition;
        v88 = v97->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( v104->fields.isFixedMyServantPosition )
          {
LABEL_101:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
            if ( !v88 )
              goto LABEL_128;
            UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
            v89 = v97->fields.messageLabel;
            if ( v96 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
              gameObject = (__int64)System_String__Format(v90, v81, 0LL);
              if ( !v89 )
                goto LABEL_128;
            }
            else
            {
              gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(v104, 0LL);
              if ( !v89 )
                goto LABEL_128;
            }
            UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
            closeLabel = v97->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v86 = &StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_124;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_101;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v88 )
          goto LABEL_128;
        UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
        v92 = v97->fields.messageLabel;
        if ( v96 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v93, v81, 0LL);
          if ( !v92 )
            goto LABEL_128;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(v104, 0LL);
          if ( !v92 )
            goto LABEL_128;
        }
        UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
        closeLabel = v97->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v86 = &StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_124;
      }
      if ( !questRestrictionInfo )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0LL);
    }
    else
    {
      if ( !questRestrictionInfo )
        goto LABEL_128;
      FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
    }
    v46 = FixedMyServantSingleSvtIdList;
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

  if ( (byte_4B4056D & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4B4056D = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BDBD94(v8);
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

  if ( (byte_4B4056E & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4B4056E = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BDBD94(v8);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1F6A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1F65C;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B40578 & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, result);
    byte_4B40578 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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