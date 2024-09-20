void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIIconLabel_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct SkillIconComponent_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct UIIconLabel_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5A636 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&SkillIconComponent___TypeInfo);
    sub_1B885B0(&UIIconLabel___TypeInfo);
    byte_4A5A636 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIIconLabel_array *)sub_1B88658(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v13, v14, v15);
  v16 = (struct SkillIconComponent_array *)sub_1B88658(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v16, v17, v18);
  v19 = (struct UIIconLabel_array *)sub_1B88658(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v19, v20, v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v7; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v9; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v11; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v13; // x19

  if ( (byte_4A5A629 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20178/*"icon_skill_mini"*/);
    sub_1B885B0(&StringLiteral_20320/*"img_friend_skill"*/);
    sub_1B885B0(&StringLiteral_20083/*"icon_append_mini"*/);
    sub_1B885B0(&StringLiteral_20319/*"img_friend_appendskill"*/);
    byte_4A5A629 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v7 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20178/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v9 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20320/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v11 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20083/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v13 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_20319/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A635 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A635 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A5A62D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A62D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5A631 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendIconComponent_EndCloseShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A631 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
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
    sub_1B8880C(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1B88814(this, method);
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

  if ( (byte_4A5A62C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FriendIconComponent_EndShowServant__);
    sub_1B885B0(&Method_FriendIconComponent_OnClickServantStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A62C = 1;
  }
  v3 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OnClickServantStatus__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServant__, 0LL);
      if ( !Instance )
        sub_1B8880C(v10, v11);
      CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)Instance, 5, v7, v9, 0LL);
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
  int32_t v21; // w2
  int32_t v22; // w3
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 *v27; // x8
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  _QWORD *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 *v35; // x8
  __int64 v36; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A5A634 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&ClassBoardInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__);
    sub_1B885B0(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A634 = 1;
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
        v6 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      v10 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v10;
      *(_QWORD *)&v39.fields.fakeValue = v9;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
      if ( !v11 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 (int32_t)Entity,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
            sub_1B88814(Entity, v13);
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
      v20 = sub_1B887FC(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v20, 0LL);
      if ( !v20 )
        goto LABEL_44;
      *(_DWORD *)(v20 + 16) = v18;
      v23 = Method_System_Array_Empty_int___;
      v24 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v24 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v24 = v23[7];
      }
      v25 = *(_QWORD *)(v24 + 16);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1BDA48C(v25);
      if ( !*(_DWORD *)(v25 + 224) )
        j_il2cpp_runtime_class_init_0(v25);
      v26 = *(_QWORD *)(v23[7] + 16LL);
      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
        v26 = sub_1BDA48C(v26);
      v27 = *(__int64 **)(v26 + 184);
      v28 = *v27;
      *(_QWORD *)(v20 + 24) = *v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 24), v28, v21, v22);
      v31 = Method_System_Array_Empty_int___;
      v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v32 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v32 = v31[7];
      }
      v33 = *(_QWORD *)(v32 + 16);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1BDA48C(v33);
      if ( !*(_DWORD *)(v33 + 224) )
        j_il2cpp_runtime_class_init_0(v33);
      v34 = *(_QWORD *)(v31[7] + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1BDA48C(v34);
      v35 = *(__int64 **)(v34 + 184);
      v36 = *v35;
      *(_QWORD *)(v20 + 32) = *v35;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), v36, v29, v30);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1B8880C(Entity, v13);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v18, 0, v38, 1, (ClassBoardInfo_o *)v20, 0LL);
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

  if ( (byte_4A5A62F & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendIconComponent_OnClickSupportInfo__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    byte_4A5A62F = 1;
  }
  v3 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OnClickSupportInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v6 = (SupportInfoJump_o *)sub_1B887FC(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v6, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v8);
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

  if ( (byte_4A5A632 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendIconComponent_OnLongPushEquip__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A632 = 1;
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
    sub_1B8880C(userGameEntity, method);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL) >= 1 )
    {
      v10 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OnLongPushEquip__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
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
    v15 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OnLongPushEquip__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
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

  if ( (byte_4A5A633 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A633 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1B88814(Master_object, v8);
        v9 = skillInfoList->m_Items[skillIndex];
        if ( v9 && v9->fields.id >= 1 && v9->fields.lv >= 1 )
        {
          v10 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v9->fields.id,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v9->fields.lv, 0LL);
              v12 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v9->fields.lv;
              v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v14, v15, v16);
              v18 = System_String__Format(v13, v17, 0LL);
              name = System_String__Concat_61718292(v12, (System_String_o *)StringLiteral_117/*" "*/, v18, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B8880C(Master_object, v8);
        }
      }
    }
  }
  v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
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

  if ( (byte_4A5A62E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_FriendIconComponent_OpenSkillInfoDialog__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1B885B0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4A5A62E = 1;
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
    v8 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v7, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1B88814(v10, v11);
  v13 = skillInfoList->m_Items[skillIndex];
  if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v13->fields.id,
               (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v13->fields.lv;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v20, v21, v22);
    v24 = System_String__Format(v19, v23, 0LL);
    name = System_String__Concat_61718292(v18, (System_String_o *)StringLiteral_117/*" "*/, v24, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v17
      || (v28 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource,
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v25, v26, v27),
          v30 = System_String__Format(v28, v29, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1B8880C(Instance, v15);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v30, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v31 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1B885C8(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v32 = (System_Reflection_MethodBase_o *)sub_1B88594(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0LL);
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

  if ( (byte_4A5A630 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FriendIconComponent_EndShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A630 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0LL, 0LL);
}


void __fastcall FriendIconComponent__SerializeFieldNotNullCheck(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


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
  int32_t v13; // w25
  FriendIconComponent_o *v16; // x19
  Il2CppObject *v17; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x28
  const MethodInfo *v19; // x1
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v24; // x6
  ServantLeaderInfo_o *v25; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v27; // x25
  __int64 v28; // x26
  System_String_o *overwriteServantName; // x25
  Il2CppObject *v30; // x0
  __int64 v31; // x26
  __int64 v32; // x27
  ServantLimitImageMaster_o *v33; // x25
  int32_t ServantLimitCountSealAfter; // w0
  FriendIconComponent_o *v35; // x25
  FriendIconComponent_o *v36; // x1
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w21
  __int64 v41; // x8
  __int64 v42; // x0
  Il2CppObject *v43; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  System_Collections_Generic_Dictionary_int__int__o *v45; // x25
  Il2CppObject *v46; // x0
  __int64 v47; // x20
  __int64 v48; // x29
  ServantLimitImageMaster_o *v49; // x28
  int32_t v50; // w27
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
  char v91; // w2
  int32_t v92; // w3
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v96; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v98; // x25
  __int64 v99; // x26
  __int64 v100; // x27
  int32_t v101; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v103; // w27
  const MethodInfo *v104; // x6
  int32_t Kind_37688668; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v108; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v112; // s0
  float v113; // s8
  float v114; // s0
  float v115; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v118; // s10
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  __int64 v121; // x24
  __int64 v122; // x25
  Il2CppObject *v123; // x0
  __int64 v124; // x20
  __int64 v125; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v126; // x23
  int32_t v127; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v129; // w8
  int32_t v130; // w22
  unsigned int v131; // w25
  ClassBoardInfo_o *v132; // x24
  int v133; // w22
  _BOOL4 v134; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  Il2CppObject **v139; // x8
  Il2CppObject *v140; // x20
  Il2CppObject *v141; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v143; // x20
  BalanceConfig_c *v144; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v146; // x0
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  UnityEngine_Object_o *v149; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v152; // x1
  System_Collections_Generic_IEnumerator_T__o *v153; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v155; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v158; // x8
  __int64 v159; // x9
  int *v160; // x10
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x25
  __int64 methodPtr_low; // x9
  Il2CppObject *Master_object; // x0
  __int64 v166; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v168; // x1
  System_Collections_Generic_IEnumerator_T__c *v169; // x8
  __int64 v170; // x9
  int *v171; // x10
  __int64 v172; // x0
  struct System_Int32_array *squareIds; // x8
  ServantEntity_o *v174; // [xsp+18h] [xbp-98h]
  int v175; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  v13 = classPos;
  v16 = this;
  if ( (byte_4A5A62A & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ClassBoardBaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&UnityEngine_Font_TypeInfo);
    sub_1B885B0(&Grade_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3772/*"COMMON_NO_ENTRY"*/);
    sub_1B885B0(&StringLiteral_6770/*"Fonts/FGO-Main-Font"*/);
    sub_1B885B0(&StringLiteral_6366/*"FFFFFF"*/);
    sub_1B885B0(&StringLiteral_17485/*"btn_bg_29_2"*/);
    sub_1B885B0(&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_6365/*"FFFF00"*/);
    sub_1B885B0(&StringLiteral_9298/*"NO_ENTRY_NAME"*/);
    sub_1B885B0(&StringLiteral_9322/*"NP_COLOR_NAME"*/);
    this = (FriendIconComponent_o *)sub_1B885B0(&StringLiteral_16027/*"[{0}]+{1}[-]"*/);
    byte_4A5A62A = 1;
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v16->fields.userGameEntity,
    (int32_t)v17,
    isUseServantStatus,
    classPos);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = displayServantType;
  v16->fields.followerType = ftype;
  if ( userGameEntity )
  {
    if ( !followerDeckId )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v19);
      v13 = v16->fields.classPos;
      displayServantType = v16->fields.displayServantType;
      followerDeckId = TargetDeckId;
    }
    v16->fields.deckId = followerDeckId;
    if ( OtherUserGameEntity__getSvtId(userGameEntity, v13, displayServantType, followerDeckId, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v25 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v28 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v178.fields.currentCryptoKey = v28;
          *(_QWORD *)&v178.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v178, 0LL) )
            v25 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_38133256((ServantFaceIconComponent_o *)this, v25, 0LL, 0LL, 0, 0, v24);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v174 = (ServantEntity_o *)Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_112;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/, 0LL);
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
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v25 )
              goto LABEL_99;
            v63 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v62 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v181.fields.currentCryptoKey = v63;
            *(_QWORD *)&v181.fields.fakeValue = v62;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v181,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v25, &skillInfoList, 0LL);
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
                      goto LABEL_297;
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
                    goto LABEL_297;
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
                        goto LABEL_297;
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
                        goto LABEL_297;
                      v83 = v16->fields.skillBaseList;
                      if ( !v83 )
                        goto LABEL_112;
                      if ( v81 >= v83->max_length )
                        goto LABEL_297;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v83->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      v84 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v79);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v85 = v16->fields.skillIconList;
                      if ( !v85 )
                        goto LABEL_112;
                      if ( v81 >= v85->max_length )
                        goto LABEL_297;
                      if ( !v84 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v85->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      SkillIconComponent__Set_38234800(
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
                        goto LABEL_297;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v79);
                      if ( !this )
                        goto LABEL_112;
                      UIIconLabel__Set_38235604((UIIconLabel_o *)this, 48, v84[5], 0, 0, 0LL, 0, 0, 0, 0LL);
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
                v93 = *(_QWORD *)&this->fields.m_CachedPtr;
                v94 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v93 )
                  goto LABEL_112;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v93 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v17,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
                }
                else
                {
                  v96 = v93 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v96 + 32) = v17;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v96 + 32), (int32_t)v17, v91, v92);
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
                  goto LABEL_297;
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
LABEL_297:
                    sub_1B88814(this, v17);
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
            FriendIconComponent__SetAppendSkill(v16, v25, v77);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v98 = v16->fields.svtCommandCardList;
              if ( v25 )
              {
                v100 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
                v99 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v182.fields.currentCryptoKey = v100;
                *(_QWORD *)&v182.fields.fakeValue = v99;
                v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v182, 0LL);
                commandCardParam = v25->fields.commandCardParam;
                v103 = v101;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v25, 0LL);
                if ( !v98 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Set_38135136(
                  v98,
                  v103,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  v104);
              }
              else
              {
                if ( !v98 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, (const MethodInfo *)v17);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_37688668 = Grade__GetKind_37688668(userGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_37688668, 0LL);
            baseSpr = v16->fields.baseSpr;
            v108 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v108, 0LL);
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
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6770/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_112;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1B88ACC(this);
                  goto LABEL_303;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              LODWORD(v112) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v113 = v112;
              LODWORD(v114) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              v115 = v114;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v118 = LocalPositionX;
              v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v119, (float)(v115 * 0.5) + (float)(v113 + v118), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v120, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37688668, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_112;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_112;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v174 )
            {
              if ( !v25 )
                goto LABEL_112;
              if ( userGameEntity->fields.pushUserSvtId == v25->fields.userSvtId )
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
            else if ( !v25 )
            {
              goto LABEL_245;
            }
            v122 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v121 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v183.fields.currentCryptoKey = v122;
            *(_QWORD *)&v183.fields.fakeValue = v121;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v183, 0LL) >= 1
              && userGameEntity->fields.userClassBoardInfo )
            {
              if ( classBoardMaxNumDictionary )
                goto LABEL_203;
              classBoardMaxNumDictionary = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                classBoardMaxNumDictionary,
                (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)this->fields.servantFaceIcon;
              if ( !this )
                goto LABEL_112;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
              v153 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v153->klass;
                  v155 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v155;
                      p_offset += 4;
                      if ( !v155 )
                        goto LABEL_266;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_266:
                    p_method = sub_1BDA590(v153, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v153,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v158 = v153->klass;
                  v159 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
                  {
                    v160 = &v158->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v160 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                    {
                      --v159;
                      v160 += 4;
                      if ( !v159 )
                        goto LABEL_273;
                    }
                    v161 = (__int64)&v158->vtable[*v160].method;
                  }
                  else
                  {
LABEL_273:
                    v161 = sub_1BDA590(v153, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
                  }
                  v162 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v161)(
                           v153,
                           *(_QWORD *)(v161 + 8));
                  v163 = v162;
                  if ( v162 )
                  {
                    methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( *(unsigned __int8 *)(*(_QWORD *)v162 + 304LL) < (unsigned int)methodPtr_low
                      || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v162 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
                    {
                      sub_1B88ACC(v162);
LABEL_299:
                      sub_1B8880C(Master_object, v166);
                    }
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v163 )
                    goto LABEL_299;
                  if ( !Master_object )
                    sub_1B8880C(0LL, v166);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v163 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !classBoardMaxNumDictionary )
                      sub_1B8880C(OtherThanNoneEntity, v168);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      classBoardMaxNumDictionary,
                      *(_DWORD *)(v163 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v153 )
                {
                  v169 = v153->klass;
                  v170 = *(unsigned __int16 *)(&v153->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v153->klass->_2.bitflags2 + 3) )
                  {
                    v171 = &v169->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v171 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v170;
                      v171 += 4;
                      if ( !v170 )
                        goto LABEL_290;
                    }
                    v172 = (__int64)&v169->vtable[*v171].method;
                  }
                  else
                  {
LABEL_290:
                    v172 = sub_1BDA590(v153, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v172)(
                    v153,
                    *(_QWORD *)(v172 + 8));
                }
LABEL_203:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v123 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
                v124 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
                v125 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
                v126 = (DataMasterBase_TMaster__TEntity__PKType__o *)v123;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v184.fields.currentCryptoKey = v124;
                *(_QWORD *)&v184.fields.fakeValue = v125;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v184,
                                                  0LL);
                if ( !v126 )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v126,
                                                  (int32_t)this,
                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_112;
                v127 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v127,
                                                  0LL);
                userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_112;
                v129 = userClassBoardInfo->max_length;
                if ( v129 < 1 )
                {
LABEL_220:
                  v133 = 0;
                }
                else
                {
                  v130 = (int)this;
                  v131 = 0;
                  while ( 1 )
                  {
                    if ( v131 >= v129 )
                      goto LABEL_297;
                    v132 = userClassBoardInfo->m_Items[v131];
                    if ( !v132 )
                      goto LABEL_112;
                    if ( v132->fields.classBoardBaseId == v130 )
                    {
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        classBoardMaxNumDictionary,
                                                        v130,
                                                        (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v132, v127, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v129 = userClassBoardInfo->max_length;
                    if ( (int)++v131 >= v129 )
                      goto LABEL_220;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    classBoardMaxNumDictionary,
                                                    v130,
                                                    (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v132->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_112;
                  v133 = squareIds->max_length;
                  v134 = (int)this > v133;
                  if ( (int)this > 0 )
                    goto LABEL_222;
                }
                v134 = 1;
LABEL_222:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v139 = (Il2CppObject **)&StringLiteral_6366/*"FFFFFF"*/;
                  if ( !v134 )
                    v139 = (Il2CppObject **)&StringLiteral_6365/*"FFFF00"*/;
                  v140 = *v139;
                  v175 = v133;
                  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v136, v137, v138);
                  this = (FriendIconComponent_o *)System_String__Format_61721404(
                                                    (System_String_o *)StringLiteral_16027/*"[{0}]+{1}[-]"*/,
                                                    v140,
                                                    v141,
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
                    v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v144 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v144 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_33724016(
                      v143,
                      v144->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17485/*"btn_bg_29_2"*/,
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
                    v146 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_33724016(
                      v146,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_112;
                    v147 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v147,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_112;
                    v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v148,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_251;
              }
LABEL_303:
              sub_1B8880C(Enumerator, v152);
            }
LABEL_245:
            v149 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
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
          if ( !v25 )
            goto LABEL_112;
          overwriteServantName = v25->fields.overwriteServantName;
          if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v30 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v32 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v31 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            v33 = (ServantLimitImageMaster_o *)v30;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v179.fields.currentCryptoKey = v32;
            *(_QWORD *)&v179.fields.fakeValue = v31;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v179,
                                              0LL);
            if ( !v33 )
              goto LABEL_112;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v33,
                                           (int32_t)this,
                                           v25->fields.limitCount,
                                           0LL);
            v35 = (FriendIconComponent_o *)v16->fields.servantNameLabel;
            this = (FriendIconComponent_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              ServantLimitCountSealAfter,
                                              -1,
                                              0LL);
            if ( !v35 )
              goto LABEL_112;
            v36 = this;
            this = v35;
          }
          else
          {
            this = (FriendIconComponent_o *)v16->fields.servantNameLabel;
            if ( !this )
              goto LABEL_112;
            v36 = (FriendIconComponent_o *)overwriteServantName;
          }
          UIRangeLabel__Set((UIRangeLabel_o *)this, (System_String_o *)v36, 0LL, 1, 0, 0LL);
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
          v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
            v41 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
          v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
          if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
            v42 = sub_1BDA48C(v42);
          this = **(FriendIconComponent_o ***)(v42 + 184);
          if ( this )
          {
            v43 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v25, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetSpoilerSetting(0LL) )
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_112;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v25->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v45 = classBoardMaxNumDictionary;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v46 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v47 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v48 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            v49 = (ServantLimitImageMaster_o *)v46;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v180.fields.currentCryptoKey = v47;
            *(_QWORD *)&v180.fields.fakeValue = v48;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v180,
                                              0LL);
            if ( v49 )
            {
              v50 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                      v49,
                      (int32_t)this,
                      FriendNpNameDispLimitCount,
                      0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v25->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v43 )
                {
                  classBoardMaxNumDictionary = v45;
                  p_userGameEntity = &v16->fields.userGameEntity;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v43,
                                      (int32_t)this,
                                      v50,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v52 = (System_String_o **)&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/;
                  v53 = (Il2CppObject *)OverwriteTDName;
                  if ( TreasureDeviceLevelIcon <= 1 )
                    v52 = (System_String_o **)&StringLiteral_9322/*"NP_COLOR_NAME"*/;
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
    sub_1B8880C(this, v17);
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
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  SwitchUIWidgetComponent_o *v37; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4A5A62B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (FriendIconComponent_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A62B = 1;
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
    *(_QWORD *)&v39.fields.currentCryptoKey = v6;
    *(_QWORD *)&v39.fields.fakeValue = v5;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(v3, &skillInfoList, 0, 0LL);
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
              SkillIconComponent__Set_38234800(
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
              UIIconLabel__Set_38235604((UIIconLabel_o *)this, 48, v21->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
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
                v25 = HIDWORD(v24->m_Items[143]);
                if ( v16 )
                  v25 += LODWORD(v24->m_Items[144]) * v16;
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
          v33 = *(_QWORD *)&this->fields.m_CachedPtr;
          v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v33 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = v33 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v36 + 32) = info;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)info, v31, v32);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v37 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v37 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v37, (UIWidget_array *)this, 0LL);
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
            sub_1B88814(this, info);
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
        sub_1B8880C(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}