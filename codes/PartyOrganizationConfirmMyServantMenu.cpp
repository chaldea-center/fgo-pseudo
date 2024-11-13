void __fastcall PartyOrganizationConfirmMyServantMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11F2A & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v1, v2);
    byte_4B11F2A = 1;
  }
  LODWORD(PartyOrganizationConfirmMyServantMenu_TypeInfo->static_fields->MESSAGE_POS_Y_DEFAULT) = (struct PartyOrganizationConfirmMyServantMenu_StaticFields)1118437376;
}


void __fastcall PartyOrganizationConfirmMyServantMenu___ctor(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11F29 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11F29 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
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

  PartyOrganizationConfirmMyServantMenu__Close_32573472(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__Close_32573472(
        PartyOrganizationConfirmMyServantMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11F25 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmMyServantMenu_EndClose__, v5, v6);
    byte_4B11F25 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmMyServantMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11F23 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F23 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickCancel(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__, method, v2);
    byte_4B11F27 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmMyServantMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickClose(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__, method, v2);
    byte_4B11F28 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmMyServantMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationConfirmMyServantMenu__OnClickDecide(
        PartyOrganizationConfirmMyServantMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__, method, v2);
    byte_4B11F26 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmMyServantMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationConfirmMyServantMenu__Callback(this, 1, v6);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 gameObject; // x0
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Text_StringBuilder_o *v78; // x24
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  System_Int32_array *v80; // x29
  UnityEngine_GameObject_o *v81; // x0
  __int64 v82; // x1
  PartyOrganizationConfirmMyServantMenu_c *v83; // x8
  UnityEngine_GameObject_o *v84; // x19
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x8
  unsigned __int64 v88; // x21
  int32_t v89; // w19
  System_Collections_Generic_List_object__o *v90; // x25
  const MethodInfo *v91; // x5
  __int64 v92; // x19
  Il2CppObject *MasterData_object; // x21
  __int64 v94; // x27
  unsigned __int64 v95; // x28
  int32_t v96; // w29
  __int64 v97; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  __int64 v99; // x2
  __int64 v100; // x3
  int v101; // w23
  int v102; // w8
  int32_t maxLimitCount; // w19
  unsigned int v104; // w24
  FollowerInfo_o *v105; // x21
  __int64 v106; // x22
  __int64 v107; // x26
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v109; // x21
  const MethodInfo *v110; // x1
  System_String_o *SvtNameText; // x0
  System_String_o *v112; // x0
  struct System_Object_array *items; // x8
  _QWORD *v114; // x9
  __int64 size; // x10
  Il2CppClass **v116; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x19
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x21
  __int64 v119; // x2
  __int64 v120; // x3
  Il2CppObject *v121; // x22
  UILabel_o *titleLabel; // x19
  UILabel_o *messageLabel; // x19
  System_String_o *v124; // x0
  UILabel_o *closeLabel; // x19
  __int64 *v126; // x8
  _BOOL4 isFixedMyServantPosition; // w23
  UILabel_o *v128; // x19
  __int64 v129; // x1
  UILabel_o *v130; // x19
  System_String_o *v131; // x0
  UnityEngine_GameObject_o *v132; // x0
  __int64 v133; // x1
  UILabel_o *v134; // x19
  System_String_o *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x1
  System_Action_o *v138; // x19
  const MethodInfo *v139; // [xsp+0h] [xbp-B0h]
  unsigned int v140; // [xsp+10h] [xbp-A0h]
  int v141; // [xsp+14h] [xbp-9Ch]
  PartyOrganizationConfirmMyServantMenu_o *v142; // [xsp+18h] [xbp-98h]
  System_Text_StringBuilder_o *v143; // [xsp+20h] [xbp-90h]
  __int64 v144; // [xsp+28h] [xbp-88h]
  Il2CppObject *v145; // [xsp+30h] [xbp-80h]
  System_Int32_array *v146; // [xsp+38h] [xbp-78h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  if ( (byte_4B11F24 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, partyItem);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&OptionManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmMyServantMenu_EndOpen__, v37, v38);
    sub_1BCA7E0(&PartyOrganizationConfirmMyServantMenu_TypeInfo, v39, v40);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_10351/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_10356/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_10349/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_10352/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_10355/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_10353/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_10357/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_10350/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_10301/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_10354/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, v71, v72);
    byte_4B11F24 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v78 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v75, v76, v77);
    System_Text_StringBuilder___ctor(v78, 0LL);
    if ( kind )
    {
      if ( kind != 1 )
      {
        v80 = 0LL;
LABEL_13:
        gameObject = (__int64)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_124;
        v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        v83 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        v84 = v81;
        if ( !PartyOrganizationConfirmMyServantMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMyServantMenu_TypeInfo, v82);
          v83 = PartyOrganizationConfirmMyServantMenu_TypeInfo;
        }
        v142 = this;
        GameObjectExtensions__SetLocalPositionY(v84, v83->static_fields->MESSAGE_POS_Y_DEFAULT, 0LL);
        v143 = v78;
        v140 = kind;
        if ( v80 && (v87 = *(_QWORD *)&v80->max_length, (int)v87 >= 1) )
        {
          v88 = 0LL;
          while ( 1 )
          {
            if ( v88 >= (unsigned int)v87 )
              goto LABEL_125;
            v89 = v80->m_Items[v88 + 1];
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74);
            gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !gameObject )
              goto LABEL_124;
            gameObject = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           &entity,
                           v89,
                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (gameObject & 1) == 0 )
              break;
            LODWORD(v87) = v80->max_length;
            if ( (__int64)++v88 >= (int)v87 )
              goto LABEL_25;
          }
          gameObject = (__int64)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_124;
          v132 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v132, 0.0, 0LL);
          v141 = 0;
        }
        else
        {
LABEL_25:
          v141 = 1;
        }
        v90 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                             v74,
                                                             v85,
                                                             v86);
        System_Collections_Generic_List_object____ctor(
          v90,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v80 && v141 )
        {
          v92 = *(_QWORD *)&v80->max_length;
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          if ( !questRestrictionInfo || !gameObject )
            goto LABEL_124;
          gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                  (NpcFollowerMaster_o *)gameObject,
                                  questRestrictionInfo->fields.questId,
                                  questRestrictionInfo->fields.questPhase,
                                  0LL);
          if ( (int)v92 >= 1 )
          {
            v94 = gameObject;
            v95 = 0LL;
            v144 = (unsigned int)v92;
            v145 = MasterData_object;
            v146 = v80;
            while ( v95 < v80->max_length )
            {
              v96 = v80->m_Items[v95 + 1];
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v74);
              gameObject = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_124;
              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                   (UserServantCollectionMaster_o *)MasterData_object,
                                   gameObject,
                                   v96,
                                   0LL);
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v97);
              gameObject = OptionManager__GetSpoilerSetting(0LL);
              if ( (gameObject & 1) != 0 )
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                v101 = -1;
              }
              else
              {
                if ( !EntityDefinitely )
                  goto LABEL_124;
                gameObject = UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
                v101 = (gameObject & 1) != 0 ? EntityDefinitely->fields.maxLimitCount : 0;
              }
              if ( !v94 )
                goto LABEL_124;
              v102 = *(_DWORD *)(v94 + 24);
              maxLimitCount = EntityDefinitely->fields.maxLimitCount;
              if ( v102 >= 1 )
              {
                v104 = 0;
                while ( 1 )
                {
                  if ( v104 >= v102 )
                    goto LABEL_125;
                  v105 = *(FollowerInfo_o **)(v94 + 8LL * (int)v104 + 32);
                  gameObject = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                  if ( !v105 )
                    goto LABEL_124;
                  gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v105, 0, gameObject, 0LL);
                  if ( gameObject )
                  {
                    v107 = *(_QWORD *)(gameObject + 48);
                    v106 = *(_QWORD *)(gameObject + 56);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v74);
                    *(_QWORD *)&v149.fields.currentCryptoKey = v107;
                    *(_QWORD *)&v149.fields.fakeValue = v106;
                    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v149, 0LL);
                    if ( (_DWORD)gameObject == v96 )
                      break;
                  }
                  v102 = *(_DWORD *)(v94 + 24);
                  if ( (int)++v104 >= v102 )
                    goto LABEL_59;
                }
                ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                maxLimitCount = FollowerInfo__getLimitCount(v105, 0, ReturnTypeByQuestId, 0LL);
LABEL_59:
                v78 = v143;
              }
              v109 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          v74,
                                                          v99,
                                                          v100);
              PartyOrganizationListViewItem___ctor_32572836(
                v109,
                v95,
                v96,
                maxLimitCount,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v139);
              if ( !v109 )
                goto LABEL_124;
              v80 = v146;
              v109->fields.nameLimitCount = v101;
              if ( v95 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
                gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_SPLIT"*/, 0LL);
                if ( !v78 )
                  goto LABEL_124;
                System_Text_StringBuilder__Append_61563116(v78, (System_String_o *)gameObject, 0LL);
                System_Text_StringBuilder__Append_61563116(v78, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
              gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10301/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_START"*/, 0LL);
              if ( !v78 )
                goto LABEL_124;
              System_Text_StringBuilder__Append_61563116(v78, (System_String_o *)gameObject, 0LL);
              SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v109, v110);
              System_Text_StringBuilder__Append_61563116(v78, SvtNameText, 0LL);
              v112 = LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_FIXED_MY_SERVANT_POSITION_RESTRICTION_END"*/, 0LL);
              gameObject = (__int64)System_Text_StringBuilder__Append_61563116(v78, v112, 0LL);
              if ( !v90 )
                goto LABEL_124;
              items = v90->fields._items;
              v114 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v90->fields._version;
              if ( !items )
                goto LABEL_124;
              size = v90->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v90,
                  (Il2CppObject *)v109,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
              }
              else
              {
                v116 = &items->obj.klass + size;
                v90->fields._size = size + 1;
                v116[4] = (Il2CppClass *)v109;
                gameObject = sub_1BCA784(v116 + 4, v109);
              }
              MasterData_object = v145;
              if ( ++v95 == v144 )
                goto LABEL_75;
            }
LABEL_125:
            sub_1BCAA44(gameObject, v74);
          }
        }
LABEL_75:
        supportMemberBase = v142->fields.supportMemberBase;
        memberObjectList = v142->fields.memberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v74);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v90,
          memberObjectList,
          supportMemberBase,
          0,
          0,
          v91);
        if ( v140 <= 1 )
        {
          gameObject = (__int64)v142->fields.decideButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v142->fields.cancelButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (__int64)v142->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)v142->fields.closeButton;
          if ( !gameObject )
            goto LABEL_124;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
            gameObject,
            0LL,
            1LL,
            *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        }
        gameObject = (__int64)v143;
        if ( !v143 )
          goto LABEL_124;
        gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v143->klass->vtable._3_ToString.method)(
                       v143,
                       v143->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v121 = (Il2CppObject *)gameObject;
        if ( v140 )
        {
          if ( v140 != 1 )
          {
LABEL_122:
            v142->fields.state = 1;
            v138 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v119, v120);
            System_Action___ctor(
              v138,
              (Il2CppObject *)v142,
              Method_PartyOrganizationConfirmMyServantMenu_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)v142, v138, 0, 0LL);
            return;
          }
          titleLabel = v142->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10354/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_TITLE"*/, 0LL);
          if ( !titleLabel
            || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
                messageLabel = v142->fields.messageLabel,
                v124 = LocalizationManager__Get((System_String_o *)StringLiteral_10353/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_MESSAGE"*/, 0LL),
                gameObject = (__int64)System_String__Format(v124, v121, 0LL),
                !messageLabel) )
          {
LABEL_124:
            sub_1BCAA3C(gameObject, v74);
          }
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          closeLabel = v142->fields.closeLabel;
          v126 = &StringLiteral_10352/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_SINGLE_RESTRICTION_CLOSE"*/;
LABEL_120:
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v126, 0LL);
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
        v128 = v142->fields.titleLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( questRestrictionInfo->fields.isFixedMyServantPosition )
          {
LABEL_97:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10351/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
            if ( !v128 )
              goto LABEL_124;
            UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
            v130 = v142->fields.messageLabel;
            if ( v141 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v129);
              v131 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
              gameObject = (__int64)System_String__Format(v131, v121, 0LL);
              if ( !v130 )
                goto LABEL_124;
            }
            else
            {
              gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageMySvtPos(questRestrictionInfo, 0LL);
              if ( !v130 )
                goto LABEL_124;
            }
            UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
            closeLabel = v142->fields.closeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v136);
            v126 = &StringLiteral_10349/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_MY_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
            goto LABEL_120;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
          if ( isFixedMyServantPosition )
            goto LABEL_97;
        }
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10357/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_TITLE"*/, 0LL);
        if ( !v128 )
          goto LABEL_124;
        UILabel__set_text(v128, (System_String_o *)gameObject, 0LL);
        v134 = v142->fields.messageLabel;
        if ( v141 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
          v135 = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
          gameObject = (__int64)System_String__Format(v135, v121, 0LL);
          if ( !v134 )
            goto LABEL_124;
        }
        else
        {
          gameObject = (__int64)QuestRestrictionInfo__GetDialogMessageSvtPos(questRestrictionInfo, 0LL);
          if ( !v134 )
            goto LABEL_124;
        }
        UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
        closeLabel = v142->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137);
        v126 = &StringLiteral_10355/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SERVANT_POSITION_RESTRICTION_CLOSE"*/;
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
    v80 = FixedMyServantSingleSvtIdList;
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

  if ( (byte_4B11F21 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11F21 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11F22 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11F22 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMyServantMenu_o *)sub_1BCACFC(v8);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07360;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07318;
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
  if ( (byte_4B11F2B & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11F2B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMyServantMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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