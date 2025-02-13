void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UIIconLabel_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct SkillIconComponent_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct UIIconLabel_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4BDB9DA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UIIconLabel___TypeInfo);
    byte_4BDB9DA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UIIconLabel_array *)sub_1C21EE0(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillLevelIconLabelList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v25;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillBaseList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v32;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillIconList,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIIconLabel_array *)sub_1C21EE0(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v39;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillLevelIconLabelList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v11; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v13; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v17; // x19

  if ( (byte_4BDB9CD & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20533/*"icon_skill_mini"*/);
    sub_1C21E38(&StringLiteral_20684/*"img_friend_skill"*/);
    sub_1C21E38(&StringLiteral_20432/*"icon_append_mini"*/);
    sub_1C21E38(&StringLiteral_20683/*"img_friend_appendskill"*/);
    byte_4BDB9CD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v11 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20533/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v13 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_20684/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v15 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_20432/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v17 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_20683/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDB9D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndCloseShowServantEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FriendIconComponent__EndShowServant(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDB9D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDB9D5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FriendIconComponent_EndCloseShowServantEquip__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0LL);
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
    sub_1C22094(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1C2209C(this, method);
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v7; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BDB9D0 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_FriendIconComponent_EndShowServant__);
    sub_1C21E38(&Method_FriendIconComponent_OnClickServantStatus__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D0 = 1;
  }
  v3 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OnClickServantStatus__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
      v7 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServant__, 0LL);
      if ( !Instance )
        sub_1C22094(v10, v11);
      CommonUI__OpenServantStatusDialog_31140592((CommonUI_o *)Instance, 5, v7, v9, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportClassBoardBuff(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Master_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  int32_t klass; // w22
  struct OtherUserGameEntity_o *v15; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v18; // w20
  unsigned int v19; // w24
  __int64 v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  long double inited; // q0
  _QWORD *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  int64_t *v32; // x8
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  long double v40; // q0
  _QWORD *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  int64_t *v45; // x8
  int64_t v46; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v48; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4BDB9D8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&ClassBoardInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__);
    sub_1C21E38(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D8 = 1;
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
      v5 = ServantLeaderInfo;
      v6 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
      v10 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v10;
      *(_QWORD *)&v49.fields.fakeValue = v9;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v49, 0LL);
      if ( !v11 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 (int32_t)Entity,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_44;
      Entity = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, klass, 0LL);
      v15 = this->fields.userGameEntity;
      if ( !v15 )
        goto LABEL_44;
      userClassBoardInfo = v15->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_44;
      max_length = userClassBoardInfo->max_length;
      v18 = (int)Entity;
      if ( max_length >= 1 )
      {
        v19 = 0;
        do
        {
          if ( v19 >= max_length )
            sub_1C2209C(Entity, v13);
          v20 = (__int64)userClassBoardInfo->m_Items[v19];
          if ( !v20 )
            goto LABEL_44;
          if ( *(_DWORD *)(v20 + 16) == v18 )
          {
            Entity = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v20, klass, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_41;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v19 < max_length );
      }
      v20 = sub_1C22084(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v20, 0LL);
      if ( !v20 )
        goto LABEL_44;
      *(_DWORD *)(v20 + 16) = v18;
      v28 = Method_System_Array_Empty_int___;
      v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v29 )
      {
        sub_1C73D70(Method_System_Array_Empty_int___);
        v29 = v28[7];
      }
      v30 = *(_QWORD *)(v29 + 16);
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1C73D14(inited);
      if ( !*(_DWORD *)(v30 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v30);
      v31 = *(_QWORD *)(v28[7] + 16LL);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1C73D14(inited);
      v32 = *(int64_t **)(v31 + 184);
      v33 = *v32;
      *(_QWORD *)(v20 + 24) = *v32;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 24), v33, v21, v22, v23, v24, v25, v26);
      v41 = Method_System_Array_Empty_int___;
      v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v42 )
      {
        sub_1C73D70(Method_System_Array_Empty_int___);
        v42 = v41[7];
      }
      v43 = *(_QWORD *)(v42 + 16);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1C73D14(v40);
      if ( !*(_DWORD *)(v43 + 224) )
        v40 = j_il2cpp_runtime_class_init_0(v43);
      v44 = *(_QWORD *)(v41[7] + 16LL);
      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
        v44 = sub_1C73D14(v40);
      v45 = *(int64_t **)(v44 + 184);
      v46 = *v45;
      *(_QWORD *)(v20 + 32) = *v45;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 32), v46, v34, v35, v36, v37, v38, v39);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v48 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1C22094(Entity, v13);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v18, 0, v48, 1, (ClassBoardInfo_o *)v20, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BDB9D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendIconComponent_OnClickSupportInfo__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SupportInfoJump_TypeInfo);
    byte_4BDB9D3 = 1;
  }
  v3 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OnClickSupportInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v6 = (SupportInfoJump_o *)sub_1C22084(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v6, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v6, 0LL);
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
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v5; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x3
  int32_t followerType; // w8
  int32_t v14; // w2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BDB9D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendIconComponent_OnLongPushEquip__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDB9D6 = 1;
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
  v5 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1C22094(userGameEntity, method);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v7 = EquipInfo;
    v9 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v9;
    *(_QWORD *)&v17.fields.fakeValue = v8;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v17, 0LL) >= 1 )
    {
      v10 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OnLongPushEquip__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v14 = 14;
      else
        v14 = 13;
      if ( v5 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v5, 0LL) )
          v14 = 19;
        else
          v14 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v7, v14, v12);
      return;
    }
  }
LABEL_22:
  v15 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OnLongPushEquip__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0LL);
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


void __fastcall FriendIconComponent__OpenAppendSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  SkillInfo_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BDB9D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB9D7 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41790300(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1C2209C(Master_object, v8);
        v9 = skillInfoList->m_Items[skillIndex];
        if ( v9 && v9->fields.id >= 1 && v9->fields.lv >= 1 )
        {
          v10 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v9->fields.id,
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v9->fields.lv, 0LL);
              v12 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v9->fields.lv;
              v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v14, v15, v16);
              v18 = System_String__Format(v13, v17, 0LL);
              name = System_String__Concat_63126736(v12, (System_String_o *)StringLiteral_117/*" "*/, v18, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1C22094(Master_object, v8);
        }
      }
    }
  }
  v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
}


void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // w9
  SkillInfo_o *v13; // x22
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v17; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x19
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4BDB9D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&Method_FriendIconComponent_OpenSkillInfoDialog__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C21E38(&StringLiteral_3025/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4BDB9D2 = 1;
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
  v7 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_25;
  v8 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v7, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1C2209C(v10, v11);
  v13 = skillInfoList->m_Items[skillIndex];
  if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v13->fields.id,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v13->fields.id,
                                  v13->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v17 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v13->fields.lv, 0LL);
    v18 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v13->fields.lv;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v20, v21, v22);
    v24 = System_String__Format(v19, v23, 0LL);
    name = System_String__Concat_63126736(v18, (System_String_o *)StringLiteral_117/*" "*/, v24, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3025/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v17
      || (v28 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource,
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v25, v26, v27),
          v30 = System_String__Format(v28, v29, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1C22094(Instance, v15);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v30, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v31 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1C21E50(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v32 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0LL);
  }
}


void __fastcall FriendIconComponent__SelectShowServantEquip(
        FriendIconComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BDB9D4 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_FriendIconComponent_EndShowServantEquip__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDB9D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1C22094(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_31143688((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0LL, 0LL);
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
  Il2CppObject *v17; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x29
  const MethodInfo *v19; // x1
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v24; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v26; // x25
  __int64 v27; // x26
  FriendIconComponent_o *overwriteServantName; // x26
  UIRangeLabel_o *v29; // x25
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  Il2CppObject *v31; // x0
  __int64 v32; // x27
  __int64 v33; // x28
  ServantLimitImageMaster_o *v34; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w20
  long double v39; // q0
  __int64 v40; // x8
  __int64 v41; // x0
  Il2CppObject *v42; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  OtherUserGameEntity_o *v44; // x21
  System_Collections_Generic_Dictionary_int__int__o *v45; // x22
  Il2CppObject *v46; // x0
  __int64 v47; // x20
  __int64 v48; // x29
  ServantLimitImageMaster_o *v49; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v52; // x9
  Il2CppObject *v53; // x25
  System_String_o *v54; // x20
  System_String_o *v55; // x0
  FriendIconComponent_o *v56; // x25
  UIRangeLabel_o *v57; // x26
  UnityEngine_Object_o *v58; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v62; // x25
  __int64 v63; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v65; // x8
  int v66; // w9
  unsigned __int64 v67; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v69; // x14
  struct SkillIconComponent_array *v70; // x8
  __int64 v71; // x20
  unsigned __int64 v72; // x24
  struct UnityEngine_GameObject_array *v73; // x8
  UnityEngine_Object_o *v74; // x25
  struct UnityEngine_GameObject_array *v75; // x8
  UnityEngine_Object_o *v76; // x20
  const MethodInfo *v77; // x2
  signed __int64 v78; // x20
  __int64 v79; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v81; // x26
  UnityEngine_Object_o *v82; // x25
  struct UnityEngine_GameObject_array *v83; // x9
  int32_t *v84; // x25
  struct SkillIconComponent_array *v85; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v87; // x8
  struct SkillIconComponent_array *v88; // x8
  __int64 v89; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v100; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v102; // x25
  __int64 v103; // x26
  __int64 v104; // x27
  int32_t v105; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v107; // w27
  int32_t Kind_38931288; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v111; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v115; // s0
  float v116; // s8
  float v117; // s0
  float v118; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v121; // s10
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  __int64 v124; // x24
  __int64 v125; // x25
  Il2CppObject *v126; // x0
  __int64 v127; // x20
  __int64 v128; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v129; // x23
  int32_t v130; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v132; // w8
  int32_t v133; // w22
  unsigned int v134; // w25
  ClassBoardInfo_o *v135; // x24
  int v136; // w22
  _BOOL4 v137; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject **v142; // x8
  Il2CppObject *v143; // x20
  Il2CppObject *v144; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v146; // x20
  BalanceConfig_c *v147; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_GameObject_o *v151; // x0
  UnityEngine_Object_o *v152; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v155; // x1
  System_Collections_Generic_IEnumerator_T__o *v156; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v158; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v161; // x8
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  __int64 v165; // x25
  Il2CppObject *Master_object; // x0
  __int64 v167; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v169; // x1
  System_Collections_Generic_IEnumerator_T__c *v170; // x8
  __int64 v171; // x9
  int *v172; // x10
  __int64 v173; // x0
  struct System_Int32_array *squareIds; // x8
  int v175; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v176; // [xsp+18h] [xbp-98h]
  int v177; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  v9 = classBoardMaxNumDictionary;
  v10 = followerDeckId;
  v12 = displayServantType;
  v13 = classPos;
  v16 = this;
  if ( (byte_4BDB9CE & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&UnityEngine_Font_TypeInfo);
    sub_1C21E38(&Grade_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3828/*"COMMON_NO_ENTRY"*/);
    sub_1C21E38(&StringLiteral_6942/*"Fonts/FGO-Main-Font"*/);
    sub_1C21E38(&StringLiteral_6537/*"FFFFFF"*/);
    sub_1C21E38(&StringLiteral_17774/*"btn_bg_29_2"*/);
    sub_1C21E38(&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_6536/*"FFFF00"*/);
    sub_1C21E38(&StringLiteral_9492/*"NO_ENTRY_NAME"*/);
    sub_1C21E38(&StringLiteral_9516/*"NP_COLOR_NAME"*/);
    this = (FriendIconComponent_o *)sub_1C21E38(&StringLiteral_16302/*"[{0}]+{1}[-]"*/);
    byte_4BDB9CE = 1;
  }
  if ( isUseServantStatus )
    v17 = (Il2CppObject *)userGameEntity;
  else
    v17 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_112;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = (struct OtherUserGameEntity_o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v16->fields.userGameEntity,
    (int64_t)v17,
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
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v19);
      v13 = v16->fields.classPos;
      v12 = v16->fields.displayServantType;
      v10 = TargetDeckId;
    }
    v16->fields.deckId = v10;
    if ( OtherUserGameEntity__getSvtId(userGameEntity, v13, v12, v10, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v16->fields.classPos,
                                        v16->fields.displayServantType,
                                        v16->fields.deckId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_112;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)this,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v24 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v180.fields.currentCryptoKey = v27;
          *(_QWORD *)&v180.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v180, 0LL) )
            v24 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_39468548((ServantFaceIconComponent_o *)this, v24, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_39480396((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v176 = Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_112;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9492/*"NO_ENTRY_NAME"*/, 0LL);
            if ( !svtNpTitleLabel )
              goto LABEL_112;
            UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpCommandCard = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
              if ( !this )
                goto LABEL_112;
              ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
            }
LABEL_75:
            loginDataLabel = v16->fields.loginDataLabel;
            UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, v16->fields.classPos, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            if ( !loginDataLabel )
              goto LABEL_112;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            switchSkillInfo = (UnityEngine_Object_o *)v16->fields.switchSkillInfo;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (FriendIconComponent_o *)v16->fields.switchSkillInfo;
              if ( !this )
                goto LABEL_112;
              SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v24 )
              goto LABEL_99;
            v63 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v62 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v183.fields.currentCryptoKey = v63;
            *(_QWORD *)&v183.fields.fakeValue = v62;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v183,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v24, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_112;
              v65 = *(_QWORD *)&skillIconList->max_length;
              if ( v65 << 32 >= 1 )
              {
                v66 = 0;
                v67 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v67 < (int)max_length )
                  {
                    if ( v67 >= max_length )
                      goto LABEL_294;
                    v69 = skillInfoList->m_Items[v67];
                    if ( v69 && v69->fields.id >= 1 )
                      v66 = v67 + 1;
                  }
                  if ( (__int64)++v67 >= (int)v65 )
                    goto LABEL_120;
                }
                goto LABEL_112;
              }
              v66 = 0;
LABEL_120:
              if ( (int)v65 >= 1 )
              {
                v78 = v66;
                v79 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_112;
                  v81 = v79 - 4;
                  if ( v79 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_294;
                  v82 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v79);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v81 >= v78 )
                    {
                      v87 = v16->fields.skillBaseList;
                      if ( !v87 )
                        goto LABEL_112;
                      if ( v81 >= v87->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v87->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_112;
                      if ( v81 >= skillInfoList->max_length )
                        goto LABEL_294;
                      v83 = v16->fields.skillBaseList;
                      if ( !v83 )
                        goto LABEL_112;
                      if ( v81 >= v83->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v83->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      v84 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v79);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v85 = v16->fields.skillIconList;
                      if ( !v85 )
                        goto LABEL_112;
                      if ( v81 >= v85->max_length )
                        goto LABEL_294;
                      if ( !v84 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v85->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      SkillIconComponent__Set_39479592(
                        (SkillIconComponent_o *)this,
                        v84[4],
                        v84[5],
                        v84[12],
                        v84[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_112;
                      if ( v81 >= skillLevelIconLabelList->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      UIIconLabel__Set_39480396((UIIconLabel_o *)this, 48, v84[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v88 = v16->fields.skillIconList;
                  if ( !v88 )
                    goto LABEL_112;
                  v89 = v79 - 3;
                  ++v79;
                }
                while ( v89 < (int)v88->max_length );
              }
              skillInfoUiWidget = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_112;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FriendIconComponent_o *)v16->fields.switchSkillUIList;
                if ( !this )
                  goto LABEL_112;
                v17 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v97 = *(_QWORD *)&this->fields.m_CachedPtr;
                v98 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v97 )
                  goto LABEL_112;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v97 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v17,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                }
                else
                {
                  v100 = v97 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v100 + 32) = v17;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v100 + 32), (int64_t)v17, v91, v92, v93, v94, v95, v96);
                }
              }
            }
            else
            {
LABEL_99:
              v70 = v16->fields.skillIconList;
              if ( !v70 )
                goto LABEL_112;
              v71 = 4LL;
              while ( 1 )
              {
                v72 = v71 - 4;
                if ( v71 - 4 >= (int)v70->max_length )
                  break;
                v73 = v16->fields.skillBaseList;
                if ( !v73 )
                  goto LABEL_112;
                if ( v72 >= v73->max_length )
                  goto LABEL_294;
                v74 = (UnityEngine_Object_o *)*((_QWORD *)&v73->obj.klass + v71);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v75 = v16->fields.skillBaseList;
                  if ( !v75 )
                    goto LABEL_112;
                  if ( v72 >= v75->max_length )
LABEL_294:
                    sub_1C2209C(this, v17);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v75->obj.klass + v71);
                  if ( !this )
                    goto LABEL_112;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v70 = v16->fields.skillIconList;
                ++v71;
                if ( !v70 )
                  goto LABEL_112;
              }
              v76 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_112;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            FriendIconComponent__SetAppendSkill(v16, v24, v77);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v102 = v16->fields.svtCommandCardList;
              if ( v24 )
              {
                v104 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
                v103 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v184.fields.currentCryptoKey = v104;
                *(_QWORD *)&v184.fields.fakeValue = v103;
                v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v184, 0LL);
                commandCardParam = v24->fields.commandCardParam;
                v107 = v105;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v24, 0LL);
                if ( !v102 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Set_39457436(
                  v102,
                  v107,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v102 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_38931288 = Grade__GetKind_38931288(userGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_38931288, 0LL);
            baseSpr = v16->fields.baseSpr;
            v111 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v111, 0LL);
            gradeIcon = (UnityEngine_Object_o *)v16->fields.gradeIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
              {
                playerNameLabel = v16->fields.playerNameLabel;
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6942/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_112;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1C22354(this);
                  goto LABEL_299;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              LODWORD(v115) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v116 = v115;
              LODWORD(v117) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              v118 = v117;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v121 = LocalPositionX;
              v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v122, (float)(v118 * 0.5) + (float)(v116 + v121), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v123, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38931288, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_112;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_112;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v176 )
            {
              if ( !v24 )
                goto LABEL_112;
              if ( userGameEntity->fields.pushUserSvtId == v24->fields.userSvtId )
              {
                this = (FriendIconComponent_o *)v16->fields.pushSprite;
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_112;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              }
            }
            else if ( !v24 )
            {
              goto LABEL_245;
            }
            v125 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v124 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v185.fields.currentCryptoKey = v125;
            *(_QWORD *)&v185.fields.fakeValue = v124;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v185, 0LL) >= 1
              && userGameEntity->fields.userClassBoardInfo )
            {
              if ( v9 )
                goto LABEL_203;
              v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                v9,
                (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)this->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
              v156 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v156->klass;
                  v158 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v158;
                      p_offset += 4;
                      if ( !v158 )
                        goto LABEL_266;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_266:
                    p_method = sub_1C73E18(v156, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v156,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v161 = v156->klass;
                  v162 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
                  {
                    v163 = &v161->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v163 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
                    {
                      --v162;
                      v163 += 4;
                      if ( !v162 )
                        goto LABEL_273;
                    }
                    v164 = (__int64)&v161->vtable[*v163].method;
                  }
                  else
                  {
LABEL_273:
                    v164 = sub_1C73E18(v156, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
                  }
                  v165 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v164)(
                           v156,
                           *(_QWORD *)(v164 + 8));
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v165 )
                    sub_1C22094(Master_object, v167);
                  if ( !Master_object )
                    sub_1C22094(0LL, v167);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v165 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !v9 )
                      sub_1C22094(OtherThanNoneEntity, v169);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      v9,
                      *(_DWORD *)(v165 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v156 )
                {
                  v170 = v156->klass;
                  v171 = *(unsigned __int16 *)(&v156->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v156->klass->_2.bitflags2 + 3) )
                  {
                    v172 = &v170->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v172 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v171;
                      v172 += 4;
                      if ( !v171 )
                        goto LABEL_287;
                    }
                    v173 = (__int64)&v170->vtable[*v172].method;
                  }
                  else
                  {
LABEL_287:
                    v173 = sub_1C73E18(v156, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v173)(
                    v156,
                    *(_QWORD *)(v173 + 8));
                }
LABEL_203:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v126 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
                v127 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
                v128 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
                v129 = (DataMasterBase_TMaster__TEntity__PKType__o *)v126;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v186.fields.currentCryptoKey = v127;
                *(_QWORD *)&v186.fields.fakeValue = v128;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                  v186,
                                                  0LL);
                if ( !v129 )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v129,
                                                  (int32_t)this,
                                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_112;
                v130 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v130,
                                                  0LL);
                userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_112;
                v132 = userClassBoardInfo->max_length;
                if ( v132 < 1 )
                {
LABEL_220:
                  v136 = 0;
                }
                else
                {
                  v133 = (int)this;
                  v134 = 0;
                  while ( 1 )
                  {
                    if ( v134 >= v132 )
                      goto LABEL_294;
                    v135 = userClassBoardInfo->m_Items[v134];
                    if ( !v135 )
                      goto LABEL_112;
                    if ( v135->fields.classBoardBaseId == v133 )
                    {
                      if ( !v9 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        v9,
                                                        v133,
                                                        (const MethodInfo_32AD168 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v135, v130, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v132 = userClassBoardInfo->max_length;
                    if ( (int)++v134 >= v132 )
                      goto LABEL_220;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    v9,
                                                    v133,
                                                    (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v135->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_112;
                  v136 = squareIds->max_length;
                  v137 = (int)this > v136;
                  if ( (int)this > 0 )
                    goto LABEL_222;
                }
                v137 = 1;
LABEL_222:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v142 = (Il2CppObject **)&StringLiteral_6537/*"FFFFFF"*/;
                  if ( !v137 )
                    v142 = (Il2CppObject **)&StringLiteral_6536/*"FFFF00"*/;
                  v143 = *v142;
                  v177 = v136;
                  v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v139, v140, v141);
                  this = (FriendIconComponent_o *)System_String__Format_63129848(
                                                    (System_String_o *)StringLiteral_16302/*"[{0}]+{1}[-]"*/,
                                                    v143,
                                                    v144,
                                                    0LL);
                  if ( !v16->fields.openClassBoardNumLabel )
                    goto LABEL_112;
                  UILabel__set_text(v16->fields.openClassBoardNumLabel, (System_String_o *)this, 0LL);
                }
                classBoardOpenButton = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                {
                  this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                  if ( !this )
                    goto LABEL_112;
                  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_112;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  if ( ConstantMaster__IsFLAG20240804(0LL) )
                  {
                    this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                    if ( !this )
                      goto LABEL_112;
                    v146 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v147 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v147 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_34797564(
                      v146,
                      v147->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17774/*"btn_bg_29_2"*/,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardBackSprite;
                    if ( !this )
                      goto LABEL_112;
                    ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                      this,
                      this->klass[2]._1.interopData);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_112;
                    v149 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_34797564(
                      v149,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_112;
                    v150 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v150,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_112;
                    v151 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v151,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_251;
              }
LABEL_299:
              sub_1C22094(Enumerator, v155);
            }
LABEL_245:
            v152 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
              if ( !this )
                goto LABEL_112;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_251;
          }
          if ( !v24 )
            goto LABEL_112;
          overwriteServantName = (FriendIconComponent_o *)v24->fields.overwriteServantName;
          this = (FriendIconComponent_o *)System_String__IsNullOrEmpty((System_String_o *)overwriteServantName, 0LL);
          v29 = v16->fields.servantNameLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v30 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v31 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v33 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v32 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            v34 = (ServantLimitImageMaster_o *)v31;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v181.fields.currentCryptoKey = v33;
            *(_QWORD *)&v181.fields.fakeValue = v32;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v181,
                                              0LL);
            if ( !v34 )
              goto LABEL_112;
            this = (FriendIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                              v34,
                                              (int32_t)this,
                                              v24->fields.limitCount,
                                              0,
                                              0LL);
            if ( !v29 )
              goto LABEL_112;
            overwriteServantName = this;
            v9 = v30;
          }
          else if ( !v29 )
          {
            goto LABEL_112;
          }
          UIRangeLabel__Set(v29, (System_String_o *)overwriteServantName, 0LL, 1, 0, 0LL);
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
          v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
            v40 = sub_1C73D14(v39);
          v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
          if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
            v41 = sub_1C73D14(v39);
          this = **(FriendIconComponent_o ***)(v41 + 184);
          if ( this )
          {
            v42 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v24, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            v175 = TreasureDeviceLevelIcon;
            if ( OptionManager__GetSpoilerSetting(0LL) )
            {
              v44 = userGameEntity;
            }
            else
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_112;
              v44 = userGameEntity;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v24->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v45 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v46 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v47 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v48 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            v49 = (ServantLimitImageMaster_o *)v46;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v182.fields.currentCryptoKey = v47;
            *(_QWORD *)&v182.fields.fakeValue = v48;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v182,
                                              0LL);
            if ( v49 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v49,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                v24->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v42 )
                {
                  p_userGameEntity = &v16->fields.userGameEntity;
                  v9 = v45;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v42,
                                      (int32_t)this,
                                      ServantLimitCountSealAfter,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v52 = (System_String_o **)&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/;
                  v53 = (Il2CppObject *)OverwriteTDName;
                  userGameEntity = v44;
                  if ( v175 <= 1 )
                    v52 = (System_String_o **)&StringLiteral_9516/*"NP_COLOR_NAME"*/;
                  v54 = *v52;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v55 = LocalizationManager__Get(v54, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v55, v53, 0LL);
                  if ( tdInfo )
                  {
                    v56 = this;
                    v57 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v57 )
                    {
                      UIRangeLabel__Set(v57, (System_String_o *)v56, (System_String_o *)this, 0, 0, 0LL);
                      v58 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
                      {
                        this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
                        if ( !this )
                          goto LABEL_112;
                        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                      }
                      goto LABEL_75;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_112:
    sub_1C22094(this, v17);
  }
LABEL_251:
  baseButton = (UnityEngine_Object_o *)v16->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v16->fields.baseButton;
    if ( !this )
      goto LABEL_112;
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
  __int64 v5; // x21
  __int64 v6; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v8; // x8
  int v9; // w9
  signed __int64 v10; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v12; // x14
  struct SkillIconComponent_array *v13; // x8
  __int64 v14; // x20
  struct UnityEngine_GameObject_array *v15; // x8
  unsigned __int64 v16; // x21
  signed __int64 v17; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *v19; // x20
  struct UnityEngine_GameObject_array *v20; // x9
  SkillInfo_o *v21; // x20
  struct SkillIconComponent_array *v22; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct SkillIconComponent_array *v24; // x9
  int v25; // w8
  struct UnityEngine_GameObject_array *v26; // x9
  struct UnityEngine_GameObject_array *v27; // x8
  struct SkillIconComponent_array *v28; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  SwitchUIWidgetComponent_o *v41; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4BDB9CF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (FriendIconComponent_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDB9CF = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v6 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v6;
    *(_QWORD *)&v43.fields.fakeValue = v5;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v43, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41790300(v3, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_82;
      v8 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v8 << 32 < 1 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 0;
        v10 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v10 < (int)max_length )
            {
              if ( v10 >= max_length )
                goto LABEL_83;
              v12 = skillInfoList->m_Items[v10];
              if ( v12 && v12->fields.id >= 1 )
                v9 = v10 + 1;
            }
          }
          ++v10;
        }
        while ( v10 < (int)v8 );
      }
      if ( (int)v8 >= 1 )
      {
        v16 = 0LL;
        v17 = v9;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_82;
          if ( v16 >= appendSkillBaseList->max_length )
            goto LABEL_83;
          v19 = (UnityEngine_Object_o *)appendSkillBaseList->m_Items[v16];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v16 >= v17 )
            {
              v27 = v4->fields.appendSkillBaseList;
              if ( !v27 )
                goto LABEL_82;
              if ( v16 >= v27->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v27->m_Items[v16];
              if ( !this )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_82;
              if ( v16 >= skillInfoList->max_length )
                goto LABEL_83;
              v20 = v4->fields.appendSkillBaseList;
              if ( !v20 )
                goto LABEL_82;
              if ( v16 >= v20->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v20->m_Items[v16];
              if ( !this )
                goto LABEL_82;
              v21 = skillInfoList->m_Items[v16];
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v22 = v4->fields.appendSkillIconList;
              if ( !v22 )
                goto LABEL_82;
              if ( v16 >= v22->max_length )
                goto LABEL_83;
              if ( !v21 )
                goto LABEL_82;
              this = (FriendIconComponent_o *)v22->m_Items[v16];
              if ( !this )
                goto LABEL_82;
              SkillIconComponent__Set_39479592(
                (SkillIconComponent_o *)this,
                v21->fields.id,
                v21->fields.lv,
                v21->fields.strengthStatus,
                v21->fields.skillRecord,
                0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_82;
              if ( v16 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)appendSkillLevelIconLabelList->m_Items[v16];
              if ( !this )
                goto LABEL_82;
              UIIconLabel__Set_39480396((UIIconLabel_o *)this, 48, v21->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
              this = (FriendIconComponent_o *)ConstantMaster__IsFLAG20240804(0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                }
                v24 = this->fields.appendSkillIconList;
                v25 = HIDWORD(v24->m_Items[145]);
                if ( v16 )
                  v25 += LODWORD(v24->m_Items[146]) * v16;
                v26 = v4->fields.appendSkillBaseList;
                if ( !v26 )
                  goto LABEL_82;
                if ( v16 >= v26->max_length )
                  goto LABEL_83;
                GameObjectExtensions__SetLocalPositionX(v26->m_Items[v16], (float)v25, 0LL);
              }
            }
          }
          v28 = v4->fields.appendSkillIconList;
          if ( !v28 )
            goto LABEL_82;
        }
        while ( (__int64)++v16 < (int)v28->max_length );
      }
      appendSkillInfoUiWidget = (UnityEngine_Object_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
      {
        switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v37 = *(_QWORD *)&this->fields.m_CachedPtr;
          v38 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v37 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = v37 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v40 + 32) = info;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)info, v31, v32, v33, v34, v35, v36);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v41 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v41 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v41, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_19:
      v13 = v4->fields.appendSkillIconList;
      if ( !v13 )
        goto LABEL_82;
      v14 = 0LL;
      while ( (int)v14 < (signed int)v13->max_length )
      {
        v15 = v4->fields.appendSkillBaseList;
        if ( v15 )
        {
          if ( (unsigned int)v14 >= v15->max_length )
LABEL_83:
            sub_1C2209C(this, info);
          this = (FriendIconComponent_o *)v15->m_Items[v14];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v13 = v4->fields.appendSkillIconList;
            ++v14;
            if ( v13 )
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
        sub_1C22094(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}