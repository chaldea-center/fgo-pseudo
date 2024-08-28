void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A04B85 & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1);
    byte_4A04B85 = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A04B84 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A04B84 = 1;
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
    sub_1B68678(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationConfirmMyServantMenu__Close_31795576(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_31795576(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A04B80 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v6);
    byte_4A04B80 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1B68678(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A04B7E & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04B7E = 1;
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
    sub_1B68930(titleLabel, method);
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

  if ( (byte_4A04B82 & 1) == 0 )
  {
    sub_1B686D4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__, method);
    byte_4A04B82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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

  if ( (byte_4A04B83 & 1) == 0 )
  {
    sub_1B686D4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method);
    byte_4A04B83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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

  if ( (byte_4A04B81 & 1) == 0 )
  {
    sub_1B686D4(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__, method);
    byte_4A04B81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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
  System_Int32_array *v46; // x29
  UnityEngine_GameObject_o *v47; // x0
  PartyOrganizationConfirmMyServantMenu_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x19
  __int64 v50; // x8
  unsigned __int64 v51; // x21
  int32_t v52; // w19
  System_Collections_Generic_List_object__o *v53; // x25
  const MethodInfo *v54; // x5
  __int64 v55; // x19
  Il2CppObject *MasterData_object; // x21
  __int64 v57; // x27
  unsigned __int64 v58; // x28
  int32_t v59; // w29
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  int v61; // w23
  int v62; // w8
  int32_t maxLimitCount; // w19
  unsigned int v64; // w24
  FollowerInfo_o *v65; // x21
  __int64 v66; // x22
  __int64 v67; // x26
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v69; // x21
  const MethodInfo *v70; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  Il2CppObject *v81; // x22
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
  const MethodInfo *v95; // [xsp+0h] [xbp-B0h]
  unsigned int v96; // [xsp+10h] [xbp-A0h]
  int v97; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v98; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v99; // [xsp+20h] [xbp-90h]
  __int64 v100; // [xsp+28h] [xbp-88h]
  Il2CppObject *v101; // [xsp+30h] [xbp-80h]
  System_Int32_array *v102; // [xsp+38h] [xbp-78h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4A04B7F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1B686D4(&DataManager_TypeInfo, v14);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v17);
    sub_1B686D4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v18);
    sub_1B686D4(&LocalizationManager_TypeInfo, v19);
    sub_1B686D4(&NetworkManager_TypeInfo, v20);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B686D4(&OptionManager_TypeInfo, v22);
    sub_1B686D4(&PartyOrganizationConfirmItemDraw_TypeInfo, v23);
    sub_1B686D4(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v24);
    sub_1B686D4(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v25);
    sub_1B686D4(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v29);
    sub_1B686D4(&StringLiteral_10173/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v30);
    sub_1B686D4(&StringLiteral_10121/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v31);
    sub_1B686D4(&StringLiteral_10178/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v32);
    sub_1B686D4(&StringLiteral_10171/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v33);
    sub_1B686D4(&StringLiteral_10174/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v34);
    sub_1B686D4(&StringLiteral_10177/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v35);
    sub_1B686D4(&StringLiteral_10175/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v36);
    sub_1B686D4(&StringLiteral_10179/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v37);
    sub_1B686D4(&StringLiteral_10172/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v38);
    sub_1B686D4(&StringLiteral_10122/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v39);
    sub_1B686D4(&StringLiteral_10123/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v40);
    sub_1B686D4(&StringLiteral_10176/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v41);
    byte_4A04B7F = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (int32_t)setupInfo);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v44 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v44, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v46 = 0LL;
LABEL_13:
        gameObject = (__int64)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_124;
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
        v96 = kind;
        if ( v46 && (v50 = *(_QWORD *)&v46->max_length, (int)v50 >= 1) )
        {
          v51 = 0LL;
          while ( 1 )
          {
            if ( v51 >= (unsigned int)v50 )
              goto LABEL_125;
            v52 = v46->m_Items[v51 + 1];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_124;
            gameObject = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           &entity,
                           v52,
                           (const MethodInfo_30E4514 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (gameObject & 1) == 0 )
              break;
            LODWORD(v50) = v46->max_length;
            if ( (__int64)++v51 >= (int)v50 )
              goto LABEL_25;
          }
          gameObject = (__int64)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_124;
          v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v91, 0.0, 0LL);
          v97 = 0;
        }
        else
        {
LABEL_25:
          v97 = 1;
        }
        v53 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v53,
          (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v46 && v97 )
        {
          v55 = *(_QWORD *)&v46->max_length;
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_124;
          gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                  (NpcFollowerMaster_o *)gameObject,
                                  questRestrictionInfo->fields.questId,
                                  questRestrictionInfo->fields.questPhase,
                                  0LL);
          if ( (int)v55 >= 1 )
          {
            v57 = gameObject;
            v58 = 0LL;
            v100 = (unsigned int)v55;
            v101 = MasterData_object;
            v102 = v46;
            while ( v58 < v46->max_length )
            {
              v59 = v46->m_Items[v58 + 1];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              gameObject = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_124;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   gameObject,
                                   v59,
                                   0LL);
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              gameObject = OptionManager__GetSpoilerSetting(0LL);
              if ( (gameObject & 1) != 0 )
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                v61 = -1;
              }
              else
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                v61 = (gameObject & 1) != 0 ? EntityDefinitely->fields.maxLimitCount : 0;
              }
              if ( !v57 )
                goto LABEL_124;
              v62 = *(_DWORD *)(v57 + 24);
              maxLimitCount = EntityDefinitely->fields.maxLimitCount;
              if ( v62 >= 1 )
              {
                v64 = 0;
                while ( 1 )
                {
                  if ( v64 >= v62 )
                    goto LABEL_125;
                  v65 = *(FollowerInfo_o **)(v57 + 8LL * (int)v64 + 32);
                  gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                  if ( !v65 )
                    goto LABEL_124;
                  gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v65, 0, gameObject, 0LL);
                  if ( gameObject )
                  {
                    v67 = *(_QWORD *)(gameObject + 48);
                    v66 = *(_QWORD *)(gameObject + 56);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v105.fields.currentCryptoKey = v67;
                    *(_QWORD *)&v105.fields.fakeValue = v66;
                    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v105, 0LL);
                    if ( (_DWORD)gameObject == v59 )
                      break;
                  }
                  v62 = *(_DWORD *)(v57 + 24);
                  if ( (int)++v64 >= v62 )
                    goto LABEL_59;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                maxLimitCount = FollowerInfo__getLimitCount(v65, 0, ReturnTypeByQuestId, 0LL);
LABEL_59:
                v44 = v99;
              }
              v69 = (PartyOrganizationListViewItem_o *)sub_1B68920(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_31794940(
                v69,
                v58,
                v59,
                maxLimitCount,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v95);
              if ( !v69 )
                goto LABEL_124;
              v46 = v102;
              v69->fields.nameLimitCount = v61;
              if ( v58 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10122/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                if ( !v44 )
                  goto LABEL_124;
                System_Text_StringBuilder__Append_60581364(v44, (System_String_o *)gameObject, 0LL);
                System_Text_StringBuilder__Append_60581364(v44, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10123/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
              if ( !v44 )
                goto LABEL_124;
              System_Text_StringBuilder__Append_60581364(v44, (System_String_o *)gameObject, 0LL);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v69, v70);
              System_Text_StringBuilder__Append_60581364(v44, SvtNameText, 0LL);
              v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10121/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
              gameObject = (__int64)System_Text_StringBuilder__Append_60581364(v44, v72, 0LL);
              if ( !v53 )
                goto LABEL_124;
              items = v53->fields._items;
              v76 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v53->fields._version;
              if ( !items )
                goto LABEL_124;
              size = v53->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v53,
                  (Il2CppObject *)v69,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
              }
              else
              {
                v78 = &items->obj.klass + size;
                v53->fields._size = size + 1;
                v78[4] = (Il2CppClass *)v69;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v69, v73, v74);
              }
              MasterData_object = v101;
              if ( ++v58 == v100 )
                goto LABEL_75;
            }
LABEL_125:
            sub_1B68938(gameObject, v43);
          }
        }
LABEL_75:
        supportMemberBase = v98->fields.supportMemberBase;
        memberObjectList = v98->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v53,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v54);
        if ( v96 <= 1 )
        {
          gameObject = (__int64)v98->fields.decideButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v98->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v98->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)v98->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        }
        gameObject = (__int64)v99;
        if ( !v99 )
          goto LABEL_124;
        gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v99->klass->vtable._3_ToString.method)(
                       v99,
                       v99->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v81 = (Il2CppObject *)gameObject;
        if ( v96 )
        {
          if ( v96 != 1 )
          {
LABEL_122:
            v98->fields.state = 1;
            v94 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(v94, (Il2CppObject *)v98, Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)v98, v94, 0, 0LL);
            return;
          }
          titleLabel = v98->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10176/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
                messageLabel = v98->fields.messageLabel,
                v84 = LocalizationManager__Get((System_String_o *)StringLiteral_10175/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL),
                gameObject = (__int64)System_String__Format(v84, v81, 0LL),
                !messageLabel) )
          {
LABEL_124:
            sub_1B68930(gameObject, v43);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          closeLabel = v98->fields.closeLabel;
          v86 = &StringLiteral_10174/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_120:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v86, 0LL);
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
        v88 = v98->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( questRestrictionInfo->fields.isFixedMyServantPosition )
          {
LABEL_97:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10173/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
            if ( !v88 )
              goto LABEL_124;
            UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
            v89 = v98->fields.messageLabel;
            if ( v97 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10172/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
              gameObject = (__int64)System_String__Format(v90, v81, 0LL);
              if ( !v89 )
                goto LABEL_124;
            }
            else
            {
              gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
              if ( !v89 )
                goto LABEL_124;
            }
            UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
            closeLabel = v98->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v86 = &StringLiteral_10171/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_120;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isFixedMyServantPosition )
            goto LABEL_97;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10179/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v88 )
          goto LABEL_124;
        UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
        v92 = v98->fields.messageLabel;
        if ( v97 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10178/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v93, v81, 0LL);
          if ( !v92 )
            goto LABEL_124;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
          if ( !v92 )
            goto LABEL_124;
        }
        UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
        closeLabel = v98->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v86 = &StringLiteral_10177/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
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

  if ( (byte_4A04B7C & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4A04B7C = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B68BF0(v8);
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

  if ( (byte_4A04B7D & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value);
    byte_4A04B7D = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1B68BF0(v8);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AAE5C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AAE14;
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
  if ( (byte_4A04B86 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, result);
    byte_4A04B86 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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