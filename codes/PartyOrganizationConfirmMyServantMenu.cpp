void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6287A & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_4B6287A = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62879 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B62879 = 1;
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
    sub_1BE4A70(p_callbackFunc);
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

  PartyOrganizationConfirmMyServantMenu__Close_32699508(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32699508(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B62875 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v5);
    byte_4B62875 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BE4A70(p_closeCallbackFunc);
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

  if ( (byte_4B62873 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B62873 = 1;
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
    sub_1BE4D28(titleLabel, method);
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

  if ( (byte_4B62877 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__, method);
    byte_4B62877 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B62878 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_4B62878 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B62876 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__, method);
    byte_4B62876 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  System_Text_StringBuilder_o *v44; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v46; // x23
  UnityEngine_GameObject_o *v47; // x0
  PartyOrganizationConfirmMyServantMenu_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x19
  __int64 v50; // x8
  unsigned __int64 v51; // x21
  int32_t v52; // w19
  UnityEngine_GameObject_o *v53; // x0
  System_Collections_Generic_List_object__o *v54; // x25
  const MethodInfo *v55; // x5
  __int64 v56; // x19
  Il2CppObject *MasterData_object; // x22
  __int64 v58; // x27
  unsigned __int64 v59; // x28
  int32_t v60; // w21
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int v62; // w25
  int v63; // w8
  int32_t maxLimitCount; // w23
  unsigned int v65; // w24
  FollowerInfo_o *v66; // x19
  __int64 v67; // x26
  __int64 v68; // x29
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v70; // x19
  const MethodInfo *v71; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v73; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v80; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v83; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v85; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v87; // x19
  UILabel_o *v88; // x19
  System_String_o *v89; // x0
  UILabel_o *v90; // x19
  System_String_o *v91; // x0
  System_Action_o *v92; // x19
  const MethodInfo *v93; // [xsp+0h] [xbp-B0h]
  unsigned int v94; // [xsp+10h] [xbp-A0h]
  int v95; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v96; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v97; // [xsp+20h] [xbp-90h]
  __int64 v98; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_object__o *v99; // [xsp+30h] [xbp-80h]
  System_Int32_array *v101; // [xsp+40h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4B62874 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v17);
    sub_1BE4ACC(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v18);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v19);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v20);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BE4ACC(&OptionManager_TypeInfo, v22);
    sub_1BE4ACC(&PartyOrganizationConfirmItemDraw_TypeInfo, v23);
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v24);
    sub_1BE4ACC(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v25);
    sub_1BE4ACC(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1BE4ACC(&StringLiteral_43/*"\n"*/, v29);
    sub_1BE4ACC(&StringLiteral_10375/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v30);
    sub_1BE4ACC(&StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v31);
    sub_1BE4ACC(&StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v32);
    sub_1BE4ACC(&StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v33);
    sub_1BE4ACC(&StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v34);
    sub_1BE4ACC(&StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v35);
    sub_1BE4ACC(&StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v36);
    sub_1BE4ACC(&StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v37);
    sub_1BE4ACC(&StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v38);
    sub_1BE4ACC(&StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v39);
    sub_1BE4ACC(&StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v40);
    sub_1BE4ACC(&StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v41);
    byte_4B62874 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BE4A70(&this->fields.callbackFunc);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v44 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v44, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v46 = 0LL;
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
    v46 = FixedMyServantSingleSvtIdList;
LABEL_13:
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_129;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v48 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    v49 = v47;
    if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo);
      v48 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
    }
    v96 = this;
    GameObjectExtensions__SetLocalPositionY(v49, v48->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v97 = v44;
    v101 = v46;
    v94 = kind;
    if ( !v46 || (v50 = *(_QWORD *)&v46->max_length, (int)v50 < 1) )
    {
      v95 = 1;
      goto LABEL_29;
    }
    v51 = 0LL;
    do
    {
      if ( v51 >= (unsigned int)v50 )
        goto LABEL_130;
      v52 = v46->m_Items[v51 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_129;
      gameObject = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     &entity,
                     v52,
                     (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (gameObject & 1) == 0 )
      {
        gameObject = (__int64)this->fields.messageLabel;
        if ( gameObject )
        {
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v53, 0.0, 0LL);
          v95 = 0;
          goto LABEL_29;
        }
        goto LABEL_129;
      }
      ++v51;
      LODWORD(v50) = v46->max_length;
    }
    while ( (__int64)v51 < (int)v50 );
    v95 = 1;
LABEL_29:
    v54 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v46 && v95 )
    {
      v56 = *(_QWORD *)&v46->max_length;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( questRestrictionInfo )
          {
            if ( gameObject )
            {
              gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                      (NpcFollowerMaster_o *)gameObject,
                                      questRestrictionInfo->fields.questId,
                                      questRestrictionInfo->fields.questPhase,
                                      0LL);
              if ( (int)v56 >= 1 )
              {
                v98 = (unsigned int)v56;
                v58 = gameObject;
                v59 = 0LL;
                v99 = v54;
                while ( v59 < v46->max_length )
                {
                  v60 = v46->m_Items[v59 + 1];
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4B61717 )
                  {
                    sub_1BE4ACC(&NetworkManager_TypeInfo, v43);
                    byte_4B61717 = 1;
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
                                       v60,
                                       0LL);
                  if ( !OptionManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  gameObject = OptionManager__GetSpoilerSetting(0LL);
                  if ( (gameObject & 1) != 0 )
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_129;
                    v62 = -1;
                  }
                  else
                  {
                    if ( !EntityDefinitely )
                      goto LABEL_129;
                    gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                    v62 = (gameObject & 1) != 0 ? EntityDefinitely->fields.maxLimitCount : 0;
                  }
                  if ( !v58 )
                    goto LABEL_129;
                  v63 = *(_DWORD *)(v58 + 24);
                  maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                  if ( v63 >= 1 )
                  {
                    v65 = 0;
                    while ( 1 )
                    {
                      if ( v65 >= v63 )
                        goto LABEL_130;
                      v66 = *(FollowerInfo_o **)(v58 + 8LL * (int)v65 + 32);
                      gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                      if ( !v66 )
                        goto LABEL_129;
                      gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v66, 0, gameObject, 0LL);
                      if ( gameObject )
                      {
                        v67 = *(_QWORD *)(gameObject + 48);
                        v68 = *(_QWORD *)(gameObject + 56);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v103.fields.currentCryptoKey = v67;
                        *(_QWORD *)&v103.fields.fakeValue = v68;
                        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v103, 0LL);
                        if ( (_DWORD)gameObject == v60 )
                          break;
                      }
                      v63 = *(_DWORD *)(v58 + 24);
                      if ( (int)++v65 >= v63 )
                        goto LABEL_66;
                    }
                    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                            questRestrictionInfo->fields.questId,
                                            0LL);
                    maxLimitCount = FollowerInfo__getLimitCount(v66, 0, ReturnTypeByQuestId, 0LL);
LABEL_66:
                    v44 = v97;
                  }
                  v70 = (PartyOrganizationListViewItem_o *)sub_1BE4D18(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_32698872(
                    v70,
                    v59,
                    v60,
                    maxLimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v93);
                  if ( !v70 )
                    goto LABEL_129;
                  v70->fields.nameLimitCount = v62;
                  v46 = v101;
                  v54 = v99;
                  if ( v59 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                    if ( !v44 )
                      goto LABEL_129;
                    System_Text_StringBuilder__Append_61859960(v44, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_61859960(v44, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
                  if ( !v44 )
                    goto LABEL_129;
                  System_Text_StringBuilder__Append_61859960(v44, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v70, v71);
                  System_Text_StringBuilder__Append_61859960(v44, SvtNameText, 0LL);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (__int64)System_Text_StringBuilder__Append_61859960(v44, v73, 0LL);
                  if ( !v99 )
                    goto LABEL_129;
                  items = v99->fields._items;
                  v75 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v99->fields._version;
                  if ( !items )
                    goto LABEL_129;
                  size = v99->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v99,
                      (Il2CppObject *)v70,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v77 = &items->obj.klass + size;
                    v99->fields._size = size + 1;
                    v77[4] = (Il2CppClass *)v70;
                    gameObject = sub_1BE4A70(v77 + 4);
                  }
                  if ( ++v59 == v98 )
                    goto LABEL_82;
                }
LABEL_130:
                sub_1BE4D30(gameObject, v43);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_129:
      sub_1BE4D28(gameObject, v43);
    }
LABEL_82:
    supportMemberBase = v96->fields.supportMemberBase;
    memberObjectList = v96->fields.memberObjectList;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v54,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v55);
    if ( v94 <= 1 )
    {
      gameObject = (__int64)v96->fields.decideButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v96->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v96->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)v96->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    gameObject = (__int64)v97;
    if ( !v97 )
      goto LABEL_129;
    gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                   v97,
                   v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v80 = (Il2CppObject *)gameObject;
    if ( v94 )
    {
      if ( v94 != 1 )
      {
LABEL_127:
        v96->fields.state = 1;
        v92 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v92, (Il2CppObject *)v96, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v96, v92, 0, 0LL);
        return;
      }
      titleLabel = v96->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_129;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v96->fields.messageLabel;
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v83, v80, 0LL);
      if ( !messageLabel )
        goto LABEL_129;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v96->fields.closeLabel;
      v85 = &StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_125:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v85, 0LL);
      if ( !closeLabel )
        goto LABEL_129;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
      goto LABEL_127;
    }
    if ( !questRestrictionInfo )
      goto LABEL_129;
    isFixedMyServantPosition = questRestrictionInfo->fields.isFixedMyServantPosition;
    v87 = v96->fields.titleLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
LABEL_104:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v87 )
          goto LABEL_129;
        UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
        v88 = v96->fields.messageLabel;
        if ( v95 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v89, v80, 0LL);
          if ( !v88 )
            goto LABEL_129;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
          if ( !v88 )
            goto LABEL_129;
        }
        UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
        closeLabel = v96->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = &StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_125;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isFixedMyServantPosition )
        goto LABEL_104;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
    if ( !v87 )
      goto LABEL_129;
    UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
    v90 = v96->fields.messageLabel;
    if ( v95 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v91, v80, 0LL);
      if ( !v90 )
        goto LABEL_129;
    }
    else
    {
      gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
      if ( !v90 )
        goto LABEL_129;
    }
    UILabel__set_text(v90, (System_String_o *)gameObject, 0LL);
    closeLabel = v96->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = &StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
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

  if ( (byte_4B62871 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4B62871 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BE4FE8(v8);
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

  if ( (byte_4B62872 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4B62872 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BE4FE8(v8);
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A21130;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A210E8;
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
  if ( (byte_4B6287B & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B6287B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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