void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0

  if ( (byte_4BD8351 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4BD8351 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C21EE0(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C21DDC(&this->fields.memberObjectList, v4);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v4; // x20
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

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


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_33222324(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_33222324(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD834F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4BD834F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
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


void __fastcall PartyOrganizationRestrictionHelpDialog__EndOpen(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Init(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BD834C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD834C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageDeckLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageSelfOrSupportLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.partyMemberBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.supportMemberBase) == 0LL) )
  {
LABEL_11:
    sub_1C22094(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__OnClickClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD8350 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4BD8350 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyListViewItem_o *partyItem,
        int32_t type,
        System_String_o *message,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callback,
        int32_t index,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v17; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *v19; // x21
  UILabel_o *messageDeckLabel; // x21
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  struct PartyOrganizationConfirmItemDraw_array *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x19
  __int64 v26; // x20
  System_Collections_Generic_List_object__o *v27; // x24
  unsigned int v28; // w8
  unsigned __int64 v29; // x26
  int32_t v30; // w28
  int v31; // w8
  int32_t LimitCount; // w23
  Il2CppObject *v33; // x20
  unsigned int v34; // w25
  FollowerInfo_o *v35; // x21
  __int64 v36; // x19
  __int64 v37; // x27
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v39; // x21
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v45; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v46; // x0
  UILabel_o *v47; // x21
  System_Collections_Generic_IEnumerable_T__o *v48; // x24
  System_Collections_Generic_List_int__o *v49; // x21
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v55; // x1
  UILabel_o *v56; // x20
  __int64 *v57; // x8
  UILabel_o *v58; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v61; // w21
  __int64 v62; // x23
  System_Collections_Generic_List_object__o *v63; // x22
  int32_t v64; // w24
  int v65; // w26
  FollowerInfo_o *v66; // x25
  PartyOrganizationListViewItem_o *v67; // x21
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  PartyOrganizationConfirmItemDraw_array *v72; // x1
  UnityEngine_GameObject_o *v73; // x2
  bool v74; // w4
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v76; // x0
  int32_t i; // w20
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  UILabel_o *messageSelfOrSupportLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v84; // x8
  __int64 v85; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v87; // x23
  System_Collections_Generic_List_object__o *v88; // x22
  unsigned int v89; // w8
  unsigned __int64 v90; // x25
  __int64 v91; // x26
  int32_t v92; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v94; // x28
  int32_t v95; // w0
  int32_t v96; // w29
  PartyOrganizationListViewItem_o *v97; // x21
  int32_t version; // w10
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  struct UnityEngine_GameObject_o *v103; // x20
  struct PartyOrganizationConfirmItemDraw_array *v104; // x21
  System_Action_o *v105; // x19
  __int64 v106; // [xsp+18h] [xbp-98h]
  __int64 v107; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v108; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v110; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4BD834D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_10508/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C21E38(&StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C21E38(&StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C21E38(&StringLiteral_10501/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C21E38(&StringLiteral_10507/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1C21E38(&StringLiteral_10504/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1C21E38(&StringLiteral_10500/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C21E38(&StringLiteral_10509/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C21E38(&StringLiteral_10505/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD834D = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C21DDC(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.closeButton;
      if ( gameObject )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        closeLabel = this->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
        if ( closeLabel )
        {
          UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (__int64)this->fields.messageDeckLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
              if ( gameObject )
              {
                UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                gameObject = (__int64)this->fields.partyMemberBase;
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                  gameObject = (__int64)this->fields.supportMemberBase;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v108 = this;
                    v110 = questRestrictionInfo;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = System_String__IsNullOrEmpty(message, 0LL);
                        if ( (gameObject & 1) == 0 )
                          goto LABEL_139;
                        if ( !questRestrictionInfo )
                          break;
                        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
                        if ( !restrictionEntityList )
                          break;
                        if ( restrictionEntityList->max_length <= index )
                          goto LABEL_206;
                        gameObject = (__int64)restrictionEntityList->m_Items[index];
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)RestrictionEntity__GetClassIndividualityRestrictionMessage(
                                                (RestrictionEntity_o *)gameObject,
                                                0LL);
                        if ( !this->fields.messageLabel )
                          break;
                        v55 = (System_String_o *)gameObject;
                        gameObject = (__int64)this->fields.messageLabel;
                        goto LABEL_141;
                      case 3:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10507/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_137;
                      case 6:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10509/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_137;
                      case 7:
                        v58 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10501/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v58 )
                          break;
                        UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !questRestrictionInfo )
                          break;
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)gameObject,
                                                questRestrictionInfo->fields.questId,
                                                questRestrictionInfo->fields.questPhase,
                                                0LL);
                        if ( !gameObject )
                          break;
                        supportMemberObjectList = this->fields.supportMemberObjectList;
                        if ( !supportMemberObjectList )
                          break;
                        max_length = supportMemberObjectList->max_length;
                        v61 = *(_DWORD *)(gameObject + 24);
                        v62 = gameObject;
                        v63 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v63,
                          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v61 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v64 = 0;
                            if ( max_length - 1 >= (unsigned int)(v61 - 1) )
                              v65 = v61;
                            else
                              v65 = max_length;
                            while ( (unsigned int)v64 < *(_DWORD *)(v62 + 24) )
                            {
                              v66 = *(FollowerInfo_o **)(v62 + 8LL * v64 + 32);
                              if ( !v66 )
                                goto LABEL_205;
                              if ( !v66->fields.isMySvtOrNpc )
                              {
                                v67 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_32985232(
                                  v67,
                                  v64,
                                  v66,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v63 )
                                  goto LABEL_205;
                                items = v63->fields._items;
                                v69 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v63->fields._version;
                                if ( !items )
                                  goto LABEL_205;
                                size = v63->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v63,
                                    (Il2CppObject *)v67,
                                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v71 = &items->obj.klass + size;
                                  v63->fields._size = size + 1;
                                  v71[4] = (Il2CppClass *)v67;
                                  gameObject = sub_1C21DDC(v71 + 4, v67);
                                }
                              }
                              if ( v65 == ++v64 )
                                goto LABEL_124;
                            }
                            goto LABEL_206;
                          }
                          goto LABEL_124;
                        }
                        for ( i = 0; ; ++i )
                        {
                          gameObject = (__int64)BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            gameObject = (__int64)BalanceConfig_TypeInfo;
                          }
                          if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
                            goto LABEL_124;
                          if ( !partyItem )
                            goto LABEL_205;
                          gameObject = (__int64)PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !gameObject )
                            goto LABEL_205;
                          v17 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v63 )
                        {
                          v78 = v63->fields._items;
                          v79 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v63->fields._version;
                          if ( v78 )
                          {
                            v80 = v63->fields._size;
                            if ( (unsigned int)v80 >= v78->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v63,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v81 = &v78->obj.klass + v80;
                              v63->fields._size = v80 + 1;
                              v81[4] = (Il2CppClass *)v17;
                              sub_1C21DDC(v81 + 4, v17);
                            }
LABEL_124:
                            supportMemberBase = this->fields.supportMemberBase;
                            v45 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                            v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v63;
LABEL_127:
                            v72 = v45;
                            v73 = supportMemberBase;
                            v74 = 0;
LABEL_201:
                            PartyOrganizationConfirmItemDraw__SetPartyIcon(v46, v72, v73, 1, v74, 0LL);
LABEL_202:
                            this->fields.state = 1;
                            v105 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                            System_Action___ctor(
                              v105,
                              (Il2CppObject *)this,
                              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v105, 0, 0LL);
                            return;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v19 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v19 )
                          break;
                        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        if ( !*(_DWORD *)(gameObject + 24) )
                          goto LABEL_206;
                        messageDeckLabel = this->fields.messageDeckLabel;
                        gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
                        if ( !messageDeckLabel )
                          break;
                        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v23 = this->fields.supportMemberObjectList;
                        if ( !v23 )
                          break;
                        v24 = *(_QWORD *)&v23->max_length;
                        v25 = *(_QWORD *)(gameObject + 24);
                        v26 = gameObject;
                        v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v27,
                          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v25 < 1 || (int)v24 < 1 )
                          goto LABEL_62;
                        if ( (int)v24 - 1 >= (unsigned int)(v25 - 1) )
                          v28 = v25;
                        else
                          v28 = v24;
                        v29 = 0LL;
                        v106 = v26;
                        v107 = v28;
                        do
                        {
                          if ( v29 >= *(unsigned int *)(v26 + 24) )
                            goto LABEL_206;
                          v30 = *(_DWORD *)(v26 + 4 * v29 + 32);
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
                            goto LABEL_205;
                          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                  (UserServantCollectionMaster_o *)MasterData_object,
                                                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                  v30,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_205;
                          v31 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v31 >= 1 )
                          {
                            v33 = MasterData_object;
                            v34 = 0;
                            while ( 1 )
                            {
                              if ( v34 >= v31 )
                                goto LABEL_206;
                              v35 = QuestFollowerList->m_Items[v34];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(
                                             questRestrictionInfo->fields.questId,
                                             0LL);
                              if ( !v35 )
                                goto LABEL_205;
                              gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v35, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v37 = *(_QWORD *)(gameObject + 48);
                                v36 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                *(_QWORD *)&v113.fields.currentCryptoKey = v37;
                                *(_QWORD *)&v113.fields.fakeValue = v36;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                               v113,
                                               0LL);
                                questRestrictionInfo = v110;
                                if ( (_DWORD)gameObject == v30 )
                                  break;
                              }
                              v31 = QuestFollowerList->max_length;
                              if ( (int)++v34 >= v31 )
                                goto LABEL_55;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v110->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v35, 0, ReturnTypeByQuestId, 0LL);
LABEL_55:
                            MasterData_object = v33;
                            v26 = v106;
                          }
                          v39 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_32981460(
                            v39,
                            v29,
                            v30,
                            LimitCount,
                            setupInfo,
                            questRestrictionInfo,
                            0LL,
                            0,
                            0LL);
                          if ( !v27 )
                            goto LABEL_205;
                          v40 = v27->fields._items;
                          this = v108;
                          v41 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v27->fields._version;
                          if ( !v40 )
                            goto LABEL_205;
                          v42 = v27->fields._size;
                          if ( (unsigned int)v42 >= v40->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v27,
                              (Il2CppObject *)v39,
                              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v43 = &v40->obj.klass + v42;
                            v27->fields._size = v42 + 1;
                            v43[4] = (Il2CppClass *)v39;
                            gameObject = sub_1C21DDC(v43 + 4, v39);
                          }
                          ++v29;
                        }
                        while ( v29 != v107 );
LABEL_62:
                        supportMemberBase = this->fields.supportMemberBase;
                        v45 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v27;
                        goto LABEL_127;
                      case 10:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10505/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_137;
                      case 11:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10504/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_137;
                      case 12:
                      case 16:
                        v47 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v47 )
                          break;
                        UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (__int64)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                                questRestrictionInfo,
                                                &npcInfoDictionary,
                                                index,
                                                0,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v48 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
                          if ( gameObject )
                          {
                            QuestPhaseMaster__TryGetEntity(
                              (QuestPhaseMaster_o *)gameObject,
                              &entity,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
                            if ( entity && type == 16 && !entity->fields.isNpcOnly )
                            {
                              v49 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_56826212(
                                v49,
                                v48,
                                (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
                              if ( !v49 )
                                break;
                              v50 = v49->fields._items;
                              v51 = Method_System_Collections_Generic_List_int__Add__;
                              ++v49->fields._version;
                              if ( !v50 )
                                break;
                              v52 = v49->fields._size;
                              if ( (unsigned int)v52 >= v50->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v49,
                                  0,
                                  *(const MethodInfo_3632090 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v49->fields._size = v52 + 1;
                                v50->m_Items[v52 + 1] = 0;
                              }
                              v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v49,
                                                                                     (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
                            }
                            if ( type == 16 )
                              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
                            else
                              messageSelfOrSupportLabel = this->fields.messageDeckLabel;
                            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                                 questRestrictionInfo,
                                                                 index,
                                                                 0LL);
                            gameObject = (__int64)System_String__Format(message, DialogTargetName, 0LL);
                            if ( messageSelfOrSupportLabel )
                            {
                              UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)gameObject, 0LL);
                              gameObject = (__int64)this->fields.supportMemberBase;
                              if ( gameObject )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v48 )
                                  {
                                    v84 = this->fields.supportMemberObjectList;
                                    if ( v84 )
                                    {
                                      v85 = *(_QWORD *)&v84->max_length;
                                      monitor = v48[1].monitor;
                                      v87 = (UserServantCollectionMaster_o *)gameObject;
                                      v88 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_object____ctor(
                                        v88,
                                        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v85 >= 1 )
                                      {
                                        if ( (int)v85 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                          v89 = (unsigned int)monitor;
                                        else
                                          v89 = v85;
                                        v90 = 0LL;
                                        v91 = v89;
                                        while ( v90 < LODWORD(v48[1].monitor) )
                                        {
                                          v92 = *((_DWORD *)&v48[2].klass + v90);
                                          if ( v92 )
                                          {
                                            gameObject = (__int64)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_205;
                                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                    v92,
                                                    (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_209;
                                            gameObject = (__int64)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_205;
                                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                     v92,
                                                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v94 = (FollowerInfo_o *)Item;
                                              v95 = FollowerInfo__GetReturnTypeByQuestId(v110->fields.questId, 0LL);
                                              v96 = FollowerInfo__getLimitCount(v94, 0, v95, 0LL);
                                            }
                                            else
                                            {
LABEL_209:
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
                                              if ( !v87 )
                                                goto LABEL_205;
                                              gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v87,
                                                                      *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                                      v92,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_205;
                                              v96 = *(_DWORD *)(gameObject + 56);
                                              v94 = 0LL;
                                            }
                                            v97 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_32981460(
                                              v97,
                                              v90,
                                              v92,
                                              v96,
                                              setupInfo,
                                              v110,
                                              v94,
                                              0,
                                              0LL);
                                            if ( !v88 )
                                              goto LABEL_205;
                                            version = v88->fields._version;
                                            v99 = v88->fields._items;
                                            this = v108;
                                          }
                                          else
                                          {
                                            v97 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_33022220(
                                              v97,
                                              v90,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v88 )
                                              goto LABEL_205;
                                            version = v88->fields._version;
                                            v99 = v88->fields._items;
                                          }
                                          v100 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          v88->fields._version = version + 1;
                                          if ( !v99 )
                                            goto LABEL_205;
                                          v101 = v88->fields._size;
                                          if ( (unsigned int)v101 >= v99->max_length )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v88,
                                              (Il2CppObject *)v97,
                                              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v102 = &v99->obj.klass + v101;
                                            v88->fields._size = v101 + 1;
                                            v102[4] = (Il2CppClass *)v97;
                                            gameObject = sub_1C21DDC(v102 + 4, v97);
                                          }
                                          if ( v91 == ++v90 )
                                            goto LABEL_198;
                                        }
LABEL_206:
                                        sub_1C2209C(gameObject, v17);
                                      }
LABEL_198:
                                      v103 = this->fields.supportMemberBase;
                                      v104 = this->fields.supportMemberObjectList;
                                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      v74 = 1;
                                      v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v88;
                                      v72 = v104;
                                      v73 = v103;
                                      goto LABEL_201;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          messageLabel = this->fields.messageLabel;
                          v76 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                  questRestrictionInfo,
                                                  index,
                                                  0LL);
                          gameObject = (__int64)System_String__Format(message, v76, 0LL);
                          if ( messageLabel )
                          {
                            v55 = (System_String_o *)gameObject;
                            gameObject = (__int64)messageLabel;
LABEL_141:
                            UILabel__set_text((UILabel_o *)gameObject, v55, 0LL);
                            goto LABEL_202;
                          }
                        }
                        break;
                      case 15:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10508/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_137;
                      default:
                        v56 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = &StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_137:
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v57, 0LL);
                        if ( !v56 )
                          break;
                        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
LABEL_139:
                        gameObject = (__int64)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v55 = message;
                        goto LABEL_141;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_205:
    sub_1C22094(gameObject, v17);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_33217576(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyListViewItem_o *partyItem,
        int32_t slotNo,
        int32_t restrictionType,
        System_String_o *message,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v17; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v19; // x23
  UILabel_o *v20; // x23
  Il2CppObject *v21; // x22
  struct PartyOrganizationConfirmItemDraw_array *v22; // x8
  __int64 v23; // x27
  __int64 v24; // x19
  __int64 v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  unsigned int v27; // w8
  unsigned __int64 v28; // x25
  __int64 v29; // x19
  int32_t v30; // w27
  int32_t v31; // w29
  PartyOrganizationListViewItem_o *v32; // x28
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  PartyOrganizationConfirmItemDraw_array *v38; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v39; // x0
  bool IsMyServantOrNpcRestriction_41736952; // w0
  UILabel_o *titleLabel; // x25
  bool v42; // w24
  System_Collections_Generic_IEnumerable_T__o *v43; // x26
  bool IsSelectableNormalSupport; // w25
  _BOOL4 v45; // w19
  _BOOL4 v46; // w20
  System_Collections_Generic_List_int__o *v47; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  int v51; // w19
  UILabel_o *v52; // x20
  __int64 *v53; // x8
  UILabel_o *v54; // x23
  struct PartyOrganizationConfirmItemDraw_array *v55; // x8
  PartyOrganizationRestrictionHelpDialog_o *v56; // x27
  int max_length; // w21
  int v58; // w20
  __int64 v59; // x23
  System_Collections_Generic_List_object__o *v60; // x22
  int32_t v61; // w24
  FollowerInfo_o *v62; // x26
  PartyOrganizationListViewItem_o *v63; // x25
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  UnityEngine_GameObject_o *v68; // x20
  PartyOrganizationConfirmItemDraw_array *v69; // x21
  System_Action_o *v70; // x20
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v73; // x23
  int32_t v74; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  __int64 v78; // x23
  struct PartyOrganizationConfirmItemDraw_array *v79; // x8
  __int64 v80; // x19
  System_Collections_Generic_List_object__o *v81; // x22
  __int64 v82; // x8
  unsigned __int64 v83; // x24
  int32_t v84; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v86; // w28
  PartyOrganizationListViewItem_o *v87; // x27
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  int32_t i; // w20
  PartyOrganizationRestrictionHelpDialog_o *v93; // x19
  UILabel_o *messageLabel; // x21
  Il2CppObject *v95; // x0
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  System_String_o *v100; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v104; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v106; // x22
  unsigned int v107; // w8
  unsigned __int64 v108; // x25
  System_Collections_Generic_IEnumerable_T__o *v109; // x23
  __int64 v110; // x24
  System_Collections_Generic_IEnumerable_T__o *v111; // x19
  int32_t v112; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v114; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  PartyOrganizationListViewItem_o *v117; // x28
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  PartyOrganizationListViewItem_o *v122; // x27
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  PartyOrganizationRestrictionHelpDialog_o *v127; // x9
  PartyOrganizationConfirmItemDraw_array *v128; // x21
  UnityEngine_GameObject_o *supportMemberBase; // x20
  PartyOrganizationRestrictionHelpDialog_o *v130; // [xsp+18h] [xbp-88h]
  UserServantCollectionMaster_o *v131; // [xsp+18h] [xbp-88h]
  QuestRestrictionInfo_o *v132; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BD834E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C21E38(&StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C21E38(&StringLiteral_10501/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C21E38(&StringLiteral_10500/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C21E38(&StringLiteral_10509/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C21E38(&StringLiteral_10505/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD834E = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C21DDC(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_213;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_213;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v132 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_41736952 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v42 = IsMyServantOrNpcRestriction_41736952;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v42 )
        {
          gameObject = (__int64)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v43 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0LL);
              if ( !IsSelectableNormalSupport )
                goto LABEL_169;
              if ( !entity )
                goto LABEL_167;
              v45 = entity != 0LL;
              v46 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_167;
              v47 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_56826212(
                v47,
                v43,
                (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
              if ( !v47 )
                goto LABEL_213;
              items = v47->fields._items;
              v49 = Method_System_Collections_Generic_List_int__Add__;
              ++v47->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v47->fields._size;
              v51 = v46 && v45;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v47,
                  0,
                  *(const MethodInfo_3632090 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v47->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v47,
                                                                     (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v51 )
              {
LABEL_167:
                gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v100 = message;
              }
              else
              {
LABEL_169:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0LL);
                gameObject = (__int64)System_String__Format(message, DialogTargetName, 0LL);
                if ( !messageDeckLabel )
                  goto LABEL_213;
                v100 = (System_String_o *)gameObject;
                gameObject = (__int64)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v100, 0LL);
              gameObject = (__int64)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v43 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v131 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v104 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v43[1].monitor;
                      v106 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v106,
                        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v104 >= 1 )
                      {
                        if ( (int)v104 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v107 = (unsigned int)monitor;
                        else
                          v107 = v104;
                        v108 = 0LL;
                        v109 = v43 + 2;
                        v110 = v107;
                        v111 = v43;
                        while ( v108 < LODWORD(v43[1].monitor) )
                        {
                          v112 = *((_DWORD *)&v109->klass + v108);
                          if ( v112 )
                          {
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v112,
                                    (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v112,
                                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v114 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v132->fields.questId, 0LL);
                              LimitCount = FollowerInfo__getLimitCount(v114, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_217:
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
                              if ( !v131 )
                                goto LABEL_213;
                              gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v131,
                                                      *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                      v112,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v114 = 0LL;
                            }
                            v117 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_32981460(
                              v117,
                              v108,
                              v112,
                              LimitCount,
                              setupInfo,
                              v132,
                              v114,
                              0,
                              0LL);
                            if ( !v106 )
                              goto LABEL_213;
                            v118 = v106->fields._items;
                            v119 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v106->fields._version;
                            if ( !v118 )
                              goto LABEL_213;
                            v120 = v106->fields._size;
                            v43 = v111;
                            if ( (unsigned int)v120 >= v118->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v106,
                                (Il2CppObject *)v117,
                                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v121 = &v118->obj.klass + v120;
                              v106->fields._size = v120 + 1;
                              v121[4] = (Il2CppClass *)v117;
                              gameObject = sub_1C21DDC(v121 + 4, v117);
                            }
                          }
                          else
                          {
                            v122 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_33022220(v122, v108, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v106 )
                              goto LABEL_213;
                            v123 = v106->fields._items;
                            v124 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v106->fields._version;
                            if ( !v123 )
                              goto LABEL_213;
                            v125 = v106->fields._size;
                            if ( (unsigned int)v125 >= v123->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v106,
                                (Il2CppObject *)v122,
                                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v126 = &v123->obj.klass + v125;
                              v106->fields._size = v125 + 1;
                              v126[4] = (Il2CppClass *)v122;
                              gameObject = sub_1C21DDC(v126 + 4, v122);
                            }
                          }
                          if ( v110 == ++v108 )
                            goto LABEL_209;
                        }
                        goto LABEL_214;
                      }
LABEL_209:
                      v127 = this;
                      v128 = this->fields.supportMemberObjectList;
                      supportMemberBase = v127->fields.supportMemberBase;
                      v93 = v127;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      PartyOrganizationConfirmItemDraw__SetPartyIcon(
                        (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v106,
                        v128,
                        supportMemberBase,
                        1,
                        1,
                        0LL);
                      goto LABEL_212;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v93 = this;
            messageLabel = this->fields.messageLabel;
            v95 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (__int64)System_String__Format(message, v95, 0LL);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
LABEL_212:
              this = v93;
              goto LABEL_108;
            }
          }
LABEL_213:
          sub_1C22094(gameObject, v17);
        }
        v130 = this;
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v73 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v73,
          (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v74 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v74 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v74,
                             (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v74,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v73 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v73,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v74 >= NeedIndividualityList->fields._size )
              goto LABEL_119;
          }
          goto LABEL_213;
        }
LABEL_119:
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v76 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
        v77 = System_Linq_Enumerable__Intersect_int_(
                v76,
                CollectionList,
                (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (__int64)System_Linq_Enumerable__ToArray_int_(
                                v77,
                                (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v78 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_106:
          gameObject = (__int64)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_108:
            this->fields.state = 1;
            v70 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v70,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
            return;
          }
          goto LABEL_213;
        }
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v79 = this->fields.supportMemberObjectList;
        if ( !v79 )
          goto LABEL_213;
        v80 = *(_QWORD *)&v79->max_length;
        v81 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v81,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v80 < 1 || (v82 = *(_QWORD *)(v78 + 24), (int)v82 < 1) )
        {
LABEL_146:
          v37 = this->fields.supportMemberBase;
          v38 = this->fields.supportMemberObjectList;
          if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
          v39 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v81;
LABEL_50:
          PartyOrganizationConfirmItemDraw__SetPartyIcon(v39, v38, v37, 1, 0, 0LL);
          this = v130;
          goto LABEL_108;
        }
        v83 = 0LL;
        while ( v83 < (unsigned int)v82 )
        {
          v84 = *(_DWORD *)(v78 + 32 + 4 * v83);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_213;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
            goto LABEL_213;
          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                  v84,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v86 = *(_DWORD *)(gameObject + 56);
          v87 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32981460(v87, v83, v84, v86, setupInfo, v132, 0LL, 0, 0LL);
          if ( !v81 )
            goto LABEL_213;
          v88 = v81->fields._items;
          v89 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v81->fields._version;
          if ( !v88 )
            goto LABEL_213;
          v90 = v81->fields._size;
          if ( (unsigned int)v90 >= v88->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v81,
              (Il2CppObject *)v87,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            v91 = &v88->obj.klass + v90;
            v81->fields._size = v90 + 1;
            v91[4] = (Il2CppClass *)v87;
            gameObject = sub_1C21DDC(v91 + 4, v87);
          }
          if ( (__int64)++v83 < (int)v80 )
          {
            LODWORD(v82) = *(_DWORD *)(v78 + 24);
            if ( (__int64)v83 < (int)v82 )
              continue;
          }
          goto LABEL_146;
        }
        goto LABEL_214;
      case 3:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10505/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_104;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v19 )
          goto LABEL_213;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_106;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_214;
        v20 = this->fields.messageDeckLabel;
        gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v20 )
          goto LABEL_213;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_213;
        v22 = this->fields.supportMemberObjectList;
        v130 = this;
        if ( !v22 )
          goto LABEL_213;
        v23 = *(_QWORD *)&v22->max_length;
        v24 = *(_QWORD *)(gameObject + 24);
        v25 = gameObject;
        v26 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v24 < 1 || (int)v23 < 1 )
          goto LABEL_47;
        if ( (int)v23 - 1 >= (unsigned int)(v24 - 1) )
          v27 = v24;
        else
          v27 = v23;
        v28 = 0LL;
        v29 = v27;
        do
        {
          if ( v28 >= *(unsigned int *)(v25 + 24) )
            goto LABEL_214;
          v30 = *(_DWORD *)(v25 + 32 + 4 * v28);
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
          if ( !v21 )
            goto LABEL_213;
          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v21,
                                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                  v30,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v31 = *(_DWORD *)(gameObject + 56);
          v32 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32981460(v32, v28, v30, v31, setupInfo, v132, 0LL, 0, 0LL);
          if ( !v26 )
            goto LABEL_213;
          v33 = v26->fields._items;
          v34 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v26->fields._version;
          if ( !v33 )
            goto LABEL_213;
          v35 = v26->fields._size;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v32,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &v33->obj.klass + v35;
            v26->fields._size = v35 + 1;
            v36[4] = (Il2CppClass *)v32;
            gameObject = sub_1C21DDC(v36 + 4, v32);
          }
          ++v28;
        }
        while ( v29 != v28 );
LABEL_47:
        v37 = this->fields.supportMemberBase;
        v38 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v39 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
        goto LABEL_50;
      case 6:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10501/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v54 )
          goto LABEL_213;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        if ( !gameObject )
          goto LABEL_213;
        gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                (NpcFollowerMaster_o *)gameObject,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0LL);
        if ( !gameObject )
          goto LABEL_213;
        v55 = this->fields.supportMemberObjectList;
        if ( !v55 )
          goto LABEL_213;
        v56 = this;
        max_length = v55->max_length;
        v58 = *(_DWORD *)(gameObject + 24);
        v59 = gameObject;
        v60 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v60,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v58 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              gameObject = (__int64)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
              goto LABEL_98;
            if ( !partyItem )
              goto LABEL_213;
            gameObject = (__int64)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_213;
            v17 = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v60 )
            goto LABEL_213;
          v96 = v60->fields._items;
          v97 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v60->fields._version;
          if ( !v96 )
            goto LABEL_213;
          v98 = v60->fields._size;
          if ( (unsigned int)v98 >= v96->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &v96->obj.klass + v98;
            v60->fields._size = v98 + 1;
            v99[4] = (Il2CppClass *)v17;
            sub_1C21DDC(v99 + 4, v17);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v58 - 1) )
            v58 = max_length;
          v61 = 0;
          while ( (unsigned int)v61 < *(_DWORD *)(v59 + 24) )
          {
            v62 = *(FollowerInfo_o **)(v59 + 8LL * v61 + 32);
            if ( !v62 )
              goto LABEL_213;
            if ( !v62->fields.isMySvtOrNpc )
            {
              v63 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32985232(
                v63,
                v61,
                v62,
                0,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                0,
                0,
                0LL);
              if ( !v60 )
                goto LABEL_213;
              v64 = v60->fields._items;
              v65 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v60->fields._version;
              if ( !v64 )
                goto LABEL_213;
              v66 = v60->fields._size;
              if ( (unsigned int)v66 >= v64->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v60,
                  (Il2CppObject *)v63,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
              }
              else
              {
                v67 = &v64->obj.klass + v66;
                v60->fields._size = v66 + 1;
                v67[4] = (Il2CppClass *)v63;
                gameObject = sub_1C21DDC(v67 + 4, v63);
              }
            }
            if ( v58 == ++v61 )
              goto LABEL_98;
          }
LABEL_214:
          sub_1C2209C(gameObject, v17);
        }
LABEL_98:
        v68 = v56->fields.supportMemberBase;
        v69 = v56->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v60,
          v69,
          v68,
          1,
          0,
          0LL);
        this = v56;
        goto LABEL_108;
      case 9:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10509/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_104;
      default:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10506/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_104:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v53, 0LL);
        if ( !v52 )
          goto LABEL_213;
        UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
        goto LABEL_106;
    }
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__add_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRestrictionHelpDialog_o *v11; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BD834A & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4BD834A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C22354(v8);
  PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRestrictionHelpDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BD834B & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4BD834B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C22354(v8);
  PartyOrganizationRestrictionHelpDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A5D9D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5D98C;
}


System_IAsyncResult_o *__fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BD8352 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD8352 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}