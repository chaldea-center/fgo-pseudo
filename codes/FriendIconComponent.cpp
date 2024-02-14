void __fastcall FriendIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421763D & 1) == 0 )
  {
    sub_B0D8A4(&FriendIconComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19580/*"img_listbg_01"*/, v8);
    byte_421763D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FriendIconComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19580/*"img_listbg_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19580/*"img_listbg_01"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SkillIconComponent_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UIIconLabel_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct SkillIconComponent_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UIIconLabel_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_421763C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UIIconLabel___TypeInfo, v5);
    byte_421763C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UIIconLabel_array *)sub_B0D8BC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_B0D8BC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v42,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v19; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v21; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v25; // x19

  if ( (byte_421762F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_19425/*"icon_skill_mini"*/, v7);
    sub_B0D8A4(&StringLiteral_19557/*"img_friend_skill"*/, v8);
    sub_B0D8A4(&StringLiteral_19336/*"icon_append_mini"*/, v9);
    sub_B0D8A4(&StringLiteral_19556/*"img_friend_appendskill"*/, v10);
    byte_421762F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v19 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v19, (System_String_o *)StringLiteral_19425/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v21 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v21, (System_String_o *)StringLiteral_19557/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v23 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_19336/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v25 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_19556/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421763B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421763B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
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
  CommonUI_o *Instance; // x0

  if ( (byte_4217633 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4217633 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_4217637 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4217637 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantEquipStatusDialog(Instance, v9, 0LL);
}


int32_t __fastcall FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *userGameEntity; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v5; // x0

  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_7;
  if ( this->fields.displayServantType )
  {
    eventSupportDeckIds = userGameEntity->fields.eventSupportDeckIds;
    if ( eventSupportDeckIds )
      goto LABEL_4;
LABEL_7:
    sub_B0D97C(this);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v8; // x20
  CommonUI_o *Instance; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x22
  __int64 v13; // x0

  if ( (byte_4217632 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217632 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
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
      v8 = ServantLeaderInfo;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_B0D97C(v13);
      CommonUI__OpenServantStatusDialog_17029768(Instance, 5, v8, v12, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  void *Entity; // x0
  int32_t v23; // w21
  int32_t ClassBoardBaseId; // w20
  __int64 v25; // x1
  __int64 v26; // x2
  struct OtherUserGameEntity_o *v27; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v30; // w10
  __int64 v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  _QWORD **v38; // x23
  __int64 v39; // x22
  __int16 v40; // w8
  __int64 v41; // x22
  __int64 v42; // x22
  __int64 v43; // x22
  System_Int32_array ***v44; // x8
  System_Int32_array **v45; // x1
  CommonUI_o *Instance; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x23
  __int64 v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_421763A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Array_Empty_int___, v3);
    sub_B0D8A4(&ClassBoardInfo_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_B0D8A4(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421763A = 1;
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
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 75) & 2) != 0 )
        v16 = (_QWORD *)sub_B0D8AC(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_B0D888(v16, v16[3]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v51.fields.currentCryptoKey = v20;
      *(_QWORD *)&v51.fields.fakeValue = v19;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v51, 0LL);
      if ( !v21 )
        goto LABEL_42;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_42;
      v23 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_42;
      ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v23, 0LL);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_42;
      Entity = (void *)ClassBoardClassMaster__IsInvalidClass((ClassBoardClassMaster_o *)Entity, v23, 0LL);
      if ( ((unsigned __int8)Entity & 1) == 0 )
      {
        v27 = this->fields.userGameEntity;
        if ( !v27 )
          goto LABEL_42;
        userClassBoardInfo = v27->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_42;
        max_length = userClassBoardInfo->max_length;
        if ( max_length >= 1 )
        {
          v30 = 0;
          while ( 1 )
          {
            if ( v30 >= max_length )
            {
              v50 = sub_B0D9A8(Entity);
              sub_B0D948(v50, 0LL);
            }
            v31 = (__int64)userClassBoardInfo->m_Items[v30];
            if ( !v31 )
              break;
            if ( *(_DWORD *)(v31 + 16) == ClassBoardBaseId )
              goto LABEL_39;
            if ( (int)++v30 >= max_length )
              goto LABEL_26;
          }
LABEL_42:
          sub_B0D97C(Entity);
        }
      }
LABEL_26:
      v31 = sub_B0D974(ClassBoardInfo_TypeInfo, v25, v26);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v31, 0LL);
      if ( !v31 )
        goto LABEL_42;
      *(_DWORD *)(v31 + 16) = ClassBoardBaseId;
      v38 = (_QWORD **)Method_System_Array_Empty_int___;
      v39 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v40 = *(_WORD *)(v39 + 306);
      if ( (v40 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v40 = *(_WORD *)(v39 + 306);
      }
      if ( (v40 & 0x400) != 0 )
      {
        v41 = *v38[6];
        if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
          sub_AA65A4(*v38[6]);
        if ( !*(_DWORD *)(v41 + 224) )
        {
          v42 = *v38[6];
          if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
            sub_AA65A4(*v38[6]);
          j_il2cpp_runtime_class_init_0(v42);
        }
      }
      v43 = *v38[6];
      if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
        sub_AA65A4(*v38[6]);
      v44 = *(System_Int32_array ****)(v43 + 184);
      v45 = *v44;
      *(_QWORD *)(v31 + 24) = *v44;
      sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), v45, v32, v33, v34, v35, v36, v37);
LABEL_39:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
      System_Action___ctor(
        v49,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
        goto LABEL_42;
      CommonUI__OpenClassBoardEffectListDialog(Instance, 1, ClassBoardBaseId, 0, v49, 1, (ClassBoardInfo_o *)v31, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  OtherUserGameEntity_o *userGameEntity; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  SupportInfoJump_o *v8; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4217635 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v4);
    byte_4217635 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_B0D974(SupportInfoJump_TypeInfo, v6, v7);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v8, 0LL);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4217638 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4217638 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_28;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  v6 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_24;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_28:
    sub_B0D97C(userGameEntity);
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( this->fields.followerType == 5 )
        v12 = 14;
      else
        v12 = 13;
      if ( this->fields.followerType != 5 && v6 )
      {
        if ( ServantLeaderInfo__IsNpc(v6, 0LL) )
          v12 = 19;
        else
          v12 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v8, v12, v11);
      return;
    }
  }
LABEL_24:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillInfo_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  System_String_o *v20; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4217639 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v11);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4217639 = 1;
  }
  skillInfoList = 0LL;
  detail = 0LL;
  name = 0LL;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_27;
        if ( skillInfoList->max_length <= skillIndex )
        {
          v26 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v26, 0LL);
        }
        v17 = skillInfoList->m_Items[skillIndex];
        if ( v17 && v17->fields.id >= 1 && v17->fields.lv >= 1 )
        {
          v18 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
            v18 = (_QWORD *)sub_B0D8AC(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v19 = (System_Reflection_MethodBase_o *)sub_B0D888(v18, v18[3]);
          OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              Master_WarQuestSelectionMaster,
                                                                                              v17->fields.id,
                                                                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_WarQuestSelectionMaster )
            {
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Master_WarQuestSelectionMaster,
                &name,
                &detail,
                v17->fields.lv,
                0LL);
              v20 = name;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v17->fields.lv;
              v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v23 = System_String__Format(v21, v22, 0LL);
              name = System_String__Concat_43852188(v20, (System_String_o *)StringLiteral_80/*" "*/, v23, 0LL);
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( Master_WarQuestSelectionMaster )
              {
                CommonUI__OpenDetailLongInfoDialog(
                  (CommonUI_o *)Master_WarQuestSelectionMaster,
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
LABEL_27:
          sub_B0D97C(Master_WarQuestSelectionMaster);
        }
      }
    }
  }
  v24 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
    v24 = (_QWORD *)sub_B0D8AC(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v25 = (System_Reflection_MethodBase_o *)sub_B0D888(v24, v24[3]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
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
  __int64 v18; // x0
  int32_t max_length; // w9
  SkillInfo_o *v20; // x22
  DataManager_o *Instance; // x0
  SkillEntity_o *Entity; // x20
  DataManager_o *v23; // x19
  System_String_o *v24; // x20
  System_String_o *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x19
  __int64 v31; // x0
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4217634 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v12);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4217634 = 1;
  }
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_35;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  if ( !ServantLeaderInfo )
    goto LABEL_35;
  v17 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_35;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_35;
  max_length = skillInfoList->max_length;
  if ( max_length <= skillIndex )
    goto LABEL_35;
  if ( max_length <= (unsigned int)skillIndex )
  {
    v31 = sub_B0D9A8(v18);
    sub_B0D948(v31, 0LL);
  }
  v20 = skillInfoList->m_Items[skillIndex];
  if ( v20 && v20->fields.id >= 1 && v20->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_32;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v20->fields.id,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v20->fields.id,
                                  v20->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_32;
    v23 = Instance;
    SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v20->fields.lv, 0LL);
    v24 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v20->fields.lv;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v27 = System_String__Format(v25, v26, 0LL);
    name = System_String__Concat_43852188(v24, (System_String_o *)StringLiteral_80/*" "*/, v27, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v23
      || (v28 = (System_String_o *)Instance,
          datalist = (int)v23->fields.datalist,
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
          v30 = System_String__Format(v28, v29, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_32:
      sub_B0D97C(Instance);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v30, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_35:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
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
  CommonUI_o *Instance; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_4217636 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B0D8A4(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4217636 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__OpenServantEquipStatusDialog_17032132(Instance, statusKind, equipInfo, v12, 0LL, 0LL);
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
  int32_t v9; // w23
  int32_t v11; // w24
  int32_t v12; // w25
  FriendIconComponent_o *v15; // x19
  __int64 v16; // x1
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
  System_Int32_array **v55; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x27
  const MethodInfo *v57; // x1
  int32_t TargetDeckId; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  ServantEntity_o *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v62; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  ServantEntity_o *v64; // x21
  __int64 v65; // x20
  __int64 v66; // x25
  System_String_o *overwriteServantName; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  System_String_o *v69; // x1
  UIRangeLabel_o *v70; // x0
  UIRangeLabel_o *v71; // x25
  UIRangeLabel_o *v72; // x25
  UnityEngine_Object_o *v73; // x20
  int32_t TreasureDeviceLevelIcon; // w25
  __int64 v75; // x20
  __int64 v76; // x20
  ServantLimitAddMaster_o *v77; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v80; // x20
  __int64 v81; // x24
  ServantLimitImageMaster_o *v82; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v85; // x9
  bool v86; // cc
  Il2CppObject *v87; // x25
  System_String_o *v88; // x20
  System_String_o *v89; // x0
  System_String_o *v90; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x26
  UnityEngine_Object_o *svtNpCommandCard; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v96; // x20
  __int64 v97; // x25
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v99; // x8
  int v100; // w9
  unsigned __int64 v101; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v103; // x14
  struct SkillIconComponent_array *v104; // x8
  __int64 v105; // x21
  unsigned __int64 v106; // x24
  struct UnityEngine_GameObject_array *v107; // x8
  UnityEngine_Object_o *v108; // x20
  struct UnityEngine_GameObject_array *v109; // x8
  UnityEngine_Object_o *v110; // x20
  const MethodInfo *v111; // x2
  signed __int64 v112; // x21
  __int64 v113; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v115; // x25
  UnityEngine_Object_o *v116; // x20
  struct UnityEngine_GameObject_array *v117; // x9
  int32_t *v118; // x20
  struct SkillIconComponent_array *v119; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v121; // x8
  struct SkillIconComponent_array *v122; // x8
  __int64 v123; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v126; // x25
  __int64 v127; // x20
  __int64 v128; // x26
  struct OtherUserGameEntity_o **v129; // x21
  int32_t v130; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v132; // w27
  int32_t Kind_26803592; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x20
  System_String_o *v136; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v140; // s0
  float v141; // s8
  float v142; // s0
  float v143; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v146; // s10
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  __int64 v149; // x20
  __int64 v150; // x24
  __int64 v151; // x1
  __int64 v152; // x2
  WarQuestSelectionMaster_o *v153; // x0
  __int64 v154; // x20
  __int64 v155; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v156; // x23
  int32_t v157; // w24
  int32_t ClassBoardBaseId; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v160; // w8
  unsigned int v161; // w21
  ClassBoardInfo_o *v162; // x24
  int v163; // w21
  _BOOL4 v164; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v166; // x8
  Il2CppObject *v167; // x20
  Il2CppObject *v168; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  bool v170; // w1
  UnityEngine_Object_o *v171; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v174; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v176; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v179; // x8
  unsigned __int64 v180; // x10
  int *v181; // x11
  __int64 v182; // x0
  __int64 v183; // x0
  __int64 v184; // x25
  __int64 v185; // x9
  ClassBoardSquareMaster_o *v186; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v188; // x8
  unsigned __int64 v189; // x10
  int *v190; // x11
  __int64 v191; // x0
  struct System_Int32_array *squareIds; // x8
  __int64 v193; // x0
  ServantEntity_o *v194; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__int__o *v195; // [xsp+20h] [xbp-90h]
  int v196; // [xsp+2Ch] [xbp-84h] BYREF
  __int64 v197; // [xsp+30h] [xbp-80h]
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16

  v9 = followerDeckId;
  v11 = displayServantType;
  v12 = classPos;
  v15 = this;
  v195 = classBoardMaxNumDictionary;
  if ( (byte_4217630 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, userGameEntity);
    sub_B0D8A4(&ClassBoardBaseEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v25);
    sub_B0D8A4(&DataManager_TypeInfo, v26);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v31);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v32);
    sub_B0D8A4(&UnityEngine_Font_TypeInfo, v33);
    sub_B0D8A4(&Grade_TypeInfo, v34);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v35);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v36);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v37);
    sub_B0D8A4(&int_TypeInfo, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v39);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v40);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v41);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_B0D8A4(&OptionManager_TypeInfo, v43);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v44);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v46);
    sub_B0D8A4(&StringLiteral_3289/*"COMMON_NO_ENTRY"*/, v47);
    sub_B0D8A4(&StringLiteral_6759/*"Fonts/FGO-Main-Font"*/, v48);
    sub_B0D8A4(&StringLiteral_6352/*"FFFFFF"*/, v49);
    sub_B0D8A4(&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/, v50);
    sub_B0D8A4(&StringLiteral_6351/*"FFFF00"*/, v51);
    sub_B0D8A4(&StringLiteral_9377/*"NO_ENTRY_NAME"*/, v52);
    sub_B0D8A4(&StringLiteral_9399/*"NP_COLOR_NAME"*/, v53);
    this = (FriendIconComponent_o *)sub_B0D8A4(&StringLiteral_15877/*"[{0}]+{1}[-]"*/, v54);
    byte_4217630 = 1;
  }
  if ( isUseServantStatus )
    v55 = (System_Int32_array **)userGameEntity;
  else
    v55 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  HIDWORD(v197) = 0;
  if ( !v15 )
    goto LABEL_313;
  p_userGameEntity = &v15->fields.userGameEntity;
  v15->fields.userGameEntity = (struct OtherUserGameEntity_o *)v55;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v15->fields.userGameEntity,
    v55,
    (System_String_array **)isUseServantStatus,
    *(System_String_array ***)&classPos,
    *(System_Boolean_array ***)&displayServantType,
    *(System_Int32_array ***)&ftype,
    *(System_Int32_array **)&followerDeckId,
    (System_Int32_array *)classBoardMaxNumDictionary);
  v15->fields.classPos = v12;
  v15->fields.displayServantType = v11;
  v15->fields.followerType = ftype;
  if ( !userGameEntity )
    goto LABEL_264;
  if ( !v9 )
  {
    TargetDeckId = FriendIconComponent__GetTargetDeckId(v15, v57);
    v11 = v15->fields.displayServantType;
    v12 = v15->fields.classPos;
    v9 = TargetDeckId;
  }
  v15->fields.deckId = v9;
  if ( OtherUserGameEntity__getSvtId(userGameEntity, v12, v11, v9, 0LL) )
  {
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_313;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)this,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                      userGameEntity,
                                      v15->fields.classPos,
                                      v15->fields.displayServantType,
                                      v15->fields.deckId,
                                      0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_313;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)this,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        v15->fields.classPos,
                        1,
                        v15->fields.displayServantType,
                        v15->fields.deckId,
                        0LL);
  v62 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v64 = Entity;
        v65 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v66 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v200.fields.currentCryptoKey = v65;
        *(_QWORD *)&v200.fields.fakeValue = v66;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v200, 0LL) )
          v62 = 0LL;
        Entity = v64;
      }
    }
  }
  this = (FriendIconComponent_o *)v15->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_313;
  ServantFaceIconComponent__Set_29553232((ServantFaceIconComponent_o *)this, v62, 0LL, 0LL, 0, 0, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
  if ( !this )
    goto LABEL_313;
  UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerLevelIconLabel;
  if ( !this )
    goto LABEL_313;
  UIIconLabel__Set_41076120((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  v194 = Entity;
  if ( Entity )
  {
    if ( !v62 )
      goto LABEL_313;
    overwriteServantName = v62->fields.overwriteServantName;
    this = (FriendIconComponent_o *)System_String__IsNullOrEmpty(overwriteServantName, 0LL);
    servantNameLabel = v15->fields.servantNameLabel;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendIconComponent_o *)ServantEntity__getName(Entity, v62->fields.limitCount, -1, 0LL);
      if ( !servantNameLabel )
        goto LABEL_313;
      v69 = (System_String_o *)this;
      v70 = servantNameLabel;
    }
    else
    {
      if ( !servantNameLabel )
        goto LABEL_313;
      v70 = v15->fields.servantNameLabel;
      v69 = overwriteServantName;
    }
    UIRangeLabel__Set(v70, v69, 0LL, 1, 0, 0LL);
    OtherUserGameEntity__getTreasureDeviceInfo(
      userGameEntity,
      &tdInfo,
      v15->fields.classPos,
      v15->fields.displayServantType,
      v15->fields.deckId,
      0LL);
    TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                userGameEntity,
                                v15->fields.classPos,
                                v15->fields.displayServantType,
                                v15->fields.deckId,
                                0LL);
    v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v75 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v76 = **(_QWORD **)(v75 + 192);
    if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
      sub_AA65A4(v76);
    this = **(FriendIconComponent_o ***)(v76 + 184);
    if ( this )
    {
      v77 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v62, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_313;
        this = (FriendIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_313;
        FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                       (ServantLimitSpoilerProtectionMaster_o *)this,
                                       v62->fields.svtId,
                                       FriendNpNameDispLimitCount,
                                       0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v81 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
      v80 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
      v82 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v201.fields.currentCryptoKey = v81;
      *(_QWORD *)&v201.fields.fakeValue = v80;
      this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v201, 0LL);
      if ( v82 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v82,
                                       (int32_t)this,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                          v62->fields.svtId,
                                          0LL);
        if ( tdInfo )
        {
          if ( v77 )
          {
            OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                v77,
                                (int32_t)this,
                                ServantLimitCountSealAfter,
                                tdInfo->fields.name,
                                tdInfo->fields.lv,
                                0LL);
            v85 = (System_String_o **)&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/;
            v86 = TreasureDeviceLevelIcon <= 1;
            v87 = (Il2CppObject *)OverwriteTDName;
            if ( v86 )
              v85 = (System_String_o **)&StringLiteral_9399/*"NP_COLOR_NAME"*/;
            v88 = *v85;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v89 = LocalizationManager__Get(v88, 0LL);
            this = (FriendIconComponent_o *)System_String__Format(v89, v87, 0LL);
            if ( tdInfo )
            {
              v90 = (System_String_o *)this;
              svtNpTitleLabel = v15->fields.svtNpTitleLabel;
              p_userGameEntity = &v15->fields.userGameEntity;
              this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
              if ( svtNpTitleLabel )
              {
                UIRangeLabel__Set(svtNpTitleLabel, v90, (System_String_o *)this, 0, 0, 0LL);
                svtNpCommandCard = (UnityEngine_Object_o *)v15->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
                {
                  this = (FriendIconComponent_o *)v15->fields.svtNpCommandCard;
                  if ( !this )
                    goto LABEL_313;
                  ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                }
                goto LABEL_80;
              }
            }
          }
        }
      }
    }
LABEL_313:
    sub_B0D97C(this);
  }
  v71 = v15->fields.servantNameLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3289/*"COMMON_NO_ENTRY"*/, 0LL);
  if ( !v71 )
    goto LABEL_313;
  UIRangeLabel__Set(v71, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v72 = v15->fields.svtNpTitleLabel;
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NO_ENTRY_NAME"*/, 0LL);
  if ( !v72 )
    goto LABEL_313;
  UIRangeLabel__Set(v72, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v73 = (UnityEngine_Object_o *)v15->fields.svtNpCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.svtNpCommandCard;
    if ( !this )
      goto LABEL_313;
    ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
  }
LABEL_80:
  loginDataLabel = v15->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, v15->fields.classPos, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
  if ( !loginDataLabel )
    goto LABEL_313;
  UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
  switchSkillInfo = (UnityEngine_Object_o *)v15->fields.switchSkillInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FriendIconComponent_o *)v15->fields.switchSkillInfo;
    if ( !this )
      goto LABEL_313;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !this )
      goto LABEL_313;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
  }
  if ( !v62 )
    goto LABEL_107;
  v96 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v202.fields.currentCryptoKey = v96;
  *(_QWORD *)&v202.fields.fakeValue = v97;
  this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v202, 0LL);
  if ( (int)this >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(v62, &skillInfoList, 0LL);
    skillIconList = v15->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_313;
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
            goto LABEL_314;
          v103 = skillInfoList->m_Items[v101];
          if ( v103 && v103->fields.id >= 1 )
            v100 = v101 + 1;
        }
        if ( (__int64)++v101 >= (int)v99 )
          goto LABEL_130;
      }
      goto LABEL_313;
    }
    v100 = 0;
LABEL_130:
    if ( (int)v99 >= 1 )
    {
      v112 = v100;
      v113 = 4LL;
      do
      {
        skillBaseList = v15->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_313;
        v115 = v113 - 4;
        if ( v113 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_314;
        v116 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v113);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v116, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( (__int64)v115 >= v112 )
          {
            v121 = v15->fields.skillBaseList;
            if ( !v121 )
              goto LABEL_313;
            if ( v115 >= v121->max_length )
              goto LABEL_314;
            this = (FriendIconComponent_o *)*((_QWORD *)&v121->obj.klass + v113);
            if ( !this )
              goto LABEL_313;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_313;
            if ( v115 >= skillInfoList->max_length )
              goto LABEL_314;
            v117 = v15->fields.skillBaseList;
            if ( !v117 )
              goto LABEL_313;
            if ( v115 >= v117->max_length )
              goto LABEL_314;
            this = (FriendIconComponent_o *)*((_QWORD *)&v117->obj.klass + v113);
            if ( !this )
              goto LABEL_313;
            v118 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v113);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v119 = v15->fields.skillIconList;
            if ( !v119 )
              goto LABEL_313;
            if ( v115 >= v119->max_length )
              goto LABEL_314;
            if ( !v118 )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&v119->obj.klass + v113);
            if ( !this )
              goto LABEL_313;
            SkillIconComponent__Set_26128472((SkillIconComponent_o *)this, v118[4], v118[5], v118[12], v118[13], 0LL);
            skillLevelIconLabelList = v15->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_313;
            if ( v115 >= skillLevelIconLabelList->max_length )
              goto LABEL_314;
            this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v113);
            if ( !this )
              goto LABEL_313;
            UIIconLabel__Set_41076120((UIIconLabel_o *)this, 48, v118[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v122 = v15->fields.skillIconList;
        if ( !v122 )
          goto LABEL_313;
        v123 = v113 - 3;
        ++v113;
      }
      while ( v123 < (int)v122->max_length );
    }
    skillInfoUiWidget = (UnityEngine_Object_o *)v15->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
    {
      this = (FriendIconComponent_o *)v15->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_313;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_313;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FriendIconComponent_o *)v15->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_313;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.skillInfoUiWidget,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
  }
  else
  {
LABEL_107:
    v104 = v15->fields.skillIconList;
    if ( !v104 )
      goto LABEL_313;
    v105 = 4LL;
    while ( 1 )
    {
      v106 = v105 - 4;
      if ( v105 - 4 >= (int)v104->max_length )
        break;
      v107 = v15->fields.skillBaseList;
      if ( !v107 )
        goto LABEL_313;
      if ( v106 >= v107->max_length )
        goto LABEL_314;
      v108 = (UnityEngine_Object_o *)*((_QWORD *)&v107->obj.klass + v105);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v109 = v15->fields.skillBaseList;
        if ( !v109 )
          goto LABEL_313;
        if ( v106 >= v109->max_length )
        {
LABEL_314:
          v193 = sub_B0D9A8(this);
          sub_B0D948(v193, 0LL);
        }
        this = (FriendIconComponent_o *)*((_QWORD *)&v109->obj.klass + v105);
        if ( !this )
          goto LABEL_313;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v104 = v15->fields.skillIconList;
      ++v105;
      if ( !v104 )
        goto LABEL_313;
    }
    v110 = (UnityEngine_Object_o *)v15->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
    {
      this = (FriendIconComponent_o *)v15->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_313;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_313;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  FriendIconComponent__SetAppendSkill(v15, v62, v111);
  svtCommandCardList = (UnityEngine_Object_o *)v15->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v126 = v15->fields.svtCommandCardList;
    if ( v62 )
    {
      v127 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
      v128 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
      v129 = p_userGameEntity;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v203.fields.currentCryptoKey = v127;
      *(_QWORD *)&v203.fields.fakeValue = v128;
      v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v203, 0LL);
      commandCardParam = v62->fields.commandCardParam;
      v132 = v130;
      this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v62, 0LL);
      if ( !v126 )
        goto LABEL_313;
      ServantCommandCardListComponent__Set_27048524(v126, v132, commandCardParam, (System_Int32_array *)this, 2, 1, 0LL);
      p_userGameEntity = v129;
    }
    else
    {
      if ( !v126 )
        goto LABEL_313;
      ServantCommandCardListComponent__Clear(v15->fields.svtCommandCardList, 0LL);
    }
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_26803592 = Grade__GetKind_26803592(userGameEntity, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_26803592, 0LL);
  baseSpr = v15->fields.baseSpr;
  v136 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v136, 0LL);
  gradeIcon = (UnityEngine_Object_o *)v15->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_313;
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
    {
      playerNameLabel = v15->fields.playerNameLabel;
      this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6759/*"Fonts/FGO-Main-Font"*/, 0LL);
      if ( !playerNameLabel )
        goto LABEL_313;
      if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
      {
        sub_B0DC70(this);
        goto LABEL_320;
      }
      UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
    }
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_313;
    LODWORD(v140) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_313;
    v141 = v140;
    LODWORD(v142) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_313;
    v143 = v142;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_313;
    v146 = LocalPositionX;
    v147 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v147, (float)(v143 * 0.5) + (float)(v141 + v146), 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_313;
    v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v148, 57.0, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_313;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_26803592, 0LL);
  }
  this = (FriendIconComponent_o *)v15->fields.pushSprite;
  if ( !this )
    goto LABEL_313;
  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_313;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v194 )
  {
    if ( !v62 )
      goto LABEL_313;
    if ( userGameEntity->fields.pushUserSvtId == v62->fields.userSvtId )
    {
      this = (FriendIconComponent_o *)v15->fields.pushSprite;
      if ( !this )
        goto LABEL_313;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_313;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  if ( v62 )
  {
    v149 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
    v150 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v204.fields.currentCryptoKey = v149;
    *(_QWORD *)&v204.fields.fakeValue = v150;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v204, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( v195 )
          goto LABEL_219;
        v195 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                      System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                      v151,
                                                                      v152);
        System_Collections_Generic_Dictionary_int__int____ctor(
          v195,
          (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !this )
          goto LABEL_313;
        this = (FriendIconComponent_o *)this->fields.playerNameLabel;
        if ( !this )
          goto LABEL_313;
        Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                       (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
        v174 = Enumerator;
        if ( Enumerator )
        {
          while ( 1 )
          {
            klass = v174->klass;
            if ( *(_WORD *)&v174->klass->_2.bitflags1 )
            {
              v176 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v176;
                p_offset += 4;
                if ( v176 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                  goto LABEL_281;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_281:
              p_method = sub_AA67A0(v174, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    v174,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v179 = v174->klass;
            if ( *(_WORD *)&v174->klass->_2.bitflags1 )
            {
              v180 = 0LL;
              v181 = &v179->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v181 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
              {
                ++v180;
                v181 += 4;
                if ( v180 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                  goto LABEL_288;
              }
              v182 = (__int64)&v179->vtable[*v181].method;
            }
            else
            {
LABEL_288:
              v182 = sub_AA67A0(v174, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
            }
            v183 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v182)(
                     v174,
                     *(_QWORD *)(v182 + 8));
            v184 = v183;
            if ( v183 )
            {
              v185 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v183 + 300LL) < (unsigned int)v185
                || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v183 + 200LL) + 8 * v185 - 8) != ClassBoardBaseEntity_TypeInfo )
              {
                sub_B0DC70(v183);
LABEL_316:
                sub_B0D97C(v186);
              }
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v186 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v184 )
              goto LABEL_316;
            if ( !v186 )
              sub_B0D97C(0LL);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v186, *(_DWORD *)(v184 + 16), 0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !v195 )
                sub_B0D97C(OtherThanNoneEntity);
              System_Collections_Generic_Dictionary_int__int___Add(
                v195,
                *(_DWORD *)(v184 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v197 = 0x10000061FLL;
          if ( v174 )
          {
            v188 = v174->klass;
            if ( *(_WORD *)&v174->klass->_2.bitflags1 )
            {
              v189 = 0LL;
              v190 = &v188->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v190 - 1) != System_IDisposable_TypeInfo )
              {
                ++v189;
                v190 += 4;
                if ( v189 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                  goto LABEL_306;
              }
              v191 = (__int64)&v188->vtable[*v190].method;
            }
            else
            {
LABEL_306:
              v191 = sub_AA67A0(v174, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v191)(
              v174,
              *(_QWORD *)(v191 + 8));
          }
          v197 = 1567LL;
LABEL_219:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v153 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
          v155 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
          v154 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
          v156 = (DataMasterBase_WarMaster__WarEntity__int__o *)v153;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v205.fields.currentCryptoKey = v155;
          *(_QWORD *)&v205.fields.fakeValue = v154;
          this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v205, 0LL);
          if ( !v156 )
            goto LABEL_313;
          this = (FriendIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v156,
                                            (int32_t)this,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_313;
          v157 = (int32_t)this->fields.skillBaseList;
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_313;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)this, v157, 0LL);
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_313;
          this = (FriendIconComponent_o *)ClassBoardClassMaster__IsInvalidClass(
                                            (ClassBoardClassMaster_o *)this,
                                            v157,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_239;
          userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_313;
          v160 = userClassBoardInfo->max_length;
          if ( v160 < 1 )
          {
LABEL_239:
            v163 = 0;
          }
          else
          {
            v161 = 0;
            while ( 1 )
            {
              if ( v161 >= v160 )
                goto LABEL_314;
              v162 = userClassBoardInfo->m_Items[v161];
              if ( !v162 )
                goto LABEL_313;
              if ( v162->fields.classBoardBaseId == ClassBoardBaseId )
              {
                this = (FriendIconComponent_o *)v195;
                if ( !v195 )
                  goto LABEL_313;
                this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                  v195,
                                                  ClassBoardBaseId,
                                                  (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) != 0 )
                  break;
              }
              v160 = userClassBoardInfo->max_length;
              if ( (int)++v161 >= v160 )
                goto LABEL_239;
            }
            this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v195,
                                              ClassBoardBaseId,
                                              (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v162->fields.squareIds;
            if ( !squareIds )
              goto LABEL_313;
            v163 = squareIds->max_length;
            v164 = (int)this <= v163;
            if ( (int)this > 0 )
            {
LABEL_241:
              openClassBoardNumLabel = (UnityEngine_Object_o *)v15->fields.openClassBoardNumLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
              {
                v166 = (Il2CppObject **)&StringLiteral_6352/*"FFFFFF"*/;
                if ( v164 )
                  v166 = (Il2CppObject **)&StringLiteral_6351/*"FFFF00"*/;
                v167 = *v166;
                v196 = v163;
                v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v196);
                this = (FriendIconComponent_o *)System_String__Format_43845440(
                                                  (System_String_o *)StringLiteral_15877/*"[{0}]+{1}[-]"*/,
                                                  v167,
                                                  v168,
                                                  0LL);
                if ( !v15->fields.openClassBoardNumLabel )
                  goto LABEL_313;
                UILabel__set_text(v15->fields.openClassBoardNumLabel, (System_String_o *)this, 0LL);
              }
              classBoardOpenButton = (UnityEngine_Object_o *)v15->fields.classBoardOpenButton;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v15->fields.classBoardOpenButton;
                if ( !this )
                  goto LABEL_313;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_313;
                v170 = 1;
LABEL_263:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v170, 0LL);
                goto LABEL_264;
              }
              goto LABEL_264;
            }
          }
          v164 = 0;
          goto LABEL_241;
        }
LABEL_320:
        sub_B0D97C(Enumerator);
      }
    }
  }
  v171 = (UnityEngine_Object_o *)v15->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_313;
    this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_313;
    v170 = 0;
    goto LABEL_263;
  }
LABEL_264:
  baseButton = (UnityEngine_Object_o *)v15->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.baseButton;
    if ( !this )
      goto LABEL_313;
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
  SwitchUIWidgetComponent_o *v33; // x19
  __int64 v34; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_4217631 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, info);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (FriendIconComponent_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4217631 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !info )
      goto LABEL_20;
    v9 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v9;
    *(_QWORD *)&v36.fields.fakeValue = v8;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v36, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(info, &skillInfoList, 0, 0LL);
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
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
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
              SkillIconComponent__Set_26128472((SkillIconComponent_o *)this, v25[4], v25[5], v25[12], v25[13], 0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v22 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              UIIconLabel__Set_41076120((UIIconLabel_o *)this, 48, v25[5], 0, 0, 0LL, 0, 0, 0, 0LL);
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
      {
        switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
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
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.appendSkillInfoUiWidget,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          v33 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v33 )
            goto LABEL_75;
          SwitchUIWidgetComponent__Set(v33, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_20:
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
          {
LABEL_76:
            v34 = sub_B0D9A8(this);
            sub_B0D948(v34, 0LL);
          }
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
        sub_B0D97C(this);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}