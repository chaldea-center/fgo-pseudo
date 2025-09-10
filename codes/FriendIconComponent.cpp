void FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIIconLabel_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct SkillIconComponent_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UIIconLabel_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C26704 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UIIconLabel___TypeInfo);
    byte_4C26704 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C2D538(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIIconLabel_array *)sub_1C2D538(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.appendSkillBaseList, (int32_t)v13, v14, v15);
  v16 = (struct SkillIconComponent_array *)sub_1C2D538(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.appendSkillIconList, (int32_t)v16, v17, v18);
  v19 = (struct UIIconLabel_array *)sub_1C2D538(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v19, v20, v21);
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v7; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v9; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v11; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v13; // x19

  if ( (byte_4C266F0 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20215/*"icon_skill_mini"*/);
    sub_1C2D490(&StringLiteral_20397/*"img_friend_skill"*/);
    sub_1C2D490(&StringLiteral_20111/*"icon_append_mini"*/);
    sub_1C2D490(&StringLiteral_20396/*"img_friend_appendskill"*/);
    byte_4C266F0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v7 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20215/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v9 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20397/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v11 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20111/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v13 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_20396/*"img_friend_appendskill"*/, 0);
  }
}


void FriendIconComponent__EndCloseClassBoardEffectListDialog(FriendIconComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C26702 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C26702 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
}


void FriendIconComponent__EndCloseShowServantEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void FriendIconComponent__EndShowServant(FriendIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C266FA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C266FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void FriendIconComponent__EndShowServantEquip(FriendIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C266FE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FriendIconComponent_EndCloseShowServantEquip__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C266FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


int32_t FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
    sub_1C2D6EC(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !LODWORD(eventSupportDeckIds->max_length) )
    sub_1C2D6F4(this, method, v2);
  return eventSupportDeckIds->m_Items[0];
}


void FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C266F9 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_FriendIconComponent_EndShowServant__);
    sub_1C2D490(&Method_FriendIconComponent_OnClickServantStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C266F9 = 1;
  }
  v3 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OnClickServantStatus__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          this->fields.followerGrandGraphId,
                          0);
    if ( ServantLeaderInfo )
    {
      v7 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServant__, 0);
      if ( !Instance )
        sub_1C2D6EC(v10, v11);
      CommonUI__OpenServantStatusDialog_31180036((CommonUI_o *)Instance, 5, v7, v9, 0);
    }
  }
}


void FriendIconComponent__OnClickSupportClassBoardBuff(FriendIconComponent_o *this, const MethodInfo *method)
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
  void *Entity; // x0
  __int64 v13; // x1
  int32_t v14; // w23
  __int64 v15; // x2
  int32_t v16; // w20
  _DWORD *v17; // x24
  struct OtherUserGameEntity_o *v18; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x26
  int max_length; // w8
  int v21; // w27
  ClassBoardInfo_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  long double inited; // q0
  _QWORD *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 *v32; // x8
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  long double v36; // q0
  _QWORD *v37; // x23
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 *v41; // x8
  __int64 v42; // x1
  Il2CppObject *Instance; // x23
  System_Action_o *v44; // x24
  struct OtherUserGameEntity_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C26701 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&ClassBoardInfo_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__);
    sub_1C2D490(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C26701 = 1;
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
                          this->fields.followerGrandGraphId,
                          0);
    if ( ServantLeaderInfo )
    {
      v5 = ServantLeaderInfo;
      v6 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
      v10 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v10;
      *(_QWORD *)&v46.fields.fakeValue = v9;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46, 0);
      if ( !v11 )
        goto LABEL_61;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 (int32_t)Entity,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_61;
      v14 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_61;
      Entity = (void *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v14, 0);
      v16 = (int)Entity;
      if ( (_DWORD)Entity )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !Entity )
          goto LABEL_61;
        Entity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity((ClassBoardBaseMaster_o *)Entity, v16, 0);
        v17 = Entity;
      }
      else
      {
        v17 = 0;
      }
      v18 = this->fields.userGameEntity;
      if ( !v18 )
        goto LABEL_61;
      userClassBoardInfo = v18->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_61;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
        v22 = 0;
      }
      else
      {
        v21 = 0;
        v22 = 0;
        v23 = 0;
        do
        {
          if ( v21 >= (unsigned int)max_length )
            sub_1C2D6F4(Entity, v13, v15);
          v24 = (__int64)userClassBoardInfo->m_Items[v21];
          if ( !v24 )
            goto LABEL_61;
          if ( *(_DWORD *)(v24 + 16) == v16 )
          {
            Entity = (void *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v24, v14, 0);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              v23 = v24;
          }
          if ( v17 )
          {
            if ( v17[4] == *(_DWORD *)(v24 + 16) )
            {
              Entity = (void *)System_Linq_Enumerable__Any_int_(
                                 *(System_Collections_Generic_IEnumerable_TSource__o **)(v24 + 24),
                                 (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)Entity & 1) != 0 )
                v22 = (ClassBoardInfo_o *)v24;
            }
          }
          if ( v23 && v22 )
            goto LABEL_57;
          max_length = userClassBoardInfo->max_length;
          ++v21;
        }
        while ( v21 < max_length );
        if ( v23 )
        {
LABEL_57:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v44 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)this,
            Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
            0);
          v45 = this->fields.userGameEntity;
          if ( v45 && Instance )
          {
            CommonUI__OpenClassBoardEffectListDialog(
              (CommonUI_o *)Instance,
              1,
              v16,
              0,
              v44,
              1,
              (ClassBoardInfo_o *)v23,
              v22,
              this->fields.isGrandSupport,
              v45->fields.followerClassStatistics,
              0,
              0);
            return;
          }
LABEL_61:
          sub_1C2D6EC(Entity, v13);
        }
      }
      v23 = sub_1C2D6DC(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v23, 0);
      if ( !v23 )
        goto LABEL_61;
      *(_DWORD *)(v23 + 16) = v16;
      v28 = Method_System_Array_Empty_int___;
      v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v29 )
      {
        sub_1C7DC00(Method_System_Array_Empty_int___);
        v29 = v28[7];
      }
      v30 = *(_QWORD *)(v29 + 16);
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1C7DBA4(inited);
      if ( !*(_DWORD *)(v30 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v30);
      v31 = *(_QWORD *)(v28[7] + 16LL);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1C7DBA4(inited);
      v32 = *(__int64 **)(v31 + 184);
      v33 = *v32;
      *(_QWORD *)(v23 + 24) = *v32;
      sub_1C2D434((CGThumbnailListItem_o *)(v23 + 24), v33, v25, v26);
      v37 = Method_System_Array_Empty_int___;
      v38 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v38 )
      {
        sub_1C7DC00(Method_System_Array_Empty_int___);
        v38 = v37[7];
      }
      v39 = *(_QWORD *)(v38 + 16);
      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
        v39 = sub_1C7DBA4(v36);
      if ( !*(_DWORD *)(v39 + 224) )
        v36 = j_il2cpp_runtime_class_init_0(v39);
      v40 = *(_QWORD *)(v37[7] + 16LL);
      if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
        v40 = sub_1C7DBA4(v36);
      v41 = *(__int64 **)(v40 + 184);
      v42 = *v41;
      *(_QWORD *)(v23 + 32) = *v41;
      sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), v42, v34, v35);
      goto LABEL_57;
    }
  }
}


void FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  OtherUserGameEntity_o *userGameEntity; // x21
  SupportInfoJump_o *v6; // x20
  __int64 v7; // x1
  OtherUserGameEntity_o *Instance; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  int32_t v10; // w19

  if ( (byte_4C266FC & 1) == 0 )
  {
    sub_1C2D490(&Method_FriendIconComponent_OnClickSupportInfo__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&SupportInfoJump_TypeInfo);
    byte_4C266FC = 1;
  }
  v3 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OnClickSupportInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  userGameEntity = this->fields.userGameEntity;
  v6 = (SupportInfoJump_o *)sub_1C2D6DC(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v6, userGameEntity, 0, 0, 0);
  Instance = this->fields.userGameEntity;
  if ( !Instance )
    goto LABEL_12;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        Instance,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        this->fields.followerGrandGraphId,
                        0);
  v10 = 60;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo, 0) )
      v10 = 43;
    else
      v10 = 60;
  }
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C2D6EC(Instance, v7);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v10, 1, (Il2CppObject *)v6, 0);
}


void FriendIconComponent__OnLongPushAppendSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 0, v2);
}


void FriendIconComponent__OnLongPushAppendSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 1, v2);
}


void FriendIconComponent__OnLongPushAppendSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void FriendIconComponent__OnLongPushEquip(FriendIconComponent_o *this, int32_t index, const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v7; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x3
  int32_t followerType; // w8
  int32_t v16; // w2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C266FF & 1) == 0 )
  {
    sub_1C2D490(&Method_FriendIconComponent_OnLongPushEquip__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C266FF = 1;
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
                        this->fields.followerGrandGraphId,
                        0);
  v7 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1C2D6EC(userGameEntity, *(_QWORD *)&index);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                index,
                this->fields.followerGrandGraphId,
                0);
  if ( EquipInfo )
  {
    v9 = EquipInfo;
    v11 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v11;
    *(_QWORD *)&v19.fields.fakeValue = v10;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v19, 0) >= 1 )
    {
      v12 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OnLongPushEquip__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v16 = 14;
      else
        v16 = 13;
      if ( v7 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v7, 0) )
          v16 = 19;
        else
          v16 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v9, v16, v14);
      return;
    }
  }
LABEL_22:
  v17 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OnLongPushEquip__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C2D474(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
}


void FriendIconComponent__OnLongPushEquip1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 0;
  FriendIconComponent__OnLongPushEquip(this, 0, v2);
}


void FriendIconComponent__OnLongPushEquip2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 1;
  FriendIconComponent__OnLongPushEquip(this, 1, v2);
}


void FriendIconComponent__OnLongPushEquip3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 2;
  FriendIconComponent__OnLongPushEquip(this, 2, v2);
}


void FriendIconComponent__OnLongPushSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 0, v2);
}


void FriendIconComponent__OnLongPushSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 1, v2);
}


void FriendIconComponent__OnLongPushSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 2, v2);
}


void FriendIconComponent__OpenAppendSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  SkillInfo_o *v10; // x21
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_String_o *v13; // x19
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C26700 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26700 = 1;
  }
  name = 0;
  skillInfoList = 0;
  detail = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          this->fields.followerGrandGraphId,
                          0);
    if ( ServantLeaderInfo )
    {
      if ( ServantLeaderInfo->fields.userSvtId )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_43263964(ServantLeaderInfo, &skillInfoList, 0, 0);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( LODWORD(skillInfoList->max_length) <= skillIndex )
          sub_1C2D6F4(Master_object, v8, v9);
        v10 = skillInfoList->m_Items[skillIndex];
        if ( v10 && v10->fields.id >= 1 && v10->fields.lv >= 1 )
        {
          v11 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v11 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v10->fields.id,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v10->fields.lv, 0);
              v13 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
              lv = v10->fields.lv;
              v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v15, v16, v17);
              v19 = System_String__Format(v14, v18, 0);
              name = System_String__Concat_63496112(v13, (System_String_o *)StringLiteral_113/*" "*/, v19, 0);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( Master_object )
              {
                CommonUI__OpenDetailLongInfoDialog(
                  (CommonUI_o *)Master_object,
                  name,
                  (System_String_o *)StringLiteral_1/*""*/,
                  detail,
                  1,
                  0,
                  0);
                return;
              }
            }
          }
LABEL_25:
          sub_1C2D6EC(Master_object, v8);
        }
      }
    }
  }
  v20 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C2D474(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
}


void FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v7; // x19
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t max_length; // w9
  SkillInfo_o *v14; // x24
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  DataManager_o *v18; // x20
  Il2CppObject *Master_object; // x0
  __int64 v20; // x22
  __int64 v21; // x23
  ServantLimitImageMaster_o *v22; // x21
  int32_t v23; // w22
  int32_t ServantImageLimitSealAfter; // w22
  Il2CppObject *v25; // x21
  int32_t v26; // w0
  int32_t limitCount; // w23
  int32_t v28; // w19
  System_String_o *v29; // x19
  System_String_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x19
  Il2CppObject *v40; // x0
  System_String_o *v41; // x19
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  int m_CancellationTokenSource; // [xsp+0h] [xbp-60h] BYREF
  int32_t lv; // [xsp+4h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C266FB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_FriendIconComponent_OpenSkillInfoDialog__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C2D490(&StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4C266FB = 1;
  }
  skillInfoList = 0;
  detail = 0;
  name = 0;
  entity = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          this->fields.followerGrandGraphId,
                          0);
    if ( ServantLeaderInfo )
    {
      v7 = ServantLeaderInfo;
      if ( ServantLeaderInfo->fields.userSvtId )
      {
        v8 = Method_FriendIconComponent_OpenSkillInfoDialog__;
        if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OpenSkillInfoDialog__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantLeaderInfo__getSkillInfo(v7, &skillInfoList, 0);
        if ( skillInfoList )
        {
          max_length = skillInfoList->max_length;
          if ( max_length > skillIndex )
          {
            if ( max_length <= (unsigned int)skillIndex )
              sub_1C2D6F4(v10, v11, v12);
            v14 = skillInfoList->m_Items[skillIndex];
            if ( v14 )
            {
              if ( v14->fields.id >= 1 && v14->fields.lv >= 1 )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                                Instance,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
                  if ( Instance )
                  {
                    v17 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            v14->fields.id,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( Instance )
                    {
                      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                                    Instance,
                                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      if ( Instance )
                      {
                        Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                                      (SkillLvMaster_o *)Instance,
                                                      v14->fields.id,
                                                      v14->fields.lv,
                                                      0);
                        if ( v17 )
                        {
                          v18 = Instance;
                          SkillEntity__getSkillMessageInfo((SkillEntity_o *)v17, &name, &detail, v14->fields.lv, 0);
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                          v21 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
                          v20 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
                          v22 = (ServantLimitImageMaster_o *)Master_object;
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                          *(_QWORD *)&v50.fields.currentCryptoKey = v21;
                          *(_QWORD *)&v50.fields.fakeValue = v20;
                          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
                          Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount(v7, 0);
                          if ( v22 )
                          {
                            ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                           v22,
                                                           v23,
                                                           (int32_t)Instance,
                                                           0);
                            v25 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
                            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v7->fields.svtId,
                                    0);
                            limitCount = v7->fields.limitCount;
                            v28 = v26;
                            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                            Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                          ServantImageLimitSealAfter,
                                                          limitCount,
                                                          0);
                            if ( v25 )
                            {
                              if ( ServantLimitAddMaster__TryGetEntity(
                                     (ServantLimitAddMaster_o *)v25,
                                     &entity,
                                     v28,
                                     (int32_t)Instance,
                                     0) )
                              {
                                Instance = (DataManager_o *)entity;
                                if ( !entity )
                                  goto LABEL_42;
                                if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
                                {
                                  Instance = (DataManager_o *)entity;
                                  if ( !entity )
                                    goto LABEL_42;
                                  name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v14->fields.id, name, 0);
                                }
                              }
                              v29 = name;
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
                              lv = v14->fields.lv;
                              v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v31, v32, v33);
                              v35 = System_String__Format(v30, v34, 0);
                              name = System_String__Concat_63496112(v29, (System_String_o *)StringLiteral_113/*" "*/, v35, 0);
                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/,
                                                            0);
                              if ( v18 )
                              {
                                v39 = (System_String_o *)Instance;
                                m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
                                v40 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                        int_TypeInfo,
                                                        &m_CancellationTokenSource,
                                                        v36,
                                                        v37,
                                                        v38);
                                v41 = System_String__Format(v39, v40, 0);
                                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( Instance )
                                {
                                  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v41, detail, 1, 0, 0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_42:
                sub_1C2D6EC(Instance, v16);
              }
            }
          }
        }
      }
    }
  }
  v42 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v42 = (_QWORD *)sub_1C2D4A8(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v43 = (System_Reflection_MethodBase_o *)sub_1C2D474(v42, v42[4]);
  OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0);
}


void FriendIconComponent__SelectShowServantEquip(
        FriendIconComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4C266FD & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_FriendIconComponent_EndShowServantEquip__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C266FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_1C2D6EC(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_31183144((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


void FriendIconComponent__SerializeFieldNotNullCheck(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void FriendIconComponent__Set(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        bool isUseServantStatus,
        int32_t classPos,
        int32_t *inputDisplayServantType,
        int32_t ftype,
        int32_t followerDeckId,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        int32_t inFollowerGrandGraphId,
        const MethodInfo *method)
{
  FriendIconComponent_o *v17; // x19
  OtherUserGameEntity_o *v18; // x1
  int32_t v19; // w8
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x22
  char v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x26
  char v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  int32_t displayServantType; // w8
  Il2CppObject *MasterData_object; // x23
  int32_t v29; // w1
  int32_t lastQuestId; // w0
  int32_t SvtId; // w0
  int32_t v32; // w23
  Il2CppObject *Entity; // x24
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v35; // x2
  ServantLeaderInfo_o *v36; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v38; // x25
  __int64 v39; // x26
  bool v40; // w1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x2
  __int64 v44; // x25
  __int64 v45; // x26
  int32_t v46; // w22
  System_Collections_Generic_Dictionary_int__int__o *v47; // x25
  char v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x26
  Il2CppObject *Master_object; // x0
  __int64 v62; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  ClassBoardInfo_array *userClassBoardInfo; // x24
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  _BOOL4 isGrandSupport; // w21
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v17 = this;
  if ( (byte_4C266F1 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (FriendIconComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C266F1 = 1;
  }
  if ( isUseServantStatus )
    v18 = userGameEntity;
  else
    v18 = 0;
  if ( !v17 )
    goto LABEL_84;
  v17->fields.userGameEntity = v18;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v17->fields.userGameEntity,
    (int32_t)v18,
    isUseServantStatus,
    *(const MethodInfo **)&classPos);
  v17->fields.classPos = classPos;
  v19 = *inputDisplayServantType;
  p_classBoardMaxDictionary = &v17->fields.classBoardMaxDictionary;
  v17->fields.followerType = ftype;
  v17->fields.displayServantType = v19;
  v17->fields.classBoardMaxDictionary = classBoardMaxNumDictionary;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v17->fields.classBoardMaxDictionary,
    (int32_t)classBoardMaxNumDictionary,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v17->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.switchSkillUIList, (int32_t)v23, v24, v25);
  v17->fields.followerGrandGraphId = inFollowerGrandGraphId;
  if ( !userGameEntity )
    goto LABEL_76;
  if ( !followerDeckId )
    followerDeckId = FriendIconComponent__GetTargetDeckId(v17, v26);
  displayServantType = v17->fields.displayServantType;
  v17->fields.deckId = followerDeckId;
  if ( displayServantType == 2 && v17->fields.usedSupportClass == classPos )
  {
    if ( OtherUserGameEntity__getSvtId(
           userGameEntity,
           v17->fields.classPos,
           2,
           followerDeckId,
           v17->fields.followerGrandGraphId,
           0) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_84;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v17->fields.classPos,
                                        v17->fields.displayServantType,
                                        v17->fields.deckId,
                                        v17->fields.followerGrandGraphId,
                                        0);
      if ( !MasterData_object )
        goto LABEL_84;
      v29 = (int)this;
      this = (FriendIconComponent_o *)MasterData_object;
LABEL_23:
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v29,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_25;
    }
    v17->fields.displayServantType = 0;
    *inputDisplayServantType = 0;
  }
  else
  {
    lastQuestId = v17->fields.lastQuestId;
    if ( lastQuestId )
      lastQuestId = OtherUserGameEntity__GetReturnTypeByQuestId(lastQuestId, 0);
    v17->fields.displayServantType = lastQuestId;
    *inputDisplayServantType = lastQuestId;
  }
  SvtId = OtherUserGameEntity__getSvtId(
            userGameEntity,
            v17->fields.classPos,
            v17->fields.displayServantType,
            v17->fields.deckId,
            v17->fields.followerGrandGraphId,
            0);
  if ( SvtId )
  {
    v32 = SvtId;
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_84;
    this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !this )
      goto LABEL_84;
    v29 = v32;
    goto LABEL_23;
  }
  Entity = 0;
LABEL_25:
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        v17->fields.classPos,
                        1,
                        v17->fields.displayServantType,
                        v17->fields.deckId,
                        v17->fields.followerGrandGraphId,
                        0);
  v36 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v39 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v38 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v73.fields.currentCryptoKey = v39;
        *(_QWORD *)&v73.fields.fakeValue = v38;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v73, 0) )
          v36 = 0;
      }
    }
  }
  v40 = v17->fields.displayServantType == 2;
  v17->fields.isGrandSupport = v40;
  FriendIconComponent__SetActiveForGrandSupport(v17, v40, v35);
  FriendIconComponent__SetPlayerInfo(v17, userGameEntity, v41);
  FriendIconComponent__SetServantInfo(v17, userGameEntity, v36, v17->fields.isGrandSupport, v42);
  if ( v36 )
  {
    v45 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = v45;
    *(_QWORD *)&v74.fields.fakeValue = v44;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v74, 0) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( !*p_classBoardMaxDictionary )
        {
          v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
          System_Collections_Generic_Dictionary_int__int____ctor(
            v47,
            (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
          *p_classBoardMaxDictionary = v47;
          sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.classBoardMaxDictionary, (int32_t)v47, v48, v49);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
          if ( !this )
            goto LABEL_84;
          this = (FriendIconComponent_o *)this->fields.playerNameLabel;
          if ( !this )
            goto LABEL_84;
          Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                         (System_Collections_ObjectModel_Collection_T__o *)this,
                         (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
          if ( !Enumerator )
            sub_1C2D6EC(0, v50);
          while ( 1 )
          {
            klass = Enumerator->klass;
            v53 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v53;
                p_offset += 4;
                if ( !v53 )
                  goto LABEL_50;
              }
              v55 = (__int64)&klass->vtable[*p_offset];
            }
            else
            {
LABEL_50:
              v55 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                    Enumerator,
                    *(_QWORD *)(v55 + 8))
                & 1) == 0 )
              break;
            v56 = Enumerator->klass;
            v57 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v58 = &v56->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v58 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
              {
                --v57;
                v58 += 4;
                if ( !v57 )
                  goto LABEL_57;
              }
              v59 = (__int64)&v56->vtable[*v58];
            }
            else
            {
LABEL_57:
              v59 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
            }
            v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                    Enumerator,
                    *(_QWORD *)(v59 + 8));
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v60 )
              sub_1C2D6EC(Master_object, v62);
            if ( !Master_object )
              sub_1C2D6EC(0, v62);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                    (ClassBoardSquareMaster_o *)Master_object,
                                    *(_DWORD *)(v60 + 16),
                                    0);
            if ( OtherThanNoneEntity )
            {
              if ( !*p_classBoardMaxDictionary )
                sub_1C2D6EC(OtherThanNoneEntity, v64);
              System_Collections_Generic_Dictionary_int__int___Add(
                *p_classBoardMaxDictionary,
                *(_DWORD *)(v60 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v65 = Enumerator->klass;
          v66 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v67 = &v65->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              --v66;
              v67 += 4;
              if ( !v66 )
                goto LABEL_70;
            }
            v68 = (__int64)&v65->vtable[*v67];
          }
          else
          {
LABEL_70:
            v68 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
            Enumerator,
            *(_QWORD *)(v68 + 8));
        }
        if ( Entity )
          v46 = (int32_t)Entity[5].klass;
        else
          v46 = -1;
        userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
        classBoardMaxDictionary = v17->fields.classBoardMaxDictionary;
        isGrandSupport = v17->fields.isGrandSupport;
        if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        ClassBoardUtility__SetOpenClassScoreNum(
          &v17->fields.openClassBoardNum,
          &v17->fields.openGrandClassBoardNum,
          &v17->fields.isMaxOpenClassBoard,
          &v17->fields.isMaxOpenGrandClassBoard,
          v46,
          userClassBoardInfo,
          classBoardMaxDictionary,
          isGrandSupport,
          0);
      }
    }
  }
  FriendIconComponent__SetUpOpenClassScoreNumButton(v17, v36, v43);
LABEL_76:
  baseButton = (UnityEngine_Object_o *)v17->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    this = (FriendIconComponent_o *)v17->fields.baseButton;
    if ( this )
    {
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, v17->fields.userGameEntity != 0, 1, 0);
      return;
    }
LABEL_84:
    sub_1C2D6EC(this, v18);
  }
}


void FriendIconComponent__SetActiveForGrandSupport(
        FriendIconComponent_o *this,
        bool isGrandSupport,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandPlayerProfileObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  bool v8; // w8
  bool v9; // w21
  bool v10; // w20

  if ( (byte_4C266F8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C266F8 = 1;
  }
  grandPlayerProfileObj = (UnityEngine_Object_o *)this->fields.grandPlayerProfileObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandPlayerProfileObj, 0, 0) )
  {
    v7 = this->fields.grandPlayerProfileObj;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    if ( UnityEngine_GameObject__get_activeSelf(v7, 0) != isGrandSupport )
    {
      v8 = !isGrandSupport;
LABEL_11:
      v9 = v8;
      GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, v8, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, v9, 0);
      GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, v9, 0);
      v10 = isGrandSupport;
      GameObjectHelper__SetActiveSafely(this->fields.grandSvtProfileObj, v10, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandServantFaceIcon, v10, 0);
      GameObjectHelper__SetActiveSafely(this->fields.grandSvtEquipObj, v10, 0);
      GameObjectHelper__SetActiveSafely(this->fields.grandPlayerProfileObj, v10, 0);
    }
  }
  else if ( isGrandSupport )
  {
    v8 = 0;
    goto LABEL_11;
  }
}


void FriendIconComponent__SetAppendSkill(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v3; // x20
  FriendIconComponent_o *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x22
  struct SkillIconComponent_array *v7; // x8
  il2cpp_array_size_t max_length; // x10
  int v9; // w21
  signed __int64 v10; // x8
  unsigned __int64 max_length_low; // x12
  SkillInfo_o *v12; // x12
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v14; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v16; // x8
  FriendIconComponent_o *v17; // x20
  signed __int64 v18; // x23
  __int64 v19; // x24
  unsigned __int64 v20; // x25
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x21
  struct UnityEngine_GameObject_array *v23; // x9
  int32_t *v24; // x21
  struct SkillIconComponent_array *v25; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UIIconLabel_array *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v36; // x8
  SwitchUIWidgetComponent_o *v37; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4C266F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Resources_Load_UIFont___);
    this = (FriendIconComponent_o *)sub_1C2D490(&StringLiteral_6801/*"Fonts/TextAtlas3"*/);
    byte_4C266F6 = 1;
  }
  skillInfoList = 0;
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
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0);
    if ( (int)this <= 0 )
    {
LABEL_19:
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( appendSkillIconList )
      {
        v14 = 0;
        while ( (int)v14 < SLODWORD(appendSkillIconList->max_length) )
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( appendSkillBaseList )
          {
            if ( (unsigned int)v14 >= LODWORD(appendSkillBaseList->max_length) )
LABEL_80:
              sub_1C2D6F4(this, info, method);
            this = (FriendIconComponent_o *)appendSkillBaseList->m_Items[v14];
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              appendSkillIconList = v4->fields.appendSkillIconList;
              ++v14;
              if ( appendSkillIconList )
                continue;
            }
          }
          goto LABEL_79;
        }
        this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
        if ( this )
        {
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            return;
          }
        }
      }
      goto LABEL_79;
    }
    ServantLeaderInfo__GetAppendPassiveSkillInfo_43263964(v3, &skillInfoList, 0, 0);
    v7 = v4->fields.appendSkillIconList;
    if ( !v7 )
      goto LABEL_79;
    max_length = v7->max_length;
    if ( (__int64)(max_length << 32) < 1 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      do
      {
        if ( skillInfoList )
        {
          max_length_low = LODWORD(skillInfoList->max_length);
          if ( v10 < (int)max_length_low )
          {
            if ( v10 >= max_length_low )
              goto LABEL_80;
            v12 = skillInfoList->m_Items[v10];
            if ( v12 && v12->fields.id >= 1 )
              v9 = v10 + 1;
          }
        }
        ++v10;
      }
      while ( v10 < (int)max_length );
    }
    this = (FriendIconComponent_o *)UnityEngine_Resources__Load_object_(
                                      (System_String_o *)StringLiteral_6801/*"Fonts/TextAtlas3"*/,
                                      (const MethodInfo_316AF08 *)Method_UnityEngine_Resources_Load_UIFont___);
    v16 = v4->fields.appendSkillIconList;
    if ( !v16 )
      goto LABEL_79;
    v17 = this;
    v18 = v9;
    v19 = 4;
    while ( 1 )
    {
      v20 = v19 - 4;
      if ( v19 - 4 >= SLODWORD(v16->max_length) )
        break;
      v21 = v4->fields.appendSkillBaseList;
      if ( !v21 )
        goto LABEL_79;
      if ( v20 >= LODWORD(v21->max_length) )
        goto LABEL_80;
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v21->obj.klass + v19);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v22, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( (__int64)v20 >= v18 )
        {
          v28 = v4->fields.appendSkillBaseList;
          if ( !v28 )
            goto LABEL_79;
          if ( v20 >= LODWORD(v28->max_length) )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v28->obj.klass + v19);
          if ( !this )
            goto LABEL_79;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_79;
          if ( v20 >= LODWORD(skillInfoList->max_length) )
            goto LABEL_80;
          v23 = v4->fields.appendSkillBaseList;
          if ( !v23 )
            goto LABEL_79;
          if ( v20 >= LODWORD(v23->max_length) )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
          if ( !this )
            goto LABEL_79;
          v24 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v19);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v25 = v4->fields.appendSkillIconList;
          if ( !v25 )
            goto LABEL_79;
          if ( v20 >= LODWORD(v25->max_length) )
            goto LABEL_80;
          if ( !v24 )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&v25->obj.klass + v19);
          if ( !this )
            goto LABEL_79;
          SkillIconComponent__Set_40800888((SkillIconComponent_o *)this, v24[4], v24[5], v24[12], v24[13], 0);
          appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_79;
          if ( v20 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v19);
          if ( !this )
            goto LABEL_79;
          UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)this, (UIFont_o *)v17, 0);
          v27 = v4->fields.appendSkillLevelIconLabelList;
          if ( !v27 )
            goto LABEL_79;
          if ( v20 >= LODWORD(v27->max_length) )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v27->obj.klass + v19);
          if ( !this )
            goto LABEL_79;
          UIIconLabel__Set_40889008((UIIconLabel_o *)this, 48, v24[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      v16 = v4->fields.appendSkillIconList;
      ++v19;
      if ( !v16 )
        goto LABEL_79;
    }
    appendSkillInfoUiWidget = (UnityEngine_Object_o *)v4->fields.appendSkillInfoUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
    {
      switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
      {
        this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
        if ( this )
        {
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
            if ( this )
            {
              info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
              m_CachedPtr = this->fields.m_CachedPtr;
              v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( m_CachedPtr )
              {
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)info,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v36 + 32) = info;
                  sub_1C2D434((CGThumbnailListItem_o *)(v36 + 32), (int32_t)info, v31, v32);
                }
                this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
                if ( this )
                {
                  v37 = v4->fields.switchSkillInfo;
                  this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( v37 )
                  {
                    SwitchUIWidgetComponent__Set(v37, (UIWidget_array *)this, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_79:
        sub_1C2D6EC(this, info);
      }
    }
  }
}


void FriendIconComponent__SetGrandServantEquip(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  UISprite_o *grandEquipHeaderSprite; // x21
  __int64 v6; // x1
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip1; // x0
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip2; // x21
  EquipTargetInfo_o *equipTarget2; // x22

  if ( (byte_4C266F7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20323/*"img_blankbg_02"*/);
    sub_1C2D490(&StringLiteral_20371/*"img_equipface_grand"*/);
    sub_1C2D490(&StringLiteral_20324/*"img_blankbg_03"*/);
    byte_4C266F7 = 1;
  }
  if ( servantLeader )
  {
    grandEquipHeaderSprite = this->fields.grandEquipHeaderSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(grandEquipHeaderSprite, (System_String_o *)StringLiteral_20371/*"img_equipface_grand"*/, 0);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeader, 0);
    grandSvtEquip1 = this->fields.grandSvtEquip1;
    if ( !grandSvtEquip1
      || (FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip1,
            servantLeader->fields.equipTarget1,
            0,
            0,
            0,
            0),
          grandSvtEquip2 = this->fields.grandSvtEquip2,
          equipTarget2 = servantLeader->fields.equipTarget2,
          grandSvtEquip1 = (FollowerSelectItemListViewItemEquipDraw_o *)ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                                          servantLeader,
                                                                          0),
          !grandSvtEquip2)
      || (FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip2,
            equipTarget2,
            (System_String_o *)StringLiteral_20323/*"img_blankbg_02"*/,
            1,
            (int)grandSvtEquip1 > 0,
            0),
          (grandSvtEquip1 = this->fields.grandSvtEquip3) == 0) )
    {
      sub_1C2D6EC(grandSvtEquip1, v6);
    }
    FollowerSelectItemListViewItemEquipDraw__SetEquip(
      grandSvtEquip1,
      servantLeader->fields.equipTarget3,
      (System_String_o *)StringLiteral_20324/*"img_blankbg_03"*/,
      0,
      0,
      0);
  }
}


void FriendIconComponent__SetInitIds(
        FriendIconComponent_o *this,
        int32_t classId,
        int32_t questId,
        const MethodInfo *method)
{
  this->fields.usedSupportClass = classId;
  this->fields.lastQuestId = questId;
}


void FriendIconComponent__SetNPInfo(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        bool isGrandSupport,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  __int64 v11; // x8
  __int64 v12; // x9
  UIRangeLabel_o *v13; // x22
  UnityEngine_Object_o *v14; // x21
  int32_t TreasureDeviceLevelIcon; // w23
  int32_t FriendNpNameDispLimitCount; // w24
  long double v17; // q0
  __int64 v18; // x0
  __int64 v19; // x0
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *Master_object; // x0
  __int64 v22; // x27
  __int64 v23; // x28
  ServantLimitImageMaster_o *v24; // x26
  int32_t ServantLimitCountSealAfter; // w0
  __int64 v26; // x8
  int32_t v27; // w20
  System_String_o *OverwriteTDName; // x0
  System_String_o **v29; // x9
  Il2CppObject *v30; // x20
  System_String_o *v31; // x23
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  UIRangeLabel_o *svtNpTitleLabel; // x19
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C266F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9354/*"NP_MAX_COLOR_NAME"*/);
    sub_1C2D490(&StringLiteral_9318/*"NO_ENTRY_NAME"*/);
    sub_1C2D490(&StringLiteral_9347/*"NP_COLOR_NAME"*/);
    byte_4C266F4 = 1;
  }
  tdInfo = 0;
  if ( !servantLeader )
    goto LABEL_42;
  v8 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v8;
  *(_QWORD *)&v36.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0) >= 1 )
  {
    userGameEntity = this->fields.userGameEntity;
    v11 = 72;
    if ( isGrandSupport )
      v11 = 376;
    v12 = 64;
    if ( isGrandSupport )
      v12 = 368;
    if ( !userGameEntity )
      goto LABEL_48;
    v13 = *(UIRangeLabel_o **)((char *)&this->klass + v12);
    v14 = *(UnityEngine_Object_o **)((char *)&this->klass + v11);
    OtherUserGameEntity__getTreasureDeviceInfo(
      userGameEntity,
      &tdInfo,
      this->fields.classPos,
      this->fields.displayServantType,
      this->fields.deckId,
      this->fields.followerGrandGraphId,
      0);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_48;
    TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                userGameEntity,
                                this->fields.classPos,
                                this->fields.displayServantType,
                                this->fields.deckId,
                                this->fields.followerGrandGraphId,
                                0);
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(servantLeader, 0);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0) )
    {
      userGameEntity = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !userGameEntity )
        goto LABEL_48;
      userGameEntity = (OtherUserGameEntity_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)userGameEntity,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !userGameEntity )
        goto LABEL_48;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)userGameEntity,
                                     servantLeader->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0);
    }
    v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C7DBA4(v17);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C7DBA4(v17);
    userGameEntity = **(OtherUserGameEntity_o ***)(v19 + 184);
    if ( !userGameEntity )
      goto LABEL_48;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)userGameEntity,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v23 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v24 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v23;
    *(_QWORD *)&v37.fields.fakeValue = v22;
    userGameEntity = (OtherUserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                v37,
                                                0);
    if ( !v24 )
      goto LABEL_48;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v24,
                                   (int32_t)userGameEntity,
                                   FriendNpNameDispLimitCount,
                                   0);
    v26 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    *(_QWORD *)&v38.fields.fakeValue = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v27 = ServantLimitCountSealAfter;
    *(_QWORD *)&v38.fields.currentCryptoKey = v26;
    userGameEntity = (OtherUserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                v38,
                                                0);
    if ( !tdInfo || !MasterData_object )
      goto LABEL_48;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        (int32_t)userGameEntity,
                        v27,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0);
    v29 = (System_String_o **)&StringLiteral_9354/*"NP_MAX_COLOR_NAME"*/;
    v30 = (Il2CppObject *)OverwriteTDName;
    if ( TreasureDeviceLevelIcon <= 1 )
      v29 = (System_String_o **)&StringLiteral_9347/*"NP_COLOR_NAME"*/;
    v31 = *v29;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get(v31, 0);
    userGameEntity = (OtherUserGameEntity_o *)System_String__Format(v32, v30, 0);
    if ( !tdInfo
      || (v33 = (System_String_o *)userGameEntity,
          userGameEntity = (OtherUserGameEntity_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0),
          !v13) )
    {
LABEL_48:
      sub_1C2D6EC(userGameEntity, v9);
    }
    UIRangeLabel__Set(v13, v33, (System_String_o *)userGameEntity, 0, 0, isGrandSupport, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    userGameEntity = (OtherUserGameEntity_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
    if ( ((unsigned __int8)userGameEntity & 1) != 0 )
    {
      if ( v14 )
      {
        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v14, tdInfo, 0);
        return;
      }
      goto LABEL_48;
    }
  }
  else
  {
LABEL_42:
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    userGameEntity = (OtherUserGameEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NO_ENTRY_NAME"*/, 0);
    if ( !svtNpTitleLabel )
      goto LABEL_48;
    UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)userGameEntity, 0, 1, 0, 0, 0);
    userGameEntity = (OtherUserGameEntity_o *)this->fields.svtNpCommandCard;
    if ( !userGameEntity )
      goto LABEL_48;
    ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)userGameEntity, 0);
  }
}


void FriendIconComponent__SetPlayerInfo(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  UILabel_o *grandPlayerNameLabel; // x20
  UIIconLabel_o *grandPlayerLevelIconLabel; // x23
  UserGradeComponent_o *grandGradeIcon; // x19
  UnityEngine_Object_o *grandPlayerBaseLineSprite; // x24
  UISprite_o *v9; // x24
  UnityEngine_Object_o *grandSvtProfileBackSpr; // x24
  UISprite_o *v11; // x24
  UIFont_o *object; // x0
  __int64 v13; // x1
  UILabel_o *loginDataLabel; // x23
  int64_t UpdatedAt; // x24
  UnityEngine_Object_o *trueTypeFont; // x23
  UnityEngine_Object_o *v17; // x0
  int32_t Kind_40206396; // w22
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v21; // x21
  float v22; // s0
  float monitor_low; // s8
  float v24; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  FriendIconComponent_o *v30; // x0
  OtherUserGameEntity_o *v31; // x1
  ServantLeaderInfo_o *v32; // x2
  bool v33; // w3
  const MethodInfo *v34; // x4

  if ( (byte_4C266F2 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Font_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1C2D490(&Grade_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_1C2D490(&StringLiteral_6798/*"Fonts/FGO-Main-Font"*/);
    sub_1C2D490(&StringLiteral_20433/*"img_listbg_svtprof_grand"*/);
    sub_1C2D490(&StringLiteral_6800/*"Fonts/TextAtlas1"*/);
    sub_1C2D490(&StringLiteral_20432/*"img_listbg_line_grand"*/);
    byte_4C266F2 = 1;
  }
  if ( this->fields.displayServantType == 2 )
  {
    grandPlayerNameLabel = this->fields.grandPlayerNameLabel;
    grandPlayerLevelIconLabel = this->fields.grandPlayerLevelIconLabel;
    grandPlayerBaseLineSprite = (UnityEngine_Object_o *)this->fields.grandPlayerBaseLineSprite;
    grandGradeIcon = this->fields.grandGradeIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandPlayerBaseLineSprite, 0, 0) )
    {
      v9 = this->fields.grandPlayerBaseLineSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v9, (System_String_o *)StringLiteral_20432/*"img_listbg_line_grand"*/, 0);
    }
    grandSvtProfileBackSpr = (UnityEngine_Object_o *)this->fields.grandSvtProfileBackSpr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandSvtProfileBackSpr, 0, 0) )
    {
      v11 = this->fields.grandSvtProfileBackSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v11, (System_String_o *)StringLiteral_20433/*"img_listbg_svtprof_grand"*/, 0);
    }
  }
  else
  {
    grandPlayerNameLabel = this->fields.playerNameLabel;
    grandPlayerLevelIconLabel = this->fields.playerLevelIconLabel;
    grandGradeIcon = this->fields.gradeIcon;
  }
  object = (UIFont_o *)UnityEngine_Resources__Load_object_(
                         (System_String_o *)StringLiteral_6800/*"Fonts/TextAtlas1"*/,
                         (const MethodInfo_316AF08 *)Method_UnityEngine_Resources_Load_UIFont___);
  if ( !grandPlayerLevelIconLabel )
    goto LABEL_46;
  UIIconLabel__SetTextLabelBitmapFont(grandPlayerLevelIconLabel, object, 0);
  if ( !userGameEntity || !grandPlayerNameLabel )
    goto LABEL_46;
  UILabel__set_text(grandPlayerNameLabel, userGameEntity->fields.userName, 0);
  UIIconLabel__Set_40889008(grandPlayerLevelIconLabel, 2, userGameEntity->fields.userLv, 0, 0, 0, 0, 0, 0, 0, 0);
  loginDataLabel = this->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, this->fields.classPos, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  object = (UIFont_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0);
  if ( !loginDataLabel )
    goto LABEL_46;
  UILabel__set_text(loginDataLabel, (System_String_o *)object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)grandGradeIcon, 0, 0) )
  {
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(grandPlayerNameLabel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
    {
LABEL_32:
      if ( !Grade_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
      Kind_40206396 = Grade__GetKind_40206396(userGameEntity, 0);
      SupportBgImage = Grade__GetSupportBgImage(Kind_40206396, 0);
      baseSpr = this->fields.baseSpr;
      v21 = SupportBgImage;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetGradeIcon(baseSpr, v21, 0);
      LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0);
      if ( grandGradeIcon )
      {
        monitor_low = v22;
        LODWORD(v24) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
        object = (UIFont_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
        if ( object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          object = (UIFont_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
          if ( ((unsigned __int8)object & 1) == 0 )
            goto LABEL_44;
          if ( Component_object )
          {
            CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
            v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
            if ( GameObjectExtensions__GetLocalScaleX(v28, 0) < 1.0 )
              monitor_low = (float)SLODWORD(Component_object[3].monitor);
LABEL_44:
            v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
            GameObjectExtensions__SetLocalPositionX(v29, (float)(v24 * 0.5) + (float)(LocalPositionX + monitor_low), 0);
            UserGradeComponent__Set(grandGradeIcon, Kind_40206396, 0);
            return;
          }
        }
      }
LABEL_46:
      sub_1C2D6EC(object, v13);
    }
    v17 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_6798/*"Fonts/FGO-Main-Font"*/, 0);
    if ( !v17 || (UnityEngine_Font_c *)v17->klass == UnityEngine_Font_TypeInfo )
    {
      UILabel__set_trueTypeFont(grandPlayerNameLabel, (UnityEngine_Font_o *)v17, 0);
      goto LABEL_32;
    }
    sub_1C2D9AC(v17);
    FriendIconComponent__SetServantInfo(v30, v31, v32, v33, v34);
  }
}


void FriendIconComponent__SetServantInfo(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        ServantLeaderInfo_o *servantLeader,
        bool isGrandSupport,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x1
  System_String_o *servantFaceIcon; // x0
  UIRangeLabel_o *grandSvtNameRangeLabel; // x23
  const MethodInfo *v14; // x2
  UIRangeLabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_String_o *overwriteServantName; // x24
  Il2CppObject *Master_object; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  ServantLimitImageMaster_o *v21; // x24
  UnityEngine_Object_o *v22; // x23
  ServantCommandCardListComponent_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v28; // w25
  bool v29; // w1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C266F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_3696/*"COMMON_NO_ENTRY"*/);
    byte_4C266F3 = 1;
  }
  if ( !servantLeader )
    goto LABEL_10;
  v10 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v10;
  *(_QWORD *)&v33.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v33, 0) < 1 )
  {
LABEL_10:
    servantNameLabel = this->fields.servantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMMON_NO_ENTRY"*/, 0);
    if ( !servantNameLabel )
      goto LABEL_49;
    UIRangeLabel__Set(servantNameLabel, servantFaceIcon, 0, 1, 0, 0, 0);
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    ServantFaceIconComponent__Set_40787620((ServantFaceIconComponent_o *)servantFaceIcon, servantLeader, 0, 0, 0, 0, 0);
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      servantFaceIcon = (System_String_o *)this->fields.svtCommandCardList;
      if ( !servantFaceIcon )
        goto LABEL_49;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)servantFaceIcon, 0);
    }
    servantFaceIcon = (System_String_o *)this->fields.pushSprite;
LABEL_45:
    if ( servantFaceIcon )
    {
      servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantFaceIcon,
                                             0);
      if ( servantFaceIcon )
      {
        v29 = 0;
        goto LABEL_48;
      }
    }
LABEL_49:
    sub_1C2D6EC(servantFaceIcon, v11);
  }
  if ( isGrandSupport )
  {
    servantFaceIcon = (System_String_o *)this->fields.grandServantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    grandSvtNameRangeLabel = this->fields.grandSvtNameRangeLabel;
    ServantFaceIconComponent__Set_40787620((ServantFaceIconComponent_o *)servantFaceIcon, servantLeader, 0, 0, 0, 0, 0);
    FriendIconComponent__SetGrandServantEquip(this, servantLeader, v14);
  }
  else
  {
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    grandSvtNameRangeLabel = this->fields.servantNameLabel;
    ServantFaceIconComponent__Set_40787620((ServantFaceIconComponent_o *)servantFaceIcon, servantLeader, 0, 0, 0, 0, 0);
  }
  overwriteServantName = servantLeader->fields.overwriteServantName;
  servantFaceIcon = (System_String_o *)System_String__IsNullOrEmpty(overwriteServantName, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v20 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v21 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v20;
    *(_QWORD *)&v34.fields.fakeValue = v19;
    servantFaceIcon = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v34, 0);
    if ( !v21 )
      goto LABEL_49;
    servantFaceIcon = ServantLimitImageMaster__GetLimitCountSealedServantName(
                        v21,
                        (int32_t)servantFaceIcon,
                        servantLeader->fields.limitCount,
                        0,
                        0);
    if ( !grandSvtNameRangeLabel )
      goto LABEL_49;
    overwriteServantName = servantFaceIcon;
  }
  else if ( !grandSvtNameRangeLabel )
  {
    goto LABEL_49;
  }
  UIRangeLabel__Set(grandSvtNameRangeLabel, overwriteServantName, 0, 1, 0, 0, 0);
  v22 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    v23 = this->fields.svtCommandCardList;
    v25 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v25;
    *(_QWORD *)&v35.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
    commandCardParam = servantLeader->fields.commandCardParam;
    v28 = v26;
    servantFaceIcon = (System_String_o *)ServantLeaderInfo__getCommandCodeIdList(servantLeader, 0);
    if ( !v23 )
      goto LABEL_49;
    ServantCommandCardListComponent__Set_40772840(
      v23,
      v28,
      commandCardParam,
      (System_Int32_array *)servantFaceIcon,
      2,
      1,
      0);
  }
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0);
  if ( !servantFaceIcon )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( !userGameEntity )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( userGameEntity->fields.pushUserSvtId != servantLeader->fields.userSvtId )
    goto LABEL_45;
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0);
  if ( !servantFaceIcon )
    goto LABEL_49;
  v29 = 1;
LABEL_48:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v29, 0);
  FriendIconComponent__SetNPInfo(this, servantLeader, isGrandSupport, v30);
  FriendIconComponent__SetSkillIconInfo(this, servantLeader, v31);
  FriendIconComponent__SetAppendSkill(this, servantLeader, v32);
}


void FriendIconComponent__SetSkillIconInfo(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *switchSkillInfo; // x21
  SwitchUIWidgetComponent_o *Instance; // x0
  Il2CppObject *v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  __int64 v10; // x22
  struct SkillIconComponent_array *skillIconList; // x8
  il2cpp_array_size_t max_length; // x8
  UIFont_o *v13; // x20
  int v14; // w9
  unsigned __int64 v15; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v17; // x14
  struct SkillIconComponent_array *v18; // x8
  __int64 v19; // x21
  unsigned __int64 v20; // x22
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x20
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Object_o *v24; // x20
  signed __int64 v25; // x22
  __int64 v26; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v28; // x25
  UnityEngine_Object_o *v29; // x21
  struct UnityEngine_GameObject_array *v30; // x9
  int32_t *v31; // x21
  struct SkillIconComponent_array *v32; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UIIconLabel_array *v34; // x8
  struct UnityEngine_GameObject_array *v35; // x8
  struct SkillIconComponent_array *v36; // x8
  __int64 v37; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v44; // x8
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C266F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C2D490(&StringLiteral_6801/*"Fonts/TextAtlas3"*/);
    byte_4C266F5 = 1;
  }
  skillInfoList = 0;
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = this->fields.switchSkillInfo;
    if ( !Instance )
      goto LABEL_86;
    SwitchUIWidgetComponent__Clear(Instance, 0);
    Instance = (SwitchUIWidgetComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  }
  if ( !servantLeader )
    goto LABEL_24;
  v10 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v10;
  *(_QWORD *)&v46.fields.fakeValue = v9;
  Instance = (SwitchUIWidgetComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46, 0);
  if ( (int)Instance >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(servantLeader, &skillInfoList, 0);
    Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Resources__Load_object_(
                                              (System_String_o *)StringLiteral_6801/*"Fonts/TextAtlas3"*/,
                                              (const MethodInfo_316AF08 *)Method_UnityEngine_Resources_Load_UIFont___);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_86;
    max_length = skillIconList->max_length;
    v13 = (UIFont_o *)Instance;
    if ( (__int64)(max_length << 32) >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v15 < (int)max_length_low )
        {
          if ( v15 >= max_length_low )
            goto LABEL_87;
          v17 = skillInfoList->m_Items[v15];
          if ( v17 && v17->fields.id >= 1 )
            v14 = v15 + 1;
        }
        if ( (__int64)++v15 >= (int)max_length )
          goto LABEL_45;
      }
LABEL_86:
      sub_1C2D6EC(Instance, v7);
    }
    v14 = 0;
LABEL_45:
    if ( (int)max_length >= 1 )
    {
      v25 = v14;
      v26 = 4;
      do
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_86;
        v28 = v26 - 4;
        if ( v26 - 4 >= (unsigned __int64)LODWORD(skillBaseList->max_length) )
          goto LABEL_87;
        v29 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v26);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (__int64)v28 >= v25 )
          {
            v35 = this->fields.skillBaseList;
            if ( !v35 )
              goto LABEL_86;
            if ( v28 >= LODWORD(v35->max_length) )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v35->obj.klass + v26);
            if ( !Instance )
              goto LABEL_86;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_86;
            if ( v28 >= LODWORD(skillInfoList->max_length) )
              goto LABEL_87;
            v30 = this->fields.skillBaseList;
            if ( !v30 )
              goto LABEL_86;
            if ( v28 >= LODWORD(v30->max_length) )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v30->obj.klass + v26);
            if ( !Instance )
              goto LABEL_86;
            v31 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v26);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            v32 = this->fields.skillIconList;
            if ( !v32 )
              goto LABEL_86;
            if ( v28 >= LODWORD(v32->max_length) )
              goto LABEL_87;
            if ( !v31 )
              goto LABEL_86;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v32->obj.klass + v26);
            if ( !Instance )
              goto LABEL_86;
            SkillIconComponent__Set_40800888((SkillIconComponent_o *)Instance, v31[4], v31[5], v31[12], v31[13], 0);
            skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_86;
            if ( v28 >= LODWORD(skillLevelIconLabelList->max_length) )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v26);
            if ( !Instance )
              goto LABEL_86;
            UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)Instance, v13, 0);
            v34 = this->fields.skillLevelIconLabelList;
            if ( !v34 )
              goto LABEL_86;
            if ( v28 >= LODWORD(v34->max_length) )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v34->obj.klass + v26);
            if ( !Instance )
              goto LABEL_86;
            UIIconLabel__Set_40889008((UIIconLabel_o *)Instance, 48, v31[5], 0, 0, 0, 0, 0, 0, 0, 0);
          }
        }
        v36 = this->fields.skillIconList;
        if ( !v36 )
          goto LABEL_86;
        v37 = v26 - 3;
        ++v26;
      }
      while ( v37 < SLODWORD(v36->max_length) );
    }
    skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_86;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
      if ( !Instance )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !Instance )
        goto LABEL_86;
      v7 = (Il2CppObject *)this->fields.skillInfoUiWidget;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v42 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_86;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v7,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v44 + 32) = v7;
        sub_1C2D434((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v7, v39, v40);
      }
    }
  }
  else
  {
LABEL_24:
    v18 = this->fields.skillIconList;
    if ( !v18 )
      goto LABEL_86;
    v19 = 4;
    while ( 1 )
    {
      v20 = v19 - 4;
      if ( v19 - 4 >= SLODWORD(v18->max_length) )
        break;
      v21 = this->fields.skillBaseList;
      if ( !v21 )
        goto LABEL_86;
      if ( v20 >= LODWORD(v21->max_length) )
        goto LABEL_87;
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v21->obj.klass + v19);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v23 = this->fields.skillBaseList;
        if ( !v23 )
          goto LABEL_86;
        if ( v20 >= LODWORD(v23->max_length) )
LABEL_87:
          sub_1C2D6F4(Instance, v7, v8);
        Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
        if ( !Instance )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      v18 = this->fields.skillIconList;
      ++v19;
      if ( !v18 )
        goto LABEL_86;
    }
    v24 = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_86;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
      if ( !Instance )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
  }
}


void FriendIconComponent__SetUpOpenClassScoreNumButton(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Component_o *classBoardOpenButton; // x0
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject **v12; // x9
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject **v19; // x9
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  struct UILabel_o *v22; // x20
  System_String_o *v23; // x0
  Il2CppObject *Component_object; // x19
  int32_t openGrandClassBoardNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t openClassBoardNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C26703 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6394/*"FFFFFF"*/);
    sub_1C2D490(&StringLiteral_17447/*"btn_bg_29_2"*/);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    sub_1C2D490(&StringLiteral_6393/*"FFFF00"*/);
    sub_1C2D490(&StringLiteral_16015/*"[{0}]+{1}[-]"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26703 = 1;
  }
  if ( !servantLeader )
  {
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( classBoardOpenButton )
    {
      classBoardOpenButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardOpenButton, 0);
      if ( classBoardOpenButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardOpenButton, 0, 0);
        return;
      }
    }
    goto LABEL_39;
  }
  v5 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( !classBoardOpenButton )
      goto LABEL_39;
    classBoardOpenButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardOpenButton, 0);
    if ( !classBoardOpenButton )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardOpenButton, 1, 0);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17447/*"btn_bg_29_2"*/, 0);
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardBackSprite;
    if ( !classBoardOpenButton )
      goto LABEL_39;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))classBoardOpenButton->klass[2]._1.parent)(
      classBoardOpenButton,
      classBoardOpenButton->klass[2]._1.generic_class);
  }
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0) )
  {
    if ( this->fields.openClassBoardNum < 0 )
    {
      classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
      if ( classBoardOpenButton )
      {
        UILabel__set_text((UILabel_o *)classBoardOpenButton, (System_String_o *)StringLiteral_1/*""*/, 0);
        return;
      }
      goto LABEL_39;
    }
    if ( this->fields.isMaxOpenClassBoard )
      v12 = (Il2CppObject **)&StringLiteral_6393/*"FFFF00"*/;
    else
      v12 = (Il2CppObject **)&StringLiteral_6394/*"FFFFFF"*/;
    v13 = *v12;
    openClassBoardNum = this->fields.openClassBoardNum;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openClassBoardNum, v9, v10, v11);
    classBoardOpenButton = (UnityEngine_Component_o *)System_String__Format_63499156(
                                                        (System_String_o *)StringLiteral_16015/*"[{0}]+{1}[-]"*/,
                                                        v13,
                                                        v14,
                                                        0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_39;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)classBoardOpenButton, 0);
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
    if ( !classBoardOpenButton )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject(classBoardOpenButton, 0);
    GameObjectExtensions__SetLocalScale_35920504(gameObject, 1.0, 0);
    if ( this->fields.openGrandClassBoardNum < 0 )
      return;
    v19 = (Il2CppObject **)(this->fields.isMaxOpenGrandClassBoard ? &StringLiteral_6393/*"FFFF00"*/ : &StringLiteral_6394/*"FFFFFF"*/);
    v20 = *v19;
    openGrandClassBoardNum = this->fields.openGrandClassBoardNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openGrandClassBoardNum, v16, v17, v18);
    classBoardOpenButton = (UnityEngine_Component_o *)System_String__Format_63499156(
                                                        (System_String_o *)StringLiteral_16015/*"[{0}]+{1}[-]"*/,
                                                        v20,
                                                        v21,
                                                        0);
    v22 = this->fields.openClassBoardNumLabel;
    if ( !v22
      || (v23 = System_String__Concat_63496112(
                  v22->fields.mText,
                  (System_String_o *)StringLiteral_1048/*"/"*/,
                  (System_String_o *)classBoardOpenButton,
                  0),
          UILabel__set_text(v22, v23, 0),
          (classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel) == 0) )
    {
LABEL_39:
      sub_1C2D6EC(classBoardOpenButton, servantLeader);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         classBoardOpenButton,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    classBoardOpenButton = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)Component_object,
                                                        0,
                                                        0);
    if ( ((unsigned __int8)classBoardOpenButton & 1) != 0 )
    {
      if ( Component_object )
      {
        CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
        return;
      }
      goto LABEL_39;
    }
  }
}


int32_t FriendIconComponent__get_EquipIdx(FriendIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._EquipIdx_k__BackingField;
}


void FriendIconComponent__set_EquipIdx(FriendIconComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EquipIdx_k__BackingField = value;
}