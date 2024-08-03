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

  if ( (byte_49FB8FE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&SkillIconComponent___TypeInfo, v4);
    sub_1B640C8(&UIIconLabel___TypeInfo, v5);
    byte_49FB8FE = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1B64170(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1B64170(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1B64170(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1B64170(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v17; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v19; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v21; // x19

  if ( (byte_49FB8F1 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_20098/*"icon_skill_mini"*/, v7);
    sub_1B640C8(&StringLiteral_20240/*"img_friend_skill"*/, v8);
    sub_1B640C8(&StringLiteral_20004/*"icon_append_mini"*/, v9);
    sub_1B640C8(&StringLiteral_20239/*"img_friend_appendskill"*/, v10);
    byte_49FB8F1 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v11, v12, v13);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v15 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_20098/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v17 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_20240/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v19 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v19, (System_String_o *)StringLiteral_20004/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v21 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v21, (System_String_o *)StringLiteral_20239/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FB8FD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB8FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FB8F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FB8F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FB8F9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FB8F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
    sub_1B64324(this);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1B6432C(this, method);
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
  __int64 v12; // x1
  __int64 v13; // x2
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0

  if ( (byte_49FB8F4 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B640C8(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1B640C8(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FB8F4 = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v12, v13);
      ServantStatusDialog_EndDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1B64324(v15);
      CommonUI__OpenServantStatusDialog_30357468((CommonUI_o *)Instance, 5, v10, v14, 0LL);
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
  int32_t klass; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  struct OtherUserGameEntity_o *v26; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v29; // w20
  unsigned int v30; // w24
  __int64 v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 *v38; // x8
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  _QWORD *v42; // x22
  __int64 v43; // x8
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 *v46; // x8
  __int64 v47; // x1
  Il2CppObject *Instance; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_49FB8FC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Array_Empty_int___, v3);
    sub_1B640C8(&ClassBoardInfo_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_1B640C8(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FB8FC = 1;
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
        v16 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v20;
      *(_QWORD *)&v52.fields.fakeValue = v19;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v52, 0LL);
      if ( !v21 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_44;
      Entity = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, klass, 0LL);
      v26 = this->fields.userGameEntity;
      if ( !v26 )
        goto LABEL_44;
      userClassBoardInfo = v26->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_44;
      max_length = userClassBoardInfo->max_length;
      v29 = (int)Entity;
      if ( max_length >= 1 )
      {
        v30 = 0;
        do
        {
          if ( v30 >= max_length )
            sub_1B6432C(Entity, v24);
          v31 = (__int64)userClassBoardInfo->m_Items[v30];
          if ( !v31 )
            goto LABEL_44;
          if ( *(_DWORD *)(v31 + 16) == v29 )
          {
            Entity = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v31, klass, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_41;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v30 < max_length );
      }
      v31 = sub_1B64314(ClassBoardInfo_TypeInfo, v24, v25);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v31, 0LL);
      if ( !v31 )
        goto LABEL_44;
      *(_DWORD *)(v31 + 16) = v29;
      v34 = Method_System_Array_Empty_int___;
      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v35 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v35 = v34[7];
      }
      v36 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BB5FA4(v36);
      if ( !*(_DWORD *)(v36 + 224) )
        j_il2cpp_runtime_class_init_0(v36);
      v37 = *(_QWORD *)(v34[7] + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1BB5FA4(v37);
      v38 = *(__int64 **)(v37 + 184);
      v39 = *v38;
      *(_QWORD *)(v31 + 24) = *v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 24), v39, v32, v33);
      v42 = Method_System_Array_Empty_int___;
      v43 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v43 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v43 = v42[7];
      }
      v44 = *(_QWORD *)(v43 + 16);
      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
        v44 = sub_1BB5FA4(v44);
      if ( !*(_DWORD *)(v44 + 224) )
        j_il2cpp_runtime_class_init_0(v44);
      v45 = *(_QWORD *)(v42[7] + 16LL);
      if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
        v45 = sub_1BB5FA4(v45);
      v46 = *(__int64 **)(v45 + 184);
      v47 = *v46;
      *(_QWORD *)(v31 + 32) = *v46;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 32), v47, v40, v41);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
      System_Action___ctor(
        v51,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1B64324(Entity);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v29, 0, v51, 1, (ClassBoardInfo_o *)v31, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  SupportInfoJump_o *v10; // x19
  Il2CppObject *Instance; // x0

  if ( (byte_49FB8F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&SupportInfoJump_TypeInfo, v4);
    byte_49FB8F7 = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v10 = (SupportInfoJump_o *)sub_1B64314(SupportInfoJump_TypeInfo, v8, v9);
  SupportInfoJump___ctor(v10, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v10, 0LL);
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

  if ( (byte_49FB8FA & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendIconComponent_OnLongPushEquip__, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FB8FA = 1;
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
    sub_1B64324(userGameEntity);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL) >= 1 )
    {
      v11 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OnLongPushEquip__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
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
    v16 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OnLongPushEquip__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
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
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FB8FB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_117/*" "*/, v11);
    sub_1B640C8(&StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FB8FB = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1B6432C(Master_object, v17);
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v18->fields.id,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v18->fields.lv, 0LL);
              v21 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v18->fields.lv;
              v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v24 = System_String__Format(v22, v23, 0LL);
              name = System_String__Concat_61386656(v21, (System_String_o *)StringLiteral_117/*" "*/, v24, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B64324(Master_object);
        }
      }
    }
  }
  v25 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
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
  Il2CppObject *Entity; // x20
  DataManager_o *v26; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x20
  Il2CppObject *v32; // x0
  System_String_o *v33; // x19
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49FB8F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_117/*" "*/, v12);
    sub_1B640C8(&StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1B640C8(&StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_49FB8F6 = 1;
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
    v18 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1B6432C(v20, v21);
  v23 = skillInfoList->m_Items[skillIndex];
  if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23->fields.id,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v23->fields.id,
                                  v23->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v26 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v23->fields.lv, 0LL);
    v27 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v23->fields.lv;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v30 = System_String__Format(v28, v29, 0LL);
    name = System_String__Concat_61386656(v27, (System_String_o *)StringLiteral_117/*" "*/, v30, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v26
      || (v31 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource,
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource),
          v33 = System_String__Format(v31, v32, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1B64324(Instance);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v33, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v34 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1B640E0(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B640AC(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_49FB8F8 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B640C8(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49FB8F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B64324(v13);
  CommonUI__OpenServantEquipStatusDialog_30360564((CommonUI_o *)Instance, statusKind, equipInfo, v12, 0LL, 0LL);
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
  OtherUserGameEntity_o *v58; // x1
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
  __int64 v96; // x1
  __int64 v97; // x25
  __int64 v98; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v100; // x8
  int v101; // w9
  unsigned __int64 v102; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v104; // x14
  struct SkillIconComponent_array *v105; // x8
  __int64 v106; // x20
  unsigned __int64 v107; // x24
  struct UnityEngine_GameObject_array *v108; // x8
  UnityEngine_Object_o *v109; // x25
  struct UnityEngine_GameObject_array *v110; // x8
  UnityEngine_Object_o *v111; // x20
  const MethodInfo *v112; // x2
  signed __int64 v113; // x20
  __int64 v114; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v116; // x26
  UnityEngine_Object_o *v117; // x25
  struct UnityEngine_GameObject_array *v118; // x9
  int32_t *v119; // x25
  struct SkillIconComponent_array *v120; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v122; // x8
  struct SkillIconComponent_array *v123; // x8
  __int64 v124; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  char v126; // w2
  int32_t v127; // w3
  Il2CppObject *v128; // x1
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v132; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v134; // x25
  __int64 v135; // x26
  __int64 v136; // x27
  int32_t v137; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v139; // w27
  int32_t Kind_37377152; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v143; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v147; // s0
  float v148; // s8
  float v149; // s0
  float v150; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v153; // s10
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  __int64 v156; // x24
  __int64 v157; // x25
  __int64 v158; // x1
  __int64 v159; // x2
  Il2CppObject *v160; // x0
  __int64 v161; // x20
  __int64 v162; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v163; // x23
  int32_t v164; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v166; // w8
  int32_t v167; // w22
  unsigned int v168; // w25
  ClassBoardInfo_o *v169; // x24
  int v170; // w22
  _BOOL4 v171; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v173; // x8
  Il2CppObject *v174; // x20
  Il2CppObject *v175; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v177; // x20
  BalanceConfig_c *v178; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  UnityEngine_GameObject_o *v182; // x0
  UnityEngine_Object_o *v183; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
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
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v200; // x8
  __int64 v201; // x9
  int *v202; // x10
  __int64 v203; // x0
  struct System_Int32_array *squareIds; // x8
  ServantEntity_o *v205; // [xsp+18h] [xbp-98h]
  int v206; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16

  v13 = classPos;
  v16 = this;
  if ( (byte_49FB8F2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, userGameEntity);
    sub_1B640C8(&BalanceConfig_TypeInfo, v17);
    sub_1B640C8(&ClassBoardBaseEntity_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v25);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v26);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v27);
    sub_1B640C8(&DataManager_TypeInfo, v28);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v34);
    sub_1B640C8(&UnityEngine_Font_TypeInfo, v35);
    sub_1B640C8(&Grade_TypeInfo, v36);
    sub_1B640C8(&System_IDisposable_TypeInfo, v37);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v38);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1B640C8(&int_TypeInfo, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v41);
    sub_1B640C8(&LocalizationManager_TypeInfo, v42);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v43);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    sub_1B640C8(&OptionManager_TypeInfo, v45);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v46);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v47);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_1B640C8(&StringLiteral_3749/*"COMMON_NO_ENTRY"*/, v49);
    sub_1B640C8(&StringLiteral_6742/*"Fonts/FGO-Main-Font"*/, v50);
    sub_1B640C8(&StringLiteral_6338/*"FFFFFF"*/, v51);
    sub_1B640C8(&StringLiteral_17415/*"btn_bg_29_2"*/, v52);
    sub_1B640C8(&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1B640C8(&StringLiteral_6337/*"FFFF00"*/, v54);
    sub_1B640C8(&StringLiteral_9256/*"NO_ENTRY_NAME"*/, v55);
    sub_1B640C8(&StringLiteral_9280/*"NP_COLOR_NAME"*/, v56);
    this = (FriendIconComponent_o *)sub_1B640C8(&StringLiteral_15959/*"[{0}]+{1}[-]"*/, v57);
    byte_49FB8F2 = 1;
  }
  if ( isUseServantStatus )
    v58 = userGameEntity;
  else
    v58 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_106;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = v58;
  sub_1B6406C(
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
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          *(_QWORD *)&v209.fields.currentCryptoKey = v68;
          *(_QWORD *)&v209.fields.fakeValue = v67;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v209, 0LL) )
            v65 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_37909296((ServantFaceIconComponent_o *)this, v65, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_37921148((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v205 = (ServantEntity_o *)Entity;
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
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9256/*"NO_ENTRY_NAME"*/, 0LL);
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
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_106;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v65 )
              goto LABEL_93;
            v98 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v97 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v211.fields.currentCryptoKey = v98;
            *(_QWORD *)&v211.fields.fakeValue = v97;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v211,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v65, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_106;
              v100 = *(_QWORD *)&skillIconList->max_length;
              if ( v100 << 32 >= 1 )
              {
                v101 = 0;
                v102 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v102 < (int)max_length )
                  {
                    if ( v102 >= max_length )
                      goto LABEL_291;
                    v104 = skillInfoList->m_Items[v102];
                    if ( v104 && v104->fields.id >= 1 )
                      v101 = v102 + 1;
                  }
                  if ( (__int64)++v102 >= (int)v100 )
                    goto LABEL_114;
                }
                goto LABEL_106;
              }
              v101 = 0;
LABEL_114:
              if ( (int)v100 >= 1 )
              {
                v113 = v101;
                v114 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_106;
                  v116 = v114 - 4;
                  if ( v114 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_291;
                  v117 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v114);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v117, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v116 >= v113 )
                    {
                      v122 = v16->fields.skillBaseList;
                      if ( !v122 )
                        goto LABEL_106;
                      if ( v116 >= v122->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v122->obj.klass + v114);
                      if ( !this )
                        goto LABEL_106;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_106;
                      if ( v116 >= skillInfoList->max_length )
                        goto LABEL_291;
                      v118 = v16->fields.skillBaseList;
                      if ( !v118 )
                        goto LABEL_106;
                      if ( v116 >= v118->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v118->obj.klass + v114);
                      if ( !this )
                        goto LABEL_106;
                      v119 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v114);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v120 = v16->fields.skillIconList;
                      if ( !v120 )
                        goto LABEL_106;
                      if ( v116 >= v120->max_length )
                        goto LABEL_291;
                      if ( !v119 )
                        goto LABEL_106;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v120->obj.klass + v114);
                      if ( !this )
                        goto LABEL_106;
                      SkillIconComponent__Set_37920336(
                        (SkillIconComponent_o *)this,
                        v119[4],
                        v119[5],
                        v119[12],
                        v119[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_106;
                      if ( v116 >= skillLevelIconLabelList->max_length )
                        goto LABEL_291;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v114);
                      if ( !this )
                        goto LABEL_106;
                      UIIconLabel__Set_37921148((UIIconLabel_o *)this, 48, v119[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v123 = v16->fields.skillIconList;
                  if ( !v123 )
                    goto LABEL_106;
                  v124 = v114 - 3;
                  ++v114;
                }
                while ( v124 < (int)v123->max_length );
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
                v128 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v129 = *(_QWORD *)&this->fields.m_CachedPtr;
                v130 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v129 )
                  goto LABEL_106;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v129 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v128,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                }
                else
                {
                  v132 = v129 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v132 + 32) = v128;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v132 + 32), (int32_t)v128, v126, v127);
                }
              }
            }
            else
            {
LABEL_93:
              v105 = v16->fields.skillIconList;
              if ( !v105 )
                goto LABEL_106;
              v106 = 4LL;
              while ( 1 )
              {
                v107 = v106 - 4;
                if ( v106 - 4 >= (int)v105->max_length )
                  break;
                v108 = v16->fields.skillBaseList;
                if ( !v108 )
                  goto LABEL_106;
                if ( v107 >= v108->max_length )
                  goto LABEL_291;
                v109 = (UnityEngine_Object_o *)*((_QWORD *)&v108->obj.klass + v106);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v109, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v110 = v16->fields.skillBaseList;
                  if ( !v110 )
                    goto LABEL_106;
                  if ( v107 >= v110->max_length )
LABEL_291:
                    sub_1B6432C(this, v96);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v110->obj.klass + v106);
                  if ( !this )
                    goto LABEL_106;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v105 = v16->fields.skillIconList;
                ++v106;
                if ( !v105 )
                  goto LABEL_106;
              }
              v111 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
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
            FriendIconComponent__SetAppendSkill(v16, v65, v112);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v134 = v16->fields.svtCommandCardList;
              if ( v65 )
              {
                v136 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v135 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v212.fields.currentCryptoKey = v136;
                *(_QWORD *)&v212.fields.fakeValue = v135;
                v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v212, 0LL);
                commandCardParam = v65->fields.commandCardParam;
                v139 = v137;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v65, 0LL);
                if ( !v134 )
                  goto LABEL_106;
                ServantCommandCardListComponent__Set_37898232(
                  v134,
                  v139,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v134 )
                  goto LABEL_106;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_37377152 = Grade__GetKind_37377152(userGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_37377152, 0LL);
            baseSpr = v16->fields.baseSpr;
            v143 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v143, 0LL);
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
                  sub_1B645E4(this);
                  goto LABEL_297;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_106;
              LODWORD(v147) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v148 = v147;
              LODWORD(v149) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_106;
              v150 = v149;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v153 = LocalPositionX;
              v154 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v154, (float)(v150 * 0.5) + (float)(v148 + v153), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              v155 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v155, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_106;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37377152, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_106;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_106;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v205 )
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
            v157 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v156 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v213.fields.currentCryptoKey = v157;
            *(_QWORD *)&v213.fields.fakeValue = v156;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v213, 0LL) >= 1
              && userGameEntity->fields.userClassBoardInfo )
            {
              if ( classBoardMaxNumDictionary )
                goto LABEL_197;
              classBoardMaxNumDictionary = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                                                  System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                                                  v158,
                                                                                                  v159);
              System_Collections_Generic_Dictionary_int__int____ctor(
                classBoardMaxNumDictionary,
                (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_106;
              this = (FriendIconComponent_o *)this->fields.servantFaceIcon;
              if ( !this )
                goto LABEL_106;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
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
                    p_method = sub_1BB60A8(v186, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                    v194 = sub_1BB60A8(v186, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
                      sub_1B645E4(v195);
LABEL_293:
                      sub_1B64324(Master_object);
                    }
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v196 )
                    goto LABEL_293;
                  if ( !Master_object )
                    sub_1B64324(0LL);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v196 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !classBoardMaxNumDictionary )
                      sub_1B64324(OtherThanNoneEntity);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      classBoardMaxNumDictionary,
                      *(_DWORD *)(v196 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v186 )
                {
                  v200 = v186->klass;
                  v201 = *(unsigned __int16 *)(&v186->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v186->klass->_2.bitflags2 + 3) )
                  {
                    v202 = &v200->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v202 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v201;
                      v202 += 4;
                      if ( !v201 )
                        goto LABEL_284;
                    }
                    v203 = (__int64)&v200->vtable[*v202].method;
                  }
                  else
                  {
LABEL_284:
                    v203 = sub_1BB60A8(v186, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v203)(
                    v186,
                    *(_QWORD *)(v203 + 8));
                }
LABEL_197:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v160 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
                v161 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v162 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                v163 = (DataMasterBase_TMaster__TEntity__PKType__o *)v160;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v214.fields.currentCryptoKey = v161;
                *(_QWORD *)&v214.fields.fakeValue = v162;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                  v214,
                                                  0LL);
                if ( !v163 )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v163,
                                                  (int32_t)this,
                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_106;
                v164 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_106;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v164,
                                                  0LL);
                userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_106;
                v166 = userClassBoardInfo->max_length;
                if ( v166 < 1 )
                {
LABEL_214:
                  v170 = 0;
                }
                else
                {
                  v167 = (int)this;
                  v168 = 0;
                  while ( 1 )
                  {
                    if ( v168 >= v166 )
                      goto LABEL_291;
                    v169 = userClassBoardInfo->m_Items[v168];
                    if ( !v169 )
                      goto LABEL_106;
                    if ( v169->fields.classBoardBaseId == v167 )
                    {
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_106;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        classBoardMaxNumDictionary,
                                                        v167,
                                                        (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v169, v164, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v166 = userClassBoardInfo->max_length;
                    if ( (int)++v168 >= v166 )
                      goto LABEL_214;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    classBoardMaxNumDictionary,
                                                    v167,
                                                    (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v169->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_106;
                  v170 = squareIds->max_length;
                  v171 = (int)this > v170;
                  if ( (int)this > 0 )
                    goto LABEL_216;
                }
                v171 = 1;
LABEL_216:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v173 = (Il2CppObject **)&StringLiteral_6338/*"FFFFFF"*/;
                  if ( !v171 )
                    v173 = (Il2CppObject **)&StringLiteral_6337/*"FFFF00"*/;
                  v174 = *v173;
                  v206 = v170;
                  v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206);
                  this = (FriendIconComponent_o *)System_String__Format_61389768(
                                                    (System_String_o *)StringLiteral_15959/*"[{0}]+{1}[-]"*/,
                                                    v174,
                                                    v175,
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
                    v177 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v178 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v178 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_33375356(
                      v177,
                      v178->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17415/*"btn_bg_29_2"*/,
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
                    v180 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_33375356(
                      v180,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_106;
                    v181 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v181,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_106;
                    v182 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v182,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_245;
              }
LABEL_297:
              sub_1B64324(Enumerator);
            }
LABEL_239:
            v183 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
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
            v75 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
          v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
          if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
            v76 = sub_1BB5FA4(v76);
          this = **(FriendIconComponent_o ***)(v76 + 184);
          if ( this )
          {
            v77 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v65, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetSpoilerSetting(0LL) )
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_106;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            v80 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v81 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v82 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v83 = (ServantLimitImageMaster_o *)v80;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v210.fields.currentCryptoKey = v81;
            *(_QWORD *)&v210.fields.fakeValue = v82;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v210,
                                              0LL);
            if ( v83 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v83,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
                  v86 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
                  v87 = (Il2CppObject *)OverwriteTDName;
                  if ( TreasureDeviceLevelIcon <= 1 )
                    v86 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
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
    sub_1B64324(this);
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
  Il2CppObject *v37; // x1
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  SwitchUIWidgetComponent_o *v42; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v4 = this;
  if ( (byte_49FB8F3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, info);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    this = (FriendIconComponent_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49FB8F3 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !info )
      goto LABEL_19;
    v10 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v10;
    *(_QWORD *)&v44.fields.fakeValue = v9;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(info, &skillInfoList, 0, 0LL);
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
              SkillIconComponent__Set_37920336(
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
              UIIconLabel__Set_37921148((UIIconLabel_o *)this, 48, v25->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
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
          v37 = (Il2CppObject *)v4->fields.appendSkillInfoUiWidget;
          v38 = *(_QWORD *)&this->fields.m_CachedPtr;
          v39 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v38 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v37,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = v38 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v41 + 32) = v37;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v37, v35, v36);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v42 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v42 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v42, (UIWidget_array *)this, 0LL);
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
            sub_1B6432C(this, info);
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
        sub_1B64324(this);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}