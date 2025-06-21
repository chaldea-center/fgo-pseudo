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

  if ( (byte_4B1B962 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UIIconLabel___TypeInfo, v5);
    byte_4B1B962 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1BCB0A0(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1BCB0A0(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.openClassBoardNum = -1LL;
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

  if ( (byte_4B1B94E & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_20050/*"icon_skill_mini"*/, v6);
    sub_1BCAFF8(&StringLiteral_20226/*"img_friend_skill"*/, v7);
    sub_1BCAFF8(&StringLiteral_19946/*"icon_append_mini"*/, v8);
    sub_1BCAFF8(&StringLiteral_20225/*"img_friend_appendskill"*/, v9);
    byte_4B1B94E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v10, v11, v12);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20050/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20226/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19946/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20225/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B1B960 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B1B960 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
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

  if ( (byte_4B1B958 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B1B958 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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

  if ( (byte_4B1B95C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B1B95C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


int32_t __fastcall FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
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
    sub_1BCB254(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1BCB25C(this, method, v2);
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

  if ( (byte_4B1B957 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1BCAFF8(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B1B957 = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
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
                          this->fields.followerGrandGraphId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      v10 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1BCB254(v13, v14);
      CommonUI__OpenServantStatusDialog_30776144((CommonUI_o *)Instance, 5, v10, v12, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v17; // x20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Master_object; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  void *Entity; // x0
  __int64 v25; // x1
  int32_t v26; // w23
  __int64 v27; // x2
  int32_t v28; // w20
  _DWORD *v29; // x24
  struct OtherUserGameEntity_o *v30; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x26
  int max_length; // w8
  int v33; // w27
  ClassBoardInfo_o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x25
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  long double inited; // q0
  _QWORD *v40; // x23
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 *v44; // x8
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  long double v48; // q0
  _QWORD *v49; // x23
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  Il2CppObject *Instance; // x23
  System_Action_o *v56; // x24
  struct OtherUserGameEntity_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4B1B95F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Array_Empty_int___, v3);
    sub_1BCAFF8(&ClassBoardInfo_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_1BCAFF8(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v11);
    sub_1BCAFF8(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4B1B95F = 1;
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
                          0LL);
    if ( ServantLeaderInfo )
    {
      v17 = ServantLeaderInfo;
      v18 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
      v22 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
      v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v22;
      *(_QWORD *)&v58.fields.fakeValue = v21;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v58, 0LL);
      if ( !v23 )
        goto LABEL_61;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v23,
                 (int32_t)Entity,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_61;
      v26 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_61;
      Entity = (void *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v26, 0LL);
      v28 = (int)Entity;
      if ( (_DWORD)Entity )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !Entity )
          goto LABEL_61;
        Entity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity((ClassBoardBaseMaster_o *)Entity, v28, 0LL);
        v29 = Entity;
      }
      else
      {
        v29 = 0LL;
      }
      v30 = this->fields.userGameEntity;
      if ( !v30 )
        goto LABEL_61;
      userClassBoardInfo = v30->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_61;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
        v34 = 0LL;
      }
      else
      {
        v33 = 0;
        v34 = 0LL;
        v35 = 0LL;
        do
        {
          if ( v33 >= (unsigned int)max_length )
            sub_1BCB25C(Entity, v25, v27);
          v36 = (__int64)userClassBoardInfo->m_Items[v33];
          if ( !v36 )
            goto LABEL_61;
          if ( *(_DWORD *)(v36 + 16) == v28 )
          {
            Entity = (void *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v36, v26, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              v35 = v36;
          }
          if ( v29 )
          {
            if ( v29[4] == *(_DWORD *)(v36 + 16) )
            {
              Entity = (void *)System_Linq_Enumerable__Any_int_(
                                 *(System_Collections_Generic_IEnumerable_TSource__o **)(v36 + 24),
                                 (const MethodInfo_30260EC *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)Entity & 1) != 0 )
                v34 = (ClassBoardInfo_o *)v36;
            }
          }
          if ( v35 && v34 )
            goto LABEL_57;
          max_length = userClassBoardInfo->max_length;
          ++v33;
        }
        while ( v33 < max_length );
        if ( v35 )
        {
LABEL_57:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v56 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v56,
            (Il2CppObject *)this,
            Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
            0LL);
          v57 = this->fields.userGameEntity;
          if ( v57 && Instance )
          {
            CommonUI__OpenClassBoardEffectListDialog(
              (CommonUI_o *)Instance,
              1,
              v28,
              0,
              v56,
              1,
              (ClassBoardInfo_o *)v35,
              v34,
              this->fields.isGrandSupport,
              v57->fields.followerClassStatistics,
              0LL);
            return;
          }
LABEL_61:
          sub_1BCB254(Entity, v25);
        }
      }
      v35 = sub_1BCB244(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v35, 0LL);
      if ( !v35 )
        goto LABEL_61;
      *(_DWORD *)(v35 + 16) = v28;
      v40 = Method_System_Array_Empty_int___;
      v41 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v41 )
      {
        sub_1C1B4B8(Method_System_Array_Empty_int___);
        v41 = v40[7];
      }
      v42 = *(_QWORD *)(v41 + 16);
      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
        v42 = sub_1C1B45C(inited);
      if ( !*(_DWORD *)(v42 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v42);
      v43 = *(_QWORD *)(v40[7] + 16LL);
      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
        v43 = sub_1C1B45C(inited);
      v44 = *(__int64 **)(v43 + 184);
      v45 = *v44;
      *(_QWORD *)(v35 + 24) = *v44;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 24), v45, v37, v38);
      v49 = Method_System_Array_Empty_int___;
      v50 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v50 )
      {
        sub_1C1B4B8(Method_System_Array_Empty_int___);
        v50 = v49[7];
      }
      v51 = *(_QWORD *)(v50 + 16);
      if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
        v51 = sub_1C1B45C(v48);
      if ( !*(_DWORD *)(v51 + 224) )
        v48 = j_il2cpp_runtime_class_init_0(v51);
      v52 = *(_QWORD *)(v49[7] + 16LL);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1C1B45C(v48);
      v53 = *(__int64 **)(v52 + 184);
      v54 = *v53;
      *(_QWORD *)(v35 + 32) = *v53;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 32), v54, v46, v47);
      goto LABEL_57;
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

  if ( (byte_4B1B95A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BCAFF8(&SupportInfoJump_TypeInfo, v4);
    byte_4B1B95A = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_1BCB244(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v10);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OnLongPushEquip(
        FriendIconComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v8; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x3
  int32_t followerType; // w8
  int32_t v17; // w2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1B95D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FriendIconComponent_OnLongPushEquip__, *(_QWORD *)&index);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B1B95D = 1;
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
                        0LL);
  v8 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1BCB254(userGameEntity, *(_QWORD *)&index);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                index,
                this->fields.followerGrandGraphId,
                0LL);
  if ( EquipInfo )
  {
    v10 = EquipInfo;
    v12 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v12;
    *(_QWORD *)&v20.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v20, 0LL) >= 1 )
    {
      v13 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OnLongPushEquip__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v17 = 14;
      else
        v17 = 13;
      if ( v8 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v8, 0LL) )
          v17 = 19;
        else
          v17 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v10, v17, v15);
      return;
    }
  }
LABEL_22:
  v18 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OnLongPushEquip__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0LL);
}


void __fastcall FriendIconComponent__OnLongPushEquip1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 0;
  FriendIconComponent__OnLongPushEquip(this, 0, v2);
}


void __fastcall FriendIconComponent__OnLongPushEquip2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 1;
  FriendIconComponent__OnLongPushEquip(this, 1, v2);
}


void __fastcall FriendIconComponent__OnLongPushEquip3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields._EquipIdx_k__BackingField = 2;
  FriendIconComponent__OnLongPushEquip(this, 2, v2);
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
  __int64 v18; // x2
  SkillInfo_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  System_String_o *v22; // x19
  System_String_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1B95E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v11);
    sub_1BCAFF8(&StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    byte_4B1B95E = 1;
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
                          this->fields.followerGrandGraphId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      if ( ServantLeaderInfo->fields.userSvtId )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_42632436(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1BCB25C(Master_object, v17, v18);
        v19 = skillInfoList->m_Items[skillIndex];
        if ( v19 && v19->fields.id >= 1 && v19->fields.lv >= 1 )
        {
          v20 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v21 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v19->fields.id,
                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v19->fields.lv, 0LL);
              v22 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v19->fields.lv;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v24, v25, v26);
              v28 = System_String__Format(v23, v27, 0LL);
              name = System_String__Concat_62488672(v22, (System_String_o *)StringLiteral_113/*" "*/, v28, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1BCB254(Master_object, v17);
        }
      }
    }
  }
  v29 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v30 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0LL);
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
  __int64 v22; // x2
  il2cpp_array_size_t max_length; // w9
  SkillInfo_o *v24; // x22
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v28; // x19
  System_String_o *v29; // x20
  System_String_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x20
  Il2CppObject *v40; // x0
  System_String_o *v41; // x19
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B1B959 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v12);
    sub_1BCAFF8(&StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1BCAFF8(&StringLiteral_2855/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4B1B959 = 1;
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
                        this->fields.followerGrandGraphId,
                        0LL);
  if ( !ServantLeaderInfo )
    goto LABEL_25;
  v17 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_25;
  v18 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1BCB25C(v20, v21, v22);
  v24 = skillInfoList->m_Items[skillIndex];
  if ( v24 && v24->fields.id >= 1 && v24->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v24->fields.id,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v24->fields.id,
                                  v24->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v28 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v24->fields.lv, 0LL);
    v29 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v24->fields.lv;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v31, v32, v33);
    v35 = System_String__Format(v30, v34, 0LL);
    name = System_String__Concat_62488672(v29, (System_String_o *)StringLiteral_113/*" "*/, v35, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v28
      || (v39 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v28->fields.m_CancellationTokenSource,
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v36, v37, v38),
          v41 = System_String__Format(v39, v40, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BCB254(Instance, v26);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v41, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v42 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1BCB010(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v43 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v42, v42[4]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0LL);
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

  if ( (byte_4B1B95B & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1BCAFF8(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B1B95B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BCB254(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30779252((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
        int32_t *inputDisplayServantType,
        int32_t ftype,
        int32_t followerDeckId,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        int32_t inFollowerGrandGraphId,
        const MethodInfo *method)
{
  FriendIconComponent_o *v17; // x19
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
  OtherUserGameEntity_o *v36; // x1
  int32_t v37; // w8
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x22
  char v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_object__o *v41; // x26
  char v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1
  int32_t displayServantType; // w8
  Il2CppObject *MasterData_object; // x23
  int32_t v47; // w1
  int32_t lastQuestId; // w0
  int32_t SvtId; // w0
  int32_t v50; // w23
  Il2CppObject *Entity; // x24
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v53; // x2
  ServantLeaderInfo_o *v54; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v56; // x25
  __int64 v57; // x26
  bool v58; // w1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x4
  const MethodInfo *v61; // x2
  __int64 v62; // x25
  __int64 v63; // x26
  int32_t v64; // w22
  System_Collections_Generic_Dictionary_int__int__o *v65; // x25
  char v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v71; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x26
  Il2CppObject *Master_object; // x0
  __int64 v80; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v82; // x1
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  ClassBoardInfo_array *userClassBoardInfo; // x24
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  _BOOL4 isGrandSupport; // w21
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  v17 = this;
  if ( (byte_4B1B94F & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, userGameEntity);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v21);
    sub_1BCAFF8(&DataManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v26);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v27);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v28);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v29);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v30);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v31);
    sub_1BCAFF8(&System_Collections_Generic_List_UIWidget__TypeInfo, v32);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v33);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    this = (FriendIconComponent_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    byte_4B1B94F = 1;
  }
  if ( isUseServantStatus )
    v36 = userGameEntity;
  else
    v36 = 0LL;
  if ( !v17 )
    goto LABEL_84;
  v17->fields.userGameEntity = v36;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v17->fields.userGameEntity,
    (int32_t)v36,
    isUseServantStatus,
    *(const MethodInfo **)&classPos);
  v17->fields.classPos = classPos;
  v37 = *inputDisplayServantType;
  p_classBoardMaxDictionary = &v17->fields.classBoardMaxDictionary;
  v17->fields.followerType = ftype;
  v17->fields.displayServantType = v37;
  v17->fields.classBoardMaxDictionary = classBoardMaxNumDictionary;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v17->fields.classBoardMaxDictionary,
    (int32_t)classBoardMaxNumDictionary,
    v39,
    v40);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v17->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v41;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->fields.switchSkillUIList, (int32_t)v41, v42, v43);
  v17->fields.followerGrandGraphId = inFollowerGrandGraphId;
  if ( !userGameEntity )
    goto LABEL_76;
  if ( !followerDeckId )
    followerDeckId = FriendIconComponent__GetTargetDeckId(v17, v44);
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
           0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_84;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v17->fields.classPos,
                                        v17->fields.displayServantType,
                                        v17->fields.deckId,
                                        v17->fields.followerGrandGraphId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_84;
      v47 = (int)this;
      this = (FriendIconComponent_o *)MasterData_object;
LABEL_23:
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v47,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_25;
    }
    v17->fields.displayServantType = 0;
    *inputDisplayServantType = 0;
  }
  else
  {
    lastQuestId = v17->fields.lastQuestId;
    if ( lastQuestId )
      lastQuestId = OtherUserGameEntity__GetReturnTypeByQuestId(lastQuestId, 0LL);
    v17->fields.displayServantType = lastQuestId;
    *inputDisplayServantType = lastQuestId;
  }
  SvtId = OtherUserGameEntity__getSvtId(
            userGameEntity,
            v17->fields.classPos,
            v17->fields.displayServantType,
            v17->fields.deckId,
            v17->fields.followerGrandGraphId,
            0LL);
  if ( SvtId )
  {
    v50 = SvtId;
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_84;
    this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !this )
      goto LABEL_84;
    v47 = v50;
    goto LABEL_23;
  }
  Entity = 0LL;
LABEL_25:
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        v17->fields.classPos,
                        1,
                        v17->fields.displayServantType,
                        v17->fields.deckId,
                        v17->fields.followerGrandGraphId,
                        0LL);
  v54 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v57 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v56 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v57;
        *(_QWORD *)&v91.fields.fakeValue = v56;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v91, 0LL) )
          v54 = 0LL;
      }
    }
  }
  v58 = v17->fields.displayServantType == 2;
  v17->fields.isGrandSupport = v58;
  FriendIconComponent__SetActiveForGrandSupport(v17, v58, v53);
  FriendIconComponent__SetPlayerInfo(v17, userGameEntity, v59);
  FriendIconComponent__SetServantInfo(v17, userGameEntity, v54, v17->fields.isGrandSupport, v60);
  if ( v54 )
  {
    v63 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
    v62 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v92.fields.currentCryptoKey = v63;
    *(_QWORD *)&v92.fields.fakeValue = v62;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v92, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( !*p_classBoardMaxDictionary )
        {
          v65 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
          System_Collections_Generic_Dictionary_int__int____ctor(
            v65,
            (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
          *p_classBoardMaxDictionary = v65;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v17->fields.classBoardMaxDictionary, (int32_t)v65, v66, v67);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
          if ( !this )
            goto LABEL_84;
          this = (FriendIconComponent_o *)this->fields.playerNameLabel;
          if ( !this )
            goto LABEL_84;
          Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                         (System_Collections_ObjectModel_Collection_T__o *)this,
                         (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
          if ( !Enumerator )
            sub_1BCB254(0LL, v68);
          while ( 1 )
          {
            klass = Enumerator->klass;
            v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v71;
                p_offset += 4;
                if ( !v71 )
                  goto LABEL_50;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_50:
              p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v74 = Enumerator->klass;
            v75 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v76 = &v74->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v76 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
              {
                --v75;
                v76 += 4;
                if ( !v75 )
                  goto LABEL_57;
              }
              v77 = (__int64)&v74->vtable[*v76].method;
            }
            else
            {
LABEL_57:
              v77 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
            }
            v78 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(
                    Enumerator,
                    *(_QWORD *)(v77 + 8));
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v78 )
              sub_1BCB254(Master_object, v80);
            if ( !Master_object )
              sub_1BCB254(0LL, v80);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                    (ClassBoardSquareMaster_o *)Master_object,
                                    *(_DWORD *)(v78 + 16),
                                    0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !*p_classBoardMaxDictionary )
                sub_1BCB254(OtherThanNoneEntity, v82);
              System_Collections_Generic_Dictionary_int__int___Add(
                *p_classBoardMaxDictionary,
                *(_DWORD *)(v78 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v83 = Enumerator->klass;
          v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v85 = &v83->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_70;
            }
            v86 = (__int64)&v83->vtable[*v85].method;
          }
          else
          {
LABEL_70:
            v86 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
            Enumerator,
            *(_QWORD *)(v86 + 8));
        }
        if ( Entity )
          v64 = (int32_t)Entity[5].klass;
        else
          v64 = -1;
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
          v64,
          userClassBoardInfo,
          classBoardMaxDictionary,
          isGrandSupport,
          0LL);
      }
    }
  }
  FriendIconComponent__SetUpOpenClassScoreNumButton(v17, v54, v61);
LABEL_76:
  baseButton = (UnityEngine_Object_o *)v17->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v17->fields.baseButton;
    if ( this )
    {
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, v17->fields.userGameEntity != 0LL, 1, 0LL);
      return;
    }
LABEL_84:
    sub_1BCB254(this, v36);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__SetActiveForGrandSupport(
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

  if ( (byte_4B1B956 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isGrandSupport);
    byte_4B1B956 = 1;
  }
  grandPlayerProfileObj = (UnityEngine_Object_o *)this->fields.grandPlayerProfileObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandPlayerProfileObj, 0LL, 0LL) )
  {
    v7 = this->fields.grandPlayerProfileObj;
    if ( !v7 )
      sub_1BCB254(0LL, v6);
    if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) != isGrandSupport )
    {
      v8 = !isGrandSupport;
LABEL_11:
      v9 = v8;
      GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, v8, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, v9, 0LL);
      GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, v9, 0LL);
      v10 = isGrandSupport;
      GameObjectHelper__SetActiveSafely(this->fields.grandSvtProfileObj, v10, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandServantFaceIcon, v10, 0LL);
      GameObjectHelper__SetActiveSafely(this->fields.grandSvtEquipObj, v10, 0LL);
      GameObjectHelper__SetActiveSafely(this->fields.grandPlayerProfileObj, v10, 0LL);
    }
  }
  else if ( isGrandSupport )
  {
    v8 = 0;
    goto LABEL_11;
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
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  struct SkillIconComponent_array *v12; // x8
  __int64 v13; // x10
  int v14; // w21
  signed __int64 v15; // x8
  unsigned __int64 max_length; // x12
  SkillInfo_o *v17; // x12
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v19; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v21; // x8
  FriendIconComponent_o *v22; // x20
  signed __int64 v23; // x23
  __int64 v24; // x24
  unsigned __int64 v25; // x25
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Object_o *v27; // x21
  struct UnityEngine_GameObject_array *v28; // x9
  int32_t *v29; // x21
  struct SkillIconComponent_array *v30; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UIIconLabel_array *v32; // x8
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  SwitchUIWidgetComponent_o *v42; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4B1B954 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Add__, info);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_UIFont___, v8);
    this = (FriendIconComponent_o *)sub_1BCAFF8(&StringLiteral_6754/*"Fonts/TextAtlas3"*/, v9);
    byte_4B1B954 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v11 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v11;
    *(_QWORD *)&v44.fields.fakeValue = v10;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v44, 0LL);
    if ( (int)this <= 0 )
    {
LABEL_19:
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( appendSkillIconList )
      {
        v19 = 0LL;
        while ( (int)v19 < (signed int)appendSkillIconList->max_length )
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( appendSkillBaseList )
          {
            if ( (unsigned int)v19 >= appendSkillBaseList->max_length )
LABEL_80:
              sub_1BCB25C(this, info, method);
            this = (FriendIconComponent_o *)appendSkillBaseList->m_Items[v19];
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              appendSkillIconList = v4->fields.appendSkillIconList;
              ++v19;
              if ( appendSkillIconList )
                continue;
            }
          }
          goto LABEL_79;
        }
        this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
        if ( this )
        {
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            return;
          }
        }
      }
      goto LABEL_79;
    }
    ServantLeaderInfo__GetAppendPassiveSkillInfo_42632436(v3, &skillInfoList, 0, 0LL);
    v12 = v4->fields.appendSkillIconList;
    if ( !v12 )
      goto LABEL_79;
    v13 = *(_QWORD *)&v12->max_length;
    if ( v13 << 32 < 1 )
    {
      v14 = 0;
    }
    else
    {
      v14 = 0;
      v15 = 0LL;
      do
      {
        if ( skillInfoList )
        {
          max_length = skillInfoList->max_length;
          if ( v15 < (int)max_length )
          {
            if ( v15 >= max_length )
              goto LABEL_80;
            v17 = skillInfoList->m_Items[v15];
            if ( v17 && v17->fields.id >= 1 )
              v14 = v15 + 1;
          }
        }
        ++v15;
      }
      while ( v15 < (int)v13 );
    }
    this = (FriendIconComponent_o *)UnityEngine_Resources__Load_object_(
                                      (System_String_o *)StringLiteral_6754/*"Fonts/TextAtlas3"*/,
                                      (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_UIFont___);
    v21 = v4->fields.appendSkillIconList;
    if ( !v21 )
      goto LABEL_79;
    v22 = this;
    v23 = v14;
    v24 = 4LL;
    while ( 1 )
    {
      v25 = v24 - 4;
      if ( v24 - 4 >= (int)v21->max_length )
        break;
      v26 = v4->fields.appendSkillBaseList;
      if ( !v26 )
        goto LABEL_79;
      if ( v25 >= v26->max_length )
        goto LABEL_80;
      v27 = (UnityEngine_Object_o *)*((_QWORD *)&v26->obj.klass + v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( (__int64)v25 >= v23 )
        {
          v33 = v4->fields.appendSkillBaseList;
          if ( !v33 )
            goto LABEL_79;
          if ( v25 >= v33->max_length )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v33->obj.klass + v24);
          if ( !this )
            goto LABEL_79;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_79;
          if ( v25 >= skillInfoList->max_length )
            goto LABEL_80;
          v28 = v4->fields.appendSkillBaseList;
          if ( !v28 )
            goto LABEL_79;
          if ( v25 >= v28->max_length )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v28->obj.klass + v24);
          if ( !this )
            goto LABEL_79;
          v29 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v24);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v30 = v4->fields.appendSkillIconList;
          if ( !v30 )
            goto LABEL_79;
          if ( v25 >= v30->max_length )
            goto LABEL_80;
          if ( !v29 )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&v30->obj.klass + v24);
          if ( !this )
            goto LABEL_79;
          SkillIconComponent__Set_40207096((SkillIconComponent_o *)this, v29[4], v29[5], v29[12], v29[13], 0LL);
          appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_79;
          if ( v25 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v24);
          if ( !this )
            goto LABEL_79;
          UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)this, (UIFont_o *)v22, 0LL);
          v32 = v4->fields.appendSkillLevelIconLabelList;
          if ( !v32 )
            goto LABEL_79;
          if ( v25 >= v32->max_length )
            goto LABEL_80;
          this = (FriendIconComponent_o *)*((_QWORD *)&v32->obj.klass + v24);
          if ( !this )
            goto LABEL_79;
          UIIconLabel__Set_40290232((UIIconLabel_o *)this, 48, v29[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
        }
      }
      v21 = v4->fields.appendSkillIconList;
      ++v24;
      if ( !v21 )
        goto LABEL_79;
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
        if ( this )
        {
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
            if ( this )
            {
              info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
              v38 = *(_QWORD *)&this->fields.m_CachedPtr;
              v39 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( v38 )
              {
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)info,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = v38 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v41 + 32) = info;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)info, v36, v37);
                }
                this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
                if ( this )
                {
                  v42 = v4->fields.switchSkillInfo;
                  this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( v42 )
                  {
                    SwitchUIWidgetComponent__Set(v42, (UIWidget_array *)this, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_79:
        sub_1BCB254(this, info);
      }
    }
  }
}


void __fastcall FriendIconComponent__SetGrandServantEquip(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *grandEquipHeaderSprite; // x21
  __int64 v9; // x1
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip1; // x0
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip2; // x21
  EquipTargetInfo_o *equipTarget2; // x22

  if ( (byte_4B1B955 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, servantLeader);
    sub_1BCAFF8(&StringLiteral_20156/*"img_blankbg_02"*/, v5);
    sub_1BCAFF8(&StringLiteral_20204/*"img_equipface_grand"*/, v6);
    sub_1BCAFF8(&StringLiteral_20157/*"img_blankbg_03"*/, v7);
    byte_4B1B955 = 1;
  }
  if ( servantLeader )
  {
    grandEquipHeaderSprite = this->fields.grandEquipHeaderSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(grandEquipHeaderSprite, (System_String_o *)StringLiteral_20204/*"img_equipface_grand"*/, 0LL);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeader, 0LL);
    grandSvtEquip1 = this->fields.grandSvtEquip1;
    if ( !grandSvtEquip1
      || (FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip1,
            servantLeader->fields.equipTarget1,
            0LL,
            0,
            0,
            0LL),
          grandSvtEquip2 = this->fields.grandSvtEquip2,
          equipTarget2 = servantLeader->fields.equipTarget2,
          grandSvtEquip1 = (FollowerSelectItemListViewItemEquipDraw_o *)ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                                          servantLeader,
                                                                          0LL),
          !grandSvtEquip2)
      || (FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip2,
            equipTarget2,
            (System_String_o *)StringLiteral_20156/*"img_blankbg_02"*/,
            1,
            (int)grandSvtEquip1 > 0,
            0LL),
          (grandSvtEquip1 = this->fields.grandSvtEquip3) == 0LL) )
    {
      sub_1BCB254(grandSvtEquip1, v9);
    }
    FollowerSelectItemListViewItemEquipDraw__SetEquip(
      grandSvtEquip1,
      servantLeader->fields.equipTarget3,
      (System_String_o *)StringLiteral_20157/*"img_blankbg_03"*/,
      0,
      0,
      0LL);
  }
}


void __fastcall FriendIconComponent__SetInitIds(
        FriendIconComponent_o *this,
        int32_t classId,
        int32_t questId,
        const MethodInfo *method)
{
  this->fields.usedSupportClass = classId;
  this->fields.lastQuestId = questId;
}


void __fastcall FriendIconComponent__SetNPInfo(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        bool isGrandSupport,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x22
  __int64 v21; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  UIRangeLabel_o *v25; // x22
  UnityEngine_Object_o *v26; // x21
  int32_t TreasureDeviceLevelIcon; // w23
  int32_t FriendNpNameDispLimitCount; // w24
  long double v29; // q0
  __int64 v30; // x0
  __int64 v31; // x0
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *Master_object; // x0
  __int64 v34; // x27
  __int64 v35; // x28
  ServantLimitImageMaster_o *v36; // x26
  int32_t ServantLimitCountSealAfter; // w0
  __int64 v38; // x8
  int32_t v39; // w20
  System_String_o *OverwriteTDName; // x0
  System_String_o **v41; // x9
  Il2CppObject *v42; // x20
  System_String_o *v43; // x23
  System_String_o *v44; // x0
  System_String_o *v45; // x20
  UIRangeLabel_o *svtNpTitleLabel; // x19
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B1B952 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, servantLeader);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&OptionManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/, v16);
    sub_1BCAFF8(&StringLiteral_9253/*"NO_ENTRY_NAME"*/, v17);
    sub_1BCAFF8(&StringLiteral_9280/*"NP_COLOR_NAME"*/, v18);
    byte_4B1B952 = 1;
  }
  tdInfo = 0LL;
  if ( !servantLeader )
    goto LABEL_42;
  v20 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v20;
  *(_QWORD *)&v48.fields.fakeValue = v19;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v48, 0LL) >= 1 )
  {
    userGameEntity = this->fields.userGameEntity;
    v23 = 72LL;
    if ( isGrandSupport )
      v23 = 376LL;
    v24 = 64LL;
    if ( isGrandSupport )
      v24 = 368LL;
    if ( !userGameEntity )
      goto LABEL_48;
    v25 = *(UIRangeLabel_o **)((char *)&this->klass + v24);
    v26 = *(UnityEngine_Object_o **)((char *)&this->klass + v23);
    OtherUserGameEntity__getTreasureDeviceInfo(
      userGameEntity,
      &tdInfo,
      this->fields.classPos,
      this->fields.displayServantType,
      this->fields.deckId,
      this->fields.followerGrandGraphId,
      0LL);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_48;
    TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                userGameEntity,
                                this->fields.classPos,
                                this->fields.displayServantType,
                                this->fields.deckId,
                                this->fields.followerGrandGraphId,
                                0LL);
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(servantLeader, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0LL) )
    {
      userGameEntity = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !userGameEntity )
        goto LABEL_48;
      userGameEntity = (OtherUserGameEntity_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)userGameEntity,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !userGameEntity )
        goto LABEL_48;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)userGameEntity,
                                     servantLeader->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1B45C(v29);
    v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1C1B45C(v29);
    userGameEntity = **(OtherUserGameEntity_o ***)(v31 + 184);
    if ( !userGameEntity )
      goto LABEL_48;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)userGameEntity,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v35 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v34 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v36 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v35;
    *(_QWORD *)&v49.fields.fakeValue = v34;
    userGameEntity = (OtherUserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v49,
                                                0LL);
    if ( !v36 )
      goto LABEL_48;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v36,
                                   (int32_t)userGameEntity,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    v38 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v39 = ServantLimitCountSealAfter;
    *(_QWORD *)&v50.fields.currentCryptoKey = v38;
    userGameEntity = (OtherUserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v50,
                                                0LL);
    if ( !tdInfo || !MasterData_object )
      goto LABEL_48;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        (int32_t)userGameEntity,
                        v39,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v41 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
    v42 = (Il2CppObject *)OverwriteTDName;
    if ( TreasureDeviceLevelIcon <= 1 )
      v41 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
    v43 = *v41;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get(v43, 0LL);
    userGameEntity = (OtherUserGameEntity_o *)System_String__Format(v44, v42, 0LL);
    if ( !tdInfo
      || (v45 = (System_String_o *)userGameEntity,
          userGameEntity = (OtherUserGameEntity_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL),
          !v25) )
    {
LABEL_48:
      sub_1BCB254(userGameEntity, v21);
    }
    UIRangeLabel__Set(v25, v45, (System_String_o *)userGameEntity, 0, 0, isGrandSupport, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    userGameEntity = (OtherUserGameEntity_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)userGameEntity & 1) != 0 )
    {
      if ( v26 )
      {
        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v26, tdInfo, 0LL);
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
    userGameEntity = (OtherUserGameEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_48;
    UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)userGameEntity, 0LL, 1, 0, 0, 0LL);
    userGameEntity = (OtherUserGameEntity_o *)this->fields.svtNpCommandCard;
    if ( !userGameEntity )
      goto LABEL_48;
    ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)userGameEntity, 0LL);
  }
}


void __fastcall FriendIconComponent__SetPlayerInfo(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
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
  UILabel_o *grandPlayerNameLabel; // x20
  UIIconLabel_o *grandPlayerLevelIconLabel; // x23
  UserGradeComponent_o *grandGradeIcon; // x19
  UnityEngine_Object_o *grandPlayerBaseLineSprite; // x24
  UISprite_o *v19; // x24
  UnityEngine_Object_o *grandSvtProfileBackSpr; // x24
  UISprite_o *v21; // x24
  UIFont_o *object; // x0
  __int64 v23; // x1
  UILabel_o *loginDataLabel; // x23
  int64_t UpdatedAt; // x24
  UnityEngine_Object_o *trueTypeFont; // x23
  UnityEngine_Object_o *v27; // x0
  int32_t Kind_39617948; // w22
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v31; // x21
  float v32; // s0
  float klass_low; // s8
  float v34; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  FriendIconComponent_o *v40; // x0
  OtherUserGameEntity_o *v41; // x1
  ServantLeaderInfo_o *v42; // x2
  bool v43; // w3
  const MethodInfo *v44; // x4

  if ( (byte_4B1B950 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, userGameEntity);
    sub_1BCAFF8(&UnityEngine_Font_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v6);
    sub_1BCAFF8(&Grade_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_UIFont___, v10);
    sub_1BCAFF8(&StringLiteral_6751/*"Fonts/FGO-Main-Font"*/, v11);
    sub_1BCAFF8(&StringLiteral_20262/*"img_listbg_svtprof_grand"*/, v12);
    sub_1BCAFF8(&StringLiteral_6753/*"Fonts/TextAtlas1"*/, v13);
    sub_1BCAFF8(&StringLiteral_20261/*"img_listbg_line_grand"*/, v14);
    byte_4B1B950 = 1;
  }
  if ( this->fields.displayServantType == 2 )
  {
    grandPlayerNameLabel = this->fields.grandPlayerNameLabel;
    grandPlayerLevelIconLabel = this->fields.grandPlayerLevelIconLabel;
    grandPlayerBaseLineSprite = (UnityEngine_Object_o *)this->fields.grandPlayerBaseLineSprite;
    grandGradeIcon = this->fields.grandGradeIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandPlayerBaseLineSprite, 0LL, 0LL) )
    {
      v19 = this->fields.grandPlayerBaseLineSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_20261/*"img_listbg_line_grand"*/, 0LL);
    }
    grandSvtProfileBackSpr = (UnityEngine_Object_o *)this->fields.grandSvtProfileBackSpr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandSvtProfileBackSpr, 0LL, 0LL) )
    {
      v21 = this->fields.grandSvtProfileBackSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v21, (System_String_o *)StringLiteral_20262/*"img_listbg_svtprof_grand"*/, 0LL);
    }
  }
  else
  {
    grandPlayerNameLabel = this->fields.playerNameLabel;
    grandPlayerLevelIconLabel = this->fields.playerLevelIconLabel;
    grandGradeIcon = this->fields.gradeIcon;
  }
  object = (UIFont_o *)UnityEngine_Resources__Load_object_(
                         (System_String_o *)StringLiteral_6753/*"Fonts/TextAtlas1"*/,
                         (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_UIFont___);
  if ( !grandPlayerLevelIconLabel )
    goto LABEL_46;
  UIIconLabel__SetTextLabelBitmapFont(grandPlayerLevelIconLabel, object, 0LL);
  if ( !userGameEntity || !grandPlayerNameLabel )
    goto LABEL_46;
  UILabel__set_text(grandPlayerNameLabel, userGameEntity->fields.userName, 0LL);
  UIIconLabel__Set_40290232(grandPlayerLevelIconLabel, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  loginDataLabel = this->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, this->fields.classPos, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  object = (UIFont_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
  if ( !loginDataLabel )
    goto LABEL_46;
  UILabel__set_text(loginDataLabel, (System_String_o *)object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)grandGradeIcon, 0LL, 0LL) )
  {
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(grandPlayerNameLabel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
    {
LABEL_32:
      if ( !Grade_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
      Kind_39617948 = Grade__GetKind_39617948(userGameEntity, 0LL);
      SupportBgImage = Grade__GetSupportBgImage(Kind_39617948, 0LL);
      baseSpr = this->fields.baseSpr;
      v31 = SupportBgImage;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetGradeIcon(baseSpr, v31, 0LL);
      LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0LL);
      if ( grandGradeIcon )
      {
        klass_low = v32;
        LODWORD(v34) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        object = (UIFont_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0LL);
        if ( object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          object = (UIFont_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)object & 1) == 0 )
            goto LABEL_44;
          if ( Component_object )
          {
            CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0LL);
            if ( GameObjectExtensions__GetLocalScaleX(v38, 0LL) < 1.0 )
              klass_low = (float)SLODWORD(Component_object[3].klass);
LABEL_44:
            v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0LL);
            GameObjectExtensions__SetLocalPositionX(v39, (float)(v34 * 0.5) + (float)(LocalPositionX + klass_low), 0LL);
            UserGradeComponent__Set(grandGradeIcon, Kind_39617948, 0LL);
            return;
          }
        }
      }
LABEL_46:
      sub_1BCB254(object, v23);
    }
    v27 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_6751/*"Fonts/FGO-Main-Font"*/, 0LL);
    if ( !v27 || (UnityEngine_Font_c *)v27->klass == UnityEngine_Font_TypeInfo )
    {
      UILabel__set_trueTypeFont(grandPlayerNameLabel, (UnityEngine_Font_o *)v27, 0LL);
      goto LABEL_32;
    }
    sub_1BCB514(v27);
    FriendIconComponent__SetServantInfo(v40, v41, v42, v43, v44);
  }
}


void __fastcall FriendIconComponent__SetServantInfo(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        ServantLeaderInfo_o *servantLeader,
        bool isGrandSupport,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  __int64 v16; // x1
  System_String_o *servantFaceIcon; // x0
  UIRangeLabel_o *grandSvtNameRangeLabel; // x23
  const MethodInfo *v19; // x2
  UIRangeLabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_String_o *overwriteServantName; // x24
  Il2CppObject *Master_object; // x0
  __int64 v24; // x25
  __int64 v25; // x26
  ServantLimitImageMaster_o *v26; // x24
  UnityEngine_Object_o *v27; // x23
  ServantCommandCardListComponent_o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t v31; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v33; // w25
  bool v34; // w1
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B1B951 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userGameEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_3668/*"COMMON_NO_ENTRY"*/, v13);
    byte_4B1B951 = 1;
  }
  if ( !servantLeader )
    goto LABEL_10;
  v15 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v15;
  *(_QWORD *)&v38.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL) < 1 )
  {
LABEL_10:
    servantNameLabel = this->fields.servantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COMMON_NO_ENTRY"*/, 0LL);
    if ( !servantNameLabel )
      goto LABEL_49;
    UIRangeLabel__Set(servantNameLabel, servantFaceIcon, 0LL, 1, 0, 0, 0LL);
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    ServantFaceIconComponent__Set_40194108(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0LL,
      0LL,
      0,
      0,
      0LL);
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      servantFaceIcon = (System_String_o *)this->fields.svtCommandCardList;
      if ( !servantFaceIcon )
        goto LABEL_49;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)servantFaceIcon, 0LL);
    }
    servantFaceIcon = (System_String_o *)this->fields.pushSprite;
LABEL_45:
    if ( servantFaceIcon )
    {
      servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantFaceIcon,
                                             0LL);
      if ( servantFaceIcon )
      {
        v34 = 0;
        goto LABEL_48;
      }
    }
LABEL_49:
    sub_1BCB254(servantFaceIcon, v16);
  }
  if ( isGrandSupport )
  {
    servantFaceIcon = (System_String_o *)this->fields.grandServantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    grandSvtNameRangeLabel = this->fields.grandSvtNameRangeLabel;
    ServantFaceIconComponent__Set_40194108(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0LL,
      0LL,
      0,
      0,
      0LL);
    FriendIconComponent__SetGrandServantEquip(this, servantLeader, v19);
  }
  else
  {
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_49;
    grandSvtNameRangeLabel = this->fields.servantNameLabel;
    ServantFaceIconComponent__Set_40194108(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0LL,
      0LL,
      0,
      0,
      0LL);
  }
  overwriteServantName = servantLeader->fields.overwriteServantName;
  servantFaceIcon = (System_String_o *)System_String__IsNullOrEmpty(overwriteServantName, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v25 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v26 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v25;
    *(_QWORD *)&v39.fields.fakeValue = v24;
    servantFaceIcon = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v39, 0LL);
    if ( !v26 )
      goto LABEL_49;
    servantFaceIcon = ServantLimitImageMaster__GetLimitCountSealedServantName(
                        v26,
                        (int32_t)servantFaceIcon,
                        servantLeader->fields.limitCount,
                        0,
                        0LL);
    if ( !grandSvtNameRangeLabel )
      goto LABEL_49;
    overwriteServantName = servantFaceIcon;
  }
  else if ( !grandSvtNameRangeLabel )
  {
    goto LABEL_49;
  }
  UIRangeLabel__Set(grandSvtNameRangeLabel, overwriteServantName, 0LL, 1, 0, 0, 0LL);
  v27 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    v28 = this->fields.svtCommandCardList;
    v30 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v30;
    *(_QWORD *)&v40.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v40, 0LL);
    commandCardParam = servantLeader->fields.commandCardParam;
    v33 = v31;
    servantFaceIcon = (System_String_o *)ServantLeaderInfo__getCommandCodeIdList(servantLeader, 0LL);
    if ( !v28 )
      goto LABEL_49;
    ServantCommandCardListComponent__Set_40179328(
      v28,
      v33,
      commandCardParam,
      (System_Int32_array *)servantFaceIcon,
      2,
      1,
      0LL);
  }
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0LL);
  if ( !servantFaceIcon )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  if ( !userGameEntity )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( userGameEntity->fields.pushUserSvtId != servantLeader->fields.userSvtId )
    goto LABEL_45;
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0LL);
  if ( !servantFaceIcon )
    goto LABEL_49;
  v34 = 1;
LABEL_48:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v34, 0LL);
  FriendIconComponent__SetNPInfo(this, servantLeader, isGrandSupport, v35);
  FriendIconComponent__SetSkillIconInfo(this, servantLeader, v36);
  FriendIconComponent__SetAppendSkill(this, servantLeader, v37);
}


void __fastcall FriendIconComponent__SetSkillIconInfo(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *switchSkillInfo; // x21
  SwitchUIWidgetComponent_o *Instance; // x0
  Il2CppObject *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x22
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v17; // x8
  UIFont_o *v18; // x20
  int v19; // w9
  unsigned __int64 v20; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v22; // x14
  struct SkillIconComponent_array *v23; // x8
  __int64 v24; // x21
  unsigned __int64 v25; // x22
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_Object_o *v29; // x20
  signed __int64 v30; // x22
  __int64 v31; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v33; // x25
  UnityEngine_Object_o *v34; // x21
  struct UnityEngine_GameObject_array *v35; // x9
  int32_t *v36; // x21
  struct SkillIconComponent_array *v37; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UIIconLabel_array *v39; // x8
  struct UnityEngine_GameObject_array *v40; // x8
  struct SkillIconComponent_array *v41; // x8
  __int64 v42; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v49; // x8
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B1B953 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Add__, servantLeader);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_UIFont___, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_6754/*"Fonts/TextAtlas3"*/, v9);
    byte_4B1B953 = 1;
  }
  skillInfoList = 0LL;
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = this->fields.switchSkillInfo;
    if ( !Instance )
      goto LABEL_86;
    SwitchUIWidgetComponent__Clear(Instance, 0LL);
    Instance = (SwitchUIWidgetComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0LL);
  }
  if ( !servantLeader )
    goto LABEL_24;
  v15 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v15;
  *(_QWORD *)&v51.fields.fakeValue = v14;
  Instance = (SwitchUIWidgetComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v51, 0LL);
  if ( (int)Instance >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(servantLeader, &skillInfoList, 0LL);
    Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Resources__Load_object_(
                                              (System_String_o *)StringLiteral_6754/*"Fonts/TextAtlas3"*/,
                                              (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_UIFont___);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_86;
    v17 = *(_QWORD *)&skillIconList->max_length;
    v18 = (UIFont_o *)Instance;
    if ( v17 << 32 >= 1 )
    {
      v19 = 0;
      v20 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v20 < (int)max_length )
        {
          if ( v20 >= max_length )
            goto LABEL_87;
          v22 = skillInfoList->m_Items[v20];
          if ( v22 && v22->fields.id >= 1 )
            v19 = v20 + 1;
        }
        if ( (__int64)++v20 >= (int)v17 )
          goto LABEL_45;
      }
LABEL_86:
      sub_1BCB254(Instance, v12);
    }
    v19 = 0;
LABEL_45:
    if ( (int)v17 >= 1 )
    {
      v30 = v19;
      v31 = 4LL;
      do
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_86;
        v33 = v31 - 4;
        if ( v31 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_87;
        v34 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v31);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (__int64)v33 >= v30 )
          {
            v40 = this->fields.skillBaseList;
            if ( !v40 )
              goto LABEL_86;
            if ( v33 >= v40->max_length )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v40->obj.klass + v31);
            if ( !Instance )
              goto LABEL_86;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_86;
            if ( v33 >= skillInfoList->max_length )
              goto LABEL_87;
            v35 = this->fields.skillBaseList;
            if ( !v35 )
              goto LABEL_86;
            if ( v33 >= v35->max_length )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v35->obj.klass + v31);
            if ( !Instance )
              goto LABEL_86;
            v36 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v31);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            v37 = this->fields.skillIconList;
            if ( !v37 )
              goto LABEL_86;
            if ( v33 >= v37->max_length )
              goto LABEL_87;
            if ( !v36 )
              goto LABEL_86;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v37->obj.klass + v31);
            if ( !Instance )
              goto LABEL_86;
            SkillIconComponent__Set_40207096((SkillIconComponent_o *)Instance, v36[4], v36[5], v36[12], v36[13], 0LL);
            skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_86;
            if ( v33 >= skillLevelIconLabelList->max_length )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v31);
            if ( !Instance )
              goto LABEL_86;
            UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)Instance, v18, 0LL);
            v39 = this->fields.skillLevelIconLabelList;
            if ( !v39 )
              goto LABEL_86;
            if ( v33 >= v39->max_length )
              goto LABEL_87;
            Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v39->obj.klass + v31);
            if ( !Instance )
              goto LABEL_86;
            UIIconLabel__Set_40290232((UIIconLabel_o *)Instance, 48, v36[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          }
        }
        v41 = this->fields.skillIconList;
        if ( !v41 )
          goto LABEL_86;
        v42 = v31 - 3;
        ++v31;
      }
      while ( v42 < (int)v41->max_length );
    }
    skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_86;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
      if ( !Instance )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !Instance )
        goto LABEL_86;
      v12 = (Il2CppObject *)this->fields.skillInfoUiWidget;
      v46 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v47 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v46 )
        goto LABEL_86;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v12,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v49 + 32) = v12;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v12, v44, v45);
      }
    }
  }
  else
  {
LABEL_24:
    v23 = this->fields.skillIconList;
    if ( !v23 )
      goto LABEL_86;
    v24 = 4LL;
    while ( 1 )
    {
      v25 = v24 - 4;
      if ( v24 - 4 >= (int)v23->max_length )
        break;
      v26 = this->fields.skillBaseList;
      if ( !v26 )
        goto LABEL_86;
      if ( v25 >= v26->max_length )
        goto LABEL_87;
      v27 = (UnityEngine_Object_o *)*((_QWORD *)&v26->obj.klass + v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v28 = this->fields.skillBaseList;
        if ( !v28 )
          goto LABEL_86;
        if ( v25 >= v28->max_length )
LABEL_87:
          sub_1BCB25C(Instance, v12, v13);
        Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v28->obj.klass + v24);
        if ( !Instance )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v23 = this->fields.skillIconList;
      ++v24;
      if ( !v23 )
        goto LABEL_86;
    }
    v29 = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_86;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
      if ( !Instance )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__SetUpOpenClassScoreNumButton(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
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
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Component_o *classBoardOpenButton; // x0
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject **v21; // x9
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject **v28; // x9
  Il2CppObject *v29; // x20
  Il2CppObject *v30; // x0
  struct UILabel_o *v31; // x20
  System_String_o *v32; // x0
  Il2CppObject *Component_object; // x0
  int32_t openGrandClassBoardNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t openClassBoardNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1B961 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, servantLeader);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v5);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_6352/*"FFFFFF"*/, v8);
    sub_1BCAFF8(&StringLiteral_17313/*"btn_bg_29_2"*/, v9);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v10);
    sub_1BCAFF8(&StringLiteral_6351/*"FFFF00"*/, v11);
    sub_1BCAFF8(&StringLiteral_15883/*"[{0}]+{1}[-]"*/, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    byte_4B1B961 = 1;
  }
  if ( !servantLeader )
  {
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( classBoardOpenButton )
    {
      classBoardOpenButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardOpenButton, 0LL);
      if ( classBoardOpenButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardOpenButton, 0, 0LL);
        return;
      }
    }
    goto LABEL_36;
  }
  v14 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( !classBoardOpenButton )
      goto LABEL_36;
    classBoardOpenButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardOpenButton, 0LL);
    if ( !classBoardOpenButton )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardOpenButton, 1, 0LL);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17313/*"btn_bg_29_2"*/, 0LL);
    classBoardOpenButton = (UnityEngine_Component_o *)this->fields.classBoardBackSprite;
    if ( !classBoardOpenButton )
      goto LABEL_36;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))classBoardOpenButton->klass[2]._1.typeMetadataHandle)(
      classBoardOpenButton,
      classBoardOpenButton->klass[2]._1.interopData);
  }
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
  {
    if ( (this->fields.openClassBoardNum & 0x80000000) != 0 )
    {
      classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
      if ( classBoardOpenButton )
      {
        UILabel__set_text((UILabel_o *)classBoardOpenButton, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return;
      }
    }
    else
    {
      if ( this->fields.isMaxOpenClassBoard )
        v21 = (Il2CppObject **)&StringLiteral_6351/*"FFFF00"*/;
      else
        v21 = (Il2CppObject **)&StringLiteral_6352/*"FFFFFF"*/;
      v22 = *v21;
      openClassBoardNum = this->fields.openClassBoardNum;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openClassBoardNum, v18, v19, v20);
      classBoardOpenButton = (UnityEngine_Component_o *)System_String__Format_62491716(
                                                          (System_String_o *)StringLiteral_15883/*"[{0}]+{1}[-]"*/,
                                                          v22,
                                                          v23,
                                                          0LL);
      if ( this->fields.openClassBoardNumLabel )
      {
        UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)classBoardOpenButton, 0LL);
        classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
        if ( classBoardOpenButton )
        {
          gameObject = UnityEngine_Component__get_gameObject(classBoardOpenButton, 0LL);
          GameObjectExtensions__SetLocalScale_35358856(gameObject, 1.0, 0LL);
          if ( (this->fields.openGrandClassBoardNum & 0x80000000) != 0 )
            return;
          v28 = (Il2CppObject **)(this->fields.isMaxOpenGrandClassBoard ? &StringLiteral_6351/*"FFFF00"*/ : &StringLiteral_6352/*"FFFFFF"*/);
          v29 = *v28;
          openGrandClassBoardNum = this->fields.openGrandClassBoardNum;
          v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openGrandClassBoardNum, v25, v26, v27);
          classBoardOpenButton = (UnityEngine_Component_o *)System_String__Format_62491716(
                                                              (System_String_o *)StringLiteral_15883/*"[{0}]+{1}[-]"*/,
                                                              v29,
                                                              v30,
                                                              0LL);
          v31 = this->fields.openClassBoardNumLabel;
          if ( v31 )
          {
            v32 = System_String__Concat_62488672(
                    v31->fields.mText,
                    (System_String_o *)StringLiteral_1039/*"/"*/,
                    (System_String_o *)classBoardOpenButton,
                    0LL);
            UILabel__set_text(v31, v32, 0LL);
            classBoardOpenButton = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
            if ( classBoardOpenButton )
            {
              Component_object = UnityEngine_Component__GetComponent_object_(
                                   classBoardOpenButton,
                                   (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
              if ( Component_object )
                CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1BCB254(classBoardOpenButton, servantLeader);
  }
}


int32_t __fastcall FriendIconComponent__get_EquipIdx(FriendIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._EquipIdx_k__BackingField;
}


void __fastcall FriendIconComponent__set_EquipIdx(FriendIconComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EquipIdx_k__BackingField = value;
}