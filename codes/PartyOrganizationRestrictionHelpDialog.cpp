void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0

  if ( (byte_4C1DD05 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&BaseDialog_TypeInfo, v3);
    sub_1C3B764(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4C1DD05 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C3B80C(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v5->static_fields->DeckMemberMax);
  sub_1C3B708(&this->fields.memberObjectList);
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
    sub_1C3B708(p_callbackFunc);
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

  PartyOrganizationRestrictionHelpDialog__Close_33361900(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_33361900(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1DD03 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v5);
    byte_4C1DD03 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1C3B708(p_closeCallbackFunc);
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

  if ( (byte_4C1DD00 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DD00 = 1;
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
    sub_1C3B9C0(titleLabel, method);
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

  if ( (byte_4C1DD04 & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_4C1DD04 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 gameObject; // x0
  __int64 v48; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *v50; // x21
  UILabel_o *messageDeckLabel; // x21
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  struct PartyOrganizationConfirmItemDraw_array *v54; // x8
  __int64 v55; // x21
  __int64 v56; // x19
  __int64 v57; // x20
  System_Collections_Generic_List_object__o *v58; // x24
  unsigned int v59; // w8
  unsigned __int64 v60; // x26
  int32_t v61; // w28
  int v62; // w8
  int32_t LimitCount; // w23
  Il2CppObject *v64; // x20
  unsigned int v65; // w25
  FollowerInfo_o *v66; // x21
  __int64 v67; // x19
  __int64 v68; // x27
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v70; // x21
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v76; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v77; // x0
  UILabel_o *v78; // x21
  System_Collections_Generic_IEnumerable_T__o *v79; // x24
  System_Collections_Generic_List_int__o *v80; // x21
  struct System_Int32_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v86; // x1
  UILabel_o *v87; // x20
  __int64 *v88; // x8
  UILabel_o *v89; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v92; // w21
  __int64 v93; // x23
  System_Collections_Generic_List_object__o *v94; // x22
  int32_t v95; // w24
  int v96; // w26
  FollowerInfo_o *v97; // x25
  PartyOrganizationListViewItem_o *v98; // x21
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  Il2CppClass **v102; // x0
  PartyOrganizationConfirmItemDraw_array *v103; // x1
  UnityEngine_GameObject_o *v104; // x2
  bool v105; // w4
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v107; // x0
  int32_t i; // w20
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  UILabel_o *messageSelfOrSupportLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v115; // x8
  __int64 v116; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v118; // x23
  System_Collections_Generic_List_object__o *v119; // x22
  unsigned int v120; // w8
  unsigned __int64 v121; // x25
  __int64 v122; // x26
  int32_t v123; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v125; // x28
  int32_t v126; // w0
  int32_t v127; // w29
  PartyOrganizationListViewItem_o *v128; // x21
  int32_t version; // w10
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  struct UnityEngine_GameObject_o *v134; // x20
  struct PartyOrganizationConfirmItemDraw_array *v135; // x21
  System_Action_o *v136; // x19
  __int64 v137; // [xsp+18h] [xbp-98h]
  __int64 v138; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v139; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v141; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_4C1DD01 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, partyItem);
    sub_1C3B764(&BalanceConfig_TypeInfo, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1C3B764(&DataManager_TypeInfo, v20);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v27);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1C3B764(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v29);
    sub_1C3B764(&LocalizationManager_TypeInfo, v30);
    sub_1C3B764(&NetworkManager_TypeInfo, v31);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1C3B764(&PartyOrganizationConfirmItemDraw_TypeInfo, v33);
    sub_1C3B764(&PartyOrganizationListViewItem_TypeInfo, v34);
    sub_1C3B764(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v35);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1C3B764(&StringLiteral_10507/*"Processing"*/, v37);
    sub_1C3B764(&StringLiteral_10498/*"Process has exited or is inaccessible, so the requested information is not available."*/, v38);
    sub_1C3B764(&StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/, v39);
    sub_1C3B764(&StringLiteral_10500/*"Process must exit before requested information can be determined."*/, v40);
    sub_1C3B764(&StringLiteral_10506/*"ProcessPurchase: product is null"*/, v41);
    sub_1C3B764(&StringLiteral_10503/*"ProcessMessageInDomain"*/, v42);
    sub_1C3B764(&StringLiteral_10499/*"Process has exited, so the requested information is not available."*/, v43);
    sub_1C3B764(&StringLiteral_10508/*"ProductId"*/, v44);
    sub_1C3B764(&StringLiteral_10504/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v45);
    sub_1C3B764(&StringLiteral_1/*""*/, v46);
    byte_4C1DD01 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C3B708(&this->fields.callbackFunc);
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"Process has exited or is inaccessible, so the requested information is not available."*/, 0LL);
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
                    v139 = this;
                    v141 = questRestrictionInfo;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/, 0LL);
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
                        v86 = (System_String_o *)gameObject;
                        gameObject = (__int64)this->fields.messageLabel;
                        goto LABEL_141;
                      case 3:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10506/*"ProcessPurchase: product is null"*/;
                        goto LABEL_137;
                      case 6:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10508/*"ProductId"*/;
                        goto LABEL_137;
                      case 7:
                        v89 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"Process must exit before requested information can be determined."*/, 0LL);
                        if ( !v89 )
                          break;
                        UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v92 = *(_DWORD *)(gameObject + 24);
                        v93 = gameObject;
                        v94 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v94,
                          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v92 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v95 = 0;
                            if ( max_length - 1 >= (unsigned int)(v92 - 1) )
                              v96 = v92;
                            else
                              v96 = max_length;
                            while ( (unsigned int)v95 < *(_DWORD *)(v93 + 24) )
                            {
                              v97 = *(FollowerInfo_o **)(v93 + 8LL * v95 + 32);
                              if ( !v97 )
                                goto LABEL_205;
                              if ( !v97->fields.isMySvtOrNpc )
                              {
                                v98 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_33173104(
                                  v98,
                                  v95,
                                  v97,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v94 )
                                  goto LABEL_205;
                                items = v94->fields._items;
                                v100 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v94->fields._version;
                                if ( !items )
                                  goto LABEL_205;
                                size = v94->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v94,
                                    (Il2CppObject *)v98,
                                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v102 = &items->obj.klass + size;
                                  v94->fields._size = size + 1;
                                  v102[4] = (Il2CppClass *)v98;
                                  gameObject = sub_1C3B708(v102 + 4);
                                }
                              }
                              if ( v96 == ++v95 )
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
                          v48 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v94 )
                        {
                          v109 = v94->fields._items;
                          v110 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v94->fields._version;
                          if ( v109 )
                          {
                            v111 = v94->fields._size;
                            if ( (unsigned int)v111 >= v109->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v94,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v112 = &v109->obj.klass + v111;
                              v94->fields._size = v111 + 1;
                              v112[4] = (Il2CppClass *)v48;
                              sub_1C3B708(v112 + 4);
                            }
LABEL_124:
                            supportMemberBase = this->fields.supportMemberBase;
                            v76 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                            v77 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v94;
LABEL_127:
                            v103 = v76;
                            v104 = supportMemberBase;
                            v105 = 0;
LABEL_201:
                            PartyOrganizationConfirmItemDraw__SetPartyIcon(v77, v103, v104, 1, v105, 0LL);
LABEL_202:
                            this->fields.state = 1;
                            v136 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                            System_Action___ctor(
                              v136,
                              (Il2CppObject *)this,
                              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v136, 0, 0LL);
                            return;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v50 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"Process has exited, so the requested information is not available."*/, 0LL);
                        if ( !v50 )
                          break;
                        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
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
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v54 = this->fields.supportMemberObjectList;
                        if ( !v54 )
                          break;
                        v55 = *(_QWORD *)&v54->max_length;
                        v56 = *(_QWORD *)(gameObject + 24);
                        v57 = gameObject;
                        v58 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v58,
                          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v56 < 1 || (int)v55 < 1 )
                          goto LABEL_62;
                        if ( (int)v55 - 1 >= (unsigned int)(v56 - 1) )
                          v59 = v56;
                        else
                          v59 = v55;
                        v60 = 0LL;
                        v137 = v57;
                        v138 = v59;
                        do
                        {
                          if ( v60 >= *(unsigned int *)(v57 + 24) )
                            goto LABEL_206;
                          v61 = *(_DWORD *)(v57 + 4 * v60 + 32);
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          if ( !byte_4C1C955 )
                          {
                            sub_1C3B764(&NetworkManager_TypeInfo, v48);
                            byte_4C1C955 = 1;
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
                                                  v61,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_205;
                          v62 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v62 >= 1 )
                          {
                            v64 = MasterData_object;
                            v65 = 0;
                            while ( 1 )
                            {
                              if ( v65 >= v62 )
                                goto LABEL_206;
                              v66 = QuestFollowerList->m_Items[v65];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(
                                             questRestrictionInfo->fields.questId,
                                             0LL);
                              if ( !v66 )
                                goto LABEL_205;
                              gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v66, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v68 = *(_QWORD *)(gameObject + 48);
                                v67 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                *(_QWORD *)&v144.fields.currentCryptoKey = v68;
                                *(_QWORD *)&v144.fields.fakeValue = v67;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                               v144,
                                               0LL);
                                questRestrictionInfo = v141;
                                if ( (_DWORD)gameObject == v61 )
                                  break;
                              }
                              v62 = QuestFollowerList->max_length;
                              if ( (int)++v65 >= v62 )
                                goto LABEL_55;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v141->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v66, 0, ReturnTypeByQuestId, 0LL);
LABEL_55:
                            MasterData_object = v64;
                            v57 = v137;
                          }
                          v70 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_33176700(
                            v70,
                            v60,
                            v61,
                            LimitCount,
                            setupInfo,
                            questRestrictionInfo,
                            0LL,
                            0,
                            0LL);
                          if ( !v58 )
                            goto LABEL_205;
                          v71 = v58->fields._items;
                          this = v139;
                          v72 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v58->fields._version;
                          if ( !v71 )
                            goto LABEL_205;
                          v73 = v58->fields._size;
                          if ( (unsigned int)v73 >= v71->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v58,
                              (Il2CppObject *)v70,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v74 = &v71->obj.klass + v73;
                            v58->fields._size = v73 + 1;
                            v74[4] = (Il2CppClass *)v70;
                            gameObject = sub_1C3B708(v74 + 4);
                          }
                          ++v60;
                        }
                        while ( v60 != v138 );
LABEL_62:
                        supportMemberBase = this->fields.supportMemberBase;
                        v76 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v77 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v58;
                        goto LABEL_127;
                      case 10:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10504/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/;
                        goto LABEL_137;
                      case 11:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10503/*"ProcessMessageInDomain"*/;
                        goto LABEL_137;
                      case 12:
                      case 16:
                        v78 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/, 0LL);
                        if ( !v78 )
                          break;
                        UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
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
                        v79 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v80 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_57074972(
                                v80,
                                v79,
                                (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
                              if ( !v80 )
                                break;
                              v81 = v80->fields._items;
                              v82 = Method_System_Collections_Generic_List_int__Add__;
                              ++v80->fields._version;
                              if ( !v81 )
                                break;
                              v83 = v80->fields._size;
                              if ( (unsigned int)v83 >= v81->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v80,
                                  0,
                                  *(const MethodInfo_366EC48 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v80->fields._size = v83 + 1;
                                v81->m_Items[v83 + 1] = 0;
                              }
                              v79 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v80,
                                                                                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v79 )
                                  {
                                    v115 = this->fields.supportMemberObjectList;
                                    if ( v115 )
                                    {
                                      v116 = *(_QWORD *)&v115->max_length;
                                      monitor = v79[1].monitor;
                                      v118 = (UserServantCollectionMaster_o *)gameObject;
                                      v119 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_object____ctor(
                                        v119,
                                        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v116 >= 1 )
                                      {
                                        if ( (int)v116 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                          v120 = (unsigned int)monitor;
                                        else
                                          v120 = v116;
                                        v121 = 0LL;
                                        v122 = v120;
                                        while ( v121 < LODWORD(v79[1].monitor) )
                                        {
                                          v123 = *((_DWORD *)&v79[2].klass + v121);
                                          if ( v123 )
                                          {
                                            gameObject = (__int64)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_205;
                                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                    v123,
                                                    (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_209;
                                            gameObject = (__int64)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_205;
                                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                     v123,
                                                     (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v125 = (FollowerInfo_o *)Item;
                                              v126 = FollowerInfo__GetReturnTypeByQuestId(v141->fields.questId, 0LL);
                                              v127 = FollowerInfo__getLimitCount(v125, 0, v126, 0LL);
                                            }
                                            else
                                            {
LABEL_209:
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              if ( !byte_4C1C955 )
                                              {
                                                sub_1C3B764(&NetworkManager_TypeInfo, v48);
                                                byte_4C1C955 = 1;
                                              }
                                              gameObject = (__int64)NetworkManager_TypeInfo;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                                gameObject = (__int64)NetworkManager_TypeInfo;
                                              }
                                              if ( !v118 )
                                                goto LABEL_205;
                                              gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v118,
                                                                      *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                                      v123,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_205;
                                              v127 = *(_DWORD *)(gameObject + 56);
                                              v125 = 0LL;
                                            }
                                            v128 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_33176700(
                                              v128,
                                              v121,
                                              v123,
                                              v127,
                                              setupInfo,
                                              v141,
                                              v125,
                                              0,
                                              0LL);
                                            if ( !v119 )
                                              goto LABEL_205;
                                            version = v119->fields._version;
                                            v130 = v119->fields._items;
                                            this = v139;
                                          }
                                          else
                                          {
                                            v128 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_33175692(
                                              v128,
                                              v121,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v119 )
                                              goto LABEL_205;
                                            version = v119->fields._version;
                                            v130 = v119->fields._items;
                                          }
                                          v131 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          v119->fields._version = version + 1;
                                          if ( !v130 )
                                            goto LABEL_205;
                                          v132 = v119->fields._size;
                                          if ( (unsigned int)v132 >= v130->max_length )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v119,
                                              (Il2CppObject *)v128,
                                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v133 = &v130->obj.klass + v132;
                                            v119->fields._size = v132 + 1;
                                            v133[4] = (Il2CppClass *)v128;
                                            gameObject = sub_1C3B708(v133 + 4);
                                          }
                                          if ( v122 == ++v121 )
                                            goto LABEL_198;
                                        }
LABEL_206:
                                        sub_1C3B9C8(gameObject, v48);
                                      }
LABEL_198:
                                      v134 = this->fields.supportMemberBase;
                                      v135 = this->fields.supportMemberObjectList;
                                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      v105 = 1;
                                      v77 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v119;
                                      v103 = v135;
                                      v104 = v134;
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
                          v107 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (__int64)System_String__Format(message, v107, 0LL);
                          if ( messageLabel )
                          {
                            v86 = (System_String_o *)gameObject;
                            gameObject = (__int64)messageLabel;
LABEL_141:
                            UILabel__set_text((UILabel_o *)gameObject, v86, 0LL);
                            goto LABEL_202;
                          }
                        }
                        break;
                      case 15:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10507/*"Processing"*/;
                        goto LABEL_137;
                      default:
                        v87 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v88 = &StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/;
LABEL_137:
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v88, 0LL);
                        if ( !v87 )
                          break;
                        UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
LABEL_139:
                        gameObject = (__int64)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v86 = message;
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
    sub_1C3B9C0(gameObject, v48);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_33357152(
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 gameObject; // x0
  __int64 v54; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v56; // x23
  UILabel_o *v57; // x23
  Il2CppObject *v58; // x22
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  __int64 v60; // x27
  __int64 v61; // x19
  __int64 v62; // x24
  System_Collections_Generic_List_object__o *v63; // x23
  unsigned int v64; // w8
  unsigned __int64 v65; // x25
  __int64 v66; // x19
  int32_t v67; // w27
  int32_t v68; // w29
  PartyOrganizationListViewItem_o *v69; // x28
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  UnityEngine_GameObject_o *v74; // x20
  PartyOrganizationConfirmItemDraw_array *v75; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v76; // x0
  bool IsMyServantOrNpcRestriction_41939672; // w0
  UILabel_o *titleLabel; // x25
  bool v79; // w24
  System_Collections_Generic_IEnumerable_T__o *v80; // x26
  bool IsSelectableNormalSupport; // w25
  _BOOL4 v82; // w19
  _BOOL4 v83; // w20
  System_Collections_Generic_List_int__o *v84; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  int v88; // w19
  UILabel_o *v89; // x20
  __int64 *v90; // x8
  UILabel_o *v91; // x23
  struct PartyOrganizationConfirmItemDraw_array *v92; // x8
  PartyOrganizationRestrictionHelpDialog_o *v93; // x27
  int max_length; // w21
  int v95; // w20
  __int64 v96; // x23
  System_Collections_Generic_List_object__o *v97; // x22
  int32_t v98; // w24
  FollowerInfo_o *v99; // x26
  PartyOrganizationListViewItem_o *v100; // x25
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  UnityEngine_GameObject_o *v105; // x20
  PartyOrganizationConfirmItemDraw_array *v106; // x21
  System_Action_o *v107; // x20
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v110; // x23
  int32_t v111; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  __int64 v115; // x23
  struct PartyOrganizationConfirmItemDraw_array *v116; // x8
  __int64 v117; // x19
  System_Collections_Generic_List_object__o *v118; // x22
  __int64 v119; // x8
  unsigned __int64 v120; // x24
  int32_t v121; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v123; // w28
  PartyOrganizationListViewItem_o *v124; // x27
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  int32_t i; // w20
  PartyOrganizationRestrictionHelpDialog_o *v130; // x19
  UILabel_o *messageLabel; // x21
  Il2CppObject *v132; // x0
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x0
  System_String_o *v137; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v141; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v143; // x22
  unsigned int v144; // w8
  unsigned __int64 v145; // x25
  System_Collections_Generic_IEnumerable_T__o *v146; // x23
  __int64 v147; // x24
  System_Collections_Generic_IEnumerable_T__o *v148; // x19
  int32_t v149; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v151; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  PartyOrganizationListViewItem_o *v154; // x28
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  Il2CppClass **v158; // x0
  PartyOrganizationListViewItem_o *v159; // x27
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  PartyOrganizationRestrictionHelpDialog_o *v164; // x9
  PartyOrganizationConfirmItemDraw_array *v165; // x21
  UnityEngine_GameObject_o *supportMemberBase; // x20
  PartyOrganizationRestrictionHelpDialog_o *v167; // [xsp+18h] [xbp-88h]
  UserServantCollectionMaster_o *v168; // [xsp+18h] [xbp-88h]
  QuestRestrictionInfo_o *v169; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C1DD02 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, partyItem);
    sub_1C3B764(&BalanceConfig_TypeInfo, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1C3B764(&DataManager_TypeInfo, v21);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1C3B764(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1C3B764(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v32);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v33);
    sub_1C3B764(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_1C3B764(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_1C3B764(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_1C3B764(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1C3B764(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_1C3B764(&LocalizationManager_TypeInfo, v40);
    sub_1C3B764(&NetworkManager_TypeInfo, v41);
    sub_1C3B764(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_1C3B764(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_1C3B764(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1C3B764(&StringLiteral_10498/*"Process has exited or is inaccessible, so the requested information is not available."*/, v46);
    sub_1C3B764(&StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/, v47);
    sub_1C3B764(&StringLiteral_10500/*"Process must exit before requested information can be determined."*/, v48);
    sub_1C3B764(&StringLiteral_10499/*"Process has exited, so the requested information is not available."*/, v49);
    sub_1C3B764(&StringLiteral_10508/*"ProductId"*/, v50);
    sub_1C3B764(&StringLiteral_10504/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/, v51);
    sub_1C3B764(&StringLiteral_1/*""*/, v52);
    byte_4C1DD02 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C3B708(&this->fields.callbackFunc);
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
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"Process has exited or is inaccessible, so the requested information is not available."*/, 0LL);
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
    v169 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_41939672 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41939672(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v79 = IsMyServantOrNpcRestriction_41939672;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v79 )
        {
          gameObject = (__int64)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v80 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v82 = entity != 0LL;
              v83 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_167;
              v84 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_57074972(
                v84,
                v80,
                (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
              if ( !v84 )
                goto LABEL_213;
              items = v84->fields._items;
              v86 = Method_System_Collections_Generic_List_int__Add__;
              ++v84->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v84->fields._size;
              v88 = v83 && v82;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v84,
                  0,
                  *(const MethodInfo_366EC48 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
              }
              else
              {
                v84->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v80 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v84,
                                                                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v88 )
              {
LABEL_167:
                gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v137 = message;
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
                v137 = (System_String_o *)gameObject;
                gameObject = (__int64)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v137, 0LL);
              gameObject = (__int64)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v80 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v168 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v141 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v80[1].monitor;
                      v143 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v143,
                        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v141 >= 1 )
                      {
                        if ( (int)v141 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v144 = (unsigned int)monitor;
                        else
                          v144 = v141;
                        v145 = 0LL;
                        v146 = v80 + 2;
                        v147 = v144;
                        v148 = v80;
                        while ( v145 < LODWORD(v80[1].monitor) )
                        {
                          v149 = *((_DWORD *)&v146->klass + v145);
                          if ( v149 )
                          {
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v149,
                                    (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v149,
                                     (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v151 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v169->fields.questId, 0LL);
                              LimitCount = FollowerInfo__getLimitCount(v151, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4C1C955 )
                              {
                                sub_1C3B764(&NetworkManager_TypeInfo, v54);
                                byte_4C1C955 = 1;
                              }
                              gameObject = (__int64)NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = (__int64)NetworkManager_TypeInfo;
                              }
                              if ( !v168 )
                                goto LABEL_213;
                              gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v168,
                                                      *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                      v149,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v151 = 0LL;
                            }
                            v154 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_33176700(
                              v154,
                              v145,
                              v149,
                              LimitCount,
                              setupInfo,
                              v169,
                              v151,
                              0,
                              0LL);
                            if ( !v143 )
                              goto LABEL_213;
                            v155 = v143->fields._items;
                            v156 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v143->fields._version;
                            if ( !v155 )
                              goto LABEL_213;
                            v157 = v143->fields._size;
                            v80 = v148;
                            if ( (unsigned int)v157 >= v155->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v143,
                                (Il2CppObject *)v154,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v158 = &v155->obj.klass + v157;
                              v143->fields._size = v157 + 1;
                              v158[4] = (Il2CppClass *)v154;
                              gameObject = sub_1C3B708(v158 + 4);
                            }
                          }
                          else
                          {
                            v159 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_33175692(v159, v145, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v143 )
                              goto LABEL_213;
                            v160 = v143->fields._items;
                            v161 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v143->fields._version;
                            if ( !v160 )
                              goto LABEL_213;
                            v162 = v143->fields._size;
                            if ( (unsigned int)v162 >= v160->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v143,
                                (Il2CppObject *)v159,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v163 = &v160->obj.klass + v162;
                              v143->fields._size = v162 + 1;
                              v163[4] = (Il2CppClass *)v159;
                              gameObject = sub_1C3B708(v163 + 4);
                            }
                          }
                          if ( v147 == ++v145 )
                            goto LABEL_209;
                        }
                        goto LABEL_214;
                      }
LABEL_209:
                      v164 = this;
                      v165 = this->fields.supportMemberObjectList;
                      supportMemberBase = v164->fields.supportMemberBase;
                      v130 = v164;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      PartyOrganizationConfirmItemDraw__SetPartyIcon(
                        (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v143,
                        v165,
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
            v130 = this;
            messageLabel = this->fields.messageLabel;
            v132 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (__int64)System_String__Format(message, v132, 0LL);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
LABEL_212:
              this = v130;
              goto LABEL_108;
            }
          }
LABEL_213:
          sub_1C3B9C0(gameObject, v54);
        }
        v167 = this;
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v110 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v110,
          (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v111 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v111 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v111,
                             (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v111,
                                        (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v110 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v110,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_366EE54 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v111 >= NeedIndividualityList->fields._size )
              goto LABEL_119;
          }
          goto LABEL_213;
        }
LABEL_119:
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v113 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v110,
                 (const MethodInfo_300DEBC *)Method_System_Linq_Enumerable_Distinct_int___);
        v114 = System_Linq_Enumerable__Intersect_int_(
                 v113,
                 CollectionList,
                 (const MethodInfo_3015284 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (__int64)System_Linq_Enumerable__ToArray_int_(
                                v114,
                                (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v115 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_106:
          gameObject = (__int64)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_108:
            this->fields.state = 1;
            v107 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v107,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v107, 0, 0LL);
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
        v116 = this->fields.supportMemberObjectList;
        if ( !v116 )
          goto LABEL_213;
        v117 = *(_QWORD *)&v116->max_length;
        v118 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v118,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v117 < 1 || (v119 = *(_QWORD *)(v115 + 24), (int)v119 < 1) )
        {
LABEL_146:
          v74 = this->fields.supportMemberBase;
          v75 = this->fields.supportMemberObjectList;
          if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
          v76 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v118;
LABEL_50:
          PartyOrganizationConfirmItemDraw__SetPartyIcon(v76, v75, v74, 1, 0, 0LL);
          this = v167;
          goto LABEL_108;
        }
        v120 = 0LL;
        while ( v120 < (unsigned int)v119 )
        {
          v121 = *(_DWORD *)(v115 + 32 + 4 * v120);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_213;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, v54);
            byte_4C1C955 = 1;
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
                                  v121,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v123 = *(_DWORD *)(gameObject + 56);
          v124 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33176700(v124, v120, v121, v123, setupInfo, v169, 0LL, 0, 0LL);
          if ( !v118 )
            goto LABEL_213;
          v125 = v118->fields._items;
          v126 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v118->fields._version;
          if ( !v125 )
            goto LABEL_213;
          v127 = v118->fields._size;
          if ( (unsigned int)v127 >= v125->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v118,
              (Il2CppObject *)v124,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          }
          else
          {
            v128 = &v125->obj.klass + v127;
            v118->fields._size = v127 + 1;
            v128[4] = (Il2CppClass *)v124;
            gameObject = sub_1C3B708(v128 + 4);
          }
          if ( (__int64)++v120 < (int)v117 )
          {
            LODWORD(v119) = *(_DWORD *)(v115 + 24);
            if ( (__int64)v120 < (int)v119 )
              continue;
          }
          goto LABEL_146;
        }
        goto LABEL_214;
      case 3:
        v89 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = &StringLiteral_10504/*"ProcessPurchase: FAIL. Unrecognized product: '{0}'"*/;
        goto LABEL_104;
      case 4:
      case 5:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"Process has exited, so the requested information is not available."*/, 0LL);
        if ( !v56 )
          goto LABEL_213;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_106;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_214;
        v57 = this->fields.messageDeckLabel;
        gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v57 )
          goto LABEL_213;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v58 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_213;
        v59 = this->fields.supportMemberObjectList;
        v167 = this;
        if ( !v59 )
          goto LABEL_213;
        v60 = *(_QWORD *)&v59->max_length;
        v61 = *(_QWORD *)(gameObject + 24);
        v62 = gameObject;
        v63 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v61 < 1 || (int)v60 < 1 )
          goto LABEL_47;
        if ( (int)v60 - 1 >= (unsigned int)(v61 - 1) )
          v64 = v61;
        else
          v64 = v60;
        v65 = 0LL;
        v66 = v64;
        do
        {
          if ( v65 >= *(unsigned int *)(v62 + 24) )
            goto LABEL_214;
          v67 = *(_DWORD *)(v62 + 32 + 4 * v65);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, v54);
            byte_4C1C955 = 1;
          }
          gameObject = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (__int64)NetworkManager_TypeInfo;
          }
          if ( !v58 )
            goto LABEL_213;
          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v58,
                                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                  v67,
                                  0LL);
          if ( !gameObject )
            goto LABEL_213;
          v68 = *(_DWORD *)(gameObject + 56);
          v69 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33176700(v69, v65, v67, v68, setupInfo, v169, 0LL, 0, 0LL);
          if ( !v63 )
            goto LABEL_213;
          v70 = v63->fields._items;
          v71 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v63->fields._version;
          if ( !v70 )
            goto LABEL_213;
          v72 = v63->fields._size;
          if ( (unsigned int)v72 >= v70->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              (Il2CppObject *)v69,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            v63->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v69;
            gameObject = sub_1C3B708(v73 + 4);
          }
          ++v65;
        }
        while ( v66 != v65 );
LABEL_47:
        v74 = this->fields.supportMemberBase;
        v75 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v76 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v63;
        goto LABEL_50;
      case 6:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"Process must exit before requested information can be determined."*/, 0LL);
        if ( !v91 )
          goto LABEL_213;
        UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v92 = this->fields.supportMemberObjectList;
        if ( !v92 )
          goto LABEL_213;
        v93 = this;
        max_length = v92->max_length;
        v95 = *(_DWORD *)(gameObject + 24);
        v96 = gameObject;
        v97 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v97,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v95 < 1 )
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
            v54 = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v97 )
            goto LABEL_213;
          v133 = v97->fields._items;
          v134 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v97->fields._version;
          if ( !v133 )
            goto LABEL_213;
          v135 = v97->fields._size;
          if ( (unsigned int)v135 >= v133->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v97,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          }
          else
          {
            v136 = &v133->obj.klass + v135;
            v97->fields._size = v135 + 1;
            v136[4] = (Il2CppClass *)v54;
            sub_1C3B708(v136 + 4);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v95 - 1) )
            v95 = max_length;
          v98 = 0;
          while ( (unsigned int)v98 < *(_DWORD *)(v96 + 24) )
          {
            v99 = *(FollowerInfo_o **)(v96 + 8LL * v98 + 32);
            if ( !v99 )
              goto LABEL_213;
            if ( !v99->fields.isMySvtOrNpc )
            {
              v100 = (PartyOrganizationListViewItem_o *)sub_1C3B9B0(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33173104(
                v100,
                v98,
                v99,
                0,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                0,
                0,
                0LL);
              if ( !v97 )
                goto LABEL_213;
              v101 = v97->fields._items;
              v102 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v97->fields._version;
              if ( !v101 )
                goto LABEL_213;
              v103 = v97->fields._size;
              if ( (unsigned int)v103 >= v101->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v97,
                  (Il2CppObject *)v100,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
              }
              else
              {
                v104 = &v101->obj.klass + v103;
                v97->fields._size = v103 + 1;
                v104[4] = (Il2CppClass *)v100;
                gameObject = sub_1C3B708(v104 + 4);
              }
            }
            if ( v95 == ++v98 )
              goto LABEL_98;
          }
LABEL_214:
          sub_1C3B9C8(gameObject, v54);
        }
LABEL_98:
        v105 = v93->fields.supportMemberBase;
        v106 = v93->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v97,
          v106,
          v105,
          1,
          0,
          0LL);
        this = v93;
        goto LABEL_108;
      case 9:
        v89 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = &StringLiteral_10508/*"ProductId"*/;
        goto LABEL_104;
      default:
        v89 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = &StringLiteral_10505/*"ProcessPurchase: PASS. Product: '{0}'"*/;
LABEL_104:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v90, 0LL);
        if ( !v89 )
          goto LABEL_213;
        UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4C1DCFE & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4C1DCFE = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C3BC80(v8);
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

  if ( (byte_4C1DCFF & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4C1DCFF = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C3BC80(v8);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A76F2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A76EE4;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C1DD06 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1DD06 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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