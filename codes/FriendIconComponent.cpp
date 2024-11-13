void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SkillIconComponent_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UIIconLabel_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UnityEngine_GameObject_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct SkillIconComponent_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UIIconLabel_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B156A0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&UIIconLabel___TypeInfo, v8, v9);
    byte_4B156A0 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v10->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillLevelIconLabelList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v32;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillBaseList,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillIconList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v46;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillLevelIconLabelList,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  UnityEngine_Object_o *skillIconSprite; // x20
  __int64 v28; // x1
  UISprite_o *v29; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  __int64 v31; // x1
  UISprite_o *v32; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  __int64 v34; // x1
  UISprite_o *v35; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  __int64 v37; // x1
  UISprite_o *v38; // x19

  if ( (byte_4B15693 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20392/*"icon_skill_mini"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20539/*"img_friend_skill"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20291/*"icon_append_mini"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20538/*"img_friend_appendskill"*/, v17, v18);
    byte_4B15693 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v29 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_20392/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v32 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_20539/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v35 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
    AtlasManager__SetEventSprite(v35, (System_String_o *)StringLiteral_20291/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v38 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
    AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_20538/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1569F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1569F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndCloseShowServantEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServant(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B15697 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B15697 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1569B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1569B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


int32_t __fastcall FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *userGameEntity; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8

  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_7;
  if ( this->fields.displayServantType )
  {
    eventSupportDeckIds = userGameEntity->fields.eventSupportDeckIds;
    if ( eventSupportDeckIds )
      goto LABEL_4;
LABEL_7:
    sub_1BCAA3C(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1BCAA44(this, method);
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v14; // x20
  Il2CppObject *Instance; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantStatusDialog_EndDelegate_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4B15696 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendIconComponent_EndShowServant__, v4, v5);
    sub_1BCA7E0(&Method_FriendIconComponent_OnClickServantStatus__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B15696 = 1;
  }
  v10 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OnClickServantStatus__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      v14 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v16, v17, v18);
      ServantStatusDialog_EndDelegate___ctor(
        v19,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1BCAA3C(v20, v21);
      CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)Instance, 5, v14, v19, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportClassBoardBuff(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v26; // x20
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *Master_object; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x20
  Il2CppObject *Entity; // x0
  __int64 v36; // x1
  int32_t klass; // w22
  __int64 v38; // x2
  __int64 v39; // x3
  struct OtherUserGameEntity_o *v40; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v43; // w20
  unsigned int v44; // w24
  __int64 v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  long double inited; // q0
  _QWORD *v53; // x22
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  int64_t *v57; // x8
  int64_t v58; // x1
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  long double v66; // q0
  _QWORD *v67; // x22
  __int64 v68; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  int64_t *v71; // x8
  int64_t v72; // x1
  Il2CppObject *Instance; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B1569E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Array_Empty_int___, v4, v5);
    sub_1BCA7E0(&ClassBoardInfo_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v16, v17);
    sub_1BCA7E0(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23);
    byte_4B1569E = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      v26 = ServantLeaderInfo;
      v27 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      v33 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
      *(_QWORD *)&v78.fields.currentCryptoKey = v33;
      *(_QWORD *)&v78.fields.fakeValue = v32;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
      if ( !v34 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v34,
                 (int32_t)Entity,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_44;
      Entity = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, klass, 0LL);
      v40 = this->fields.userGameEntity;
      if ( !v40 )
        goto LABEL_44;
      userClassBoardInfo = v40->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_44;
      max_length = userClassBoardInfo->max_length;
      v43 = (int)Entity;
      if ( max_length >= 1 )
      {
        v44 = 0;
        do
        {
          if ( v44 >= max_length )
            sub_1BCAA44(Entity, v36);
          v45 = (__int64)userClassBoardInfo->m_Items[v44];
          if ( !v45 )
            goto LABEL_44;
          if ( *(_DWORD *)(v45 + 16) == v43 )
          {
            Entity = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v45, klass, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_41;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v44 < max_length );
      }
      v45 = sub_1BCAA2C(ClassBoardInfo_TypeInfo, v36, v38, v39);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v45, 0LL);
      if ( !v45 )
        goto LABEL_44;
      *(_DWORD *)(v45 + 16) = v43;
      v53 = Method_System_Array_Empty_int___;
      v54 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v54 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v36);
        v54 = v53[7];
      }
      v55 = *(_QWORD *)(v54 + 16);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v55 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v55, v36);
      v56 = *(_QWORD *)(v53[7] + 16LL);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C1C6BC(inited);
      v57 = *(int64_t **)(v56 + 184);
      v58 = *v57;
      *(_QWORD *)(v45 + 24) = *v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 24), v58, v46, v47, v48, v49, v50, v51);
      v67 = Method_System_Array_Empty_int___;
      v68 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v68 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v59);
        v68 = v67[7];
      }
      v69 = *(_QWORD *)(v68 + 16);
      if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
        v69 = sub_1C1C6BC(v66);
      if ( !*(_DWORD *)(v69 + 224) )
        v66 = j_il2cpp_runtime_class_init_0(v69, v59);
      v70 = *(_QWORD *)(v67[7] + 16LL);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1C1C6BC(v66);
      v71 = *(int64_t **)(v70 + 184);
      v72 = *v71;
      *(_QWORD *)(v45 + 32) = *v71;
      sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 32), v72, v60, v61, v62, v63, v64, v65);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
      System_Action___ctor(
        v77,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1BCAA3C(Entity, v36);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v43, 0, v77, 1, (ClassBoardInfo_o *)v45, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  OtherUserGameEntity_o *userGameEntity; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  SupportInfoJump_o *v14; // x19
  Il2CppObject *Instance; // x0
  __int64 v16; // x1

  if ( (byte_4B15699 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendIconComponent_OnClickSupportInfo__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v6, v7);
    byte_4B15699 = 1;
  }
  v8 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OnClickSupportInfo__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v14 = (SupportInfoJump_o *)sub_1BCAA2C(SupportInfoJump_TypeInfo, v11, v12, v13);
  SupportInfoJump___ctor(v14, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v14, 0LL);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 0, v2);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 1, v2);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 2, v2);
}


void __fastcall FriendIconComponent__OnLongPushEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v8; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  __int64 v10; // x1
  EquipTargetInfo_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t followerType; // w8
  int32_t v18; // w2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1569C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendIconComponent_OnLongPushEquip__, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B1569C = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_25;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  v8 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1BCAA3C(userGameEntity, method);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v11 = EquipInfo;
    v13 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v21.fields.currentCryptoKey = v13;
    *(_QWORD *)&v21.fields.fakeValue = v12;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL) >= 1 )
    {
      v14 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OnLongPushEquip__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v18 = 14;
      else
        v18 = 13;
      if ( v8 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v8, 0LL) )
          v18 = 19;
        else
          v18 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v11, v18, v16);
      return;
    }
  }
LABEL_22:
  v19 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OnLongPushEquip__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
}


void __fastcall FriendIconComponent__OnLongPushSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 0, v2);
}


void __fastcall FriendIconComponent__OnLongPushSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 1, v2);
}


void __fastcall FriendIconComponent__OnLongPushSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OpenAppendSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v26; // x1
  SkillInfo_o *v27; // x21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  System_String_o *v32; // x19
  System_String_o *v33; // x20
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1569D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B1569D = 1;
  }
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      if ( ServantLeaderInfo->fields.userSvtId )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1BCAA44(Master_object, v26);
        v27 = skillInfoList->m_Items[skillIndex];
        if ( v27 && v27->fields.id >= 1 && v27->fields.lv >= 1 )
        {
          v28 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v27->fields.id,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v27->fields.lv, 0LL);
              v32 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v27->fields.lv;
              v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v35 = System_String__Format(v33, v34, 0LL);
              name = System_String__Concat_62412480(v32, (System_String_o *)StringLiteral_116/*" "*/, v35, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( Master_object )
              {
                CommonUI__OpenDetailLongInfoDialog(
                  (CommonUI_o *)Master_object,
                  name,
                  (System_String_o *)StringLiteral_1/*""*/,
                  detail,
                  1,
                  0,
                  0LL);
                return;
              }
            }
          }
LABEL_25:
          sub_1BCAA3C(Master_object, v26);
        }
      }
    }
  }
  v36 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v27; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  il2cpp_array_size_t max_length; // w9
  SkillInfo_o *v33; // x22
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v37; // x19
  __int64 v38; // x1
  System_String_o *v39; // x20
  System_String_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x19
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B15698 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_FriendIconComponent_OpenSkillInfoDialog__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v23, v24);
    byte_4B15698 = 1;
  }
  skillInfoList = 0LL;
  detail = 0LL;
  name = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_25;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  if ( !ServantLeaderInfo )
    goto LABEL_25;
  v27 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_25;
  v28 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v27, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1BCAA44(v30, v31);
  v33 = skillInfoList->m_Items[skillIndex];
  if ( v33 && v33->fields.id >= 1 && v33->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v33->fields.id,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v33->fields.id,
                                  v33->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v37 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v33->fields.lv, 0LL);
    v39 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v33->fields.lv;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v42 = System_String__Format(v40, v41, 0LL);
    name = System_String__Concat_62412480(v39, (System_String_o *)StringLiteral_116/*" "*/, v42, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v37
      || (v43 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v37->fields.m_CancellationTokenSource,
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource),
          v45 = System_String__Format(v43, v44, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BCAA3C(Instance, v35);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v45, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v46 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1BCA7F8(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v47 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v46, v46[4]);
    OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__SelectShowServantEquip(
        FriendIconComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ServantStatusDialog_EndDelegate_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B1569A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo, *(_QWORD *)&statusKind);
    sub_1BCA7E0(&Method_FriendIconComponent_EndShowServantEquip__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B1569A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
  ServantStatusDialog_EndDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v16, v17);
  CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)Instance, statusKind, equipInfo, v15, 0LL, 0LL);
}


void __fastcall FriendIconComponent__SerializeFieldNotNullCheck(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__Set(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        bool isUseServantStatus,
        int32_t classPos,
        int32_t displayServantType,
        int32_t ftype,
        int32_t followerDeckId,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v9; // x28
  int32_t v10; // w23
  int32_t v12; // w24
  int32_t v13; // w25
  FriendIconComponent_o *v16; // x19
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
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  OtherUserGameEntity_o *v99; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x29
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v105; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v107; // x25
  __int64 v108; // x26
  FriendIconComponent_o *overwriteServantName; // x26
  UIRangeLabel_o *v110; // x25
  System_Collections_Generic_Dictionary_int__int__o *v111; // x20
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x27
  __int64 v115; // x28
  ServantLimitImageMaster_o *v116; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  __int64 v119; // x1
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w21
  long double v122; // q0
  __int64 v123; // x8
  __int64 v124; // x0
  Il2CppObject *v125; // x26
  __int64 v126; // x1
  int32_t FriendNpNameDispLimitCount; // w27
  __int64 v128; // x1
  System_Collections_Generic_Dictionary_int__int__o *v129; // x25
  Il2CppObject *v130; // x0
  __int64 v131; // x1
  __int64 v132; // x20
  __int64 v133; // x29
  ServantLimitImageMaster_o *v134; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  __int64 v137; // x1
  System_String_o **v138; // x9
  Il2CppObject *v139; // x25
  System_String_o *v140; // x20
  System_String_o *v141; // x0
  FriendIconComponent_o *v142; // x25
  UIRangeLabel_o *v143; // x26
  __int64 v144; // x1
  UnityEngine_Object_o *v145; // x20
  UILabel_o *loginDataLabel; // x25
  __int64 v147; // x1
  int64_t UpdatedAt; // x20
  __int64 v149; // x1
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v151; // x25
  __int64 v152; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v154; // x8
  int v155; // w9
  unsigned __int64 v156; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v158; // x14
  struct SkillIconComponent_array *v159; // x8
  __int64 v160; // x20
  unsigned __int64 v161; // x24
  struct UnityEngine_GameObject_array *v162; // x8
  UnityEngine_Object_o *v163; // x25
  struct UnityEngine_GameObject_array *v164; // x8
  UnityEngine_Object_o *v165; // x20
  const MethodInfo *v166; // x2
  signed __int64 v167; // x20
  __int64 v168; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v170; // x26
  UnityEngine_Object_o *v171; // x25
  struct UnityEngine_GameObject_array *v172; // x9
  int32_t *v173; // x25
  struct SkillIconComponent_array *v174; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v176; // x8
  struct SkillIconComponent_array *v177; // x8
  __int64 v178; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  __int64 v186; // x8
  _QWORD *v187; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v189; // x8
  __int64 v190; // x1
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v192; // x25
  __int64 v193; // x26
  __int64 v194; // x27
  int32_t v195; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v197; // w27
  int32_t Kind_38402356; // w25
  System_String_o *SupportBgImage; // x0
  __int64 v200; // x1
  UISprite_o *baseSpr; // x27
  System_String_o *v202; // x26
  __int64 v203; // x1
  UnityEngine_Object_o *gradeIcon; // x20
  __int64 v205; // x1
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v208; // s0
  float v209; // s8
  float v210; // s0
  float v211; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v214; // s10
  UnityEngine_GameObject_o *v215; // x0
  UnityEngine_GameObject_o *v216; // x0
  __int64 v217; // x24
  __int64 v218; // x25
  __int64 v219; // x2
  __int64 v220; // x3
  Il2CppObject *v221; // x0
  __int64 v222; // x1
  __int64 v223; // x20
  __int64 v224; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v225; // x23
  int32_t v226; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v228; // w8
  int32_t v229; // w22
  unsigned int v230; // w25
  ClassBoardInfo_o *v231; // x24
  int v232; // w22
  _BOOL4 v233; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v235; // x1
  Il2CppObject **v236; // x8
  Il2CppObject *v237; // x20
  Il2CppObject *v238; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  __int64 v240; // x1
  UnityEngine_GameObject_o *v241; // x20
  BalanceConfig_c *v242; // x8
  __int64 v243; // x1
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v245; // x0
  UnityEngine_GameObject_o *v246; // x0
  UnityEngine_GameObject_o *v247; // x0
  UnityEngine_Object_o *v248; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_Dictionary_int__int__o *v250; // x24
  __int64 v251; // x1
  System_Collections_Generic_Dictionary_int__int__o *v252; // x29
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v254; // x1
  System_Collections_Generic_IEnumerator_T__o *v255; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v257; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v260; // x8
  __int64 v261; // x9
  int *v262; // x10
  __int64 v263; // x0
  __int64 v264; // x0
  ClassBoardBaseEntity_c *v265; // x1
  __int64 v266; // x25
  __int64 methodPtr_low; // x9
  Il2CppObject *Master_object; // x0
  __int64 v269; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v271; // x1
  System_Collections_Generic_IEnumerator_T__c *v272; // x8
  __int64 v273; // x9
  int *v274; // x10
  __int64 v275; // x0
  struct System_Int32_array *squareIds; // x8
  Il2CppObject *v277; // [xsp+18h] [xbp-98h]
  struct OtherUserGameEntity_o **v278; // [xsp+18h] [xbp-98h]
  int v279; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v282; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v285; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v286; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16

  v9 = classBoardMaxNumDictionary;
  v10 = followerDeckId;
  v12 = displayServantType;
  v13 = classPos;
  v16 = this;
  if ( (byte_4B15694 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userGameEntity, isUseServantStatus);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v17, v18);
    sub_1BCA7E0(&ClassBoardBaseEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v35, v36);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v37, v38);
    sub_1BCA7E0(&DataManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v49, v50);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v51, v52);
    sub_1BCA7E0(&UnityEngine_Font_TypeInfo, v53, v54);
    sub_1BCA7E0(&Grade_TypeInfo, v55, v56);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v57, v58);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v59, v60);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v61, v62);
    sub_1BCA7E0(&int_TypeInfo, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v65, v66);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v67, v68);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v69, v70);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71, v72);
    sub_1BCA7E0(&OptionManager_TypeInfo, v73, v74);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v75, v76);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v77, v78);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v79, v80);
    sub_1BCA7E0(&StringLiteral_3804/*"COMMON_NO_ENTRY"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_6891/*"Fonts/FGO-Main-Font"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_6489/*"FFFFFF"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_17658/*"btn_bg_29_2"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_6488/*"FFFF00"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_9430/*"NO_ENTRY_NAME"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_9454/*"NP_COLOR_NAME"*/, v95, v96);
    this = (FriendIconComponent_o *)sub_1BCA7E0(&StringLiteral_16194/*"[{0}]+{1}[-]"*/, v97, v98);
    byte_4B15694 = 1;
  }
  if ( isUseServantStatus )
    v99 = userGameEntity;
  else
    v99 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_111;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = v99;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v16->fields.userGameEntity,
    (int64_t)v99,
    isUseServantStatus,
    classPos,
    *(System_String_o **)&displayServantType,
    *(BattleSetupInfo_o **)&ftype,
    *(FollowerInfo_o **)&followerDeckId,
    (PartyListViewItem_o *)classBoardMaxNumDictionary);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = v12;
  v16->fields.followerType = ftype;
  if ( userGameEntity )
  {
    if ( !v10 )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, (const MethodInfo *)v99);
      v13 = v16->fields.classPos;
      v12 = v16->fields.displayServantType;
      v10 = TargetDeckId;
    }
    v16->fields.deckId = v10;
    if ( OtherUserGameEntity__getSvtId(userGameEntity, v13, v12, v10, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v16->fields.classPos,
                                        v16->fields.displayServantType,
                                        v16->fields.deckId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_111;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)this,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    else
    {
      Entity = 0LL;
    }
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          v16->fields.classPos,
                          1,
                          v16->fields.displayServantType,
                          v16->fields.deckId,
                          0LL);
    v105 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v108 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v107 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v99);
          *(_QWORD *)&v282.fields.currentCryptoKey = v108;
          *(_QWORD *)&v282.fields.fakeValue = v107;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v282, 0LL) )
            v105 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_38935648((ServantFaceIconComponent_o *)this, v105, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_38947284((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v277 = Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_111;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/, 0LL);
            if ( !svtNpTitleLabel )
              goto LABEL_111;
            UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpCommandCard = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
            if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
              if ( !this )
                goto LABEL_111;
              ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
            }
LABEL_74:
            loginDataLabel = v16->fields.loginDataLabel;
            UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, v16->fields.classPos, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v147);
            this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            if ( !loginDataLabel )
              goto LABEL_111;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            switchSkillInfo = (UnityEngine_Object_o *)v16->fields.switchSkillInfo;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v149);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (FriendIconComponent_o *)v16->fields.switchSkillInfo;
              if ( !this )
                goto LABEL_111;
              SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_111;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v105 )
              goto LABEL_98;
            v152 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
            v151 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v99);
            *(_QWORD *)&v285.fields.currentCryptoKey = v152;
            *(_QWORD *)&v285.fields.fakeValue = v151;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v285,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v105, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_111;
              v154 = *(_QWORD *)&skillIconList->max_length;
              if ( v154 << 32 >= 1 )
              {
                v155 = 0;
                v156 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v156 < (int)max_length )
                  {
                    if ( v156 >= max_length )
                      goto LABEL_296;
                    v158 = skillInfoList->m_Items[v156];
                    if ( v158 && v158->fields.id >= 1 )
                      v155 = v156 + 1;
                  }
                  if ( (__int64)++v156 >= (int)v154 )
                    goto LABEL_119;
                }
                goto LABEL_111;
              }
              v155 = 0;
LABEL_119:
              if ( (int)v154 >= 1 )
              {
                v167 = v155;
                v168 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_111;
                  v170 = v168 - 4;
                  if ( v168 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_296;
                  v171 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v168);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v171, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v170 >= v167 )
                    {
                      v176 = v16->fields.skillBaseList;
                      if ( !v176 )
                        goto LABEL_111;
                      if ( v170 >= v176->max_length )
                        goto LABEL_296;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v176->obj.klass + v168);
                      if ( !this )
                        goto LABEL_111;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_111;
                      if ( v170 >= skillInfoList->max_length )
                        goto LABEL_296;
                      v172 = v16->fields.skillBaseList;
                      if ( !v172 )
                        goto LABEL_111;
                      if ( v170 >= v172->max_length )
                        goto LABEL_296;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v172->obj.klass + v168);
                      if ( !this )
                        goto LABEL_111;
                      v173 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v168);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v174 = v16->fields.skillIconList;
                      if ( !v174 )
                        goto LABEL_111;
                      if ( v170 >= v174->max_length )
                        goto LABEL_296;
                      if ( !v173 )
                        goto LABEL_111;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v174->obj.klass + v168);
                      if ( !this )
                        goto LABEL_111;
                      SkillIconComponent__Set_38946480(
                        (SkillIconComponent_o *)this,
                        v173[4],
                        v173[5],
                        v173[12],
                        v173[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_111;
                      if ( v170 >= skillLevelIconLabelList->max_length )
                        goto LABEL_296;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v168);
                      if ( !this )
                        goto LABEL_111;
                      UIIconLabel__Set_38947284((UIIconLabel_o *)this, 48, v173[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v177 = v16->fields.skillIconList;
                  if ( !v177 )
                    goto LABEL_111;
                  v178 = v168 - 3;
                  ++v168;
                }
                while ( v178 < (int)v177->max_length );
              }
              skillInfoUiWidget = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
              if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_111;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_111;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FriendIconComponent_o *)v16->fields.switchSkillUIList;
                if ( !this )
                  goto LABEL_111;
                v99 = (OtherUserGameEntity_o *)v16->fields.skillInfoUiWidget;
                v186 = *(_QWORD *)&this->fields.m_CachedPtr;
                v187 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v186 )
                  goto LABEL_111;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v186 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v99,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
                }
                else
                {
                  v189 = v186 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v189 + 32) = v99;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v189 + 32),
                    (int64_t)v99,
                    v180,
                    v181,
                    v182,
                    v183,
                    v184,
                    v185);
                }
              }
            }
            else
            {
LABEL_98:
              v159 = v16->fields.skillIconList;
              if ( !v159 )
                goto LABEL_111;
              v160 = 4LL;
              while ( 1 )
              {
                v161 = v160 - 4;
                if ( v160 - 4 >= (int)v159->max_length )
                  break;
                v162 = v16->fields.skillBaseList;
                if ( !v162 )
                  goto LABEL_111;
                if ( v161 >= v162->max_length )
                  goto LABEL_296;
                v163 = (UnityEngine_Object_o *)*((_QWORD *)&v162->obj.klass + v160);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v163, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v164 = v16->fields.skillBaseList;
                  if ( !v164 )
                    goto LABEL_111;
                  if ( v161 >= v164->max_length )
LABEL_296:
                    sub_1BCAA44(this, v99);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v164->obj.klass + v160);
                  if ( !this )
                    goto LABEL_111;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v159 = v16->fields.skillIconList;
                ++v160;
                if ( !v159 )
                  goto LABEL_111;
              }
              v165 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
              if ( UnityEngine_Object__op_Inequality(v165, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_111;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_111;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            FriendIconComponent__SetAppendSkill(v16, v105, v166);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v190);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v192 = v16->fields.svtCommandCardList;
              if ( v105 )
              {
                v194 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
                v193 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v99);
                *(_QWORD *)&v286.fields.currentCryptoKey = v194;
                *(_QWORD *)&v286.fields.fakeValue = v193;
                v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v286, 0LL);
                commandCardParam = v105->fields.commandCardParam;
                v197 = v195;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v105, 0LL);
                if ( !v192 )
                  goto LABEL_111;
                ServantCommandCardListComponent__Set_38924900(
                  v192,
                  v197,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v192 )
                  goto LABEL_111;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v99);
            Kind_38402356 = Grade__GetKind_38402356(userGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_38402356, 0LL);
            baseSpr = v16->fields.baseSpr;
            v202 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v200);
            AtlasManager__SetGradeIcon(baseSpr, v202, 0LL);
            gradeIcon = (UnityEngine_Object_o *)v16->fields.gradeIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v203);
            if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_111;
              trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v205);
              if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
              {
                playerNameLabel = v16->fields.playerNameLabel;
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6891/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_111;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1BCACFC(this);
                  goto LABEL_302;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_111;
              LODWORD(v208) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_111;
              v209 = v208;
              LODWORD(v210) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_111;
              v211 = v210;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_111;
              v214 = LocalPositionX;
              v215 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v215, (float)(v211 * 0.5) + (float)(v209 + v214), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_111;
              v216 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v216, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_111;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38402356, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_111;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_111;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v277 )
            {
              if ( !v105 )
                goto LABEL_111;
              if ( userGameEntity->fields.pushUserSvtId == v105->fields.userSvtId )
              {
                this = (FriendIconComponent_o *)v16->fields.pushSprite;
                if ( !this )
                  goto LABEL_111;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_111;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              }
            }
            else if ( !v105 )
            {
              goto LABEL_244;
            }
            v218 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
            v217 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v99);
            *(_QWORD *)&v287.fields.currentCryptoKey = v218;
            *(_QWORD *)&v287.fields.fakeValue = v217;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v287, 0LL) >= 1
              && userGameEntity->fields.userClassBoardInfo )
            {
              if ( v9 )
                goto LABEL_202;
              v250 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                            System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                            v99,
                                                                            v219,
                                                                            v220);
              System_Collections_Generic_Dictionary_int__int____ctor(
                v250,
                (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v251);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_111;
              this = (FriendIconComponent_o *)this->fields.servantFaceIcon;
              if ( !this )
                goto LABEL_111;
              v278 = p_userGameEntity;
              v252 = v250;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
              v255 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v255->klass;
                  v257 = *(unsigned __int16 *)(&v255->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v255->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v257;
                      p_offset += 4;
                      if ( !v257 )
                        goto LABEL_265;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_265:
                    p_method = sub_1C1C7C0(v255, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v255,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v260 = v255->klass;
                  v261 = *(unsigned __int16 *)(&v255->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v255->klass->_2.bitflags2 + 3) )
                  {
                    v262 = &v260->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v262 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                    {
                      --v261;
                      v262 += 4;
                      if ( !v261 )
                        goto LABEL_272;
                    }
                    v263 = (__int64)&v260->vtable[*v262].method;
                  }
                  else
                  {
LABEL_272:
                    v263 = sub_1C1C7C0(v255, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
                  }
                  v264 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v263)(
                           v255,
                           *(_QWORD *)(v263 + 8));
                  v266 = v264;
                  if ( v264 )
                  {
                    v265 = ClassBoardBaseEntity_TypeInfo;
                    methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( *(unsigned __int8 *)(*(_QWORD *)v264 + 304LL) < (unsigned int)methodPtr_low
                      || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v264 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
                    {
                      sub_1BCACFC(v264);
LABEL_298:
                      sub_1BCAA3C(Master_object, v269);
                    }
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v265);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v266 )
                    goto LABEL_298;
                  if ( !Master_object )
                    sub_1BCAA3C(0LL, v269);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v266 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !v252 )
                      sub_1BCAA3C(OtherThanNoneEntity, v271);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      v252,
                      *(_DWORD *)(v266 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                v9 = v252;
                if ( v255 )
                {
                  v272 = v255->klass;
                  v273 = *(unsigned __int16 *)(&v255->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v255->klass->_2.bitflags2 + 3) )
                  {
                    v274 = &v272->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v274 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v273;
                      v274 += 4;
                      if ( !v273 )
                        goto LABEL_289;
                    }
                    v275 = (__int64)&v272->vtable[*v274].method;
                  }
                  else
                  {
LABEL_289:
                    v275 = sub_1C1C7C0(v255, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v275)(
                    v255,
                    *(_QWORD *)(v275 + 8));
                }
                p_userGameEntity = v278;
LABEL_202:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99);
                v221 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
                v223 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
                v224 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
                v225 = (DataMasterBase_TMaster__TEntity__PKType__o *)v221;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v222);
                *(_QWORD *)&v288.fields.currentCryptoKey = v223;
                *(_QWORD *)&v288.fields.fakeValue = v224;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  v288,
                                                  0LL);
                if ( !v225 )
                  goto LABEL_111;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v225,
                                                  (int32_t)this,
                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_111;
                v226 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_111;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v226,
                                                  0LL);
                userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_111;
                v228 = userClassBoardInfo->max_length;
                if ( v228 < 1 )
                {
LABEL_219:
                  v232 = 0;
                }
                else
                {
                  v229 = (int)this;
                  v230 = 0;
                  while ( 1 )
                  {
                    if ( v230 >= v228 )
                      goto LABEL_296;
                    v231 = userClassBoardInfo->m_Items[v230];
                    if ( !v231 )
                      goto LABEL_111;
                    if ( v231->fields.classBoardBaseId == v229 )
                    {
                      if ( !v9 )
                        goto LABEL_111;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        v9,
                                                        v229,
                                                        (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v231, v226, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v228 = userClassBoardInfo->max_length;
                    if ( (int)++v230 >= v228 )
                      goto LABEL_219;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    v9,
                                                    v229,
                                                    (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v231->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_111;
                  v232 = squareIds->max_length;
                  v233 = (int)this > v232;
                  if ( (int)this > 0 )
                    goto LABEL_221;
                }
                v233 = 1;
LABEL_221:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v236 = (Il2CppObject **)&StringLiteral_6489/*"FFFFFF"*/;
                  if ( !v233 )
                    v236 = (Il2CppObject **)&StringLiteral_6488/*"FFFF00"*/;
                  v237 = *v236;
                  v279 = v232;
                  v238 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v279);
                  this = (FriendIconComponent_o *)System_String__Format_62415592(
                                                    (System_String_o *)StringLiteral_16194/*"[{0}]+{1}[-]"*/,
                                                    v237,
                                                    v238,
                                                    0LL);
                  if ( !v16->fields.openClassBoardNumLabel )
                    goto LABEL_111;
                  UILabel__set_text(v16->fields.openClassBoardNumLabel, (System_String_o *)this, 0LL);
                }
                classBoardOpenButton = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v235);
                if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                {
                  this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                  if ( !this )
                    goto LABEL_111;
                  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_111;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  if ( ConstantMaster__IsFLAG20240804(0LL) )
                  {
                    this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                    if ( !this )
                      goto LABEL_111;
                    v241 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v242 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v240);
                      v242 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_34330940(
                      v241,
                      v242->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v243);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17658/*"btn_bg_29_2"*/,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardBackSprite;
                    if ( !this )
                      goto LABEL_111;
                    ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                      this,
                      this->klass[2]._1.interopData);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_111;
                    v245 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_34330940(
                      v245,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_111;
                    v246 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v246,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_111;
                    v247 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v247,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_250;
              }
LABEL_302:
              sub_1BCAA3C(Enumerator, v254);
            }
LABEL_244:
            v248 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
            if ( UnityEngine_Object__op_Inequality(v248, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
              if ( !this )
                goto LABEL_111;
              this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
              if ( !this )
                goto LABEL_111;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_250;
          }
          if ( !v105 )
            goto LABEL_111;
          overwriteServantName = (FriendIconComponent_o *)v105->fields.overwriteServantName;
          this = (FriendIconComponent_o *)System_String__IsNullOrEmpty((System_String_o *)overwriteServantName, 0LL);
          v110 = v16->fields.servantNameLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v111 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99);
            v112 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v115 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
            v114 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
            v116 = (ServantLimitImageMaster_o *)v112;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v113);
            *(_QWORD *)&v283.fields.currentCryptoKey = v115;
            *(_QWORD *)&v283.fields.fakeValue = v114;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v283,
                                              0LL);
            if ( !v116 )
              goto LABEL_111;
            this = (FriendIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                              v116,
                                              (int32_t)this,
                                              v105->fields.limitCount,
                                              0LL);
            if ( !v110 )
              goto LABEL_111;
            overwriteServantName = this;
            v9 = v111;
          }
          else if ( !v110 )
          {
            goto LABEL_111;
          }
          UIRangeLabel__Set(v110, (System_String_o *)overwriteServantName, 0LL, 1, 0, 0LL);
          OtherUserGameEntity__getTreasureDeviceInfo(
            userGameEntity,
            &tdInfo,
            v16->fields.classPos,
            v16->fields.displayServantType,
            v16->fields.deckId,
            0LL);
          TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                      userGameEntity,
                                      v16->fields.classPos,
                                      v16->fields.displayServantType,
                                      v16->fields.deckId,
                                      0LL);
          v123 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v123 + 309) & 1) == 0 )
            v123 = sub_1C1C6BC(v122);
          v124 = *(_QWORD *)(*(_QWORD *)(v123 + 192) + 16LL);
          if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
            v124 = sub_1C1C6BC(v122);
          this = **(FriendIconComponent_o ***)(v124 + 184);
          if ( this )
          {
            v125 = DataManager__GetMasterData_object_(
                     (DataManager_o *)this,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v105, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v126);
            if ( !OptionManager__GetSpoilerSetting(0LL) )
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_111;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_111;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v105->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v129 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v128);
            v130 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v132 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
            v133 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
            v134 = (ServantLimitImageMaster_o *)v130;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v131);
            *(_QWORD *)&v284.fields.currentCryptoKey = v132;
            *(_QWORD *)&v284.fields.fakeValue = v133;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v284,
                                              0LL);
            if ( v134 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v134,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v105->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v125 )
                {
                  p_userGameEntity = &v16->fields.userGameEntity;
                  v9 = v129;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v125,
                                      (int32_t)this,
                                      ServantLimitCountSealAfter,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v138 = (System_String_o **)&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/;
                  v139 = (Il2CppObject *)OverwriteTDName;
                  if ( TreasureDeviceLevelIcon <= 1 )
                    v138 = (System_String_o **)&StringLiteral_9454/*"NP_COLOR_NAME"*/;
                  v140 = *v138;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137);
                  v141 = LocalizationManager__Get(v140, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v141, v139, 0LL);
                  if ( tdInfo )
                  {
                    v142 = this;
                    v143 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v143 )
                    {
                      UIRangeLabel__Set(v143, (System_String_o *)v142, (System_String_o *)this, 0, 0, 0LL);
                      v145 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v144);
                      if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
                      {
                        this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
                        if ( !this )
                          goto LABEL_111;
                        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                      }
                      goto LABEL_74;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_111:
    sub_1BCAA3C(this, v99);
  }
LABEL_250:
  baseButton = (UnityEngine_Object_o *)v16->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v16->fields.baseButton;
    if ( !this )
      goto LABEL_111;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_userGameEntity != 0LL, 1, 0LL);
  }
}


void __fastcall FriendIconComponent__SetAppendSkill(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v3; // x20
  FriendIconComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v16; // x8
  int v17; // w9
  signed __int64 v18; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v20; // x14
  struct SkillIconComponent_array *v21; // x8
  __int64 v22; // x20
  struct UnityEngine_GameObject_array *v23; // x8
  unsigned __int64 v24; // x21
  signed __int64 v25; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_GameObject_array *v28; // x9
  SkillInfo_o *v29; // x20
  struct SkillIconComponent_array *v30; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct SkillIconComponent_array *v32; // x9
  int v33; // w8
  struct UnityEngine_GameObject_array *v34; // x9
  struct UnityEngine_GameObject_array *v35; // x8
  struct SkillIconComponent_array *v36; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  __int64 v38; // x1
  UnityEngine_Object_o *switchSkillInfo; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v49; // x8
  SwitchUIWidgetComponent_o *v50; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4B15695 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, info, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (FriendIconComponent_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B15695 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v14 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info);
    *(_QWORD *)&v52.fields.currentCryptoKey = v14;
    *(_QWORD *)&v52.fields.fakeValue = v13;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(v3, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_82;
      v16 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v16 << 32 < 1 )
      {
        v17 = 0;
      }
      else
      {
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v18 < (int)max_length )
            {
              if ( v18 >= max_length )
                goto LABEL_83;
              v20 = skillInfoList->m_Items[v18];
              if ( v20 && v20->fields.id >= 1 )
                v17 = v18 + 1;
            }
          }
          ++v18;
        }
        while ( v18 < (int)v16 );
      }
      if ( (int)v16 >= 1 )
      {
        v24 = 0LL;
        v25 = v17;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_82;
          if ( v24 >= appendSkillBaseList->max_length )
            goto LABEL_83;
          v27 = (UnityEngine_Object_o *)appendSkillBaseList->m_Items[v24];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v24 >= v25 )
            {
              v35 = v4->fields.appendSkillBaseList;
              if ( !v35 )
                goto LABEL_82;
              if ( v24 >= v35->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v35->m_Items[v24];
              if ( !this )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_82;
              if ( v24 >= skillInfoList->max_length )
                goto LABEL_83;
              v28 = v4->fields.appendSkillBaseList;
              if ( !v28 )
                goto LABEL_82;
              if ( v24 >= v28->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v28->m_Items[v24];
              if ( !this )
                goto LABEL_82;
              v29 = skillInfoList->m_Items[v24];
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v30 = v4->fields.appendSkillIconList;
              if ( !v30 )
                goto LABEL_82;
              if ( v24 >= v30->max_length )
                goto LABEL_83;
              if ( !v29 )
                goto LABEL_82;
              this = (FriendIconComponent_o *)v30->m_Items[v24];
              if ( !this )
                goto LABEL_82;
              SkillIconComponent__Set_38946480(
                (SkillIconComponent_o *)this,
                v29->fields.id,
                v29->fields.lv,
                v29->fields.strengthStatus,
                v29->fields.skillRecord,
                0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_82;
              if ( v24 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)appendSkillLevelIconLabelList->m_Items[v24];
              if ( !this )
                goto LABEL_82;
              UIIconLabel__Set_38947284((UIIconLabel_o *)this, 48, v29->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
              this = (FriendIconComponent_o *)ConstantMaster__IsFLAG20240804(0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, info);
                  this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                }
                v32 = this->fields.appendSkillIconList;
                v33 = HIDWORD(v32->m_Items[144]);
                if ( v24 )
                  v33 += LODWORD(v32->m_Items[145]) * v24;
                v34 = v4->fields.appendSkillBaseList;
                if ( !v34 )
                  goto LABEL_82;
                if ( v24 >= v34->max_length )
                  goto LABEL_83;
                GameObjectExtensions__SetLocalPositionX(v34->m_Items[v24], (float)v33, 0LL);
              }
            }
          }
          v36 = v4->fields.appendSkillIconList;
          if ( !v36 )
            goto LABEL_82;
        }
        while ( (__int64)++v24 < (int)v36->max_length );
      }
      appendSkillInfoUiWidget = (UnityEngine_Object_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
      if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
      {
        switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
        if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
        {
          this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
          if ( !this )
            goto LABEL_82;
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
          v46 = *(_QWORD *)&this->fields.m_CachedPtr;
          v47 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v46 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v46 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = v46 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v49 + 32) = info;
            sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)info, v40, v41, v42, v43, v44, v45);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v50 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v50 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v50, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_19:
      v21 = v4->fields.appendSkillIconList;
      if ( !v21 )
        goto LABEL_82;
      v22 = 0LL;
      while ( (int)v22 < (signed int)v21->max_length )
      {
        v23 = v4->fields.appendSkillBaseList;
        if ( v23 )
        {
          if ( (unsigned int)v22 >= v23->max_length )
LABEL_83:
            sub_1BCAA44(this, info);
          this = (FriendIconComponent_o *)v23->m_Items[v22];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v21 = v4->fields.appendSkillIconList;
            ++v22;
            if ( v21 )
              continue;
          }
        }
        goto LABEL_82;
      }
      this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !this
        || (this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
      {
LABEL_82:
        sub_1BCAA3C(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}