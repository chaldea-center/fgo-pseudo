void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A49FC0 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_4A49FC0 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A49FBF & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A49FBF = 1;
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
    sub_1B8635C(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationConfirmMyServantMenu__Close_32552208(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32552208(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A49FBB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v6);
    byte_4A49FBB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B8635C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A49FB9 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A49FB9 = 1;
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
    sub_1B86614(titleLabel, method);
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

  if ( (byte_4A49FBD & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__, method);
    byte_4A49FBD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A49FBE & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_4A49FBE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A49FBC & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__, method);
    byte_4A49FBC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v82; // x21
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v85; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v87; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v89; // x19
  UILabel_o *v90; // x19
  System_String_o *v91; // x0
  UILabel_o *v92; // x19
  System_String_o *v93; // x0
  System_Action_o *v94; // x19
  const MethodInfo *v95; // [xsp+0h] [xbp-B0h]
  unsigned int v96; // [xsp+10h] [xbp-A0h]
  int v97; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v98; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v99; // [xsp+20h] [xbp-90h]
  __int64 v100; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_object__o *v101; // [xsp+30h] [xbp-80h]
  System_Int32_array *v103; // [xsp+40h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4A49FBA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1B863B8(&DataManager_TypeInfo, v14);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v17);
    sub_1B863B8(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&NetworkManager_TypeInfo, v20);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B863B8(&OptionManager_TypeInfo, v22);
    sub_1B863B8(&PartyOrganizationConfirmItemDraw_TypeInfo, v23);
    sub_1B863B8(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v24);
    sub_1B863B8(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v25);
    sub_1B863B8(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v29);
    sub_1B863B8(&StringLiteral_10043/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v30);
    sub_1B863B8(&StringLiteral_9991/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v31);
    sub_1B863B8(&StringLiteral_10048/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v32);
    sub_1B863B8(&StringLiteral_10041/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v33);
    sub_1B863B8(&StringLiteral_10044/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v34);
    sub_1B863B8(&StringLiteral_10047/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v35);
    sub_1B863B8(&StringLiteral_10045/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v36);
    sub_1B863B8(&StringLiteral_10049/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v37);
    sub_1B863B8(&StringLiteral_10042/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v38);
    sub_1B863B8(&StringLiteral_9992/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v39);
    sub_1B863B8(&StringLiteral_9993/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v40);
    sub_1B863B8(&StringLiteral_10046/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v41);
    byte_4A49FBA = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)setupInfo);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v44 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
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
    v98 = this;
    GameObjectExtensions__SetLocalPositionY(v49, v48->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
    v99 = v44;
    v103 = v46;
    v96 = kind;
    if ( !v46 || (v50 = *(_QWORD *)&v46->max_length, (int)v50 < 1) )
    {
      v97 = 1;
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
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !gameObject )
        goto LABEL_129;
      gameObject = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     &entity,
                     v52,
                     (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (gameObject & 1) == 0 )
      {
        gameObject = (__int64)this->fields.messageLabel;
        if ( gameObject )
        {
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v53, 0.0, 0LL);
          v97 = 0;
          goto LABEL_29;
        }
        goto LABEL_129;
      }
      ++v51;
      LODWORD(v50) = v46->max_length;
    }
    while ( (__int64)v51 < (int)v50 );
    v97 = 1;
LABEL_29:
    v54 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v46 && v97 )
    {
      v56 = *(_QWORD *)&v46->max_length;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( gameObject )
        {
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                v100 = (unsigned int)v56;
                v58 = gameObject;
                v59 = 0LL;
                v101 = v54;
                while ( v59 < v46->max_length )
                {
                  v60 = v46->m_Items[v59 + 1];
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4A48C25 )
                  {
                    sub_1B863B8(&NetworkManager_TypeInfo, v43);
                    byte_4A48C25 = 1;
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
                        *(_QWORD *)&v105.fields.currentCryptoKey = v67;
                        *(_QWORD *)&v105.fields.fakeValue = v68;
                        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v105, 0LL);
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
                    v44 = v99;
                  }
                  v70 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                  PartyOrganizationListViewItem___ctor_32551548(
                    v70,
                    v59,
                    v60,
                    maxLimitCount,
                    setupInfo,
                    questRestrictionInfo,
                    0LL,
                    0,
                    v95);
                  if ( !v70 )
                    goto LABEL_129;
                  v70->fields.nameLimitCount = v62;
                  v46 = v103;
                  v54 = v101;
                  if ( v59 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9992/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                    if ( !v44 )
                      goto LABEL_129;
                    System_Text_StringBuilder__Append_61730360(v44, (System_String_o *)gameObject, 0LL);
                    System_Text_StringBuilder__Append_61730360(v44, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9993/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
                  if ( !v44 )
                    goto LABEL_129;
                  System_Text_StringBuilder__Append_61730360(v44, (System_String_o *)gameObject, 0LL);
                  SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v70, v71);
                  System_Text_StringBuilder__Append_61730360(v44, SvtNameText, 0LL);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9991/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
                  gameObject = (__int64)System_Text_StringBuilder__Append_61730360(v44, v73, 0LL);
                  if ( !v101 )
                    goto LABEL_129;
                  items = v101->fields._items;
                  v77 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v101->fields._version;
                  if ( !items )
                    goto LABEL_129;
                  size = v101->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v101,
                      (Il2CppObject *)v70,
                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v79 = &items->obj.klass + size;
                    v101->fields._size = size + 1;
                    v79[4] = (Il2CppClass *)v70;
                    sub_1B8635C((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v70, v74, v75);
                  }
                  if ( ++v59 == v100 )
                    goto LABEL_82;
                }
LABEL_130:
                sub_1B8661C(gameObject, v43);
              }
              goto LABEL_82;
            }
          }
        }
      }
LABEL_129:
      sub_1B86614(gameObject, v43);
    }
LABEL_82:
    supportMemberBase = v98->fields.supportMemberBase;
    memberObjectList = v98->fields.memberObjectList;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v54,
      memberObjectList,
      supportMemberBase,
      0,
      0,
      v55);
    if ( v96 <= 1 )
    {
      gameObject = (__int64)v98->fields.decideButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v98->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)v98->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)v98->fields.closeButton;
      if ( !gameObject )
        goto LABEL_129;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    }
    gameObject = (__int64)v99;
    if ( !v99 )
      goto LABEL_129;
    gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v99->klass->vtable._3_ToString.method)(
                   v99,
                   v99->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v82 = (Il2CppObject *)gameObject;
    if ( v96 )
    {
      if ( v96 != 1 )
      {
LABEL_127:
        v98->fields.state = 1;
        v94 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v94, (Il2CppObject *)v98, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)v98, v94, 0, 0LL);
        return;
      }
      titleLabel = v98->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10046/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_129;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = v98->fields.messageLabel;
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10045/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v85, v82, 0LL);
      if ( !messageLabel )
        goto LABEL_129;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = v98->fields.closeLabel;
      v87 = &StringLiteral_10044/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_125:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v87, 0LL);
      if ( !closeLabel )
        goto LABEL_129;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
      goto LABEL_127;
    }
    if ( !questRestrictionInfo )
      goto LABEL_129;
    isFixedMyServantPosition = questRestrictionInfo->fields.isFixedMyServantPosition;
    v89 = v98->fields.titleLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantPosition )
      {
LABEL_104:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10043/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v89 )
          goto LABEL_129;
        UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
        v90 = v98->fields.messageLabel;
        if ( v97 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_10042/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v91, v82, 0LL);
          if ( !v90 )
            goto LABEL_129;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
          if ( !v90 )
            goto LABEL_129;
        }
        UILabel__set_text(v90, (System_String_o *)gameObject, 0LL);
        closeLabel = v98->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v87 = &StringLiteral_10041/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
        goto LABEL_125;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isFixedMyServantPosition )
        goto LABEL_104;
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10049/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
    if ( !v89 )
      goto LABEL_129;
    UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
    v92 = v98->fields.messageLabel;
    if ( v97 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10048/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
      gameObject = (__int64)System_String__Format(v93, v82, 0LL);
      if ( !v92 )
        goto LABEL_129;
    }
    else
    {
      gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
      if ( !v92 )
        goto LABEL_129;
    }
    UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
    closeLabel = v98->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v87 = &StringLiteral_10047/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
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

  if ( (byte_4A49FB7 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4A49FB7 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B868D4(v8);
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

  if ( (byte_4A49FB8 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4A49FB8 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B868D4(v8);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CCB04;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CCABC;
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
  if ( (byte_4A49FC1 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A49FC1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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