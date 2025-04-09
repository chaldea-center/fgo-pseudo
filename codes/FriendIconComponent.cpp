void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UIIconLabel_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct SkillIconComponent_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UIIconLabel_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_49BA301 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B4CF90(&SkillIconComponent___TypeInfo, v4);
    sub_1B4CF90(&UIIconLabel___TypeInfo, v5);
    byte_49BA301 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B4D038(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1B4D038(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1B4D038(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1B4D038(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1B4D038(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1B4D038(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
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
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v20; // x19

  if ( (byte_49BA2F4 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_19877/*"icon_skill_mini"*/, v6);
    sub_1B4CF90(&StringLiteral_20025/*"img_friend_skill"*/, v7);
    sub_1B4CF90(&StringLiteral_19775/*"icon_append_mini"*/, v8);
    sub_1B4CF90(&StringLiteral_20024/*"img_friend_appendskill"*/, v9);
    byte_49BA2F4 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v10, v11, v12);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_19877/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20025/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19775/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20024/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BA300 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49BA300 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
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

  if ( (byte_49BA2F8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49BA2F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BA2FC & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49BA2FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v8, v9);
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
    sub_1B4D1EC(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1B4D1F4(this, method);
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

  if ( (byte_49BA2F7 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B4CF90(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1B4CF90(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49BA2F7 = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1B4D1EC(v13, v14);
      CommonUI__OpenServantStatusDialog_30260560((CommonUI_o *)Instance, 5, v10, v12, 0LL);
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
  const MethodInfo *v32; // x3
  long double inited; // q0
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 *v38; // x8
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  long double v42; // q0
  _QWORD *v43; // x22
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 *v47; // x8
  __int64 v48; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_49BA2FF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_System_Array_Empty_int___, v3);
    sub_1B4CF90(&ClassBoardInfo_TypeInfo, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B4CF90(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_1B4CF90(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49BA2FF = 1;
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
        v16 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v20;
      *(_QWORD *)&v51.fields.fakeValue = v19;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v51, 0LL);
      if ( !v21 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
            sub_1B4D1F4(Entity, v23);
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
      v30 = sub_1B4D1DC(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
      if ( !v30 )
        goto LABEL_44;
      *(_DWORD *)(v30 + 16) = v28;
      v34 = Method_System_Array_Empty_int___;
      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v35 )
      {
        sub_1B9D67C(Method_System_Array_Empty_int___);
        v35 = v34[7];
      }
      v36 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1B9D620(inited);
      if ( !*(_DWORD *)(v36 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v36);
      v37 = *(_QWORD *)(v34[7] + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1B9D620(inited);
      v38 = *(__int64 **)(v37 + 184);
      v39 = *v38;
      *(_QWORD *)(v30 + 24) = *v38;
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 24), v39, v31, v32);
      v43 = Method_System_Array_Empty_int___;
      v44 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v44 )
      {
        sub_1B9D67C(Method_System_Array_Empty_int___);
        v44 = v43[7];
      }
      v45 = *(_QWORD *)(v44 + 16);
      if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
        v45 = sub_1B9D620(v42);
      if ( !*(_DWORD *)(v45 + 224) )
        v42 = j_il2cpp_runtime_class_init_0(v45);
      v46 = *(_QWORD *)(v43[7] + 16LL);
      if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
        v46 = sub_1B9D620(v42);
      v47 = *(__int64 **)(v46 + 184);
      v48 = *v47;
      *(_QWORD *)(v30 + 32) = *v47;
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 32), v48, v40, v41);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1B4D1EC(Entity, v23);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v28, 0, v50, 1, (ClassBoardInfo_o *)v30, 0LL);
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

  if ( (byte_49BA2FA & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B4CF90(&SupportInfoJump_TypeInfo, v4);
    byte_49BA2FA = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_1B4D1DC(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v10);
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

  if ( (byte_49BA2FD & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendIconComponent_OnLongPushEquip__, method);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49BA2FD = 1;
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
    sub_1B4D1EC(userGameEntity, method);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v18, 0LL) >= 1 )
    {
      v11 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OnLongPushEquip__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v11, v11[4]);
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
    v16 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OnLongPushEquip__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v16, v16[4]);
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

  if ( (byte_49BA2FE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1B4CF90(&int_TypeInfo, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v11);
    sub_1B4CF90(&StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_1B4CF90(&StringLiteral_1/*""*/, v13);
    byte_49BA2FE = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41119564(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1B4D1F4(Master_object, v17);
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v18->fields.id,
                              (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v18->fields.lv, 0LL);
              v21 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v18->fields.lv;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23, v24, v25);
              v27 = System_String__Format(v22, v26, 0LL);
              name = System_String__Concat_61131716(v21, (System_String_o *)StringLiteral_115/*" "*/, v27, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B4D1EC(Master_object, v17);
        }
      }
    }
  }
  v28 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v28, v28[4]);
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

  if ( (byte_49BA2F9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1B4CF90(&int_TypeInfo, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v12);
    sub_1B4CF90(&StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1B4CF90(&StringLiteral_2873/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_49BA2F9 = 1;
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
    v18 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1B4D1F4(v20, v21);
  v23 = skillInfoList->m_Items[skillIndex];
  if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23->fields.id,
               (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v23->fields.lv;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v30, v31, v32);
    v34 = System_String__Format(v29, v33, 0LL);
    name = System_String__Concat_61131716(v28, (System_String_o *)StringLiteral_115/*" "*/, v34, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2873/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v27
      || (v38 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource,
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v35, v36, v37),
          v40 = System_String__Format(v38, v39, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1B4D1EC(Instance, v25);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v40, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v41 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B4CFA8(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v41, v41[4]);
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

  if ( (byte_49BA2FB & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B4CF90(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49BA2FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B4D1EC(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30263656((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  Il2CppObject *v57; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x29
  const MethodInfo *v59; // x1
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v64; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v66; // x25
  __int64 v67; // x26
  FriendIconComponent_o *overwriteServantName; // x26
  UIRangeLabel_o *v69; // x25
  Il2CppObject *v70; // x0
  __int64 v71; // x27
  __int64 v72; // x28
  ServantLimitImageMaster_o *v73; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w20
  long double v78; // q0
  __int64 v79; // x8
  __int64 v80; // x0
  Il2CppObject *v81; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  System_Collections_Generic_Dictionary_int__int__o *v83; // x22
  Il2CppObject *v84; // x0
  __int64 v85; // x20
  __int64 v86; // x29
  ServantLimitImageMaster_o *v87; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v90; // x9
  Il2CppObject *v91; // x25
  System_String_o *v92; // x20
  System_String_o *v93; // x0
  FriendIconComponent_o *v94; // x25
  UIRangeLabel_o *v95; // x26
  UnityEngine_Object_o *v96; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v100; // x25
  __int64 v101; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v103; // x8
  int v104; // w9
  unsigned __int64 v105; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v107; // x14
  struct SkillIconComponent_array *v108; // x8
  __int64 v109; // x20
  unsigned __int64 v110; // x24
  struct UnityEngine_GameObject_array *v111; // x8
  UnityEngine_Object_o *v112; // x25
  struct UnityEngine_GameObject_array *v113; // x8
  UnityEngine_Object_o *v114; // x20
  const MethodInfo *v115; // x2
  signed __int64 v116; // x20
  __int64 v117; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v119; // x26
  UnityEngine_Object_o *v120; // x25
  struct UnityEngine_GameObject_array *v121; // x9
  int32_t *v122; // x25
  struct SkillIconComponent_array *v123; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v125; // x8
  struct SkillIconComponent_array *v126; // x8
  __int64 v127; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  char v129; // w2
  const MethodInfo *v130; // x3
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v134; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v136; // x25
  __int64 v137; // x26
  __int64 v138; // x27
  int32_t v139; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v141; // w27
  int32_t Kind_38224752; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v145; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v149; // s0
  float v150; // s8
  float v151; // s0
  float v152; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v155; // s10
  UnityEngine_GameObject_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  __int64 v158; // x24
  __int64 v159; // x25
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
  int v170; // w21
  _BOOL4 v171; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v173; // x2
  __int64 v174; // x3
  __int64 v175; // x4
  Il2CppObject **v176; // x8
  Il2CppObject *v177; // x20
  Il2CppObject *v178; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UISprite_o *classBoardBackSprite; // x21
  UnityEngine_Object_o *v181; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v184; // x1
  System_Collections_Generic_IEnumerator_T__o *v185; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v187; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v190; // x8
  __int64 v191; // x9
  int *v192; // x10
  __int64 v193; // x0
  __int64 v194; // x25
  Il2CppObject *Master_object; // x0
  __int64 v196; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v198; // x1
  System_Collections_Generic_IEnumerator_T__c *v199; // x8
  __int64 v200; // x9
  int *v201; // x10
  __int64 v202; // x0
  struct System_Int32_array *squareIds; // x8
  int v204; // [xsp+1Ch] [xbp-A4h]
  OtherUserGameEntity_o *v205; // [xsp+20h] [xbp-A0h]
  Il2CppObject *v206; // [xsp+28h] [xbp-98h]
  int v207; // [xsp+34h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16

  v13 = classPos;
  v15 = userGameEntity;
  v16 = this;
  if ( (byte_49BA2F5 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, userGameEntity);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v23);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v24);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v25);
    sub_1B4CF90(&DataManager_TypeInfo, v26);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1B4CF90(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v32);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v33);
    sub_1B4CF90(&UnityEngine_Font_TypeInfo, v34);
    sub_1B4CF90(&Grade_TypeInfo, v35);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v36);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v37);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v38);
    sub_1B4CF90(&int_TypeInfo, v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Add__, v40);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v41);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v42);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1B4CF90(&OptionManager_TypeInfo, v44);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v45);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v46);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_1B4CF90(&StringLiteral_3674/*"COMMON_NO_ENTRY"*/, v48);
    sub_1B4CF90(&StringLiteral_6691/*"Fonts/FGO-Main-Font"*/, v49);
    sub_1B4CF90(&StringLiteral_6294/*"FFFFFF"*/, v50);
    sub_1B4CF90(&StringLiteral_17167/*"btn_bg_29_2"*/, v51);
    sub_1B4CF90(&StringLiteral_9156/*"NP_MAX_COLOR_NAME"*/, v52);
    sub_1B4CF90(&StringLiteral_6293/*"FFFF00"*/, v53);
    sub_1B4CF90(&StringLiteral_9126/*"NO_ENTRY_NAME"*/, v54);
    sub_1B4CF90(&StringLiteral_9150/*"NP_COLOR_NAME"*/, v55);
    this = (FriendIconComponent_o *)sub_1B4CF90(&StringLiteral_15722/*"[{0}]+{1}[-]"*/, v56);
    byte_49BA2F5 = 1;
  }
  if ( isUseServantStatus )
    v57 = (Il2CppObject *)v15;
  else
    v57 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_112;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = (struct OtherUserGameEntity_o *)v57;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&v16->fields.userGameEntity,
    (int32_t)v57,
    isUseServantStatus,
    *(const MethodInfo **)&classPos);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = displayServantType;
  v16->fields.followerType = ftype;
  if ( v15 )
  {
    if ( !followerDeckId )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v59);
      v13 = v16->fields.classPos;
      displayServantType = v16->fields.displayServantType;
      followerDeckId = TargetDeckId;
    }
    v16->fields.deckId = followerDeckId;
    if ( OtherUserGameEntity__getSvtId(v15, v13, displayServantType, followerDeckId, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
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
                 (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v64 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v66 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v210.fields.currentCryptoKey = v67;
          *(_QWORD *)&v210.fields.fakeValue = v66;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v210, 0LL) )
            v64 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_38764344((ServantFaceIconComponent_o *)this, v64, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v15->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_38776192((UIIconLabel_o *)this, 2, v15->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v206 = Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3674/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_112;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9126/*"NO_ENTRY_NAME"*/, 0LL);
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
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v64 )
              goto LABEL_99;
            v101 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
            v100 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v213.fields.currentCryptoKey = v101;
            *(_QWORD *)&v213.fields.fakeValue = v100;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                              v213,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v64, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_112;
              v103 = *(_QWORD *)&skillIconList->max_length;
              if ( v103 << 32 >= 1 )
              {
                v104 = 0;
                v105 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v105 < (int)max_length )
                  {
                    if ( v105 >= max_length )
                      goto LABEL_287;
                    v107 = skillInfoList->m_Items[v105];
                    if ( v107 && v107->fields.id >= 1 )
                      v104 = v105 + 1;
                  }
                  if ( (__int64)++v105 >= (int)v103 )
                    goto LABEL_120;
                }
                goto LABEL_112;
              }
              v104 = 0;
LABEL_120:
              if ( (int)v103 >= 1 )
              {
                v116 = v104;
                v117 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_112;
                  v119 = v117 - 4;
                  if ( v117 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_287;
                  v120 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v117);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v120, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v119 >= v116 )
                    {
                      v125 = v16->fields.skillBaseList;
                      if ( !v125 )
                        goto LABEL_112;
                      if ( v119 >= v125->max_length )
                        goto LABEL_287;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v125->obj.klass + v117);
                      if ( !this )
                        goto LABEL_112;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_112;
                      if ( v119 >= skillInfoList->max_length )
                        goto LABEL_287;
                      v121 = v16->fields.skillBaseList;
                      if ( !v121 )
                        goto LABEL_112;
                      if ( v119 >= v121->max_length )
                        goto LABEL_287;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v121->obj.klass + v117);
                      if ( !this )
                        goto LABEL_112;
                      v122 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v117);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v123 = v16->fields.skillIconList;
                      if ( !v123 )
                        goto LABEL_112;
                      if ( v119 >= v123->max_length )
                        goto LABEL_287;
                      if ( !v122 )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v123->obj.klass + v117);
                      if ( !this )
                        goto LABEL_112;
                      SkillIconComponent__Set_38775388(
                        (SkillIconComponent_o *)this,
                        v122[4],
                        v122[5],
                        v122[12],
                        v122[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_112;
                      if ( v119 >= skillLevelIconLabelList->max_length )
                        goto LABEL_287;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v117);
                      if ( !this )
                        goto LABEL_112;
                      UIIconLabel__Set_38776192((UIIconLabel_o *)this, 48, v122[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v126 = v16->fields.skillIconList;
                  if ( !v126 )
                    goto LABEL_112;
                  v127 = v117 - 3;
                  ++v117;
                }
                while ( v127 < (int)v126->max_length );
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
                v57 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v131 = *(_QWORD *)&this->fields.m_CachedPtr;
                v132 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v131 )
                  goto LABEL_112;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v131 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v57,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                }
                else
                {
                  v134 = v131 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v134 + 32) = v57;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v134 + 32), (int32_t)v57, v129, v130);
                }
              }
            }
            else
            {
LABEL_99:
              v108 = v16->fields.skillIconList;
              if ( !v108 )
                goto LABEL_112;
              v109 = 4LL;
              while ( 1 )
              {
                v110 = v109 - 4;
                if ( v109 - 4 >= (int)v108->max_length )
                  break;
                v111 = v16->fields.skillBaseList;
                if ( !v111 )
                  goto LABEL_112;
                if ( v110 >= v111->max_length )
                  goto LABEL_287;
                v112 = (UnityEngine_Object_o *)*((_QWORD *)&v111->obj.klass + v109);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v112, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v113 = v16->fields.skillBaseList;
                  if ( !v113 )
                    goto LABEL_112;
                  if ( v110 >= v113->max_length )
LABEL_287:
                    sub_1B4D1F4(this, v57);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v113->obj.klass + v109);
                  if ( !this )
                    goto LABEL_112;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v108 = v16->fields.skillIconList;
                ++v109;
                if ( !v108 )
                  goto LABEL_112;
              }
              v114 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
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
            FriendIconComponent__SetAppendSkill(v16, v64, v115);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v136 = v16->fields.svtCommandCardList;
              if ( v64 )
              {
                v138 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
                v137 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v214.fields.currentCryptoKey = v138;
                *(_QWORD *)&v214.fields.fakeValue = v137;
                v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v214, 0LL);
                commandCardParam = v64->fields.commandCardParam;
                v141 = v139;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v64, 0LL);
                if ( !v136 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Set_38753232(
                  v136,
                  v141,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v136 )
                  goto LABEL_112;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_38224752 = Grade__GetKind_38224752(v15, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_38224752, 0LL);
            baseSpr = v16->fields.baseSpr;
            v145 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v145, 0LL);
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
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6691/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_112;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1B4D4AC(this);
                  goto LABEL_292;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              LODWORD(v149) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v150 = v149;
              LODWORD(v151) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              v152 = v151;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v155 = LocalPositionX;
              v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v156, (float)(v152 * 0.5) + (float)(v150 + v155), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              v157 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v157, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_112;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38224752, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_112;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_112;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v206 )
            {
              if ( !v64 )
                goto LABEL_112;
              if ( v15->fields.pushUserSvtId == v64->fields.userSvtId )
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
            else if ( !v64 )
            {
              goto LABEL_238;
            }
            v159 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
            v158 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v215.fields.currentCryptoKey = v159;
            *(_QWORD *)&v215.fields.fakeValue = v158;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v215, 0LL) >= 1
              && v15->fields.userClassBoardInfo )
            {
              if ( classBoardMaxNumDictionary )
                goto LABEL_203;
              classBoardMaxNumDictionary = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                classBoardMaxNumDictionary,
                (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)this->fields.playerNameLabel;
              if ( !this )
                goto LABEL_112;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
              v185 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v185->klass;
                  v187 = *(unsigned __int16 *)(&v185->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v185->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v187;
                      p_offset += 4;
                      if ( !v187 )
                        goto LABEL_259;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_259:
                    p_method = sub_1B9D724(v185, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v185,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v190 = v185->klass;
                  v191 = *(unsigned __int16 *)(&v185->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v185->klass->_2.bitflags2 + 3) )
                  {
                    v192 = &v190->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v192 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
                    {
                      --v191;
                      v192 += 4;
                      if ( !v191 )
                        goto LABEL_266;
                    }
                    v193 = (__int64)&v190->vtable[*v192].method;
                  }
                  else
                  {
LABEL_266:
                    v193 = sub_1B9D724(v185, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
                  }
                  v194 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v193)(
                           v185,
                           *(_QWORD *)(v193 + 8));
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v194 )
                    sub_1B4D1EC(Master_object, v196);
                  if ( !Master_object )
                    sub_1B4D1EC(0LL, v196);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v194 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !classBoardMaxNumDictionary )
                      sub_1B4D1EC(OtherThanNoneEntity, v198);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      classBoardMaxNumDictionary,
                      *(_DWORD *)(v194 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v185 )
                {
                  v199 = v185->klass;
                  v200 = *(unsigned __int16 *)(&v185->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v185->klass->_2.bitflags2 + 3) )
                  {
                    v201 = &v199->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v201 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v200;
                      v201 += 4;
                      if ( !v200 )
                        goto LABEL_280;
                    }
                    v202 = (__int64)&v199->vtable[*v201].method;
                  }
                  else
                  {
LABEL_280:
                    v202 = sub_1B9D724(v185, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v202)(
                    v185,
                    *(_QWORD *)(v202 + 8));
                }
LABEL_203:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v160 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
                v161 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
                v162 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                v163 = (DataMasterBase_TMaster__TEntity__PKType__o *)v160;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v216.fields.currentCryptoKey = v161;
                *(_QWORD *)&v216.fields.fakeValue = v162;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                  v216,
                                                  0LL);
                if ( !v163 )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v163,
                                                  (int32_t)this,
                                                  (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_112;
                v164 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_112;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v164,
                                                  0LL);
                userClassBoardInfo = v15->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_112;
                v166 = userClassBoardInfo->max_length;
                if ( v166 < 1 )
                {
LABEL_220:
                  v170 = 0;
                }
                else
                {
                  v167 = (int)this;
                  v168 = 0;
                  while ( 1 )
                  {
                    if ( v168 >= v166 )
                      goto LABEL_287;
                    v169 = userClassBoardInfo->m_Items[v168];
                    if ( !v169 )
                      goto LABEL_112;
                    if ( v169->fields.classBoardBaseId == v167 )
                    {
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_112;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        classBoardMaxNumDictionary,
                                                        v167,
                                                        (const MethodInfo_31EE344 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v169, v164, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v166 = userClassBoardInfo->max_length;
                    if ( (int)++v168 >= v166 )
                      goto LABEL_220;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    classBoardMaxNumDictionary,
                                                    v167,
                                                    (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v169->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_112;
                  v170 = squareIds->max_length;
                  v171 = (int)this > v170;
                  if ( (int)this > 0 )
                    goto LABEL_222;
                }
                v171 = 1;
LABEL_222:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v176 = (Il2CppObject **)&StringLiteral_6294/*"FFFFFF"*/;
                  if ( !v171 )
                    v176 = (Il2CppObject **)&StringLiteral_6293/*"FFFF00"*/;
                  v177 = *v176;
                  v207 = v170;
                  v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v173, v174, v175);
                  this = (FriendIconComponent_o *)System_String__Format_61134760(
                                                    (System_String_o *)StringLiteral_15722/*"[{0}]+{1}[-]"*/,
                                                    v177,
                                                    v178,
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
                  classBoardBackSprite = v16->fields.classBoardBackSprite;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetDownloadCommonSprite(
                    classBoardBackSprite,
                    (System_String_o *)StringLiteral_17167/*"btn_bg_29_2"*/,
                    0LL);
                  this = (FriendIconComponent_o *)v16->fields.classBoardBackSprite;
                  if ( !this )
                    goto LABEL_112;
                  ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                    this,
                    this->klass[2]._1.interopData);
                }
                goto LABEL_244;
              }
LABEL_292:
              sub_1B4D1EC(Enumerator, v184);
            }
LABEL_238:
            v181 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
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
            goto LABEL_244;
          }
          if ( !v64 )
            goto LABEL_112;
          overwriteServantName = (FriendIconComponent_o *)v64->fields.overwriteServantName;
          this = (FriendIconComponent_o *)System_String__IsNullOrEmpty((System_String_o *)overwriteServantName, 0LL);
          v69 = v16->fields.servantNameLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v70 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v72 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
            v71 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
            v73 = (ServantLimitImageMaster_o *)v70;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v211.fields.currentCryptoKey = v72;
            *(_QWORD *)&v211.fields.fakeValue = v71;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                              v211,
                                              0LL);
            if ( !v73 )
              goto LABEL_112;
            this = (FriendIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                              v73,
                                              (int32_t)this,
                                              v64->fields.limitCount,
                                              0,
                                              0LL);
            if ( !v69 )
              goto LABEL_112;
            overwriteServantName = this;
          }
          else if ( !v69 )
          {
            goto LABEL_112;
          }
          UIRangeLabel__Set(v69, (System_String_o *)overwriteServantName, 0LL, 1, 0, 0LL);
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
          v79 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
            v79 = sub_1B9D620(v78);
          v80 = *(_QWORD *)(*(_QWORD *)(v79 + 192) + 16LL);
          if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
            v80 = sub_1B9D620(v78);
          this = **(FriendIconComponent_o ***)(v80 + 184);
          if ( this )
          {
            v81 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v64, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            v205 = v15;
            v204 = TreasureDeviceLevelIcon;
            if ( OptionManager__GetSpoilerSetting(0LL) )
            {
              v83 = classBoardMaxNumDictionary;
            }
            else
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_112;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_112;
              v83 = classBoardMaxNumDictionary;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v64->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v84 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v85 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
            v86 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
            v87 = (ServantLimitImageMaster_o *)v84;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v212.fields.currentCryptoKey = v85;
            *(_QWORD *)&v212.fields.fakeValue = v86;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                              v212,
                                              0LL);
            if ( v87 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v87,
                                             (int32_t)this,
                                             FriendNpNameDispLimitCount,
                                             0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                v64->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v81 )
                {
                  p_userGameEntity = &v16->fields.userGameEntity;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v81,
                                      (int32_t)this,
                                      ServantLimitCountSealAfter,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v90 = (System_String_o **)&StringLiteral_9156/*"NP_MAX_COLOR_NAME"*/;
                  v91 = (Il2CppObject *)OverwriteTDName;
                  classBoardMaxNumDictionary = v83;
                  if ( v204 <= 1 )
                    v90 = (System_String_o **)&StringLiteral_9150/*"NP_COLOR_NAME"*/;
                  v92 = *v90;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v93 = LocalizationManager__Get(v92, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v93, v91, 0LL);
                  v15 = v205;
                  if ( tdInfo )
                  {
                    v94 = this;
                    v95 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v95 )
                    {
                      UIRangeLabel__Set(v95, (System_String_o *)v94, (System_String_o *)this, 0, 0, 0LL);
                      v96 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
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
    sub_1B4D1EC(this, v57);
  }
LABEL_244:
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
  __int64 v8; // x21
  __int64 v9; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v11; // x8
  int v12; // w9
  signed __int64 v13; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v15; // x14
  struct SkillIconComponent_array *v16; // x8
  __int64 v17; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  signed __int64 v19; // x21
  __int64 v20; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  unsigned __int64 v22; // x24
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x9
  int32_t *v25; // x20
  struct SkillIconComponent_array *v26; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  struct SkillIconComponent_array *v29; // x8
  __int64 v30; // x9
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v38; // x8
  SwitchUIWidgetComponent_o *v39; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_49BA2F6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Add__, info);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    this = (FriendIconComponent_o *)sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49BA2F6 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v9 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v9;
    *(_QWORD *)&v41.fields.fakeValue = v8;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v41, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41119564(v3, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_75;
      v11 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v11 << 32 < 1 )
      {
        v12 = 0;
      }
      else
      {
        v12 = 0;
        v13 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v13 < (int)max_length )
            {
              if ( v13 >= max_length )
                goto LABEL_76;
              v15 = skillInfoList->m_Items[v13];
              if ( v15 && v15->fields.id >= 1 )
                v12 = v13 + 1;
            }
          }
          ++v13;
        }
        while ( v13 < (int)v11 );
      }
      if ( (int)v11 >= 1 )
      {
        v19 = v12;
        v20 = 4LL;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_75;
          v22 = v20 - 4;
          if ( v20 - 4 >= (unsigned __int64)appendSkillBaseList->max_length )
            goto LABEL_76;
          v23 = (UnityEngine_Object_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v20);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v22 >= v19 )
            {
              v28 = v4->fields.appendSkillBaseList;
              if ( !v28 )
                goto LABEL_75;
              if ( v22 >= v28->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v28->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_75;
              if ( v22 >= skillInfoList->max_length )
                goto LABEL_76;
              v24 = v4->fields.appendSkillBaseList;
              if ( !v24 )
                goto LABEL_75;
              if ( v22 >= v24->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v24->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              v25 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v20);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v26 = v4->fields.appendSkillIconList;
              if ( !v26 )
                goto LABEL_75;
              if ( v22 >= v26->max_length )
                goto LABEL_76;
              if ( !v25 )
                goto LABEL_75;
              this = (FriendIconComponent_o *)*((_QWORD *)&v26->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              SkillIconComponent__Set_38775388((SkillIconComponent_o *)this, v25[4], v25[5], v25[12], v25[13], 0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v22 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              UIIconLabel__Set_38776192((UIIconLabel_o *)this, 48, v25[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
          }
          v29 = v4->fields.appendSkillIconList;
          if ( !v29 )
            goto LABEL_75;
          v30 = v20 - 3;
          ++v20;
        }
        while ( v30 < (int)v29->max_length );
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
            goto LABEL_75;
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_75;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
          v35 = *(_QWORD *)&this->fields.m_CachedPtr;
          v36 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v35 )
            goto LABEL_75;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = v35 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v38 + 32) = info;
            sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 32), (int32_t)info, v33, v34);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          v39 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v39 )
            goto LABEL_75;
          SwitchUIWidgetComponent__Set(v39, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_19:
      v16 = v4->fields.appendSkillIconList;
      if ( !v16 )
        goto LABEL_75;
      v17 = 0LL;
      while ( (int)v17 < (signed int)v16->max_length )
      {
        v18 = v4->fields.appendSkillBaseList;
        if ( v18 )
        {
          if ( (unsigned int)v17 >= v18->max_length )
LABEL_76:
            sub_1B4D1F4(this, info);
          this = (FriendIconComponent_o *)v18->m_Items[v17];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v16 = v4->fields.appendSkillIconList;
            ++v17;
            if ( v16 )
              continue;
          }
        }
        goto LABEL_75;
      }
      this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !this
        || (this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
      {
LABEL_75:
        sub_1B4D1EC(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}