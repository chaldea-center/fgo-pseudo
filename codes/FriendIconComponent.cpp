void FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct SkillIconComponent_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UIIconLabel_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UnityEngine_GameObject_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct SkillIconComponent_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UIIconLabel_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_5937AF7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&SkillIconComponent___TypeInfo);
    sub_21FFC50(&UIIconLabel___TypeInfo);
    byte_5937AF7 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_21FFD10(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIconList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UIIconLabel_array *)sub_21FFD10(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillLevelIconLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillBaseList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_21FFD10(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillIconList,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIIconLabel_array *)sub_21FFD10(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v39;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillLevelIconLabelList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.gradeIconPosY = 57.0;
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *skillIconSprite; // x20
  __int64 v12; // x1
  UISprite_o *v13; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  __int64 v15; // x1
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  __int64 v18; // x1
  UISprite_o *v19; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  __int64 v21; // x1
  UISprite_o *v22; // x19

  if ( (byte_5937AE3 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21166/*"icon_skill_mini"*/);
    sub_21FFC50(&StringLiteral_21353/*"img_friend_skill"*/);
    sub_21FFC50(&StringLiteral_21055/*"icon_append_mini"*/);
    sub_21FFC50(&StringLiteral_21352/*"img_friend_appendskill"*/);
    byte_5937AE3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v13 = this->fields.skillIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_21166/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_21353/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v19 = this->fields.appendSkillIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
    AtlasManager__SetEventSprite(v19, (System_String_o *)StringLiteral_21055/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v22 = this->fields.appendSkillTitleSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
    AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_21352/*"img_friend_appendskill"*/, 0);
  }
}


void FriendIconComponent__EndCloseClassBoardEffectListDialog(FriendIconComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5937AF5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
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

  if ( (byte_5937AED & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void FriendIconComponent__EndShowServantEquip(FriendIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5937AF1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendIconComponent_EndCloseShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


int32_t FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *userGameEntity; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8

  userGameEntity = this->fields.userGameEntity;
  if ( this->fields.displayServantType )
  {
    if ( !userGameEntity )
      goto LABEL_9;
    eventSupportDeckIds = userGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_9;
  }
  else if ( !userGameEntity || (eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds) == 0 )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  if ( !LODWORD(eventSupportDeckIds->max_length) )
    sub_21FFED4(this);
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

  if ( (byte_5937AEC & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FriendIconComponent_EndShowServant__);
    sub_21FFC50(&Method_FriendIconComponent_OnClickServantStatus__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AEC = 1;
  }
  v3 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OnClickServantStatus__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServant__, 0);
      if ( !Instance )
        sub_21FFECC(v10, v11);
      CommonUI__OpenServantStatusDialog_37304188((CommonUI_o *)Instance, 5, v7, v9, 0);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  void *Entity; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  int32_t v17; // w20
  _DWORD *v18; // x24
  struct OtherUserGameEntity_o *v19; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x26
  int max_length; // w8
  int v22; // w27
  ClassBoardInfo_o *v23; // x21
  __int64 v24; // x22
  __int64 v25; // x25
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  long double v32; // q0
  _QWORD *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  long double v46; // q0
  _QWORD *v47; // x23
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 *v51; // x8
  __int64 v52; // x1
  Il2CppObject *Instance; // x23
  System_Action_o *v54; // x24
  struct OtherUserGameEntity_o *v55; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_5937AF4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&ClassBoardInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_int___);
    sub_21FFC50(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__);
    sub_21FFC50(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AF4 = 1;
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
        v6 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      v11 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
      *(_QWORD *)&v56.fields.currentCryptoKey = v11;
      *(_QWORD *)&v56.fields.fakeValue = v12;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
      if ( !v13 )
        goto LABEL_61;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 (int32_t)Entity,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_61;
      v16 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_61;
      Entity = (void *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v16, 0);
      v17 = (int)Entity;
      if ( (_DWORD)Entity )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
        Entity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !Entity )
          goto LABEL_61;
        Entity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity((ClassBoardBaseMaster_o *)Entity, v17, 0);
        v18 = Entity;
      }
      else
      {
        v18 = 0;
      }
      v19 = this->fields.userGameEntity;
      if ( !v19 )
        goto LABEL_61;
      userClassBoardInfo = v19->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_61;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
        v23 = 0;
      }
      else
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        do
        {
          if ( v22 >= (unsigned int)max_length )
            sub_21FFED4(Entity);
          v25 = (__int64)userClassBoardInfo->m_Items[v22];
          if ( !v25 )
            goto LABEL_61;
          if ( *(_DWORD *)(v25 + 16) == v17 )
          {
            Entity = (void *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v25, v16, 0);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              v24 = v25;
          }
          if ( v18 )
          {
            if ( v18[4] == *(_DWORD *)(v25 + 16) )
            {
              Entity = (void *)System_Linq_Enumerable__Any_int_(
                                 *(System_Collections_Generic_IEnumerable_TSource__o **)(v25 + 24),
                                 (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)Entity & 1) != 0 )
                v23 = (ClassBoardInfo_o *)v25;
            }
          }
          if ( v24 && v23 )
            goto LABEL_57;
          max_length = userClassBoardInfo->max_length;
          ++v22;
        }
        while ( v22 < max_length );
        if ( v24 )
        {
LABEL_57:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v54 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v54,
            (Il2CppObject *)this,
            Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
            0);
          v55 = this->fields.userGameEntity;
          if ( v55 && Instance )
          {
            CommonUI__OpenClassBoardEffectListDialog(
              (CommonUI_o *)Instance,
              1,
              v17,
              0,
              v54,
              1,
              (ClassBoardInfo_o *)v24,
              v23,
              this->fields.isGrandSupport,
              v55->fields.followerClassStatistics,
              0,
              0);
            return;
          }
LABEL_61:
          sub_21FFECC(Entity, v15);
        }
      }
      v24 = sub_21FFEBC(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v24, 0);
      if ( !v24 )
        goto LABEL_61;
      *(_DWORD *)(v24 + 16) = v17;
      v33 = Method_System_Array_Empty_int___;
      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v34 )
      {
        sub_2237B54(Method_System_Array_Empty_int___);
        v34 = v33[7];
      }
      v35 = *(_QWORD *)(v34 + 16);
      if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
        v35 = sub_2237AF8(v32);
      if ( !*(_DWORD *)(v35 + 228) )
        *(__n128 *)&v32 = j_il2cpp_runtime_class_init_0(v35, v15);
      v36 = *(_QWORD *)(v33[7] + 16LL);
      if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
        v36 = sub_2237AF8(v32);
      v37 = *(__int64 **)(v36 + 184);
      v38 = *v37;
      *(_QWORD *)(v24 + 24) = *v37;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 24), v38, v26, v27, v28, v29, v30, v31);
      v47 = Method_System_Array_Empty_int___;
      v48 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v48 )
      {
        sub_2237B54(Method_System_Array_Empty_int___);
        v48 = v47[7];
      }
      v49 = *(_QWORD *)(v48 + 16);
      if ( (*(_WORD *)(v49 + 309) & 1) == 0 )
        v49 = sub_2237AF8(v46);
      if ( !*(_DWORD *)(v49 + 228) )
        *(__n128 *)&v46 = j_il2cpp_runtime_class_init_0(v49, v39);
      v50 = *(_QWORD *)(v47[7] + 16LL);
      if ( (*(_WORD *)(v50 + 309) & 1) == 0 )
        v50 = sub_2237AF8(v46);
      v51 = *(__int64 **)(v50 + 184);
      v52 = *v51;
      *(_QWORD *)(v24 + 32) = *v51;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 32), v52, v40, v41, v42, v43, v44, v45);
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

  if ( (byte_5937AEF & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendIconComponent_OnClickSupportInfo__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    byte_5937AEF = 1;
  }
  v3 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OnClickSupportInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  userGameEntity = this->fields.userGameEntity;
  v6 = (SupportInfoJump_o *)sub_21FFEBC(SupportInfoJump_TypeInfo);
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
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(Instance, v7);
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
  __int64 v9; // x1
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

  if ( (byte_5937AF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendIconComponent_OnLongPushEquip__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937AF2 = 1;
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
    sub_21FFECC(userGameEntity, *(_QWORD *)&index);
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
    v10 = EquipInfo;
    v11 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    *(_QWORD *)&v20.fields.currentCryptoKey = v11;
    *(_QWORD *)&v20.fields.fakeValue = v12;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0) >= 1 )
    {
      v13 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OnLongPushEquip__);
      v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v17 = 14;
      else
        v17 = 13;
      if ( v7 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v7, 0) )
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
    v18 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OnLongPushEquip__);
  v19 = (System_Reflection_MethodBase_o *)sub_21FFC34(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
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
  SkillInfo_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x19
  System_String_o *v15; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937AF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937AF3 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  name = 0;
  skillInfoList = 0;
  detail = 0;
  if ( userGameEntity
    && (ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              userGameEntity,
                              this->fields.classPos,
                              0,
                              this->fields.displayServantType,
                              this->fields.deckId,
                              this->fields.followerGrandGraphId,
                              0)) != 0
    && ServantLeaderInfo->fields.userSvtId )
  {
    ServantLeaderInfo__GetAppendPassiveSkillInfo_50536596(ServantLeaderInfo, &skillInfoList, 0, 0);
    if ( !skillInfoList )
      goto LABEL_28;
    if ( LODWORD(skillInfoList->max_length) <= skillIndex )
      sub_21FFED4(Master_object);
    v9 = skillInfoList->m_Items[skillIndex];
    if ( v9 && v9->fields.id >= 1 && v9->fields.lv >= 1 )
    {
      v10 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
      v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          v9->fields.id,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v9->fields.lv, 0);
          v14 = name;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
          lv = v9->fields.lv;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
          v17 = System_String__Format(v15, v16, 0);
          name = System_String__Concat_75481624(v14, (System_String_o *)StringLiteral_113/*" "*/, v17, 0);
          Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
LABEL_28:
      sub_21FFECC(Master_object, v8);
    }
    v20 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
  }
  else
  {
    v18 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    v19 = (System_Reflection_MethodBase_o *)sub_21FFC34(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
  }
}


void FriendIconComponent__OpenSkillInfoDialog(
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
  int32_t max_length; // w9
  SkillInfo_o *v12; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  DataManager_o *v16; // x19
  int32_t ServantId; // w21
  __int64 v18; // x1
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w20
  System_String_o *v20; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x19
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+20h] [xbp-40h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5937AEE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_FriendIconComponent_OpenSkillInfoDialog__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_21FFC50(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/);
    byte_5937AEE = 1;
  }
  name = 0;
  skillInfoList = 0;
  userGameEntity = this->fields.userGameEntity;
  entity = 0;
  detail = 0;
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
          v8 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OpenSkillInfoDialog__);
        v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantLeaderInfo__getSkillInfo(v7, &skillInfoList, -1, 0);
        if ( skillInfoList )
        {
          max_length = skillInfoList->max_length;
          if ( max_length > skillIndex )
          {
            if ( max_length <= (unsigned int)skillIndex )
              sub_21FFED4(v10);
            v12 = skillInfoList->m_Items[skillIndex];
            if ( v12 )
            {
              if ( v12->fields.id >= 1 && v12->fields.lv >= 1 )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                                Instance,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
                  if ( Instance )
                  {
                    v15 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            v12->fields.id,
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( Instance )
                    {
                      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                                    Instance,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                      if ( Instance )
                      {
                        Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                                      (SkillLvMaster_o *)Instance,
                                                      v12->fields.id,
                                                      v12->fields.lv,
                                                      0);
                        if ( v15 )
                        {
                          v16 = Instance;
                          SkillEntity__getSkillMessageInfo((SkillEntity_o *)v15, &name, &detail, v12->fields.lv, 0);
                          ServantId = ServantLeaderInfo__GetServantId(v7, -1, 0);
                          DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                                            v7,
                                                                            0);
                          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
                          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
                          if ( Instance )
                          {
                            if ( ServantLimitAddMaster__TryGetEntity(
                                   (ServantLimitAddMaster_o *)Instance,
                                   &entity,
                                   ServantId,
                                   DispLimitCountStageSealAfterAtStageLimitCount,
                                   0) )
                            {
                              Instance = (DataManager_o *)entity;
                              if ( !entity )
                                goto LABEL_37;
                              if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
                              {
                                Instance = (DataManager_o *)entity;
                                if ( !entity )
                                  goto LABEL_37;
                                name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v12->fields.id, name, 0);
                              }
                            }
                            v20 = name;
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
                            v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
                            lv = v12->fields.lv;
                            v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
                            v23 = System_String__Format(v21, v22, 0);
                            name = System_String__Concat_75481624(v20, (System_String_o *)StringLiteral_113/*" "*/, v23, 0);
                            Instance = (DataManager_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/,
                                                          0);
                            if ( v16 )
                            {
                              v24 = (System_String_o *)Instance;
                              m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
                              v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &m_CancellationTokenSource);
                              v26 = System_String__Format(v24, v25, 0);
                              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( Instance )
                              {
                                CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v26, detail, 1, 0, 0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_37:
                sub_21FFECC(Instance, v14);
              }
            }
          }
        }
      }
    }
  }
  v27 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_21FFC68(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
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

  if ( (byte_5937AF0 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FriendIconComponent_EndShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937AF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_21FFECC(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_37307296((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
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
  int32_t TargetDeckId; // w22
  FriendIconComponent_o *v17; // x19
  OtherUserGameEntity_o *v18; // x1
  int32_t v19; // w8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x24
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  int32_t displayServantType; // w8
  Il2CppObject *MasterData_object; // x21
  int32_t v36; // w1
  int32_t lastQuestId; // w0
  int32_t SvtId; // w0
  int32_t v39; // w21
  Il2CppObject *Entity; // x22
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  ServantLeaderInfo_o *v44; // x21
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v46; // x23
  __int64 v47; // x24
  bool v48; // w1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  __int64 v53; // x23
  __int64 v54; // x24
  __int64 v55; // x1
  int32_t v56; // w22
  System_Collections_Generic_Dictionary_int__int__o *v57; // x23
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v66; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v69; // x9
  int *p_offset; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  System_Collections_Generic_IEnumerator_T__c *v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x23
  Il2CppObject *Master_object; // x0
  __int64 v80; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v82; // x1
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  ClassBoardInfo_array *userClassBoardInfo; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x23
  _BOOL4 isGrandSupport; // w24
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *v91; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  TargetDeckId = followerDeckId;
  v17 = this;
  if ( (byte_5937AE4 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (FriendIconComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937AE4 = 1;
  }
  if ( !v17 )
    goto LABEL_91;
  if ( isUseServantStatus )
    v18 = userGameEntity;
  else
    v18 = 0;
  v17->fields.userGameEntity = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->fields.userGameEntity,
    (int32_t)v18,
    (System_String_o *)isUseServantStatus,
    *(System_String_o **)&classPos,
    (int32_t)inputDisplayServantType,
    ftype,
    followerDeckId,
    (bool)classBoardMaxNumDictionary);
  v17->fields.classPos = classPos;
  v19 = *inputDisplayServantType;
  v17->fields.followerType = ftype;
  v17->fields.classBoardMaxDictionary = classBoardMaxNumDictionary;
  v17->fields.displayServantType = v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->fields.classBoardMaxDictionary,
    (int32_t)classBoardMaxNumDictionary,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v17->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->fields.switchSkillUIList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v17->fields.followerGrandGraphId = inFollowerGrandGraphId;
  if ( !userGameEntity )
    goto LABEL_82;
  if ( !TargetDeckId )
    TargetDeckId = FriendIconComponent__GetTargetDeckId(v17, v33);
  displayServantType = v17->fields.displayServantType;
  v17->fields.deckId = TargetDeckId;
  if ( displayServantType == 2 && v17->fields.usedSupportClass == classPos )
  {
    if ( OtherUserGameEntity__getSvtId(
           userGameEntity,
           v17->fields.classPos,
           2,
           TargetDeckId,
           v17->fields.followerGrandGraphId,
           0) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_91;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        userGameEntity,
                                        v17->fields.classPos,
                                        v17->fields.displayServantType,
                                        v17->fields.deckId,
                                        v17->fields.followerGrandGraphId,
                                        0);
      if ( !MasterData_object )
        goto LABEL_91;
      v36 = (int)this;
      this = (FriendIconComponent_o *)MasterData_object;
LABEL_23:
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v36,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v39 = SvtId;
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_91;
    this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !this )
      goto LABEL_91;
    v36 = v39;
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
  v44 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v46 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v47 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
        *(_QWORD *)&v92.fields.currentCryptoKey = v46;
        *(_QWORD *)&v92.fields.fakeValue = v47;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v92, 0) )
          v44 = 0;
      }
    }
  }
  v48 = v17->fields.displayServantType == 2;
  v17->fields.isGrandSupport = v48;
  FriendIconComponent__SetActiveForGrandSupport(v17, v48, v43);
  FriendIconComponent__SetPlayerInfo(v17, userGameEntity, v49);
  FriendIconComponent__SetServantInfo(v17, userGameEntity, v44, v17->fields.isGrandSupport, v50);
  if ( !v44 )
    goto LABEL_40;
  v53 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
  *(_QWORD *)&v93.fields.currentCryptoKey = v53;
  *(_QWORD *)&v93.fields.fakeValue = v54;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v93, 0) >= 1
    && userGameEntity->fields.userClassBoardInfo )
  {
    if ( !v17->fields.classBoardMaxDictionary )
    {
      v57 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v57,
        (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      v17->fields.classBoardMaxDictionary = v57;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v17->fields.classBoardMaxDictionary,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v64);
      this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !this )
        goto LABEL_91;
      this = (FriendIconComponent_o *)this->fields.playerNameLabel;
      if ( !this )
        goto LABEL_91;
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     (System_Collections_ObjectModel_Collection_T__o *)this,
                     (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
      v91 = Enumerator;
      if ( !Enumerator )
        sub_21FFECC(Enumerator, v66);
      for ( i = Enumerator; ; i = v91 )
      {
        klass = i->klass;
        v69 = *(unsigned __int16 *)&i->klass->_2.rank;
        if ( *(_WORD *)&i->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v69;
            p_offset += 4;
            if ( !v69 )
              goto LABEL_52;
          }
          v71 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_52:
          v71 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v72 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
                i,
                *(_QWORD *)(v71 + 8));
        if ( (v72 & 1) == 0 )
          break;
        if ( !v91 )
          sub_21FFECC(v72, v55);
        v73 = v91->klass;
        v74 = *(unsigned __int16 *)&v91->klass->_2.rank;
        if ( *(_WORD *)&v91->klass->_2.rank )
        {
          v75 = &v73->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v75 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
          {
            --v74;
            v75 += 4;
            if ( !v74 )
              goto LABEL_60;
          }
          v76 = (__int64)&v73->vtable[*v75];
        }
        else
        {
LABEL_60:
          v76 = sub_2237E2C(v91, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
        }
        v78 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v76)(
                v91,
                *(_QWORD *)(v76 + 8));
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
        if ( !v78 )
          sub_21FFECC(Master_object, v80);
        if ( !Master_object )
          sub_21FFECC(0, v80);
        OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                (ClassBoardSquareMaster_o *)Master_object,
                                *(_DWORD *)(v78 + 16),
                                0);
        if ( OtherThanNoneEntity )
        {
          if ( !v17->fields.classBoardMaxDictionary )
            sub_21FFECC(OtherThanNoneEntity, v82);
          System_Collections_Generic_Dictionary_int__int___Add(
            v17->fields.classBoardMaxDictionary,
            *(_DWORD *)(v78 + 16),
            OtherThanNoneEntity->max_length,
            (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      if ( v91 )
      {
        v83 = v91->klass;
        v84 = *(unsigned __int16 *)&v91->klass->_2.rank;
        if ( *(_WORD *)&v91->klass->_2.rank )
        {
          v85 = &v83->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
          {
            --v84;
            v85 += 4;
            if ( !v84 )
              goto LABEL_76;
          }
          v86 = (__int64)&v83->vtable[*v85];
        }
        else
        {
LABEL_76:
          v86 = sub_2237E2C(v91, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(v91, *(_QWORD *)(v86 + 8));
      }
    }
    if ( Entity )
      v56 = (int32_t)Entity[5].klass;
    else
      v56 = -1;
    userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
    classBoardMaxDictionary = v17->fields.classBoardMaxDictionary;
    isGrandSupport = v17->fields.isGrandSupport;
    if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v55);
    ClassBoardUtility__SetOpenClassScoreNum(
      &v17->fields.openClassBoardNum,
      &v17->fields.openGrandClassBoardNum,
      &v17->fields.isMaxOpenClassBoard,
      &v17->fields.isMaxOpenGrandClassBoard,
      v56,
      userClassBoardInfo,
      classBoardMaxDictionary,
      isGrandSupport,
      0);
  }
  else
  {
LABEL_40:
    *(_WORD *)&v17->fields.isMaxOpenClassBoard = 0;
    *(_QWORD *)&v17->fields.openClassBoardNum = -1;
  }
  FriendIconComponent__SetUpOpenClassScoreNumButton(v17, v44, v52);
LABEL_82:
  baseButton = (UnityEngine_Object_o *)v17->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    this = (FriendIconComponent_o *)v17->fields.baseButton;
    if ( this )
    {
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, v17->fields.userGameEntity != 0, 1, 0);
      return;
    }
LABEL_91:
    sub_21FFECC(this, userGameEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendIconComponent__SetActiveForGrandSupport(
        FriendIconComponent_o *this,
        bool isGrandSupport,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandPlayerProfileObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5937AEB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937AEB = 1;
  }
  grandPlayerProfileObj = (UnityEngine_Object_o *)this->fields.grandPlayerProfileObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isGrandSupport);
  if ( !UnityEngine_Object__op_Inequality(grandPlayerProfileObj, 0, 0) )
  {
    if ( !isGrandSupport )
      return;
LABEL_10:
    GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, !isGrandSupport, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, !isGrandSupport, 0);
    GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, !isGrandSupport, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtProfileObj, isGrandSupport, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandServantFaceIcon, isGrandSupport, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtEquipObj, isGrandSupport, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandPlayerProfileObj, isGrandSupport, 0);
    return;
  }
  v7 = this->fields.grandPlayerProfileObj;
  if ( !v7 )
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(v7, 0) != isGrandSupport )
    goto LABEL_10;
}


void FriendIconComponent__SetAppendSkill(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v3; // x20
  FriendIconComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  struct SkillIconComponent_array *v8; // x8
  int max_length; // w10
  __int64 v10; // x10
  int v11; // w21
  unsigned __int64 v12; // x8
  unsigned __int64 max_length_low; // x12
  SkillInfo_o *v14; // x12
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v16; // x20
  struct UnityEngine_GameObject_array *v17; // x8
  struct SkillIconComponent_array *v18; // x8
  FriendIconComponent_o *v19; // x20
  signed __int64 v20; // x23
  __int64 v21; // x24
  unsigned __int64 v22; // x25
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Object_o *v24; // x21
  struct UnityEngine_GameObject_array *v25; // x9
  int32_t *v26; // x21
  struct SkillIconComponent_array *v27; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UIIconLabel_array *v29; // x8
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  __int64 v32; // x1
  UnityEngine_Object_o *switchSkillInfo; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v41; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v43; // x8
  SwitchUIWidgetComponent_o *v44; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_5937AE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_UIFont___);
    this = (FriendIconComponent_o *)sub_21FFC50(&StringLiteral_7080/*"Fonts/TextAtlas3"*/);
    byte_5937AE9 = 1;
  }
  appendSkillBaseList = v4->fields.appendSkillBaseList;
  skillInfoList = 0;
  if ( appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v6 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info);
    *(_QWORD *)&v46.fields.currentCryptoKey = v6;
    *(_QWORD *)&v46.fields.fakeValue = v7;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v46, 0);
    if ( (int)this <= 0 )
    {
LABEL_19:
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( appendSkillIconList )
      {
        v16 = 0;
        while ( (int)v16 < SLODWORD(appendSkillIconList->max_length) )
        {
          v17 = v4->fields.appendSkillBaseList;
          if ( v17 )
          {
            if ( (unsigned int)v16 >= LODWORD(v17->max_length) )
LABEL_79:
              sub_21FFED4(this);
            this = (FriendIconComponent_o *)v17->m_Items[v16];
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              appendSkillIconList = v4->fields.appendSkillIconList;
              ++v16;
              if ( appendSkillIconList )
                continue;
            }
          }
          goto LABEL_61;
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
      goto LABEL_61;
    }
    ServantLeaderInfo__GetAppendPassiveSkillInfo_50536596(v3, &skillInfoList, 0, 0);
    v8 = v4->fields.appendSkillIconList;
    if ( !v8 )
      goto LABEL_61;
    max_length = v8->max_length;
    if ( max_length < 1 )
    {
      v11 = 0;
    }
    else
    {
      v10 = max_length & (unsigned int)~(max_length >> 31);
      v11 = 0;
      v12 = 0;
      do
      {
        if ( skillInfoList )
        {
          max_length_low = LODWORD(skillInfoList->max_length);
          if ( (__int64)v12 < (int)max_length_low )
          {
            if ( v12 >= max_length_low )
              goto LABEL_79;
            v14 = skillInfoList->m_Items[v12];
            if ( v14 && v14->fields.id >= 1 )
              v11 = v12 + 1;
          }
        }
        ++v12;
      }
      while ( v10 != v12 );
    }
    this = (FriendIconComponent_o *)UnityEngine_Resources__Load_object_(
                                      (System_String_o *)StringLiteral_7080/*"Fonts/TextAtlas3"*/,
                                      (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_UIFont___);
    v18 = v4->fields.appendSkillIconList;
    if ( !v18 )
      goto LABEL_61;
    v19 = this;
    v20 = v11;
    v21 = 4;
    while ( 1 )
    {
      v22 = v21 - 4;
      if ( v21 - 4 >= SLODWORD(v18->max_length) )
        break;
      v23 = v4->fields.appendSkillBaseList;
      if ( !v23 )
        goto LABEL_61;
      if ( v22 >= LODWORD(v23->max_length) )
        goto LABEL_79;
      v24 = (UnityEngine_Object_o *)*((_QWORD *)&v23->obj.klass + v21);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( (__int64)v22 >= v20 )
        {
          v30 = v4->fields.appendSkillBaseList;
          if ( !v30 )
            goto LABEL_61;
          if ( v22 >= LODWORD(v30->max_length) )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&v30->obj.klass + v21);
          if ( !this )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_61;
          if ( v22 >= LODWORD(skillInfoList->max_length) )
            goto LABEL_79;
          v25 = v4->fields.appendSkillBaseList;
          if ( !v25 )
            goto LABEL_61;
          if ( v22 >= LODWORD(v25->max_length) )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&v25->obj.klass + v21);
          if ( !this )
            goto LABEL_61;
          v26 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v21);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v27 = v4->fields.appendSkillIconList;
          if ( !v27 )
            goto LABEL_61;
          if ( v22 >= LODWORD(v27->max_length) )
            goto LABEL_79;
          if ( !v26 )
            goto LABEL_61;
          this = (FriendIconComponent_o *)*((_QWORD *)&v27->obj.klass + v21);
          if ( !this )
            goto LABEL_61;
          SkillIconComponent__Set_48035484((SkillIconComponent_o *)this, v26[4], v26[5], v26[12], v26[13], 0);
          appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_61;
          if ( v22 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v21);
          if ( !this )
            goto LABEL_61;
          UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)this, (UIFont_o *)v19, 0);
          v29 = v4->fields.appendSkillLevelIconLabelList;
          if ( !v29 )
            goto LABEL_61;
          if ( v22 >= LODWORD(v29->max_length) )
            goto LABEL_79;
          this = (FriendIconComponent_o *)*((_QWORD *)&v29->obj.klass + v21);
          if ( !this )
            goto LABEL_61;
          UIIconLabel__Set_48040364((UIIconLabel_o *)this, 48, v26[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      v18 = v4->fields.appendSkillIconList;
      ++v21;
      if ( !v18 )
        goto LABEL_61;
    }
    appendSkillInfoUiWidget = (UnityEngine_Object_o *)v4->fields.appendSkillInfoUiWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info);
    if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
    {
      switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
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
              m_CachedPtr = this->fields.m_CachedPtr;
              info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
              v41 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( m_CachedPtr )
              {
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)info,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                }
                else
                {
                  v43 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v43 + 32) = info;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v43 + 32),
                    (int32_t)info,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39);
                }
                this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
                if ( this )
                {
                  v44 = v4->fields.switchSkillInfo;
                  this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( v44 )
                  {
                    SwitchUIWidgetComponent__Set(v44, (UIWidget_array *)this, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_61:
        sub_21FFECC(this, info);
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

  if ( (byte_5937AEA & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21280/*"img_blankbg_02"*/);
    sub_21FFC50(&StringLiteral_21328/*"img_equipface_grand"*/);
    sub_21FFC50(&StringLiteral_21281/*"img_blankbg_03"*/);
    byte_5937AEA = 1;
  }
  if ( servantLeader )
  {
    grandEquipHeaderSprite = this->fields.grandEquipHeaderSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, servantLeader);
    AtlasManager__SetPartyOrganizationImage(grandEquipHeaderSprite, (System_String_o *)StringLiteral_21328/*"img_equipface_grand"*/, 0);
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
            (System_String_o *)StringLiteral_21280/*"img_blankbg_02"*/,
            1,
            (int)grandSvtEquip1 > 0,
            0),
          (grandSvtEquip1 = this->fields.grandSvtEquip3) == 0) )
    {
      sub_21FFECC(grandSvtEquip1, v6);
    }
    FollowerSelectItemListViewItemEquipDraw__SetEquip(
      grandSvtEquip1,
      servantLeader->fields.equipTarget3,
      (System_String_o *)StringLiteral_21281/*"img_blankbg_03"*/,
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
  __int64 v7; // x20
  __int64 v8; // x22
  __int64 v9; // x8
  System_String_o *svtNpCommandCard; // x0
  __int64 v11; // x9
  UIRangeLabel_o *v12; // x22
  UnityEngine_Object_o *v13; // x20
  int32_t TreasureDeviceLevelIcon; // w23
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w24
  long double v16; // q0
  __int64 v17; // x8
  __int64 v18; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *OverwriteTDName; // x0
  __int64 v21; // x1
  System_String_o **v22; // x9
  Il2CppObject *v23; // x21
  System_String_o *v24; // x23
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  __int64 v27; // x1
  UIRangeLabel_o *svtNpTitleLabel; // x19
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5937AE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&StringLiteral_9734/*"NP_MAX_COLOR_NAME"*/);
    sub_21FFC50(&StringLiteral_9697/*"NO_ENTRY_NAME"*/);
    sub_21FFC50(&StringLiteral_9727/*"NP_COLOR_NAME"*/);
    byte_5937AE7 = 1;
  }
  tdInfo = 0;
  if ( !servantLeader )
    goto LABEL_31;
  v7 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeader);
  *(_QWORD *)&v30.fields.currentCryptoKey = v7;
  *(_QWORD *)&v30.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0) < 1 )
  {
LABEL_31:
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, servantLeader);
    svtNpCommandCard = LocalizationManager__Get((System_String_o *)StringLiteral_9697/*"NO_ENTRY_NAME"*/, 0);
    if ( svtNpTitleLabel )
    {
      UIRangeLabel__Set(svtNpTitleLabel, svtNpCommandCard, 0, 1, 0, 0, 0);
      svtNpCommandCard = (System_String_o *)this->fields.svtNpCommandCard;
      if ( svtNpCommandCard )
      {
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)svtNpCommandCard, 0);
        return;
      }
    }
    goto LABEL_36;
  }
  v9 = 72;
  svtNpCommandCard = (System_String_o *)this->fields.userGameEntity;
  if ( isGrandSupport )
  {
    v9 = 376;
    v11 = 368;
  }
  else
  {
    v11 = 64;
  }
  if ( !svtNpCommandCard )
    goto LABEL_36;
  v12 = *(UIRangeLabel_o **)((char *)&this->klass + v11);
  v13 = *(UnityEngine_Object_o **)((char *)&this->klass + v9);
  OtherUserGameEntity__getTreasureDeviceInfo(
    (OtherUserGameEntity_o *)svtNpCommandCard,
    &tdInfo,
    this->fields.classPos,
    this->fields.displayServantType,
    this->fields.deckId,
    this->fields.followerGrandGraphId,
    0);
  svtNpCommandCard = (System_String_o *)this->fields.userGameEntity;
  if ( !svtNpCommandCard )
    goto LABEL_36;
  TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                              (OtherUserGameEntity_o *)svtNpCommandCard,
                              this->fields.classPos,
                              this->fields.displayServantType,
                              this->fields.deckId,
                              this->fields.followerGrandGraphId,
                              0);
  DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    servantLeader,
                                                    0);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_2237AF8(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_2237AF8(v16);
  svtNpCommandCard = **(System_String_o ***)(v18 + 184);
  if ( !svtNpCommandCard )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)svtNpCommandCard,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtNpCommandCard = (System_String_o *)ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
  if ( !tdInfo || !MasterData_object )
    goto LABEL_36;
  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                      (ServantLimitAddMaster_o *)MasterData_object,
                      (int32_t)svtNpCommandCard,
                      DispLimitCountStageSealAfterAtStageLimitCount,
                      tdInfo->fields.name,
                      tdInfo->fields.lv,
                      0);
  v22 = (System_String_o **)&StringLiteral_9734/*"NP_MAX_COLOR_NAME"*/;
  v23 = (Il2CppObject *)OverwriteTDName;
  if ( TreasureDeviceLevelIcon <= 1 )
    v22 = (System_String_o **)&StringLiteral_9727/*"NP_COLOR_NAME"*/;
  v24 = *v22;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v25 = LocalizationManager__Get(v24, 0);
  svtNpCommandCard = System_String__Format(v25, v23, 0);
  if ( !tdInfo )
    goto LABEL_36;
  v26 = svtNpCommandCard;
  svtNpCommandCard = StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0);
  if ( !v12 )
    goto LABEL_36;
  UIRangeLabel__Set(v12, v26, svtNpCommandCard, 0, 0, isGrandSupport, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  svtNpCommandCard = (System_String_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
  if ( ((unsigned __int8)svtNpCommandCard & 1) != 0 )
  {
    if ( v13 )
    {
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v13, tdInfo, 0);
      return;
    }
LABEL_36:
    sub_21FFECC(svtNpCommandCard, servantLeader);
  }
}


void FriendIconComponent__SetPlayerInfo(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  UILabel_o *grandPlayerNameLabel; // x21
  UIIconLabel_o *grandPlayerLevelIconLabel; // x23
  UserGradeComponent_o *grandGradeIcon; // x20
  UnityEngine_Object_o *grandPlayerBaseLineSprite; // x24
  __int64 v9; // x1
  UISprite_o *v10; // x24
  UnityEngine_Object_o *grandSvtProfileBackSpr; // x24
  __int64 v12; // x1
  UISprite_o *v13; // x24
  UIFont_o *object; // x0
  __int64 v15; // x1
  UILabel_o *loginDataLabel; // x23
  __int64 v17; // x1
  int64_t UpdatedAt; // x24
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *trueTypeFont; // x23
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  int32_t Kind_47358284; // w22
  __int64 v27; // x1
  System_String_o *SupportBgImage; // x23
  UISprite_o *baseSpr; // x24
  float v30; // s0
  float monitor_low; // s8
  float v32; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  __int64 v35; // x1
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  FriendIconComponent_o *v40; // x0
  OtherUserGameEntity_o *v41; // x1
  ServantLeaderInfo_o *v42; // x2
  bool v43; // w3
  const MethodInfo *v44; // x4

  if ( (byte_5937AE5 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Font_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_21FFC50(&Grade_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_21FFC50(&StringLiteral_7077/*"Fonts/FGO-Main-Font"*/);
    sub_21FFC50(&StringLiteral_21391/*"img_listbg_svtprof_grand"*/);
    sub_21FFC50(&StringLiteral_7079/*"Fonts/TextAtlas1"*/);
    sub_21FFC50(&StringLiteral_21390/*"img_listbg_line_grand"*/);
    byte_5937AE5 = 1;
  }
  if ( this->fields.displayServantType == 2 )
  {
    grandPlayerNameLabel = this->fields.grandPlayerNameLabel;
    grandPlayerLevelIconLabel = this->fields.grandPlayerLevelIconLabel;
    grandPlayerBaseLineSprite = (UnityEngine_Object_o *)this->fields.grandPlayerBaseLineSprite;
    grandGradeIcon = this->fields.grandGradeIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userGameEntity);
    if ( UnityEngine_Object__op_Inequality(grandPlayerBaseLineSprite, 0, 0) )
    {
      v10 = this->fields.grandPlayerBaseLineSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
      AtlasManager__SetPartyOrganizationImage(v10, (System_String_o *)StringLiteral_21390/*"img_listbg_line_grand"*/, 0);
    }
    grandSvtProfileBackSpr = (UnityEngine_Object_o *)this->fields.grandSvtProfileBackSpr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(grandSvtProfileBackSpr, 0, 0) )
    {
      v13 = this->fields.grandSvtProfileBackSpr;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__SetPartyOrganizationImage(v13, (System_String_o *)StringLiteral_21391/*"img_listbg_svtprof_grand"*/, 0);
    }
  }
  else
  {
    grandPlayerNameLabel = this->fields.playerNameLabel;
    grandPlayerLevelIconLabel = this->fields.playerLevelIconLabel;
    grandGradeIcon = this->fields.gradeIcon;
  }
  object = (UIFont_o *)UnityEngine_Resources__Load_object_(
                         (System_String_o *)StringLiteral_7079/*"Fonts/TextAtlas1"*/,
                         (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_UIFont___);
  if ( !grandPlayerLevelIconLabel )
    goto LABEL_46;
  UIIconLabel__SetTextLabelBitmapFont(grandPlayerLevelIconLabel, object, 0);
  if ( !userGameEntity || !grandPlayerNameLabel )
    goto LABEL_46;
  UILabel__set_text(grandPlayerNameLabel, userGameEntity->fields.userName, 0);
  UIIconLabel__Set_48040364(grandPlayerLevelIconLabel, 2, userGameEntity->fields.userLv, 0, 0, 0, 0, 0, 0, 0, 0);
  loginDataLabel = this->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, this->fields.classPos, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  object = (UIFont_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0);
  if ( !loginDataLabel )
    goto LABEL_46;
  UILabel__set_text(loginDataLabel, (System_String_o *)object, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)grandGradeIcon, 0, 0) )
  {
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(grandPlayerNameLabel, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( !UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
    {
LABEL_32:
      if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v22);
      Kind_47358284 = Grade__GetKind_47358284(userGameEntity, 0);
      SupportBgImage = Grade__GetSupportBgImage(Kind_47358284, 0);
      baseSpr = this->fields.baseSpr;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
      AtlasManager__SetGradeIcon(baseSpr, SupportBgImage, 0);
      LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0);
      if ( grandGradeIcon )
      {
        monitor_low = v30;
        LODWORD(v32) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
        object = (UIFont_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
        if ( object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)object,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
          object = (UIFont_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
          if ( ((unsigned __int8)object & 1) == 0 )
            goto LABEL_44;
          if ( Component_object )
          {
            CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
            v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
            if ( GameObjectExtensions__GetLocalScaleX(v37, 0) < 1.0 )
              monitor_low = (float)SLODWORD(Component_object[3].monitor);
LABEL_44:
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
            GameObjectExtensions__SetLocalPositionX(v38, (float)(v32 * 0.5) + (float)(LocalPositionX + monitor_low), 0);
            v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
            GameObjectExtensions__SetLocalPositionY(v39, this->fields.gradeIconPosY, 0);
            UserGradeComponent__Set(grandGradeIcon, Kind_47358284, 0);
            return;
          }
        }
      }
LABEL_46:
      sub_21FFECC(object, v15);
    }
    v23 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_7077/*"Fonts/FGO-Main-Font"*/, 0);
    if ( !v23 || (UnityEngine_Font_c *)v23->klass == UnityEngine_Font_TypeInfo )
    {
      UILabel__set_trueTypeFont(grandPlayerNameLabel, (UnityEngine_Font_o *)v23, 0);
      goto LABEL_32;
    }
    sub_220024C(v23, UnityEngine_Font_TypeInfo, v24, v25);
    FriendIconComponent__SetServantInfo(v40, v41, v42, v43, v44);
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
  System_String_o *servantFaceIcon; // x0
  UIRangeLabel_o *grandSvtNameRangeLabel; // x23
  const MethodInfo *v13; // x2
  UIRangeLabel_o *servantNameLabel; // x22
  __int64 v15; // x1
  UnityEngine_Object_o *svtCommandCardList; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  ServantCommandCardListComponent_o *v21; // x23
  int32_t v22; // w24
  int32_t ServantId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v25; // w26
  bool v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_5937AE6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_3841/*"COMMON_NO_ENTRY"*/);
    byte_5937AE6 = 1;
  }
  if ( !servantLeader )
    goto LABEL_10;
  v9 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userGameEntity);
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0) < 1 )
  {
LABEL_10:
    servantNameLabel = this->fields.servantNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userGameEntity);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_3841/*"COMMON_NO_ENTRY"*/, 0);
    if ( !servantNameLabel )
      goto LABEL_41;
    UIRangeLabel__Set(servantNameLabel, servantFaceIcon, 0, 1, 0, 0, 0);
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_48022124(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      servantFaceIcon = (System_String_o *)this->fields.svtCommandCardList;
      if ( !servantFaceIcon )
        goto LABEL_41;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)servantFaceIcon, 0);
    }
    servantFaceIcon = (System_String_o *)this->fields.pushSprite;
    goto LABEL_37;
  }
  if ( isGrandSupport )
  {
    servantFaceIcon = (System_String_o *)this->fields.grandServantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_41;
    grandSvtNameRangeLabel = this->fields.grandSvtNameRangeLabel;
    ServantFaceIconComponent__Set_48022124(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    FriendIconComponent__SetGrandServantEquip(this, servantLeader, v13);
  }
  else
  {
    servantFaceIcon = (System_String_o *)this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_41;
    grandSvtNameRangeLabel = this->fields.servantNameLabel;
    ServantFaceIconComponent__Set_48022124(
      (ServantFaceIconComponent_o *)servantFaceIcon,
      servantLeader,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
  }
  servantFaceIcon = ServantLeaderInfo__GetName(servantLeader, 0);
  if ( !grandSvtNameRangeLabel )
LABEL_41:
    sub_21FFECC(servantFaceIcon, userGameEntity);
  UIRangeLabel__Set(grandSvtNameRangeLabel, servantFaceIcon, 0, 1, 0, 0, 0);
  v18 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    v19 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v21 = this->fields.svtCommandCardList;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userGameEntity);
    *(_QWORD *)&v31.fields.currentCryptoKey = v19;
    *(_QWORD *)&v31.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v31, 0);
    ServantId = ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
    commandCardParam = servantLeader->fields.commandCardParam;
    v25 = ServantId;
    servantFaceIcon = (System_String_o *)ServantLeaderInfo__getCommandCodeIdList(servantLeader, 0);
    if ( !v21 )
      goto LABEL_41;
    ServantCommandCardListComponent__Set_48006988(
      v21,
      v22,
      v25,
      commandCardParam,
      (System_Int32_array *)servantFaceIcon,
      2,
      1,
      0);
  }
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( !servantFaceIcon )
    goto LABEL_41;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0);
  if ( !servantFaceIcon )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  if ( !userGameEntity )
    goto LABEL_41;
  servantFaceIcon = (System_String_o *)this->fields.pushSprite;
  if ( userGameEntity->fields.pushUserSvtId != servantLeader->fields.userSvtId )
  {
LABEL_37:
    if ( servantFaceIcon )
    {
      servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantFaceIcon,
                                             0);
      if ( servantFaceIcon )
      {
        v26 = 0;
        goto LABEL_40;
      }
    }
    goto LABEL_41;
  }
  if ( !servantFaceIcon )
    goto LABEL_41;
  servantFaceIcon = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)servantFaceIcon,
                                         0);
  if ( !servantFaceIcon )
    goto LABEL_41;
  v26 = 1;
LABEL_40:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v26, 0);
  FriendIconComponent__SetNPInfo(this, servantLeader, isGrandSupport, v27);
  FriendIconComponent__SetSkillIconInfo(this, servantLeader, v28);
  FriendIconComponent__SetAppendSkill(this, servantLeader, v29);
}


void FriendIconComponent__SetSkillIconInfo(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *switchSkillInfo; // x21
  SwitchUIWidgetComponent_o *Instance; // x0
  Il2CppObject *v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  struct SkillIconComponent_array *skillIconList; // x8
  int max_length; // w12
  UIFont_o *v12; // x20
  __int64 v13; // x12
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
  unsigned __int64 v27; // x25
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  UnityEngine_Object_o *v29; // x21
  struct UnityEngine_GameObject_array *v30; // x9
  int32_t *v31; // x21
  struct SkillIconComponent_array *v32; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UIIconLabel_array *v34; // x8
  struct UnityEngine_GameObject_array *v35; // x8
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v46; // x8
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_5937AE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_21FFC50(&StringLiteral_7080/*"Fonts/TextAtlas3"*/);
    byte_5937AE8 = 1;
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  skillInfoList = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantLeader);
  Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = this->fields.switchSkillInfo;
    if ( !Instance )
      goto LABEL_74;
    SwitchUIWidgetComponent__Clear(Instance, 0);
    Instance = (SwitchUIWidgetComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_74;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  }
  if ( !servantLeader )
    goto LABEL_24;
  v8 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v48.fields.currentCryptoKey = v8;
  *(_QWORD *)&v48.fields.fakeValue = v9;
  Instance = (SwitchUIWidgetComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v48, 0);
  if ( (int)Instance >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(servantLeader, &skillInfoList, -1, 0);
    Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Resources__Load_object_(
                                              (System_String_o *)StringLiteral_7080/*"Fonts/TextAtlas3"*/,
                                              (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_UIFont___);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_74;
    max_length = skillIconList->max_length;
    v12 = (UIFont_o *)Instance;
    if ( max_length >= 1 )
    {
      v13 = max_length & (unsigned int)~(max_length >> 31);
      v14 = 0;
      v15 = 0;
      while ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v15 < (int)max_length_low )
        {
          if ( v15 >= max_length_low )
            goto LABEL_86;
          v17 = skillInfoList->m_Items[v15];
          if ( v17 && v17->fields.id >= 1 )
            v14 = v15 + 1;
        }
        if ( v13 == ++v15 )
          goto LABEL_45;
      }
LABEL_74:
      sub_21FFECC(Instance, v7);
    }
    v14 = 0;
LABEL_45:
    v25 = v14;
    v26 = 4;
    while ( 1 )
    {
      v27 = v26 - 4;
      if ( v26 - 4 >= SLODWORD(skillIconList->max_length) )
        break;
      skillBaseList = this->fields.skillBaseList;
      if ( !skillBaseList )
        goto LABEL_74;
      if ( v27 >= LODWORD(skillBaseList->max_length) )
        goto LABEL_86;
      v29 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v26);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (__int64)v27 >= v25 )
        {
          v35 = this->fields.skillBaseList;
          if ( !v35 )
            goto LABEL_74;
          if ( v27 >= LODWORD(v35->max_length) )
            goto LABEL_86;
          Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v35->obj.klass + v26);
          if ( !Instance )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_74;
          if ( v27 >= LODWORD(skillInfoList->max_length) )
            goto LABEL_86;
          v30 = this->fields.skillBaseList;
          if ( !v30 )
            goto LABEL_74;
          if ( v27 >= LODWORD(v30->max_length) )
            goto LABEL_86;
          Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v30->obj.klass + v26);
          if ( !Instance )
            goto LABEL_74;
          v31 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v26);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          v32 = this->fields.skillIconList;
          if ( !v32 )
            goto LABEL_74;
          if ( v27 >= LODWORD(v32->max_length) )
            goto LABEL_86;
          if ( !v31 )
            goto LABEL_74;
          Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v32->obj.klass + v26);
          if ( !Instance )
            goto LABEL_74;
          SkillIconComponent__Set_48035484((SkillIconComponent_o *)Instance, v31[4], v31[5], v31[12], v31[13], 0);
          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_74;
          if ( v27 >= LODWORD(skillLevelIconLabelList->max_length) )
            goto LABEL_86;
          Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v26);
          if ( !Instance )
            goto LABEL_74;
          UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)Instance, v12, 0);
          v34 = this->fields.skillLevelIconLabelList;
          if ( !v34 )
            goto LABEL_74;
          if ( v27 >= LODWORD(v34->max_length) )
            goto LABEL_86;
          Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v34->obj.klass + v26);
          if ( !Instance )
            goto LABEL_74;
          UIIconLabel__Set_48040364((UIIconLabel_o *)Instance, 48, v31[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      skillIconList = this->fields.skillIconList;
      ++v26;
      if ( !skillIconList )
        goto LABEL_74;
    }
    skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_74;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
      if ( !Instance )
        goto LABEL_74;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !Instance )
        goto LABEL_74;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v7 = (Il2CppObject *)this->fields.skillInfoUiWidget;
      v44 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_74;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v7,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v46 + 32) = v7;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v7, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  else
  {
LABEL_24:
    v18 = this->fields.skillIconList;
    if ( !v18 )
      goto LABEL_74;
    v19 = 4;
    while ( 1 )
    {
      v20 = v19 - 4;
      if ( v19 - 4 >= SLODWORD(v18->max_length) )
        break;
      v21 = this->fields.skillBaseList;
      if ( !v21 )
        goto LABEL_74;
      if ( v20 >= LODWORD(v21->max_length) )
        goto LABEL_86;
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v21->obj.klass + v19);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v23 = this->fields.skillBaseList;
        if ( !v23 )
          goto LABEL_74;
        if ( v20 >= LODWORD(v23->max_length) )
LABEL_86:
          sub_21FFED4(Instance);
        Instance = (SwitchUIWidgetComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
        if ( !Instance )
          goto LABEL_74;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      v18 = this->fields.skillIconList;
      ++v19;
      if ( !v18 )
        goto LABEL_74;
    }
    v24 = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
    {
      Instance = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !Instance )
        goto LABEL_74;
      Instance = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
      if ( !Instance )
        goto LABEL_74;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
  }
}


void FriendIconComponent__SetUpOpenClassScoreNumButton(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  FriendIconComponent_o *v4; // x19
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v6; // x1
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v9; // x9
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject **v13; // x9
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  UILabel_o *v16; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x19
  int32_t openGrandClassBoardNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t openClassBoardNum; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_5937AF6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6662/*"FFFFFF"*/);
    sub_21FFC50(&StringLiteral_18179/*"btn_bg_29_2"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_6661/*"FFFF00"*/);
    sub_21FFC50(&StringLiteral_16618/*"[{0}]+{1}[-]"*/);
    this = (FriendIconComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937AF6 = 1;
  }
  classBoardOpenButton = (UnityEngine_Object_o *)v4->fields.classBoardOpenButton;
  if ( !servantLeader )
  {
    if ( classBoardOpenButton )
    {
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)v4->fields.classBoardOpenButton,
                                        0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
    }
    goto LABEL_39;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantLeader);
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0) )
  {
    this = (FriendIconComponent_o *)v4->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_39;
    this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.openClassBoardNum >= 0, 0);
    classBoardBackSprite = v4->fields.classBoardBackSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_18179/*"btn_bg_29_2"*/, 0);
    this = (FriendIconComponent_o *)v4->fields.classBoardBackSprite;
    if ( !this )
      goto LABEL_39;
    ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
  }
  openClassBoardNumLabel = (UnityEngine_Object_o *)v4->fields.openClassBoardNumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantLeader);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0) )
  {
    if ( v4->fields.openClassBoardNum < 0 )
    {
      this = (FriendIconComponent_o *)v4->fields.openClassBoardNumLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        return;
      }
      goto LABEL_39;
    }
    if ( v4->fields.isMaxOpenClassBoard )
      v9 = (Il2CppObject **)&StringLiteral_6661/*"FFFF00"*/;
    else
      v9 = (Il2CppObject **)&StringLiteral_6662/*"FFFFFF"*/;
    v10 = *v9;
    openClassBoardNum = v4->fields.openClassBoardNum;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &openClassBoardNum);
    this = (FriendIconComponent_o *)System_String__Format_75484576((System_String_o *)StringLiteral_16618/*"[{0}]+{1}[-]"*/, v10, v11, 0);
    if ( !v4->fields.openClassBoardNumLabel )
      goto LABEL_39;
    UILabel__set_text(v4->fields.openClassBoardNumLabel, (System_String_o *)this, 0);
    this = (FriendIconComponent_o *)v4->fields.openClassBoardNumLabel;
    if ( !this )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalScale_42878128(gameObject, 1.0, 0);
    if ( v4->fields.openGrandClassBoardNum < 0 )
      return;
    v13 = v4->fields.isMaxOpenGrandClassBoard
        ? (Il2CppObject **)&StringLiteral_6661/*"FFFF00"*/
        : (Il2CppObject **)&StringLiteral_6662/*"FFFFFF"*/;
    v14 = *v13;
    openGrandClassBoardNum = v4->fields.openGrandClassBoardNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &openGrandClassBoardNum);
    this = (FriendIconComponent_o *)System_String__Format_75484576((System_String_o *)StringLiteral_16618/*"[{0}]+{1}[-]"*/, v14, v15, 0);
    v16 = v4->fields.openClassBoardNumLabel;
    if ( !v16
      || (v17 = System_String__Concat_75481624(
                  v16->fields.mText,
                  (System_String_o *)StringLiteral_1123/*"/"*/,
                  (System_String_o *)this,
                  0),
          UILabel__set_text(v16, v17, 0),
          (this = (FriendIconComponent_o *)v4->fields.openClassBoardNumLabel) == 0) )
    {
LABEL_39:
      sub_21FFECC(this, servantLeader);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
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