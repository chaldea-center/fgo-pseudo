void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SkillIconComponent_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UIIconLabel_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct SkillIconComponent_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct UIIconLabel_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4C213ED & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1C3B764(&SkillIconComponent___TypeInfo, v4);
    sub_1C3B764(&UIIconLabel___TypeInfo, v5);
    byte_4C213ED = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (struct SkillIconComponent_array *)sub_1C3B80C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (struct UIIconLabel_array *)sub_1C3B80C(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.skillLevelIconLabelList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillBaseList,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_1C3B80C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillIconList,
    (int64_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_1C3B80C(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appendSkillLevelIconLabelList,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v20; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v22; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v24; // x19

  if ( (byte_4C213E0 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_20579/*"java.io.IOException"*/, v6);
    sub_1C3B764(&StringLiteral_20730/*"leaseManagerPollTime"*/, v7);
    sub_1C3B764(&StringLiteral_20478/*"isPlaying"*/, v8);
    sub_1C3B764(&StringLiteral_20729/*"leader"*/, v9);
    byte_4C213E0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20579/*"java.io.IOException"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20730/*"leaseManagerPollTime"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v22 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_20478/*"isPlaying"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v24 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v24, (System_String_o *)StringLiteral_20729/*"leader"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C213EC & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C213EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
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

  if ( (byte_4C213E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C213E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C213E8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C213E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
    sub_1C3B9C0(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1C3B9C8(this, method);
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v10; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4C213E3 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1C3B764(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1C3B764(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C213E3 = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
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
      v10 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1C3B9C0(v13, v14);
      CommonUI__OpenServantStatusDialog_31244276((CommonUI_o *)Instance, 5, v10, v12, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportClassBoardBuff(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v15; // x20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Master_object; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  int32_t klass; // w22
  struct OtherUserGameEntity_o *v25; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v28; // w20
  unsigned int v29; // w24
  __int64 v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double inited; // q0
  _QWORD *v38; // x22
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  int64_t *v42; // x8
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  long double v50; // q0
  _QWORD *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  int64_t *v55; // x8
  int64_t v56; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v58; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4C213EB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Array_Empty_int___, v3);
    sub_1C3B764(&ClassBoardInfo_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C3B764(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_1C3B764(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4C213EB = 1;
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
      v15 = ServantLeaderInfo;
      v16 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C3B748(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v20;
      *(_QWORD *)&v59.fields.fakeValue = v19;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v59, 0LL);
      if ( !v21 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_44;
      Entity = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, klass, 0LL);
      v25 = this->fields.userGameEntity;
      if ( !v25 )
        goto LABEL_44;
      userClassBoardInfo = v25->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_44;
      max_length = userClassBoardInfo->max_length;
      v28 = (int)Entity;
      if ( max_length >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v29 >= max_length )
            sub_1C3B9C8(Entity, v23);
          v30 = (__int64)userClassBoardInfo->m_Items[v29];
          if ( !v30 )
            goto LABEL_44;
          if ( *(_DWORD *)(v30 + 16) == v28 )
          {
            Entity = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v30, klass, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_41;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v29 < max_length );
      }
      v30 = sub_1C3B9B0(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
      if ( !v30 )
        goto LABEL_44;
      *(_DWORD *)(v30 + 16) = v28;
      v38 = Method_System_Array_Empty_int___;
      v39 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v39 )
      {
        sub_1C8D69C(Method_System_Array_Empty_int___);
        v39 = v38[7];
      }
      v40 = *(_QWORD *)(v39 + 16);
      if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
        v40 = sub_1C8D640(inited);
      if ( !*(_DWORD *)(v40 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v40);
      v41 = *(_QWORD *)(v38[7] + 16LL);
      if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
        v41 = sub_1C8D640(inited);
      v42 = *(int64_t **)(v41 + 184);
      v43 = *v42;
      *(_QWORD *)(v30 + 24) = *v42;
      sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 24), v43, v31, v32, v33, v34, v35, v36);
      v51 = Method_System_Array_Empty_int___;
      v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v52 )
      {
        sub_1C8D69C(Method_System_Array_Empty_int___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1C8D640(v50);
      if ( !*(_DWORD *)(v53 + 224) )
        v50 = j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C8D640(v50);
      v55 = *(int64_t **)(v54 + 184);
      v56 = *v55;
      *(_QWORD *)(v30 + 32) = *v55;
      sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 32), v56, v44, v45, v46, v47, v48, v49);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v58,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1C3B9C0(Entity, v23);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v28, 0, v58, 1, (ClassBoardInfo_o *)v30, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4C213E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&SupportInfoJump_TypeInfo, v4);
    byte_4C213E6 = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_1C3B9B0(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v10);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v8, 0LL);
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
  __int64 v3; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v6; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t followerType; // w8
  int32_t v15; // w2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C213E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendIconComponent_OnLongPushEquip__, method);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4C213E9 = 1;
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
  v6 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1C3B9C0(userGameEntity, method);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v8 = EquipInfo;
    v10 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v10;
    *(_QWORD *)&v18.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v18, 0LL) >= 1 )
    {
      v11 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OnLongPushEquip__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v15 = 14;
      else
        v15 = 13;
      if ( v6 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v6, 0LL) )
          v15 = 19;
        else
          v15 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v8, v15, v13);
      return;
    }
  }
LABEL_22:
  v16 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OnLongPushEquip__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C3B748(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  SkillInfo_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_String_o *v21; // x19
  System_String_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C213EA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v11);
    sub_1C3B764(&StringLiteral_8699/*"Mapping for neutral culture "*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    byte_4C213EA = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41993020(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1C3B9C8(Master_object, v17);
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_1C3B748(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v18->fields.id,
                              (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v18->fields.lv, 0LL);
              v21 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
              lv = v18->fields.lv;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23, v24, v25);
              v27 = System_String__Format(v22, v26, 0LL);
              name = System_String__Concat_63379872(v21, (System_String_o *)StringLiteral_117/*"   "*/, v27, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1C3B9C0(Master_object, v17);
        }
      }
    }
  }
  v28 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v29 = (System_Reflection_MethodBase_o *)sub_1C3B748(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v17; // x20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  il2cpp_array_size_t max_length; // w9
  SkillInfo_o *v23; // x22
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v27; // x19
  System_String_o *v28; // x20
  System_String_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_String_o *v38; // x20
  Il2CppObject *v39; // x0
  System_String_o *v40; // x19
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C213E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v12);
    sub_1C3B764(&StringLiteral_8699/*"Mapping for neutral culture "*/, v13);
    sub_1C3B764(&StringLiteral_3012/*"BZip2InputStream Write not supported"*/, v14);
    byte_4C213E5 = 1;
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
  v17 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_25;
  v18 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C3B748(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1C3B9C8(v20, v21);
  v23 = skillInfoList->m_Items[skillIndex];
  if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23->fields.id,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v23->fields.id,
                                  v23->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v27 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v23->fields.lv, 0LL);
    v28 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
    lv = v23->fields.lv;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v30, v31, v32);
    v34 = System_String__Format(v29, v33, 0LL);
    name = System_String__Concat_63379872(v28, (System_String_o *)StringLiteral_117/*"   "*/, v34, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BZip2InputStream Write not supported"*/, 0LL);
    if ( !v27
      || (v38 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource,
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v35, v36, v37),
          v40 = System_String__Format(v38, v39, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1C3B9C0(Instance, v25);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v40, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v41 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1C3B77C(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v42 = (System_Reflection_MethodBase_o *)sub_1C3B748(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0, 0LL);
  }
}


void __fastcall FriendIconComponent__SelectShowServantEquip(
        FriendIconComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C213E7 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1C3B764(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4C213E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1C3B9C0(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_31247372((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  OtherUserGameEntity_o *v15; // x22
  FriendIconComponent_o *v16; // x19
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
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  Il2CppObject *v58; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x29
  const MethodInfo *v60; // x1
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v65; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v67; // x25
  __int64 v68; // x26
  FriendIconComponent_o *overwriteServantName; // x26
  UIRangeLabel_o *v70; // x25
  System_Collections_Generic_Dictionary_int__int__o *v71; // x20
  Il2CppObject *v72; // x0
  __int64 v73; // x27
  __int64 v74; // x28
  ServantLimitImageMaster_o *v75; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w20
  long double v80; // q0
  __int64 v81; // x8
  __int64 v82; // x0
  Il2CppObject *v83; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  OtherUserGameEntity_o *v85; // x21
  System_Collections_Generic_Dictionary_int__int__o *v86; // x22
  Il2CppObject *v87; // x0
  __int64 v88; // x20
  __int64 v89; // x29
  ServantLimitImageMaster_o *v90; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v93; // x9
  Il2CppObject *v94; // x25
  System_String_o *v95; // x20
  System_String_o *v96; // x0
  FriendIconComponent_o *v97; // x25
  UIRangeLabel_o *v98; // x26
  UnityEngine_Object_o *v99; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v103; // x25
  __int64 v104; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v106; // x8
  int v107; // w9
  unsigned __int64 v108; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v110; // x14
  struct SkillIconComponent_array *v111; // x8
  __int64 v112; // x20
  unsigned __int64 v113; // x24
  struct UnityEngine_GameObject_array *v114; // x8
  UnityEngine_Object_o *v115; // x25
  struct UnityEngine_GameObject_array *v116; // x8
  UnityEngine_Object_o *v117; // x20
  const MethodInfo *v118; // x2
  signed __int64 v119; // x20
  __int64 v120; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v122; // x26
  UnityEngine_Object_o *v123; // x25
  struct UnityEngine_GameObject_array *v124; // x9
  int32_t *v125; // x25
  struct SkillIconComponent_array *v126; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v128; // x8
  struct SkillIconComponent_array *v129; // x8
  __int64 v130; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v141; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v143; // x25
  __int64 v144; // x26
  __int64 v145; // x27
  int32_t v146; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v148; // w27
  int32_t Kind_39109416; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v152; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v156; // s0
  float v157; // s8
  float v158; // s0
  float v159; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v162; // s10
  UnityEngine_GameObject_o *v163; // x0
  UnityEngine_GameObject_o *v164; // x0
  __int64 v165; // x24
  __int64 v166; // x25
  Il2CppObject *v167; // x0
  __int64 v168; // x20
  __int64 v169; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v170; // x23
  int32_t v171; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v173; // w8
  int32_t v174; // w22
  unsigned int v175; // w25
  ClassBoardInfo_o *v176; // x24
  int v177; // w22
  _BOOL4 v178; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  Il2CppObject **v183; // x8
  Il2CppObject *v184; // x20
  Il2CppObject *v185; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v187; // x20
  BalanceConfig_c *v188; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v190; // x0
  UnityEngine_GameObject_o *v191; // x0
  UnityEngine_GameObject_o *v192; // x0
  UnityEngine_Object_o *v193; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v196; // x1
  System_Collections_Generic_IEnumerator_T__o *v197; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v199; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v202; // x8
  __int64 v203; // x9
  int *v204; // x10
  __int64 v205; // x0
  __int64 v206; // x25
  Il2CppObject *Master_object; // x0
  __int64 v208; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v210; // x1
  System_Collections_Generic_IEnumerator_T__c *v211; // x8
  __int64 v212; // x9
  int *v213; // x10
  __int64 v214; // x0
  struct System_Int32_array *squareIds; // x8
  int v216; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v217; // [xsp+18h] [xbp-98h]
  int v218; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16

  v9 = classBoardMaxNumDictionary;
  v10 = followerDeckId;
  v12 = displayServantType;
  v13 = classPos;
  v15 = userGameEntity;
  v16 = this;
  if ( (byte_4C213E1 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, userGameEntity);
    sub_1C3B764(&BalanceConfig_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v22);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v23);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v24);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v25);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v26);
    sub_1C3B764(&DataManager_TypeInfo, v27);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1C3B764(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v32);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v34);
    sub_1C3B764(&UnityEngine_Font_TypeInfo, v35);
    sub_1C3B764(&Grade_TypeInfo, v36);
    sub_1C3B764(&System_IDisposable_TypeInfo, v37);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v38);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1C3B764(&int_TypeInfo, v40);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v41);
    sub_1C3B764(&LocalizationManager_TypeInfo, v42);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v43);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    sub_1C3B764(&OptionManager_TypeInfo, v45);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v46);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v47);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_1C3B764(&StringLiteral_3816/*"CP01147"*/, v49);
    sub_1C3B764(&StringLiteral_6935/*"GetRuntimeVariables"*/, v50);
    sub_1C3B764(&StringLiteral_6531/*"Feb"*/, v51);
    sub_1C3B764(&StringLiteral_17819/*"command_code_setstatus"*/, v52);
    sub_1C3B764(&StringLiteral_9518/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/, v53);
    sub_1C3B764(&StringLiteral_6530/*"Feature requires a process identifier."*/, v54);
    sub_1C3B764(&StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v55);
    sub_1C3B764(&StringLiteral_9512/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v56);
    this = (FriendIconComponent_o *)sub_1C3B764(&StringLiteral_16343/*"adid"*/, v57);
    byte_4C213E1 = 1;
  }
  if ( isUseServantStatus )
    v58 = (Il2CppObject *)v15;
  else
    v58 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_112;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = (struct OtherUserGameEntity_o *)v58;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v16->fields.userGameEntity,
    (int64_t)v58,
    isUseServantStatus,
    classPos,
    *(System_String_o **)&displayServantType,
    *(BattleSetupInfo_o **)&ftype,
    *(FollowerInfo_o **)&followerDeckId,
    (PartyListViewItem_o *)classBoardMaxNumDictionary);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = v12;
  v16->fields.followerType = ftype;
  if ( v15 )
  {
    if ( !v10 )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v60);
      v13 = v16->fields.classPos;
      v12 = v16->fields.displayServantType;
      v10 = TargetDeckId;
    }
    v16->fields.deckId = v10;
    if ( OtherUserGameEntity__getSvtId(v15, v13, v12, v10, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        v15,
                                        v16->fields.classPos,
                                        v16->fields.displayServantType,
                                        v16->fields.deckId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_112;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)this,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    else
    {
      Entity = 0LL;
    }
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          v15,
                          v16->fields.classPos,
                          1,
                          v16->fields.displayServantType,
                          v16->fields.deckId,
                          0LL);
    v65 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v221.fields.currentCryptoKey = v68;
          *(_QWORD *)&v221.fields.fakeValue = v67;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v221, 0LL) )
            v65 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_39648128((ServantFaceIconComponent_o *)this, v65, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v15->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_39659976((UIIconLabel_o *)this, 2, v15->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v217 = Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3816/*"CP01147"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_112;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL);
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
            UpdatedAt = OtherUserGameEntity__getUpdatedAt(v15, v16->fields.classPos, 0LL);
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
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v65 )
              goto LABEL_99;
            v104 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v103 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v224.fields.currentCryptoKey = v104;
            *(_QWORD *)&v224.fields.fakeValue = v103;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v224,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v65, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_112;
              v106 = *(_QWORD *)&skillIconList->max_length;
              if ( v106 << 32 >= 1 )
              {
                v107 = 0;
                v108 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v108 < (int)max_length )
                  {
                    if ( v108 >= max_length )
                      goto LABEL_294;
                    v110 = skillInfoList->m_Items[v108];
                    if ( v110 && v110->fields.id >= 1 )
                      v107 = v108 + 1;
                  }
                  if ( (__int64)++v108 >= (int)v106 )
                    goto LABEL_120;
                }
                goto LABEL_112;
              }
              v107 = 0;
LABEL_120:
              if ( (int)v106 >= 1 )
              {
                v119 = v107;
                v120 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_112;
                  v122 = v120 - 4;
                  if ( v120 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_294;
                  v123 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v120);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v123, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v122 >= v119 )
                    {
                      v128 = v16->fields.skillBaseList;
                      if ( !v128 )
                        goto LABEL_112;
                      if ( v122 >= v128->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v128->obj.klass + v120);
                      if ( !this )
                        goto LABEL_112;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_112;
                      if ( v122 >= skillInfoList->max_length )
                        goto LABEL_294;
                      v124 = v16->fields.skillBaseList;
                      if ( !v124 )
                        goto LABEL_112;
                      if ( v122 >= v124->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v124->obj.klass + v120);
                      if ( !this )
                        goto LABEL_112;
                      v125 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v120);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v126 = v16->fields.skillIconList;
                      if ( !v126 )
                        goto LABEL_112;
                      if ( v122 >= v126->max_length )
                        goto LABEL_294;
                      if ( !v125 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v126->obj.klass + v120);
                      if ( !this )
                        goto LABEL_112;
                      SkillIconComponent__Set_39659172(
                        (SkillIconComponent_o *)this,
                        v125[4],
                        v125[5],
                        v125[12],
                        v125[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_112;
                      if ( v122 >= skillLevelIconLabelList->max_length )
                        goto LABEL_294;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v120);
                      if ( !this )
                        goto LABEL_112;
                      UIIconLabel__Set_39659976((UIIconLabel_o *)this, 48, v125[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v129 = v16->fields.skillIconList;
                  if ( !v129 )
                    goto LABEL_112;
                  v130 = v120 - 3;
                  ++v120;
                }
                while ( v130 < (int)v129->max_length );
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
                v58 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v138 = *(_QWORD *)&this->fields.m_CachedPtr;
                v139 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v138 )
                  goto LABEL_112;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v138 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v58,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                }
                else
                {
                  v141 = v138 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v141 + 32) = v58;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)(v141 + 32),
                    (int64_t)v58,
                    v132,
                    v133,
                    v134,
                    v135,
                    v136,
                    v137);
                }
              }
            }
            else
            {
LABEL_99:
              v111 = v16->fields.skillIconList;
              if ( !v111 )
                goto LABEL_112;
              v112 = 4LL;
              while ( 1 )
              {
                v113 = v112 - 4;
                if ( v112 - 4 >= (int)v111->max_length )
                  break;
                v114 = v16->fields.skillBaseList;
                if ( !v114 )
                  goto LABEL_112;
                if ( v113 >= v114->max_length )
                  goto LABEL_294;
                v115 = (UnityEngine_Object_o *)*((_QWORD *)&v114->obj.klass + v112);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v115, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v116 = v16->fields.skillBaseList;
                  if ( !v116 )
                    goto LABEL_112;
                  if ( v113 >= v116->max_length )
LABEL_294:
                    sub_1C3B9C8(this, v58);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v116->obj.klass + v112);
                  if ( !this )
                    goto LABEL_112;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v111 = v16->fields.skillIconList;
                ++v112;
                if ( !v111 )
                  goto LABEL_112;
              }
              v117 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v117, 0LL, 0LL) )
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
            FriendIconComponent__SetAppendSkill(v16, v65, v118);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v143 = v16->fields.svtCommandCardList;
              if ( v65 )
              {
                v145 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v144 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v225.fields.currentCryptoKey = v145;
                *(_QWORD *)&v225.fields.fakeValue = v144;
                v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v225, 0LL);
                commandCardParam = v65->fields.commandCardParam;
                v148 = v146;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v65, 0LL);
                if ( !v143 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Set_39637016(
                  v143,
                  v148,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v143 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_39109416 = Grade__GetKind_39109416(v15, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_39109416, 0LL);
            baseSpr = v16->fields.baseSpr;
            v152 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v152, 0LL);
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
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6935/*"GetRuntimeVariables"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_112;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1C3BC80(this);
                  goto LABEL_299;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              LODWORD(v156) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v157 = v156;
              LODWORD(v158) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              v159 = v158;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v162 = LocalPositionX;
              v163 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v163, (float)(v159 * 0.5) + (float)(v157 + v162), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v164 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v164, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_39109416, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_112;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_112;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v217 )
            {
              if ( !v65 )
                goto LABEL_112;
              if ( v15->fields.pushUserSvtId == v65->fields.userSvtId )
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
            else if ( !v65 )
            {
              goto LABEL_245;
            }
            v166 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v165 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v226.fields.currentCryptoKey = v166;
            *(_QWORD *)&v226.fields.fakeValue = v165;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v226, 0LL) >= 1
              && v15->fields.userClassBoardInfo )
            {
              if ( v9 )
                goto LABEL_203;
              v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                v9,
                (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)this->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
              v197 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v197->klass;
                  v199 = *(unsigned __int16 *)(&v197->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v197->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v199;
                      p_offset += 4;
                      if ( !v199 )
                        goto LABEL_266;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_266:
                    p_method = sub_1C8D744(v197, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v197,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v202 = v197->klass;
                  v203 = *(unsigned __int16 *)(&v197->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v197->klass->_2.bitflags2 + 3) )
                  {
                    v204 = &v202->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v204 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
                    {
                      --v203;
                      v204 += 4;
                      if ( !v203 )
                        goto LABEL_273;
                    }
                    v205 = (__int64)&v202->vtable[*v204].method;
                  }
                  else
                  {
LABEL_273:
                    v205 = sub_1C8D744(v197, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
                  }
                  v206 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v205)(
                           v197,
                           *(_QWORD *)(v205 + 8));
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v206 )
                    sub_1C3B9C0(Master_object, v208);
                  if ( !Master_object )
                    sub_1C3B9C0(0LL, v208);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v206 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !v9 )
                      sub_1C3B9C0(OtherThanNoneEntity, v210);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      v9,
                      *(_DWORD *)(v206 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v197 )
                {
                  v211 = v197->klass;
                  v212 = *(unsigned __int16 *)(&v197->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v197->klass->_2.bitflags2 + 3) )
                  {
                    v213 = &v211->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v213 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v212;
                      v213 += 4;
                      if ( !v212 )
                        goto LABEL_287;
                    }
                    v214 = (__int64)&v211->vtable[*v213].method;
                  }
                  else
                  {
LABEL_287:
                    v214 = sub_1C8D744(v197, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v214)(
                    v197,
                    *(_QWORD *)(v214 + 8));
                }
LABEL_203:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v167 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
                v168 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v169 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                v170 = (DataMasterBase_TMaster__TEntity__PKType__o *)v167;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v227.fields.currentCryptoKey = v168;
                *(_QWORD *)&v227.fields.fakeValue = v169;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                  v227,
                                                  0LL);
                if ( !v170 )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v170,
                                                  (int32_t)this,
                                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_112;
                v171 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v171,
                                                  0LL);
                userClassBoardInfo = v15->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_112;
                v173 = userClassBoardInfo->max_length;
                if ( v173 < 1 )
                {
LABEL_220:
                  v177 = 0;
                }
                else
                {
                  v174 = (int)this;
                  v175 = 0;
                  while ( 1 )
                  {
                    if ( v175 >= v173 )
                      goto LABEL_294;
                    v176 = userClassBoardInfo->m_Items[v175];
                    if ( !v176 )
                      goto LABEL_112;
                    if ( v176->fields.classBoardBaseId == v174 )
                    {
                      if ( !v9 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        v9,
                                                        v174,
                                                        (const MethodInfo_32EC2B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v176, v171, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v173 = userClassBoardInfo->max_length;
                    if ( (int)++v175 >= v173 )
                      goto LABEL_220;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    v9,
                                                    v174,
                                                    (const MethodInfo_32EC030 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v176->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_112;
                  v177 = squareIds->max_length;
                  v178 = (int)this > v177;
                  if ( (int)this > 0 )
                    goto LABEL_222;
                }
                v178 = 1;
LABEL_222:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v183 = (Il2CppObject **)&StringLiteral_6531/*"Feb"*/;
                  if ( !v178 )
                    v183 = (Il2CppObject **)&StringLiteral_6530/*"Feature requires a process identifier."*/;
                  v184 = *v183;
                  v218 = v177;
                  v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v180, v181, v182);
                  this = (FriendIconComponent_o *)System_String__Format_63382984(
                                                    (System_String_o *)StringLiteral_16343/*"adid"*/,
                                                    v184,
                                                    v185,
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
                    v187 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v188 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v188 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_34963288(
                      v187,
                      v188->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17819/*"command_code_setstatus"*/,
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
                    v190 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_34963288(
                      v190,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_112;
                    v191 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v191,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_112;
                    v192 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v192,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_251;
              }
LABEL_299:
              sub_1C3B9C0(Enumerator, v196);
            }
LABEL_245:
            v193 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v193, 0LL, 0LL) )
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
          if ( !v65 )
            goto LABEL_112;
          overwriteServantName = (FriendIconComponent_o *)v65->fields.overwriteServantName;
          this = (FriendIconComponent_o *)System_String__IsNullOrEmpty((System_String_o *)overwriteServantName, 0LL);
          v70 = v16->fields.servantNameLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v71 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v72 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v74 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v73 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v75 = (ServantLimitImageMaster_o *)v72;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v222.fields.currentCryptoKey = v74;
            *(_QWORD *)&v222.fields.fakeValue = v73;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v222,
                                              0LL);
            if ( !v75 )
              goto LABEL_112;
            this = (FriendIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                              v75,
                                              (int32_t)this,
                                              v65->fields.limitCount,
                                              0,
                                              0LL);
            if ( !v70 )
              goto LABEL_112;
            overwriteServantName = this;
            v9 = v71;
          }
          else if ( !v70 )
          {
            goto LABEL_112;
          }
          UIRangeLabel__Set(v70, (System_String_o *)overwriteServantName, 0LL, 1, 0, 0LL);
          OtherUserGameEntity__getTreasureDeviceInfo(
            v15,
            &tdInfo,
            v16->fields.classPos,
            v16->fields.displayServantType,
            v16->fields.deckId,
            0LL);
          TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                      v15,
                                      v16->fields.classPos,
                                      v16->fields.displayServantType,
                                      v16->fields.deckId,
                                      0LL);
          v81 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
            v81 = sub_1C8D640(v80);
          v82 = *(_QWORD *)(*(_QWORD *)(v81 + 192) + 16LL);
          if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
            v82 = sub_1C8D640(v80);
          this = **(FriendIconComponent_o ***)(v82 + 184);
          if ( this )
          {
            v83 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v65, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            v216 = TreasureDeviceLevelIcon;
            if ( OptionManager__GetSpoilerSetting(0LL) )
            {
              v85 = v15;
            }
            else
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_112;
              v85 = v15;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v65->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v86 = v9;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v87 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v88 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v89 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v90 = (ServantLimitImageMaster_o *)v87;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v223.fields.currentCryptoKey = v88;
            *(_QWORD *)&v223.fields.fakeValue = v89;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v223,
                                              0LL);
            if ( v90 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v90,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                v65->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v83 )
                {
                  p_userGameEntity = &v16->fields.userGameEntity;
                  v9 = v86;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v83,
                                      (int32_t)this,
                                      ServantLimitCountSealAfter,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v93 = (System_String_o **)&StringLiteral_9518/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/;
                  v94 = (Il2CppObject *)OverwriteTDName;
                  v15 = v85;
                  if ( v216 <= 1 )
                    v93 = (System_String_o **)&StringLiteral_9512/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/;
                  v95 = *v93;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v96 = LocalizationManager__Get(v95, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v96, v94, 0LL);
                  if ( tdInfo )
                  {
                    v97 = this;
                    v98 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v98 )
                    {
                      UIRangeLabel__Set(v98, (System_String_o *)v97, (System_String_o *)this, 0, 0, 0LL);
                      v99 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
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
    sub_1C3B9C0(this, v58);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v12; // x8
  int v13; // w9
  signed __int64 v14; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v16; // x14
  struct SkillIconComponent_array *v17; // x8
  __int64 v18; // x20
  struct UnityEngine_GameObject_array *v19; // x8
  unsigned __int64 v20; // x21
  signed __int64 v21; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x9
  SkillInfo_o *v25; // x20
  struct SkillIconComponent_array *v26; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct SkillIconComponent_array *v28; // x9
  int v29; // w8
  struct UnityEngine_GameObject_array *v30; // x9
  struct UnityEngine_GameObject_array *v31; // x8
  struct SkillIconComponent_array *v32; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  SwitchUIWidgetComponent_o *v45; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4C213E2 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, info);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    this = (FriendIconComponent_o *)sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4C213E2 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v10 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v10;
    *(_QWORD *)&v47.fields.fakeValue = v9;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v47, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41993020(v3, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_82;
      v12 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v12 << 32 < 1 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 0;
        v14 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v14 < (int)max_length )
            {
              if ( v14 >= max_length )
                goto LABEL_83;
              v16 = skillInfoList->m_Items[v14];
              if ( v16 && v16->fields.id >= 1 )
                v13 = v14 + 1;
            }
          }
          ++v14;
        }
        while ( v14 < (int)v12 );
      }
      if ( (int)v12 >= 1 )
      {
        v20 = 0LL;
        v21 = v13;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_82;
          if ( v20 >= appendSkillBaseList->max_length )
            goto LABEL_83;
          v23 = (UnityEngine_Object_o *)appendSkillBaseList->m_Items[v20];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v20 >= v21 )
            {
              v31 = v4->fields.appendSkillBaseList;
              if ( !v31 )
                goto LABEL_82;
              if ( v20 >= v31->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v31->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_82;
              if ( v20 >= skillInfoList->max_length )
                goto LABEL_83;
              v24 = v4->fields.appendSkillBaseList;
              if ( !v24 )
                goto LABEL_82;
              if ( v20 >= v24->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v24->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              v25 = skillInfoList->m_Items[v20];
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v26 = v4->fields.appendSkillIconList;
              if ( !v26 )
                goto LABEL_82;
              if ( v20 >= v26->max_length )
                goto LABEL_83;
              if ( !v25 )
                goto LABEL_82;
              this = (FriendIconComponent_o *)v26->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              SkillIconComponent__Set_39659172(
                (SkillIconComponent_o *)this,
                v25->fields.id,
                v25->fields.lv,
                v25->fields.strengthStatus,
                v25->fields.skillRecord,
                0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_82;
              if ( v20 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)appendSkillLevelIconLabelList->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              UIIconLabel__Set_39659976((UIIconLabel_o *)this, 48, v25->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
              this = (FriendIconComponent_o *)ConstantMaster__IsFLAG20240804(0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                }
                v28 = this->fields.appendSkillIconList;
                v29 = HIDWORD(v28->m_Items[145]);
                if ( v20 )
                  v29 += LODWORD(v28->m_Items[146]) * v20;
                v30 = v4->fields.appendSkillBaseList;
                if ( !v30 )
                  goto LABEL_82;
                if ( v20 >= v30->max_length )
                  goto LABEL_83;
                GameObjectExtensions__SetLocalPositionX(v30->m_Items[v20], (float)v29, 0LL);
              }
            }
          }
          v32 = v4->fields.appendSkillIconList;
          if ( !v32 )
            goto LABEL_82;
        }
        while ( (__int64)++v20 < (int)v32->max_length );
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
          v41 = *(_QWORD *)&this->fields.m_CachedPtr;
          v42 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v41 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = v41 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v44 + 32) = info;
            sub_1C3B708((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)info, v35, v36, v37, v38, v39, v40);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v45 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v45 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v45, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_19:
      v17 = v4->fields.appendSkillIconList;
      if ( !v17 )
        goto LABEL_82;
      v18 = 0LL;
      while ( (int)v18 < (signed int)v17->max_length )
      {
        v19 = v4->fields.appendSkillBaseList;
        if ( v19 )
        {
          if ( (unsigned int)v18 >= v19->max_length )
LABEL_83:
            sub_1C3B9C8(this, info);
          this = (FriendIconComponent_o *)v19->m_Items[v18];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v17 = v4->fields.appendSkillIconList;
            ++v18;
            if ( v17 )
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
        sub_1C3B9C0(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}