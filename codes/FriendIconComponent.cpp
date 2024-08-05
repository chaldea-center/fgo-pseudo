void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UIIconLabel_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct SkillIconComponent_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UIIconLabel_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_49FD9F6 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B64870(&SkillIconComponent___TypeInfo, v4);
    sub_1B64870(&UIIconLabel___TypeInfo, v5);
    byte_49FD9F6 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B64918(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1B64918(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1B64918(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1B64918(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1B64918(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1B64918(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v20; // x19

  if ( (byte_49FD9E9 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&StringLiteral_20101/*"icon_skill_mini"*/, v6);
    sub_1B64870(&StringLiteral_20243/*"img_friend_skill"*/, v7);
    sub_1B64870(&StringLiteral_20007/*"icon_append_mini"*/, v8);
    sub_1B64870(&StringLiteral_20242/*"img_friend_appendskill"*/, v9);
    byte_49FD9E9 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v10, v11, v12);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20101/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20243/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20007/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20242/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49FD9F5 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FD9F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v3);
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

  if ( (byte_49FD9ED & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FD9ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
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

  if ( (byte_49FD9F1 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FD9F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B64ACC(v8, v9);
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
    sub_1B64ACC(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1B64AD4(this, method);
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

  if ( (byte_49FD9EC & 1) == 0 )
  {
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B64870(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1B64870(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FD9EC = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1B64ACC(v13, v14);
      CommonUI__OpenServantStatusDialog_30359436((CommonUI_o *)Instance, 5, v10, v12, 0LL);
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
  int32_t v31; // w2
  int32_t v32; // w3
  _QWORD *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  _QWORD *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 *v45; // x8
  __int64 v46; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v48; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_49FD9F4 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_System_Array_Empty_int___, v3);
    sub_1B64870(&ClassBoardInfo_TypeInfo, v4);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B64870(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_1B64870(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FD9F4 = 1;
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
        v16 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B64854(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v20;
      *(_QWORD *)&v49.fields.fakeValue = v19;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v49, 0LL);
      if ( !v21 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
            sub_1B64AD4(Entity, v23);
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
      v30 = sub_1B64ABC(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
      if ( !v30 )
        goto LABEL_44;
      *(_DWORD *)(v30 + 16) = v28;
      v33 = Method_System_Array_Empty_int___;
      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v34 )
      {
        sub_1BB67A8(Method_System_Array_Empty_int___);
        v34 = v33[7];
      }
      v35 = *(_QWORD *)(v34 + 16);
      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
        v35 = sub_1BB674C(v35);
      if ( !*(_DWORD *)(v35 + 224) )
        j_il2cpp_runtime_class_init_0(v35);
      v36 = *(_QWORD *)(v33[7] + 16LL);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BB674C(v36);
      v37 = *(__int64 **)(v36 + 184);
      v38 = *v37;
      *(_QWORD *)(v30 + 24) = *v37;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 24), v38, v31, v32);
      v41 = Method_System_Array_Empty_int___;
      v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v42 )
      {
        sub_1BB67A8(Method_System_Array_Empty_int___);
        v42 = v41[7];
      }
      v43 = *(_QWORD *)(v42 + 16);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1BB674C(v43);
      if ( !*(_DWORD *)(v43 + 224) )
        j_il2cpp_runtime_class_init_0(v43);
      v44 = *(_QWORD *)(v41[7] + 16LL);
      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
        v44 = sub_1BB674C(v44);
      v45 = *(__int64 **)(v44 + 184);
      v46 = *v45;
      *(_QWORD *)(v30 + 32) = *v45;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 32), v46, v39, v40);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v48 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1B64ACC(Entity, v23);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v28, 0, v48, 1, (ClassBoardInfo_o *)v30, 0LL);
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

  if ( (byte_49FD9EF & 1) == 0 )
  {
    sub_1B64870(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64870(&SupportInfoJump_TypeInfo, v4);
    byte_49FD9EF = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_1B64ABC(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
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

  if ( (byte_49FD9F2 & 1) == 0 )
  {
    sub_1B64870(&Method_FriendIconComponent_OnLongPushEquip__, method);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD9F2 = 1;
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
    sub_1B64ACC(userGameEntity, method);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v18, 0LL) >= 1 )
    {
      v11 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OnLongPushEquip__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B64854(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
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
    v16 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OnLongPushEquip__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B64854(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
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

  if ( (byte_49FD9F3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B64870(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1B64870(&int_TypeInfo, v8);
    sub_1B64870(&LocalizationManager_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64870(&StringLiteral_117/*" "*/, v11);
    sub_1B64870(&StringLiteral_8484/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_1B64870(&StringLiteral_1/*""*/, v13);
    byte_49FD9F3 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_40176384(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1B64AD4(Master_object, v17);
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_1B64854(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v18->fields.id,
                              (const MethodInfo_30D6180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v18->fields.lv, 0LL);
              v21 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8484/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v18->fields.lv;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23, v24, v25);
              v27 = System_String__Format(v22, v26, 0LL);
              name = System_String__Concat_61394836(v21, (System_String_o *)StringLiteral_117/*" "*/, v27, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B64ACC(Master_object, v17);
        }
      }
    }
  }
  v28 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B64854(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
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

  if ( (byte_49FD9EE & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1B64870(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B64870(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1B64870(&int_TypeInfo, v8);
    sub_1B64870(&LocalizationManager_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&StringLiteral_117/*" "*/, v12);
    sub_1B64870(&StringLiteral_8484/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1B64870(&StringLiteral_2962/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_49FD9EE = 1;
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
    v18 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B64854(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1B64AD4(v20, v21);
  v23 = skillInfoList->m_Items[skillIndex];
  if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23->fields.id,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8484/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v23->fields.lv;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v30, v31, v32);
    v34 = System_String__Format(v29, v33, 0LL);
    name = System_String__Concat_61394836(v28, (System_String_o *)StringLiteral_117/*" "*/, v34, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v27
      || (v38 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource,
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v35, v36, v37),
          v40 = System_String__Format(v38, v39, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1B64ACC(Instance, v25);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v40, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v41 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B64888(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B64854(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0LL);
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

  if ( (byte_49FD9F0 & 1) == 0 )
  {
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B64870(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49FD9F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B64ACC(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30362532((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  struct OtherUserGameEntity_o **p_userGameEntity; // x28
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
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w21
  __int64 v75; // x8
  __int64 v76; // x0
  Il2CppObject *v77; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  System_Collections_Generic_Dictionary_int__int__o *v79; // x25
  Il2CppObject *v80; // x0
  __int64 v81; // x20
  __int64 v82; // x29
  ServantLimitImageMaster_o *v83; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v86; // x9
  Il2CppObject *v87; // x25
  System_String_o *v88; // x20
  System_String_o *v89; // x0
  FriendIconComponent_o *v90; // x25
  UIRangeLabel_o *v91; // x26
  UnityEngine_Object_o *v92; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v96; // x25
  __int64 v97; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v99; // x8
  int v100; // w9
  unsigned __int64 v101; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v103; // x14
  struct SkillIconComponent_array *v104; // x8
  __int64 v105; // x20
  unsigned __int64 v106; // x24
  struct UnityEngine_GameObject_array *v107; // x8
  UnityEngine_Object_o *v108; // x25
  struct UnityEngine_GameObject_array *v109; // x8
  UnityEngine_Object_o *v110; // x20
  const MethodInfo *v111; // x2
  signed __int64 v112; // x20
  __int64 v113; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v115; // x26
  UnityEngine_Object_o *v116; // x25
  struct UnityEngine_GameObject_array *v117; // x9
  int32_t *v118; // x25
  struct SkillIconComponent_array *v119; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v121; // x8
  struct SkillIconComponent_array *v122; // x8
  __int64 v123; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  char v125; // w2
  int32_t v126; // w3
  __int64 v127; // x8
  _QWORD *v128; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v130; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v132; // x25
  __int64 v133; // x26
  __int64 v134; // x27
  int32_t v135; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v137; // w27
  int32_t Kind_37381516; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v141; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v145; // s0
  float v146; // s8
  float v147; // s0
  float v148; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v151; // s10
  UnityEngine_GameObject_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  __int64 v154; // x24
  __int64 v155; // x25
  Il2CppObject *v156; // x0
  __int64 v157; // x20
  __int64 v158; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v159; // x23
  int32_t v160; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v162; // w8
  int32_t v163; // w22
  unsigned int v164; // w25
  ClassBoardInfo_o *v165; // x24
  int v166; // w22
  _BOOL4 v167; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  Il2CppObject **v172; // x8
  Il2CppObject *v173; // x20
  Il2CppObject *v174; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v176; // x20
  BalanceConfig_c *v177; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v179; // x0
  UnityEngine_GameObject_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  UnityEngine_Object_o *v182; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v185; // x1
  System_Collections_Generic_IEnumerator_T__o *v186; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v188; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v191; // x8
  __int64 v192; // x9
  int *v193; // x10
  __int64 v194; // x0
  __int64 v195; // x0
  __int64 v196; // x25
  __int64 methodPtr_low; // x9
  Il2CppObject *Master_object; // x0
  __int64 v199; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v201; // x1
  System_Collections_Generic_IEnumerator_T__c *v202; // x8
  __int64 v203; // x9
  int *v204; // x10
  __int64 v205; // x0
  struct System_Int32_array *squareIds; // x8
  ServantEntity_o *v207; // [xsp+18h] [xbp-98h]
  int v208; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16

  v13 = classPos;
  v16 = this;
  if ( (byte_49FD9EA & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, userGameEntity);
    sub_1B64870(&BalanceConfig_TypeInfo, v17);
    sub_1B64870(&ClassBoardBaseEntity_TypeInfo, v18);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v19);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v21);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v23);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v24);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v25);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v26);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v27);
    sub_1B64870(&DataManager_TypeInfo, v28);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v30);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v31);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v32);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v34);
    sub_1B64870(&UnityEngine_Font_TypeInfo, v35);
    sub_1B64870(&Grade_TypeInfo, v36);
    sub_1B64870(&System_IDisposable_TypeInfo, v37);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v38);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1B64870(&int_TypeInfo, v40);
    sub_1B64870(&Method_System_Collections_Generic_List_UIWidget__Add__, v41);
    sub_1B64870(&LocalizationManager_TypeInfo, v42);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v43);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    sub_1B64870(&OptionManager_TypeInfo, v45);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v46);
    sub_1B64870(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v47);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_1B64870(&StringLiteral_3749/*"COMMON_NO_ENTRY"*/, v49);
    sub_1B64870(&StringLiteral_6742/*"Fonts/FGO-Main-Font"*/, v50);
    sub_1B64870(&StringLiteral_6338/*"FFFFFF"*/, v51);
    sub_1B64870(&StringLiteral_17417/*"btn_bg_29_2"*/, v52);
    sub_1B64870(&StringLiteral_9288/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1B64870(&StringLiteral_6337/*"FFFF00"*/, v54);
    sub_1B64870(&StringLiteral_9258/*"NO_ENTRY_NAME"*/, v55);
    sub_1B64870(&StringLiteral_9282/*"NP_COLOR_NAME"*/, v56);
    this = (FriendIconComponent_o *)sub_1B64870(&StringLiteral_15961/*"[{0}]+{1}[-]"*/, v57);
    byte_49FD9EA = 1;
  }
  if ( isUseServantStatus )
    v58 = (Il2CppObject *)userGameEntity;
  else
    v58 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_106;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = (struct OtherUserGameEntity_o *)v58;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&v16->fields.userGameEntity,
    (int32_t)v58,
    isUseServantStatus,
    classPos);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = displayServantType;
  v16->fields.followerType = ftype;
  if ( userGameEntity )
  {
    if ( !followerDeckId )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v60);
      v13 = v16->fields.classPos;
      displayServantType = v16->fields.displayServantType;
      followerDeckId = TargetDeckId;
    }
    v16->fields.deckId = followerDeckId;
    if ( OtherUserGameEntity__getSvtId(userGameEntity, v13, displayServantType, followerDeckId, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v16->fields.classPos,
                                        v16->fields.displayServantType,
                                        v16->fields.deckId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_106;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)this,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          *(_QWORD *)&v211.fields.currentCryptoKey = v68;
          *(_QWORD *)&v211.fields.fakeValue = v67;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v211, 0LL) )
            v65 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_37913676((ServantFaceIconComponent_o *)this, v65, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_37925528((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v207 = (ServantEntity_o *)Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3749/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_106;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NO_ENTRY_NAME"*/, 0LL);
            if ( !svtNpTitleLabel )
              goto LABEL_106;
            UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpCommandCard = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
              if ( !this )
                goto LABEL_106;
              ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
            }
LABEL_69:
            loginDataLabel = v16->fields.loginDataLabel;
            UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, v16->fields.classPos, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            if ( !loginDataLabel )
              goto LABEL_106;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            switchSkillInfo = (UnityEngine_Object_o *)v16->fields.switchSkillInfo;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (FriendIconComponent_o *)v16->fields.switchSkillInfo;
              if ( !this )
                goto LABEL_106;
              SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_106;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v65 )
              goto LABEL_93;
            v97 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v96 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v213.fields.currentCryptoKey = v97;
            *(_QWORD *)&v213.fields.fakeValue = v96;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v213,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v65, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_106;
              v99 = *(_QWORD *)&skillIconList->max_length;
              if ( v99 << 32 >= 1 )
              {
                v100 = 0;
                v101 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v101 < (int)max_length )
                  {
                    if ( v101 >= max_length )
                      goto LABEL_291;
                    v103 = skillInfoList->m_Items[v101];
                    if ( v103 && v103->fields.id >= 1 )
                      v100 = v101 + 1;
                  }
                  if ( (__int64)++v101 >= (int)v99 )
                    goto LABEL_114;
                }
                goto LABEL_106;
              }
              v100 = 0;
LABEL_114:
              if ( (int)v99 >= 1 )
              {
                v112 = v100;
                v113 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_106;
                  v115 = v113 - 4;
                  if ( v113 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_291;
                  v116 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v113);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v116, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v115 >= v112 )
                    {
                      v121 = v16->fields.skillBaseList;
                      if ( !v121 )
                        goto LABEL_106;
                      if ( v115 >= v121->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v121->obj.klass + v113);
                      if ( !this )
                        goto LABEL_106;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_106;
                      if ( v115 >= skillInfoList->max_length )
                        goto LABEL_291;
                      v117 = v16->fields.skillBaseList;
                      if ( !v117 )
                        goto LABEL_106;
                      if ( v115 >= v117->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v117->obj.klass + v113);
                      if ( !this )
                        goto LABEL_106;
                      v118 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v113);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v119 = v16->fields.skillIconList;
                      if ( !v119 )
                        goto LABEL_106;
                      if ( v115 >= v119->max_length )
                        goto LABEL_291;
                      if ( !v118 )
                        goto LABEL_106;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v119->obj.klass + v113);
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set_37924716(
                        (SkillIconComponent_o *)this,
                        v118[4],
                        v118[5],
                        v118[12],
                        v118[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_106;
                      if ( v115 >= skillLevelIconLabelList->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v113);
                      if ( !this )
                        goto LABEL_106;
                      UIIconLabel__Set_37925528((UIIconLabel_o *)this, 48, v118[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v122 = v16->fields.skillIconList;
                  if ( !v122 )
                    goto LABEL_106;
                  v123 = v113 - 3;
                  ++v113;
                }
                while ( v123 < (int)v122->max_length );
              }
              skillInfoUiWidget = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_106;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FriendIconComponent_o *)v16->fields.switchSkillUIList;
                if ( !this )
                  goto LABEL_106;
                v58 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v127 = *(_QWORD *)&this->fields.m_CachedPtr;
                v128 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v127 )
                  goto LABEL_106;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v127 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v58,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                }
                else
                {
                  v130 = v127 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v130 + 32) = v58;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v130 + 32), (int32_t)v58, v125, v126);
                }
              }
            }
            else
            {
LABEL_93:
              v104 = v16->fields.skillIconList;
              if ( !v104 )
                goto LABEL_106;
              v105 = 4LL;
              while ( 1 )
              {
                v106 = v105 - 4;
                if ( v105 - 4 >= (int)v104->max_length )
                  break;
                v107 = v16->fields.skillBaseList;
                if ( !v107 )
                  goto LABEL_106;
                if ( v106 >= v107->max_length )
                  goto LABEL_291;
                v108 = (UnityEngine_Object_o *)*((_QWORD *)&v107->obj.klass + v105);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v109 = v16->fields.skillBaseList;
                  if ( !v109 )
                    goto LABEL_106;
                  if ( v106 >= v109->max_length )
LABEL_291:
                    sub_1B64AD4(this, v58);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v109->obj.klass + v105);
                  if ( !this )
                    goto LABEL_106;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v104 = v16->fields.skillIconList;
                ++v105;
                if ( !v104 )
                  goto LABEL_106;
              }
              v110 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_106;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            FriendIconComponent__SetAppendSkill(v16, v65, v111);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v132 = v16->fields.svtCommandCardList;
              if ( v65 )
              {
                v134 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v133 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v214.fields.currentCryptoKey = v134;
                *(_QWORD *)&v214.fields.fakeValue = v133;
                v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v214, 0LL);
                commandCardParam = v65->fields.commandCardParam;
                v137 = v135;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v65, 0LL);
                if ( !v132 )
                  goto LABEL_106;
                ServantCommandCardListComponent__Set_37902612(
                  v132,
                  v137,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v132 )
                  goto LABEL_106;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_37381516 = Grade__GetKind_37381516(userGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_37381516, 0LL);
            baseSpr = v16->fields.baseSpr;
            v141 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v141, 0LL);
            gradeIcon = (UnityEngine_Object_o *)v16->fields.gradeIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_106;
              trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
              {
                playerNameLabel = v16->fields.playerNameLabel;
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6742/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_106;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1B64D8C(this);
                  goto LABEL_297;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_106;
              LODWORD(v145) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v146 = v145;
              LODWORD(v147) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_106;
              v148 = v147;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v151 = LocalPositionX;
              v152 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v152, (float)(v148 * 0.5) + (float)(v146 + v151), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v153, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37381516, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_106;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_106;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v207 )
            {
              if ( !v65 )
                goto LABEL_106;
              if ( userGameEntity->fields.pushUserSvtId == v65->fields.userSvtId )
              {
                this = (FriendIconComponent_o *)v16->fields.pushSprite;
                if ( !this )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_106;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              }
            }
            else if ( !v65 )
            {
              goto LABEL_239;
            }
            v155 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v154 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v215.fields.currentCryptoKey = v155;
            *(_QWORD *)&v215.fields.fakeValue = v154;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v215, 0LL) >= 1
              && userGameEntity->fields.userClassBoardInfo )
            {
              if ( classBoardMaxNumDictionary )
                goto LABEL_197;
              classBoardMaxNumDictionary = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                classBoardMaxNumDictionary,
                (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_106;
              this = (FriendIconComponent_o *)this->fields.servantFaceIcon;
              if ( !this )
                goto LABEL_106;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
              v186 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v186->klass;
                  v188 = *(unsigned __int16 *)(&v186->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v186->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v188;
                      p_offset += 4;
                      if ( !v188 )
                        goto LABEL_260;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_260:
                    p_method = sub_1BB6850(v186, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v186,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v191 = v186->klass;
                  v192 = *(unsigned __int16 *)(&v186->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v186->klass->_2.bitflags2 + 3) )
                  {
                    v193 = &v191->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v193 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                    {
                      --v192;
                      v193 += 4;
                      if ( !v192 )
                        goto LABEL_267;
                    }
                    v194 = (__int64)&v191->vtable[*v193].method;
                  }
                  else
                  {
LABEL_267:
                    v194 = sub_1BB6850(v186, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
                  }
                  v195 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v194)(
                           v186,
                           *(_QWORD *)(v194 + 8));
                  v196 = v195;
                  if ( v195 )
                  {
                    methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( *(unsigned __int8 *)(*(_QWORD *)v195 + 304LL) < (unsigned int)methodPtr_low
                      || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v195 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
                    {
                      sub_1B64D8C(v195);
LABEL_293:
                      sub_1B64ACC(Master_object, v199);
                    }
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v196 )
                    goto LABEL_293;
                  if ( !Master_object )
                    sub_1B64ACC(0LL, v199);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v196 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !classBoardMaxNumDictionary )
                      sub_1B64ACC(OtherThanNoneEntity, v201);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      classBoardMaxNumDictionary,
                      *(_DWORD *)(v196 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_311D190 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v186 )
                {
                  v202 = v186->klass;
                  v203 = *(unsigned __int16 *)(&v186->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v186->klass->_2.bitflags2 + 3) )
                  {
                    v204 = &v202->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v204 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v203;
                      v204 += 4;
                      if ( !v203 )
                        goto LABEL_284;
                    }
                    v205 = (__int64)&v202->vtable[*v204].method;
                  }
                  else
                  {
LABEL_284:
                    v205 = sub_1BB6850(v186, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v205)(
                    v186,
                    *(_QWORD *)(v205 + 8));
                }
LABEL_197:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v156 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
                v157 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v158 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)v156;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v216.fields.currentCryptoKey = v157;
                *(_QWORD *)&v216.fields.fakeValue = v158;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                  v216,
                                                  0LL);
                if ( !v159 )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v159,
                                                  (int32_t)this,
                                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_106;
                v160 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v160,
                                                  0LL);
                userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_106;
                v162 = userClassBoardInfo->max_length;
                if ( v162 < 1 )
                {
LABEL_214:
                  v166 = 0;
                }
                else
                {
                  v163 = (int)this;
                  v164 = 0;
                  while ( 1 )
                  {
                    if ( v164 >= v162 )
                      goto LABEL_291;
                    v165 = userClassBoardInfo->m_Items[v164];
                    if ( !v165 )
                      goto LABEL_106;
                    if ( v165->fields.classBoardBaseId == v163 )
                    {
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_106;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        classBoardMaxNumDictionary,
                                                        v163,
                                                        (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v165, v160, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v162 = userClassBoardInfo->max_length;
                    if ( (int)++v164 >= v162 )
                      goto LABEL_214;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    classBoardMaxNumDictionary,
                                                    v163,
                                                    (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v165->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_106;
                  v166 = squareIds->max_length;
                  v167 = (int)this > v166;
                  if ( (int)this > 0 )
                    goto LABEL_216;
                }
                v167 = 1;
LABEL_216:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v172 = (Il2CppObject **)&StringLiteral_6338/*"FFFFFF"*/;
                  if ( !v167 )
                    v172 = (Il2CppObject **)&StringLiteral_6337/*"FFFF00"*/;
                  v173 = *v172;
                  v208 = v166;
                  v174 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208, v169, v170, v171);
                  this = (FriendIconComponent_o *)System_String__Format_61397948(
                                                    (System_String_o *)StringLiteral_15961/*"[{0}]+{1}[-]"*/,
                                                    v173,
                                                    v174,
                                                    0LL);
                  if ( !v16->fields.openClassBoardNumLabel )
                    goto LABEL_106;
                  UILabel__set_text(v16->fields.openClassBoardNumLabel, (System_String_o *)this, 0LL);
                }
                classBoardOpenButton = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                {
                  this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                  if ( !this )
                    goto LABEL_106;
                  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_106;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  if ( ConstantMaster__IsFLAG20240804(0LL) )
                  {
                    this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                    if ( !this )
                      goto LABEL_106;
                    v176 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v177 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v177 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_33376392(
                      v176,
                      v177->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17417/*"btn_bg_29_2"*/,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardBackSprite;
                    if ( !this )
                      goto LABEL_106;
                    ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                      this,
                      this->klass[2]._1.interopData);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_106;
                    v179 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_33376392(
                      v179,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_106;
                    v180 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v180,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_106;
                    v181 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v181,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_245;
              }
LABEL_297:
              sub_1B64ACC(Enumerator, v185);
            }
LABEL_239:
            v182 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
              if ( !this )
                goto LABEL_106;
              this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
              if ( !this )
                goto LABEL_106;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_245;
          }
          if ( !v65 )
            goto LABEL_106;
          overwriteServantName = (FriendIconComponent_o *)v65->fields.overwriteServantName;
          this = (FriendIconComponent_o *)System_String__IsNullOrEmpty((System_String_o *)overwriteServantName, 0LL);
          v70 = v16->fields.servantNameLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FriendIconComponent_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              v65->fields.limitCount,
                                              -1,
                                              0LL);
            if ( !v70 )
              goto LABEL_106;
            overwriteServantName = this;
          }
          else if ( !v70 )
          {
            goto LABEL_106;
          }
          UIRangeLabel__Set(v70, (System_String_o *)overwriteServantName, 0LL, 1, 0, 0LL);
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
          v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
            v75 = sub_1BB674C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
          v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
          if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
            v76 = sub_1BB674C(v76);
          this = **(FriendIconComponent_o ***)(v76 + 184);
          if ( this )
          {
            v77 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v65, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetSpoilerSetting(0LL) )
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_106;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_106;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v65->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v79 = classBoardMaxNumDictionary;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v80 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v81 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v82 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v83 = (ServantLimitImageMaster_o *)v80;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v212.fields.currentCryptoKey = v81;
            *(_QWORD *)&v212.fields.fakeValue = v82;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v212,
                                              0LL);
            if ( v83 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v83,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                v65->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v77 )
                {
                  classBoardMaxNumDictionary = v79;
                  p_userGameEntity = &v16->fields.userGameEntity;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v77,
                                      (int32_t)this,
                                      ServantLimitCountSealAfter,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v86 = (System_String_o **)&StringLiteral_9288/*"NP_MAX_COLOR_NAME"*/;
                  v87 = (Il2CppObject *)OverwriteTDName;
                  if ( TreasureDeviceLevelIcon <= 1 )
                    v86 = (System_String_o **)&StringLiteral_9282/*"NP_COLOR_NAME"*/;
                  v88 = *v86;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v89 = LocalizationManager__Get(v88, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v89, v87, 0LL);
                  if ( tdInfo )
                  {
                    v90 = this;
                    v91 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v91 )
                    {
                      UIRangeLabel__Set(v91, (System_String_o *)v90, (System_String_o *)this, 0, 0, 0LL);
                      v92 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
                      {
                        this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
                        if ( !this )
                          goto LABEL_106;
                        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                      }
                      goto LABEL_69;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_106:
    sub_1B64ACC(this, v58);
  }
LABEL_245:
  baseButton = (UnityEngine_Object_o *)v16->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v16->fields.baseButton;
    if ( !this )
      goto LABEL_106;
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
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  SwitchUIWidgetComponent_o *v41; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_49FD9EB & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, info);
    sub_1B64870(&Method_System_Collections_Generic_List_UIWidget__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    this = (FriendIconComponent_o *)sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49FD9EB = 1;
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
    *(_QWORD *)&v43.fields.currentCryptoKey = v10;
    *(_QWORD *)&v43.fields.fakeValue = v9;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v43, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40176384(v3, &skillInfoList, 0, 0LL);
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
              SkillIconComponent__Set_37924716(
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
              UIIconLabel__Set_37925528((UIIconLabel_o *)this, 48, v25->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
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
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = v37 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v40 + 32) = info;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)info, v35, v36);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v41 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v41 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v41, (UIWidget_array *)this, 0LL);
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
            sub_1B64AD4(this, info);
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
        sub_1B64ACC(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}