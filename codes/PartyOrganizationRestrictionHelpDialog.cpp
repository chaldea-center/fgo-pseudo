void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationConfirmItemDraw_array *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B120CA & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw___TypeInfo, v6, v7);
    byte_4B120CA = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BCA888(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v8->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v9;
  sub_1BCA784(&this->fields.memberObjectList, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
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
    sub_1BCA784(p_callbackFunc, 0LL);
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

  PartyOrganizationRestrictionHelpDialog__Close_32808404(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_32808404(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B120C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v5, v6);
    byte_4B120C8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B120C5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B120C5 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__OnClickClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method, v2);
    byte_4B120C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 gameObject; // x0
  __int64 v79; // x1
  __int64 v80; // x1
  UILabel_o *closeLabel; // x26
  __int64 v82; // x1
  UILabel_o *v83; // x23
  UILabel_o *messageDeckLabel; // x23
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  __int64 v87; // x2
  __int64 v88; // x3
  struct PartyOrganizationConfirmItemDraw_array *v89; // x8
  __int64 v90; // x21
  __int64 v91; // x19
  __int64 v92; // x20
  System_Collections_Generic_List_object__o *v93; // x24
  unsigned int v94; // w8
  unsigned __int64 v95; // x26
  QuestRestrictionInfo_o *v96; // x19
  int32_t v97; // w27
  __int64 v98; // x2
  __int64 v99; // x3
  int v100; // w8
  int32_t LimitCount; // w28
  Il2CppObject *v102; // x20
  unsigned int v103; // w25
  FollowerInfo_o *v104; // x29
  __int64 v105; // x19
  __int64 v106; // x21
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v108; // x29
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v114; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v115; // x0
  UILabel_o *v116; // x24
  System_Collections_Generic_IEnumerable_T__o *v117; // x24
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  System_Collections_Generic_List_int__o *v121; // x26
  struct System_Int32_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v127; // x1
  UILabel_o *v128; // x20
  __int64 *v129; // x8
  UILabel_o *v130; // x23
  __int64 v131; // x2
  __int64 v132; // x3
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v135; // w21
  __int64 v136; // x23
  System_Collections_Generic_List_object__o *v137; // x22
  __int64 v138; // x2
  __int64 v139; // x3
  int32_t v140; // w24
  FollowerInfo_o *v141; // x26
  PartyOrganizationListViewItem_o *v142; // x25
  struct System_Object_array *items; // x8
  _QWORD *v144; // x9
  __int64 size; // x10
  Il2CppClass **v146; // x0
  PartyOrganizationConfirmItemDraw_array *v147; // x1
  UnityEngine_GameObject_o *v148; // x2
  bool v149; // w4
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v154; // x0
  int32_t i; // w20
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  Il2CppClass **v159; // x0
  UILabel_o *messageSelfOrSupportLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  __int64 v162; // x2
  __int64 v163; // x3
  struct PartyOrganizationConfirmItemDraw_array *v164; // x8
  __int64 v165; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v167; // x23
  System_Collections_Generic_List_object__o *v168; // x22
  __int64 v169; // x2
  __int64 v170; // x3
  unsigned int v171; // w8
  unsigned __int64 v172; // x25
  __int64 v173; // x21
  int32_t v174; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v176; // x28
  int32_t v177; // w0
  __int64 v178; // x2
  __int64 v179; // x3
  int32_t v180; // w29
  PartyOrganizationListViewItem_o *v181; // x27
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  char *v186; // x0
  PartyOrganizationListViewItem_o *v187; // x1
  PartyOrganizationListViewItem_o *v188; // x26
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  __int64 v193; // x8
  System_Collections_Generic_List_object__o *v194; // x0
  Il2CppObject *v195; // x1
  struct UnityEngine_GameObject_o *v196; // x20
  struct PartyOrganizationConfirmItemDraw_array *v197; // x21
  System_Action_o *v198; // x19
  __int64 v199; // [xsp+18h] [xbp-98h]
  __int64 v200; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v201; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v203; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16

  if ( (byte_4B120C6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, *(_QWORD *)&type);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22, v23);
    sub_1BCA7E0(&DataManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v42, v43);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v44, v45);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v50, v51);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v52, v53);
    sub_1BCA7E0(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v54, v55);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57);
    sub_1BCA7E0(&StringLiteral_10438/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_10431/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_10437/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_10434/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_10430/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_10439/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_10435/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v76, v77);
    byte_4B120C6 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v203 = questRestrictionInfo;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v201 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = System_String__IsNullOrEmpty(message, 0LL);
                        if ( (gameObject & 1) == 0 )
                          goto LABEL_134;
                        if ( !questRestrictionInfo )
                          break;
                        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
                        if ( !restrictionEntityList )
                          break;
                        if ( restrictionEntityList->max_length <= index )
                          goto LABEL_201;
                        gameObject = (__int64)restrictionEntityList->m_Items[index];
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)RestrictionEntity__GetClassIndividualityRestrictionMessage(
                                                (RestrictionEntity_o *)gameObject,
                                                0LL);
                        if ( !this->fields.messageLabel )
                          break;
                        v127 = (System_String_o *)gameObject;
                        gameObject = (__int64)this->fields.messageLabel;
                        goto LABEL_136;
                      case 3:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10437/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_132;
                      case 6:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10439/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_132;
                      case 7:
                        v130 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v130 )
                          break;
                        UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v135 = *(_DWORD *)(gameObject + 24);
                        v136 = gameObject;
                        v137 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                              v79,
                                                                              v131,
                                                                              v132);
                        System_Collections_Generic_List_object____ctor(
                          v137,
                          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v135 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v140 = 0;
                            if ( max_length - 1 < (unsigned int)(v135 - 1) )
                              v135 = max_length;
                            while ( (unsigned int)v140 < *(_DWORD *)(v136 + 24) )
                            {
                              v141 = *(FollowerInfo_o **)(v136 + 8LL * v140 + 32);
                              if ( !v141 )
                                goto LABEL_200;
                              if ( !v141->fields.isMySvtOrNpc )
                              {
                                v142 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                            PartyOrganizationListViewItem_TypeInfo,
                                                                            v79,
                                                                            v138,
                                                                            v139);
                                PartyOrganizationListViewItem___ctor_32576596(
                                  v142,
                                  v140,
                                  v141,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v137 )
                                  goto LABEL_200;
                                items = v137->fields._items;
                                v144 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v137->fields._version;
                                if ( !items )
                                  goto LABEL_200;
                                size = v137->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v137,
                                    (Il2CppObject *)v142,
                                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v146 = &items->obj.klass + size;
                                  v137->fields._size = size + 1;
                                  v146[4] = (Il2CppClass *)v142;
                                  gameObject = sub_1BCA784(v146 + 4, v142);
                                }
                              }
                              if ( v135 == ++v140 )
                                goto LABEL_119;
                            }
LABEL_201:
                            sub_1BCAA44(gameObject, v79);
                          }
                          goto LABEL_119;
                        }
                        for ( i = 0; ; ++i )
                        {
                          gameObject = (__int64)BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v79);
                            gameObject = (__int64)BalanceConfig_TypeInfo;
                          }
                          if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
                            goto LABEL_119;
                          if ( !partyItem )
                            goto LABEL_200;
                          gameObject = (__int64)PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !gameObject )
                            goto LABEL_200;
                          v79 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v137 )
                        {
                          v156 = v137->fields._items;
                          v157 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v137->fields._version;
                          if ( v156 )
                          {
                            v158 = v137->fields._size;
                            if ( (unsigned int)v158 >= v156->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v137,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v159 = &v156->obj.klass + v158;
                              v137->fields._size = v158 + 1;
                              v159[4] = (Il2CppClass *)v79;
                              sub_1BCA784(v159 + 4, v79);
                            }
LABEL_119:
                            supportMemberBase = this->fields.supportMemberBase;
                            v114 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v79);
                            v115 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v137;
LABEL_122:
                            v147 = v114;
                            v148 = supportMemberBase;
                            v149 = 0;
                            goto LABEL_196;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v83 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v83 )
                          break;
                        UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        if ( !*(_DWORD *)(gameObject + 24) )
                          goto LABEL_201;
                        messageDeckLabel = this->fields.messageDeckLabel;
                        gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
                        if ( !messageDeckLabel )
                          break;
                        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v89 = this->fields.supportMemberObjectList;
                        if ( !v89 )
                          break;
                        v90 = *(_QWORD *)&v89->max_length;
                        v91 = *(_QWORD *)(gameObject + 24);
                        v92 = gameObject;
                        v93 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                             System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                             v79,
                                                                             v87,
                                                                             v88);
                        System_Collections_Generic_List_object____ctor(
                          v93,
                          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v91 < 1 || (int)v90 < 1 )
                          goto LABEL_58;
                        if ( (int)v90 - 1 >= (unsigned int)(v91 - 1) )
                          v94 = v91;
                        else
                          v94 = v90;
                        v95 = 0LL;
                        v199 = v92;
                        v200 = v94;
                        do
                        {
                          if ( v95 >= *(unsigned int *)(v92 + 24) )
                            goto LABEL_201;
                          v96 = v203;
                          v97 = *(_DWORD *)(v92 + 4 * v95 + 32);
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79);
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_object )
                            goto LABEL_200;
                          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                  (UserServantCollectionMaster_o *)MasterData_object,
                                                  gameObject,
                                                  v97,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_200;
                          v100 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v100 >= 1 )
                          {
                            v102 = MasterData_object;
                            v103 = 0;
                            while ( 1 )
                            {
                              if ( v103 >= v100 )
                                goto LABEL_201;
                              v104 = QuestFollowerList->m_Items[v103];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v96->fields.questId, 0LL);
                              if ( !v104 )
                                goto LABEL_200;
                              gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v104, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v105 = *(_QWORD *)(gameObject + 48);
                                v106 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    v79);
                                *(_QWORD *)&v206.fields.currentCryptoKey = v105;
                                *(_QWORD *)&v206.fields.fakeValue = v106;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v206,
                                               0LL);
                                v96 = v203;
                                if ( (_DWORD)gameObject == v97 )
                                  break;
                              }
                              v100 = QuestFollowerList->max_length;
                              if ( (int)++v103 >= v100 )
                                goto LABEL_51;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v203->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v104, 0, ReturnTypeByQuestId, 0LL);
LABEL_51:
                            MasterData_object = v102;
                            v92 = v199;
                          }
                          v108 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                      PartyOrganizationListViewItem_TypeInfo,
                                                                      v79,
                                                                      v98,
                                                                      v99);
                          PartyOrganizationListViewItem___ctor_32572836(
                            v108,
                            v95,
                            v97,
                            LimitCount,
                            setupInfo,
                            v96,
                            0LL,
                            0,
                            0LL);
                          if ( !v93 )
                            goto LABEL_200;
                          v109 = v93->fields._items;
                          v110 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v93->fields._version;
                          if ( !v109 )
                            goto LABEL_200;
                          v111 = v93->fields._size;
                          if ( (unsigned int)v111 >= v109->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v93,
                              (Il2CppObject *)v108,
                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v112 = &v109->obj.klass + v111;
                            v93->fields._size = v111 + 1;
                            v112[4] = (Il2CppClass *)v108;
                            gameObject = sub_1BCA784(v112 + 4, v108);
                          }
                          this = v201;
                          ++v95;
                        }
                        while ( v95 != v200 );
LABEL_58:
                        supportMemberBase = this->fields.supportMemberBase;
                        v114 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v79);
                        v115 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v93;
                        goto LABEL_122;
                      case 10:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10435/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 11:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10434/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 12:
                      case 16:
                        v116 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v116 )
                          break;
                        UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
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
                        v117 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v79);
                          gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v121 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                                 v118,
                                                                                 v119,
                                                                                 v120);
                              System_Collections_Generic_List_int____ctor_56116492(
                                v121,
                                v117,
                                (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
                              if ( !v121 )
                                break;
                              v122 = v121->fields._items;
                              v123 = Method_System_Collections_Generic_List_int__Add__;
                              ++v121->fields._version;
                              if ( !v122 )
                                break;
                              v124 = v121->fields._size;
                              if ( (unsigned int)v124 >= v122->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v121,
                                  0,
                                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v121->fields._size = v124 + 1;
                                v122->m_Items[v124 + 1] = 0;
                              }
                              v117 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      v121,
                                                                                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v117 )
                                  {
                                    v164 = this->fields.supportMemberObjectList;
                                    if ( v164 )
                                    {
                                      v165 = *(_QWORD *)&v164->max_length;
                                      monitor = v117[1].monitor;
                                      v167 = (UserServantCollectionMaster_o *)gameObject;
                                      v168 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                                            System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                                            v79,
                                                                                            v162,
                                                                                            v163);
                                      System_Collections_Generic_List_object____ctor(
                                        v168,
                                        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor < 1 || (int)v165 < 1 )
                                      {
LABEL_193:
                                        v196 = this->fields.supportMemberBase;
                                        v197 = this->fields.supportMemberObjectList;
                                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v79);
                                        v149 = 1;
                                        v115 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v168;
                                        v147 = v197;
                                        v148 = v196;
LABEL_196:
                                        PartyOrganizationConfirmItemDraw__SetPartyIcon(v115, v147, v148, 1, v149, 0LL);
LABEL_197:
                                        this->fields.state = 1;
                                        v198 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v150, v151, v152);
                                        System_Action___ctor(
                                          v198,
                                          (Il2CppObject *)this,
                                          Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v198, 0, 0LL);
                                        return;
                                      }
                                      if ( (int)v165 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                        v171 = (unsigned int)monitor;
                                      else
                                        v171 = v165;
                                      v172 = 0LL;
                                      v173 = v171;
                                      while ( 1 )
                                      {
                                        if ( v172 >= LODWORD(v117[1].monitor) )
                                          goto LABEL_201;
                                        v174 = *((_DWORD *)&v117[2].klass + v172);
                                        if ( v174 )
                                        {
                                          gameObject = (__int64)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                  v174,
                                                  (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                            goto LABEL_204;
                                          gameObject = (__int64)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                   v174,
                                                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                          if ( Item )
                                          {
                                            v176 = (FollowerInfo_o *)Item;
                                            v177 = FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
                                            v180 = FollowerInfo__getLimitCount(v176, 0, v177, 0LL);
                                          }
                                          else
                                          {
LABEL_204:
                                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79);
                                            gameObject = NetworkManager__get_UserId(0LL);
                                            if ( !v167 )
                                              goto LABEL_200;
                                            gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                                    v167,
                                                                    gameObject,
                                                                    v174,
                                                                    0LL);
                                            if ( !gameObject )
                                              goto LABEL_200;
                                            v180 = *(_DWORD *)(gameObject + 56);
                                            v176 = 0LL;
                                          }
                                          v181 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                                      PartyOrganizationListViewItem_TypeInfo,
                                                                                      v79,
                                                                                      v178,
                                                                                      v179);
                                          PartyOrganizationListViewItem___ctor_32572836(
                                            v181,
                                            v172,
                                            v174,
                                            v180,
                                            setupInfo,
                                            questRestrictionInfo,
                                            v176,
                                            0,
                                            0LL);
                                          if ( !v168 )
                                            goto LABEL_200;
                                          v182 = v168->fields._items;
                                          this = v201;
                                          v183 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v168->fields._version;
                                          if ( !v182 )
                                            goto LABEL_200;
                                          v184 = v168->fields._size;
                                          if ( (unsigned int)v184 >= v182->max_length )
                                          {
                                            v193 = v183[4];
                                            v194 = v168;
                                            v195 = (Il2CppObject *)v181;
LABEL_191:
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v194,
                                              v195,
                                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v193 + 192) + 112LL));
                                            goto LABEL_192;
                                          }
                                          v185 = &v182->obj.klass + v184;
                                          v168->fields._size = v184 + 1;
                                          v185[4] = (Il2CppClass *)v181;
                                          v186 = (char *)(v185 + 4);
                                          v187 = v181;
                                        }
                                        else
                                        {
                                          v188 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                                      PartyOrganizationListViewItem_TypeInfo,
                                                                                      v79,
                                                                                      v169,
                                                                                      v170);
                                          PartyOrganizationListViewItem___ctor_32613444(
                                            v188,
                                            v172,
                                            1,
                                            0LL,
                                            0LL,
                                            1,
                                            0,
                                            0LL);
                                          if ( !v168 )
                                            goto LABEL_200;
                                          v189 = v168->fields._items;
                                          v190 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v168->fields._version;
                                          if ( !v189 )
                                            goto LABEL_200;
                                          v191 = v168->fields._size;
                                          if ( (unsigned int)v191 >= v189->max_length )
                                          {
                                            v193 = v190[4];
                                            v194 = v168;
                                            v195 = (Il2CppObject *)v188;
                                            goto LABEL_191;
                                          }
                                          v192 = &v189->obj.klass + v191;
                                          v168->fields._size = v191 + 1;
                                          v192[4] = (Il2CppClass *)v188;
                                          v186 = (char *)(v192 + 4);
                                          v187 = v188;
                                        }
                                        gameObject = sub_1BCA784(v186, v187);
LABEL_192:
                                        if ( v173 == ++v172 )
                                          goto LABEL_193;
                                      }
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
                          v154 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (__int64)System_String__Format(message, v154, 0LL);
                          if ( messageLabel )
                          {
                            v127 = (System_String_o *)gameObject;
                            gameObject = (__int64)messageLabel;
LABEL_136:
                            UILabel__set_text((UILabel_o *)gameObject, v127, 0LL);
                            goto LABEL_197;
                          }
                        }
                        break;
                      case 15:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10438/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_132;
                      default:
                        v128 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                        v129 = &StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_132:
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v129, 0LL);
                        if ( !v128 )
                          break;
                        UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
LABEL_134:
                        gameObject = (__int64)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v127 = message;
                        goto LABEL_136;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_200:
    sub_1BCAA3C(gameObject, v79);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog__Open_32803876(
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 gameObject; // x0
  int64_t UserId; // x1
  __int64 v92; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v94; // x23
  UILabel_o *v95; // x23
  Il2CppObject *v96; // x22
  __int64 v97; // x2
  __int64 v98; // x3
  struct PartyOrganizationConfirmItemDraw_array *v99; // x8
  __int64 v100; // x20
  __int64 v101; // x19
  __int64 v102; // x24
  System_Collections_Generic_List_object__o *v103; // x23
  unsigned int v104; // w8
  unsigned __int64 v105; // x25
  __int64 v106; // x19
  int32_t v107; // w27
  __int64 v108; // x2
  __int64 v109; // x3
  int32_t v110; // w28
  PartyOrganizationListViewItem_o *v111; // x26
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  struct UnityEngine_GameObject_o *v116; // x20
  struct PartyOrganizationConfirmItemDraw_array *v117; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v118; // x0
  bool IsMyServantOrNpcRestriction_41192312; // w0
  __int64 v120; // x1
  UILabel_o *titleLabel; // x25
  bool v122; // w24
  System_Collections_Generic_IEnumerable_T__o *v123; // x27
  __int64 v124; // x1
  bool IsSelectableNormalSupport; // w25
  __int64 v126; // x2
  __int64 v127; // x3
  _BOOL4 v128; // w19
  _BOOL4 v129; // w20
  System_Collections_Generic_List_int__o *v130; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v132; // x9
  __int64 size; // x10
  int v134; // w19
  UILabel_o *v135; // x20
  __int64 *v136; // x8
  UILabel_o *v137; // x23
  __int64 v138; // x2
  __int64 v139; // x3
  struct PartyOrganizationConfirmItemDraw_array *v140; // x8
  QuestRestrictionInfo_o *v141; // x27
  int max_length; // w21
  int v143; // w20
  __int64 v144; // x23
  System_Collections_Generic_List_object__o *v145; // x22
  __int64 v146; // x2
  __int64 v147; // x3
  int32_t v148; // w24
  FollowerInfo_o *v149; // x26
  PartyOrganizationListViewItem_o *v150; // x25
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  System_String_o *v155; // x1
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  System_Collections_Generic_List_int__o *v164; // x23
  int32_t v165; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v168; // x0
  __int64 v169; // x23
  __int64 v170; // x2
  __int64 v171; // x3
  struct PartyOrganizationConfirmItemDraw_array *v172; // x8
  __int64 v173; // x19
  __int64 v174; // x8
  unsigned __int64 v175; // x24
  int32_t v176; // w25
  __int64 v177; // x1
  Il2CppObject *MasterData_object; // x26
  __int64 v179; // x2
  __int64 v180; // x3
  int32_t v181; // w27
  PartyOrganizationListViewItem_o *v182; // x26
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  Il2CppClass **v186; // x0
  PartyOrganizationConfirmItemDraw_array *v187; // x1
  UnityEngine_GameObject_o *v188; // x2
  bool v189; // w4
  System_Action_o *v190; // x20
  int32_t i; // w20
  QuestRestrictionInfo_o *v192; // x0
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v194; // x0
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  Il2CppClass **v198; // x0
  System_String_o *v199; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  __int64 v202; // x2
  __int64 v203; // x3
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v205; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v207; // x22
  __int64 v208; // x2
  __int64 v209; // x3
  unsigned int v210; // w8
  unsigned __int64 v211; // x25
  System_Collections_Generic_IEnumerable_T__o *v212; // x23
  __int64 v213; // x24
  System_Collections_Generic_IEnumerable_T__o *v214; // x20
  int32_t v215; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v217; // x28
  PartyOrganizationRestrictionHelpDialog_o *v218; // x19
  int32_t ReturnTypeByQuestId; // w0
  __int64 v220; // x2
  __int64 v221; // x3
  int32_t LimitCount; // w29
  PartyOrganizationListViewItem_o *v223; // x27
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  Il2CppClass **v227; // x0
  PartyOrganizationListViewItem_o *v228; // x26
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  Il2CppClass **v232; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v234; // x21
  UserServantCollectionMaster_o *v235; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B120C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, *(_QWORD *)&slotNo);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v24, v25);
    sub_1BCA7E0(&DataManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v30, v31);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v32, v33);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v34, v35);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v58, v59);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v60, v61);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v62, v63);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v64, v65);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v66, v67);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v68, v69);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v70, v71);
    sub_1BCA7E0(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v72, v73);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v74, v75);
    sub_1BCA7E0(&StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_10431/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_10430/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_10439/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_10435/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v88, v89);
    byte_4B120C7 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_200;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_200;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (__int64)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_200;
        IsMyServantOrNpcRestriction_41192312 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v122 = IsMyServantOrNpcRestriction_41192312;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v120);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_200;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v122 )
        {
          gameObject = (__int64)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v123 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v124);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0LL);
              if ( !IsSelectableNormalSupport )
                goto LABEL_161;
              if ( !entity )
                goto LABEL_159;
              v128 = entity != 0LL;
              v129 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_159;
              v130 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 UserId,
                                                                 v126,
                                                                 v127);
              System_Collections_Generic_List_int____ctor_56116492(
                v130,
                v123,
                (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
              if ( !v130 )
                goto LABEL_200;
              items = v130->fields._items;
              v132 = Method_System_Collections_Generic_List_int__Add__;
              ++v130->fields._version;
              if ( !items )
                goto LABEL_200;
              size = v130->fields._size;
              v134 = v129 && v128;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v130,
                  0,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
              }
              else
              {
                v130->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v123 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                      v130,
                                                                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v134 )
              {
LABEL_159:
                gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_200;
                v199 = message;
              }
              else
              {
LABEL_161:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0LL);
                gameObject = (__int64)System_String__Format(message, DialogTargetName, 0LL);
                if ( !messageDeckLabel )
                  goto LABEL_200;
                v199 = (System_String_o *)gameObject;
                gameObject = (__int64)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v199, 0LL);
              gameObject = (__int64)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v123 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v235 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v205 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v123[1].monitor;
                      v207 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                            System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                            UserId,
                                                                            v202,
                                                                            v203);
                      System_Collections_Generic_List_object____ctor(
                        v207,
                        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v205 >= 1 )
                      {
                        if ( (int)v205 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v210 = (unsigned int)monitor;
                        else
                          v210 = v205;
                        v211 = 0LL;
                        v212 = v123 + 2;
                        v213 = v210;
                        v214 = v123;
                        while ( v211 < LODWORD(v123[1].monitor) )
                        {
                          v215 = *((_DWORD *)&v212->klass + v211);
                          if ( v215 )
                          {
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v215,
                                    (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_204;
                            gameObject = (__int64)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v215,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v217 = (FollowerInfo_o *)Item;
                              v218 = this;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                              LimitCount = FollowerInfo__getLimitCount(v217, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_204:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, UserId);
                              UserId = NetworkManager__get_UserId(0LL);
                              gameObject = (__int64)v235;
                              if ( !v235 )
                                goto LABEL_200;
                              v218 = this;
                              gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v235,
                                                      UserId,
                                                      v215,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_200;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v217 = 0LL;
                            }
                            v223 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                        UserId,
                                                                        v220,
                                                                        v221);
                            PartyOrganizationListViewItem___ctor_32572836(
                              v223,
                              v211,
                              v215,
                              LimitCount,
                              setupInfo,
                              questRestrictionInfo,
                              v217,
                              0,
                              0LL);
                            if ( !v207 )
                              goto LABEL_200;
                            v224 = v207->fields._items;
                            v225 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v207->fields._version;
                            if ( !v224 )
                              goto LABEL_200;
                            v226 = v207->fields._size;
                            this = v218;
                            if ( (unsigned int)v226 >= v224->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v207,
                                (Il2CppObject *)v223,
                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v227 = &v224->obj.klass + v226;
                              v207->fields._size = v226 + 1;
                              v227[4] = (Il2CppClass *)v223;
                              gameObject = sub_1BCA784(v227 + 4, v223);
                            }
                            v123 = v214;
                          }
                          else
                          {
                            v228 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                        UserId,
                                                                        v208,
                                                                        v209);
                            PartyOrganizationListViewItem___ctor_32613444(v228, v211, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v207 )
                              goto LABEL_200;
                            v229 = v207->fields._items;
                            v230 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v207->fields._version;
                            if ( !v229 )
                              goto LABEL_200;
                            v231 = v207->fields._size;
                            if ( (unsigned int)v231 >= v229->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v207,
                                (Il2CppObject *)v228,
                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v232 = &v229->obj.klass + v231;
                              v207->fields._size = v231 + 1;
                              v232[4] = (Il2CppClass *)v228;
                              gameObject = sub_1BCA784(v232 + 4, v228);
                            }
                          }
                          if ( v213 == ++v211 )
                            goto LABEL_197;
                        }
                        goto LABEL_201;
                      }
LABEL_197:
                      supportMemberBase = this->fields.supportMemberBase;
                      v234 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, UserId);
                      v189 = 1;
                      v118 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v207;
                      v187 = v234;
                      v188 = supportMemberBase;
                      goto LABEL_138;
                    }
                  }
                }
              }
            }
LABEL_200:
            sub_1BCAA3C(gameObject, UserId);
          }
          v192 = questRestrictionInfo;
          messageLabel = this->fields.messageLabel;
          v194 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v192, slotNo, 0LL);
          gameObject = (__int64)System_String__Format(message, v194, 0LL);
          if ( !messageLabel )
            goto LABEL_200;
          v155 = (System_String_o *)gameObject;
          gameObject = (__int64)messageLabel;
LABEL_101:
          UILabel__set_text((UILabel_o *)gameObject, v155, 0LL);
LABEL_139:
          this->fields.state = 1;
          v190 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v156, v157, v158);
          System_Action___ctor(v190, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v190, 0, 0LL);
          return;
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v164 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v161,
                                                           v162,
                                                           v163);
        System_Collections_Generic_List_int____ctor(
          v164,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_200;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v165 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v165 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v165,
                             (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (__int64)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v165,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v164 )
                  goto LABEL_200;
                System_Collections_Generic_List_int___AddRange(
                  v164,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v165 >= NeedIndividualityList->fields._size )
              goto LABEL_111;
          }
          goto LABEL_200;
        }
LABEL_111:
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_200;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v167 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v164,
                 (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
        v168 = System_Linq_Enumerable__Intersect_int_(
                 v167,
                 CollectionList,
                 (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (__int64)System_Linq_Enumerable__ToArray_int_(
                                v168,
                                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_200;
        v169 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_99:
          gameObject = (__int64)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_200;
          v155 = message;
          goto LABEL_101;
        }
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v172 = this->fields.supportMemberObjectList;
        if ( !v172 )
          goto LABEL_200;
        v173 = *(_QWORD *)&v172->max_length;
        v145 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                              UserId,
                                                              v170,
                                                              v171);
        System_Collections_Generic_List_object____ctor(
          v145,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v173 < 1 )
          goto LABEL_134;
        v174 = *(_QWORD *)(v169 + 24);
        if ( (int)v174 < 1 )
          goto LABEL_134;
        v175 = 0LL;
        while ( v175 < (unsigned int)v174 )
        {
          v176 = *(_DWORD *)(v169 + 32 + 4 * v175);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_200;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v177);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_200;
          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  gameObject,
                                  v176,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v181 = *(_DWORD *)(gameObject + 56);
          v182 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      UserId,
                                                      v179,
                                                      v180);
          PartyOrganizationListViewItem___ctor_32572836(
            v182,
            v175,
            v176,
            v181,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v145 )
            goto LABEL_200;
          v183 = v145->fields._items;
          v184 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v145->fields._version;
          if ( !v183 )
            goto LABEL_200;
          v185 = v145->fields._size;
          if ( (unsigned int)v185 >= v183->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v145,
              (Il2CppObject *)v182,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
          }
          else
          {
            v186 = &v183->obj.klass + v185;
            v145->fields._size = v185 + 1;
            v186[4] = (Il2CppClass *)v182;
            gameObject = sub_1BCA784(v186 + 4, v182);
          }
          if ( (__int64)++v175 < (int)v173 )
          {
            LODWORD(v174) = *(_DWORD *)(v169 + 24);
            if ( (__int64)v175 < (int)v174 )
              continue;
          }
          goto LABEL_134;
        }
        goto LABEL_201;
      case 3:
        v135 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
        v136 = &StringLiteral_10435/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_97;
      case 4:
      case 5:
        v94 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v94 )
          goto LABEL_200;
        UILabel__set_text(v94, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_200;
        gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_99;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_201;
        v95 = this->fields.messageDeckLabel;
        gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v95 )
          goto LABEL_200;
        UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        v96 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_200;
        v99 = this->fields.supportMemberObjectList;
        if ( !v99 )
          goto LABEL_200;
        v100 = *(_QWORD *)&v99->max_length;
        v101 = *(_QWORD *)(gameObject + 24);
        v102 = gameObject;
        v103 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                              UserId,
                                                              v97,
                                                              v98);
        System_Collections_Generic_List_object____ctor(
          v103,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v101 < 1 || (int)v100 < 1 )
          goto LABEL_43;
        if ( (int)v100 - 1 >= (unsigned int)(v101 - 1) )
          v104 = v101;
        else
          v104 = v100;
        v105 = 0LL;
        v106 = v104;
        do
        {
          if ( v105 >= *(unsigned int *)(v102 + 24) )
            goto LABEL_201;
          v107 = *(_DWORD *)(v102 + 32 + 4 * v105);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, UserId);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v96 )
            goto LABEL_200;
          gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v96,
                                  gameObject,
                                  v107,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v110 = *(_DWORD *)(gameObject + 56);
          v111 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      UserId,
                                                      v108,
                                                      v109);
          PartyOrganizationListViewItem___ctor_32572836(
            v111,
            v105,
            v107,
            v110,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v103 )
            goto LABEL_200;
          v112 = v103->fields._items;
          v113 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v103->fields._version;
          if ( !v112 )
            goto LABEL_200;
          v114 = v103->fields._size;
          if ( (unsigned int)v114 >= v112->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v103,
              (Il2CppObject *)v111,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
          }
          else
          {
            v115 = &v112->obj.klass + v114;
            v103->fields._size = v114 + 1;
            v115[4] = (Il2CppClass *)v111;
            gameObject = sub_1BCA784(v115 + 4, v111);
          }
          ++v105;
        }
        while ( v106 != v105 );
LABEL_43:
        v116 = this->fields.supportMemberBase;
        v117 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, UserId);
        v118 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v103;
        goto LABEL_137;
      case 6:
        v137 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v137 )
          goto LABEL_200;
        UILabel__set_text(v137, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_200;
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                (NpcFollowerMaster_o *)gameObject,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0LL);
        if ( !gameObject )
          goto LABEL_200;
        v140 = this->fields.supportMemberObjectList;
        if ( !v140 )
          goto LABEL_200;
        v141 = questRestrictionInfo;
        max_length = v140->max_length;
        v143 = *(_DWORD *)(gameObject + 24);
        v144 = gameObject;
        v145 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                              UserId,
                                                              v138,
                                                              v139);
        System_Collections_Generic_List_object____ctor(
          v145,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v143 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, UserId);
              gameObject = (__int64)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
              goto LABEL_134;
            if ( !partyItem )
              goto LABEL_200;
            gameObject = (__int64)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_200;
            UserId = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v145 )
            goto LABEL_200;
          v195 = v145->fields._items;
          v196 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v145->fields._version;
          if ( !v195 )
            goto LABEL_200;
          v197 = v145->fields._size;
          if ( (unsigned int)v197 >= v195->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v145,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
          }
          else
          {
            v198 = &v195->obj.klass + v197;
            v145->fields._size = v197 + 1;
            v198[4] = (Il2CppClass *)UserId;
            sub_1BCA784(v198 + 4, UserId);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v143 - 1) )
            v143 = max_length;
          v148 = 0;
          while ( (unsigned int)v148 < *(_DWORD *)(v144 + 24) )
          {
            v149 = *(FollowerInfo_o **)(v144 + 8LL * v148 + 32);
            if ( !v149 )
              goto LABEL_200;
            if ( !v149->fields.isMySvtOrNpc )
            {
              v150 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          UserId,
                                                          v146,
                                                          v147);
              PartyOrganizationListViewItem___ctor_32576596(v150, v148, v149, 0, setupInfo, v141, 0LL, 0, 0, 0, 0LL);
              if ( !v145 )
                goto LABEL_200;
              v151 = v145->fields._items;
              v152 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v145->fields._version;
              if ( !v151 )
                goto LABEL_200;
              v153 = v145->fields._size;
              if ( (unsigned int)v153 >= v151->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v145,
                  (Il2CppObject *)v150,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
              }
              else
              {
                v154 = &v151->obj.klass + v153;
                v145->fields._size = v153 + 1;
                v154[4] = (Il2CppClass *)v150;
                gameObject = sub_1BCA784(v154 + 4, v150);
              }
            }
            if ( v143 == ++v148 )
              goto LABEL_134;
          }
LABEL_201:
          sub_1BCAA44(gameObject, UserId);
        }
LABEL_134:
        v116 = this->fields.supportMemberBase;
        v117 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, UserId);
        v118 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v145;
LABEL_137:
        v187 = v117;
        v188 = v116;
        v189 = 0;
LABEL_138:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v118, v187, v188, 1, v189, 0LL);
        goto LABEL_139;
      case 9:
        v135 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
        v136 = &StringLiteral_10439/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_97;
      default:
        v135 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
        v136 = &StringLiteral_10436/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_97:
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v136, 0LL);
        if ( !v135 )
          goto LABEL_200;
        UILabel__set_text(v135, (System_String_o *)gameObject, 0LL);
        goto LABEL_99;
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

  if ( (byte_4B120C3 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B120C3 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B120C4 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B120C4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A076C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07680;
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
  if ( (byte_4B120CB & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B120CB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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