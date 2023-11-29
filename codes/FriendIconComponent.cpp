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

  if ( (byte_40FA79C & 1) == 0 )
  {
    sub_B16FFC(&FriendIconComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19444, v8);
    byte_40FA79C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FriendIconComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19444;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19444;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  struct SkillIconComponent_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  struct UIIconLabel_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  struct UnityEngine_GameObject_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x2
  struct SkillIconComponent_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  struct UIIconLabel_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FA79B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UIIconLabel___TypeInfo, v6);
    byte_40FA79B = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax,
                                                v2);
  this->fields.skillBaseList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                             v15);
  this->fields.skillIconList = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                      v23);
  this->fields.skillLevelIconLabelList = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v32 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                                 v31);
  this->fields.appendSkillBaseList = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                             v39);
  this->fields.appendSkillIconList = v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                      v47);
  this->fields.appendSkillLevelIconLabelList = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v21; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v25; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v27; // x19

  if ( (byte_40FA78E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19290, v9);
    sub_B16FFC(&StringLiteral_19421, v10);
    sub_B16FFC(&StringLiteral_19201, v11);
    sub_B16FFC(&StringLiteral_19420, v12);
    byte_40FA78E = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v21 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v21, (System_String_o *)StringLiteral_19290, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v23 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_19421, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v25 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_19201, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v27 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_19420, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA79A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA79A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40FA792 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FA792 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA796 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA796 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v11, 0LL);
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
    sub_B170D4();
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusDialog_EndDelegate_o *v14; // x22

  if ( (byte_40FA791 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B16FFC(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA791 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v10,
                                                   v11,
                                                   v12,
                                                   v13);
      ServantStatusDialog_EndDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_B170D4();
      CommonUI__OpenServantStatusDialog_18250312(Instance, 5, v8, v14, 0LL);
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
  int32_t v22; // w0
  WarEntity_o *Entity; // x0
  int32_t startType; // w21
  ClassBoardClassMaster_o *v25; // x0
  int32_t ClassBoardBaseId; // w20
  ClassBoardClassMaster_o *v27; // x0
  _BOOL8 IsInvalidClass; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct OtherUserGameEntity_o *v33; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v36; // w10
  __int64 v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  _QWORD **v44; // x23
  __int64 v45; // x22
  __int16 v46; // w8
  __int64 v47; // x22
  __int64 v48; // x22
  __int64 v49; // x22
  System_Int32_array ***v50; // x8
  System_Int32_array **v51; // x1
  CommonUI_o *Instance; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_40FA799 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Array_Empty_int___, v3);
    sub_B16FFC(&ClassBoardInfo_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_B16FFC(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FA799 = 1;
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
        v16 = (_QWORD *)sub_B17004(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_B16FE0(v16, v16[3]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v20;
      *(_QWORD *)&v58.fields.fakeValue = v19;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
      if ( !v21 )
        goto LABEL_42;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v21,
                 v22,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_42;
      startType = Entity->fields.startType;
      v25 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !v25 )
        goto LABEL_42;
      ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v25, startType, 0LL);
      v27 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !v27 )
        goto LABEL_42;
      IsInvalidClass = ClassBoardClassMaster__IsInvalidClass(v27, startType, 0LL);
      if ( !IsInvalidClass )
      {
        v33 = this->fields.userGameEntity;
        if ( !v33 )
          goto LABEL_42;
        userClassBoardInfo = v33->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_42;
        max_length = userClassBoardInfo->max_length;
        if ( max_length >= 1 )
        {
          v36 = 0;
          while ( 1 )
          {
            if ( v36 >= max_length )
            {
              sub_B17100(IsInvalidClass, v29, v30);
              sub_B170A0();
            }
            v37 = (__int64)userClassBoardInfo->m_Items[v36];
            if ( !v37 )
              break;
            if ( *(_DWORD *)(v37 + 16) == ClassBoardBaseId )
              goto LABEL_39;
            if ( (int)++v36 >= max_length )
              goto LABEL_26;
          }
LABEL_42:
          sub_B170D4();
        }
      }
LABEL_26:
      v37 = sub_B170CC(ClassBoardInfo_TypeInfo, v29, v30, v31, v32);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v37, 0LL);
      if ( !v37 )
        goto LABEL_42;
      *(_DWORD *)(v37 + 16) = ClassBoardBaseId;
      v44 = (_QWORD **)Method_System_Array_Empty_int___;
      v45 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v46 = *(_WORD *)(v45 + 306);
      if ( (v46 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v46 = *(_WORD *)(v45 + 306);
      }
      if ( (v46 & 0x400) != 0 )
      {
        v47 = *v44[6];
        if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
          sub_AAFCFC(*v44[6]);
        if ( !*(_DWORD *)(v47 + 224) )
        {
          v48 = *v44[6];
          if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
            sub_AAFCFC(*v44[6]);
          j_il2cpp_runtime_class_init_0(v48);
        }
      }
      v49 = *v44[6];
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_AAFCFC(*v44[6]);
      v50 = *(System_Int32_array ****)(v49 + 184);
      v51 = *v50;
      *(_QWORD *)(v37 + 24) = *v50;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 24), v51, v38, v39, v40, v41, v42, v43);
LABEL_39:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
      System_Action___ctor(
        v57,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
        goto LABEL_42;
      CommonUI__OpenClassBoardEffectListDialog(Instance, 1, ClassBoardBaseId, 0, v57, 1, (ClassBoardInfo_o *)v37, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  SupportInfoJump_o *v10; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FA794 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v4);
    byte_40FA794 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v10 = (SupportInfoJump_o *)sub_B170CC(SupportInfoJump_TypeInfo, v6, v7, v8, v9);
  SupportInfoJump___ctor(v10, userGameEntity, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v10, 0LL);
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
  OtherUserGameEntity_o *v7; // x0
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40FA797 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FA797 = 1;
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
  v7 = this->fields.userGameEntity;
  if ( !v7 )
LABEL_28:
    sub_B170D4();
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                v7,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v9 = EquipInfo;
    v11 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( this->fields.followerType == 5 )
        v13 = 14;
      else
        v13 = 13;
      if ( this->fields.followerType != 5 && v6 )
      {
        if ( ServantLeaderInfo__IsNpc(v6, 0LL) )
          v13 = 19;
        else
          v13 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v9, v13, v12);
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
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  SkillInfo_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  System_String_o *v24; // x19
  System_String_o *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  CommonUI_o *Instance; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FA798 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_80, v11);
    sub_B16FFC(&StringLiteral_8603, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FA798 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_27;
        if ( skillInfoList->max_length <= skillIndex )
        {
          sub_B17100(v16, v17, v18);
          sub_B170A0();
        }
        v19 = skillInfoList->m_Items[skillIndex];
        if ( v19 && v19->fields.id >= 1 && v19->fields.lv >= 1 )
        {
          v20 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
            v20 = (_QWORD *)sub_B17004(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v21 = (System_Reflection_MethodBase_o *)sub_B16FE0(v20, v20[3]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        Master_WarQuestSelectionMaster,
                                        v19->fields.id,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Entity )
            {
              SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v19->fields.lv, 0LL);
              v24 = name;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
              lv = v19->fields.lv;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v27 = System_String__Format(v25, v26, 0LL);
              name = System_String__Concat_43746016(v24, (System_String_o *)StringLiteral_80, v27, 0LL);
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( Instance )
              {
                CommonUI__OpenDetailLongInfoDialog(
                  Instance,
                  name,
                  (System_String_o *)StringLiteral_1,
                  detail,
                  1,
                  0,
                  0LL);
                return;
              }
            }
          }
LABEL_27:
          sub_B170D4();
        }
      }
    }
  }
  v29 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
    v29 = (_QWORD *)sub_B17004(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v30 = (System_Reflection_MethodBase_o *)sub_B16FE0(v29, v29[3]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t max_length; // w9
  SkillInfo_o *v22; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x20
  WebViewManager_o *v26; // x0
  SkillLvMaster_o *v27; // x0
  SkillLvEntity_o *v28; // x0
  SkillLvEntity_o *v29; // x19
  System_String_o *v30; // x20
  System_String_o *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x19
  CommonUI_o *v38; // x0
  int32_t chargeTurn; // [xsp+0h] [xbp-40h] BYREF
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA793 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_80, v12);
    sub_B16FFC(&StringLiteral_8603, v13);
    sub_B16FFC(&StringLiteral_2508, v14);
    byte_40FA793 = 1;
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
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v22 = skillInfoList->m_Items[skillIndex];
  if ( v22 && v22->fields.id >= 1 && v22->fields.lv >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                v22->fields.id,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      goto LABEL_32;
    v27 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v26,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !v27 )
      goto LABEL_32;
    v28 = SkillLvMaster__GetEntity(v27, v22->fields.id, v22->fields.lv, 0LL);
    if ( !Entity )
      goto LABEL_32;
    v29 = v28;
    SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v22->fields.lv, 0LL);
    v30 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
    lv = v22->fields.lv;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v33 = System_String__Format(v31, v32, 0LL);
    name = System_String__Concat_43746016(v30, (System_String_o *)StringLiteral_80, v33, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2508, 0LL);
    if ( !v29
      || (v35 = v34,
          chargeTurn = v29->fields.chargeTurn,
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn),
          v37 = System_String__Format(v35, v36, 0LL),
          (v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_32:
      sub_B170D4();
    }
    CommonUI__OpenDetailLongInfoDialog(v38, name, v37, detail, 1, 0, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusDialog_EndDelegate_o *v14; // x23

  if ( (byte_40FA795 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B16FFC(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40FA795 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantEquipStatusDialog_18252676(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
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
  struct OtherUserGameEntity_o *v55; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x27
  const MethodInfo *v57; // x1
  int32_t TargetDeckId; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  int32_t SvtId; // w0
  ServantEntity_o *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v64; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  ServantEntity_o *v66; // x21
  __int64 v67; // x20
  __int64 v68; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UILabel_o *playerNameLabel; // x0
  UIIconLabel_o *playerLevelIconLabel; // x0
  System_String_o *overwriteServantName; // x26
  bool IsNullOrEmpty; // w0
  struct UIRangeLabel_o *servantNameLabel; // x25
  System_String_o *Name; // x0
  System_String_o *v76; // x1
  UIRangeLabel_o *v77; // x0
  UIRangeLabel_o *v78; // x25
  System_String_o *v79; // x0
  UIRangeLabel_o *v80; // x25
  System_String_o *v81; // x0
  UnityEngine_Object_o *v82; // x20
  ServantNpCommandCardComponent_o *v83; // x0
  int32_t TreasureDeviceLevelIcon; // w25
  __int64 v85; // x20
  __int64 v86; // x20
  DataManager_o *v87; // x0
  ServantLimitAddMaster_o *v88; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  WebViewManager_o *v90; // x0
  ServantLimitSpoilerProtectionMaster_o *v91; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v93; // x20
  __int64 v94; // x24
  ServantLimitImageMaster_o *v95; // x28
  int32_t v96; // w0
  int32_t ServantLimitCountSealAfter; // w27
  int32_t v98; // w0
  System_String_o *OverwriteTDName; // x0
  System_String_o **v100; // x9
  bool v101; // cc
  Il2CppObject *v102; // x25
  System_String_o *v103; // x20
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  System_String_o *v106; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x26
  System_String_o *IconName; // x0
  UnityEngine_Object_o *svtNpCommandCard; // x20
  ServantNpCommandCardComponent_o *v110; // x0
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  System_String_o *v113; // x0
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 IsInvalidClass; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  SwitchUIWidgetComponent_o *v118; // x0
  SwitchParameterDisplayManager_o *v119; // x0
  __int64 v120; // x20
  __int64 v121; // x25
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v123; // x8
  int v124; // w9
  unsigned __int64 v125; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v127; // x14
  struct SkillIconComponent_array *v128; // x8
  __int64 v129; // x21
  unsigned __int64 v130; // x24
  struct UnityEngine_GameObject_array *v131; // x8
  UnityEngine_Object_o *v132; // x20
  struct UnityEngine_GameObject_array *v133; // x8
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_Object_o *v135; // x20
  const MethodInfo *v136; // x2
  UnityEngine_Component_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  signed __int64 v139; // x21
  __int64 v140; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v142; // x25
  UnityEngine_Object_o *v143; // x20
  struct UnityEngine_GameObject_array *v144; // x9
  UnityEngine_GameObject_o *v145; // x0
  int32_t *v146; // x20
  struct SkillIconComponent_array *v147; // x8
  SkillIconComponent_o *v148; // x0
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  UIIconLabel_o *v150; // x0
  struct UnityEngine_GameObject_array *v151; // x8
  UnityEngine_GameObject_o *v152; // x0
  struct SkillIconComponent_array *v153; // x8
  __int64 v154; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v160; // x25
  __int64 v161; // x20
  __int64 v162; // x26
  struct OtherUserGameEntity_o **v163; // x21
  int32_t v164; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v166; // w27
  System_Int32_array *CommandCodeIdList; // x0
  int32_t Kind_28870480; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x20
  System_String_o *v171; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UILabel_o *v173; // x0
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *v175; // x26
  UnityEngine_Font_o *v176; // x0
  UILabel_o *v177; // x0
  float v178; // s0
  UserGradeComponent_o *v179; // x0
  float v180; // s8
  float v181; // s0
  UnityEngine_Component_o *v182; // x0
  float v183; // s9
  UnityEngine_GameObject_o *v184; // x0
  float LocalPositionX; // s0
  UnityEngine_Component_o *v186; // x0
  float v187; // s10
  UnityEngine_GameObject_o *v188; // x0
  UnityEngine_Component_o *v189; // x0
  UnityEngine_GameObject_o *v190; // x0
  UserGradeComponent_o *v191; // x0
  UnityEngine_Component_o *pushSprite; // x0
  UnityEngine_GameObject_o *v193; // x0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  __int64 v196; // x20
  __int64 v197; // x24
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  __int64 v201; // x4
  WarQuestSelectionMaster_o *v202; // x0
  __int64 v203; // x20
  __int64 v204; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v205; // x23
  int32_t v206; // w0
  WarEntity_o *v207; // x0
  int32_t startType; // w24
  ClassBoardClassMaster_o *v209; // x0
  int32_t ClassBoardBaseId; // w23
  ClassBoardClassMaster_o *v211; // x0
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v213; // w8
  unsigned int v214; // w21
  ClassBoardInfo_o *v215; // x24
  int v216; // w21
  _BOOL4 v217; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v219; // x8
  Il2CppObject *v220; // x20
  Il2CppObject *v221; // x0
  System_String_o *v222; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_Component_o *v224; // x0
  UnityEngine_GameObject_o *v225; // x0
  bool v226; // w1
  UnityEngine_Object_o *v227; // x20
  UnityEngine_Component_o *v228; // x0
  UnityEngine_Object_o *baseButton; // x20
  UICommonButton_o *v230; // x0
  WarQuestSelectionMaster_o *v231; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v235; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v238; // x8
  unsigned __int64 v239; // x10
  int32_t *v240; // x11
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x25
  __int64 v244; // x9
  ClassBoardSquareMaster_o *v245; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v247; // x8
  unsigned __int64 v248; // x10
  int32_t *v249; // x11
  __int64 v250; // x0
  int32_t Item; // w0
  struct System_Int32_array *squareIds; // x8
  ServantEntity_o *v253; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__int__o *v254; // [xsp+20h] [xbp-90h]
  int v255; // [xsp+2Ch] [xbp-84h] BYREF
  __int64 v256; // [xsp+30h] [xbp-80h]
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v259; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v261; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16

  v9 = followerDeckId;
  v11 = displayServantType;
  v12 = classPos;
  v254 = classBoardMaxNumDictionary;
  if ( (byte_40FA78F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, userGameEntity);
    sub_B16FFC(&ClassBoardBaseEntity_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v25);
    sub_B16FFC(&DataManager_TypeInfo, v26);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v31);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v32);
    sub_B16FFC(&UnityEngine_Font_TypeInfo, v33);
    sub_B16FFC(&Grade_TypeInfo, v34);
    sub_B16FFC(&System_IDisposable_TypeInfo, v35);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v36);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v37);
    sub_B16FFC(&int_TypeInfo, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v39);
    sub_B16FFC(&LocalizationManager_TypeInfo, v40);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v41);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_B16FFC(&OptionManager_TypeInfo, v43);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v44);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v46);
    sub_B16FFC(&StringLiteral_3267, v47);
    sub_B16FFC(&StringLiteral_6716, v48);
    sub_B16FFC(&StringLiteral_6317, v49);
    sub_B16FFC(&StringLiteral_9352, v50);
    sub_B16FFC(&StringLiteral_6316, v51);
    sub_B16FFC(&StringLiteral_9324, v52);
    sub_B16FFC(&StringLiteral_9346, v53);
    sub_B16FFC(&StringLiteral_15767, v54);
    byte_40FA78F = 1;
  }
  if ( isUseServantStatus )
    v55 = userGameEntity;
  else
    v55 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  HIDWORD(v256) = 0;
  if ( !this )
    goto LABEL_311;
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)v55,
    (System_String_array **)isUseServantStatus,
    *(System_String_array ***)&classPos,
    *(System_Boolean_array ***)&displayServantType,
    *(System_Int32_array ***)&ftype,
    *(System_Int32_array **)&followerDeckId,
    (System_Int32_array *)classBoardMaxNumDictionary);
  this->fields.classPos = v12;
  this->fields.displayServantType = v11;
  this->fields.followerType = ftype;
  if ( !userGameEntity )
    goto LABEL_264;
  if ( !v9 )
  {
    TargetDeckId = FriendIconComponent__GetTargetDeckId(this, v57);
    v11 = this->fields.displayServantType;
    v12 = this->fields.classPos;
    v9 = TargetDeckId;
  }
  this->fields.deckId = v9;
  if ( OtherUserGameEntity__getSvtId(userGameEntity, v12, v11, v9, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_311;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    SvtId = OtherUserGameEntity__getSvtId(
              userGameEntity,
              this->fields.classPos,
              this->fields.displayServantType,
              this->fields.deckId,
              0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_311;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  SvtId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        1,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  v64 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v66 = Entity;
        v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v259.fields.currentCryptoKey = v67;
        *(_QWORD *)&v259.fields.fakeValue = v68;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v259, 0LL) )
          v64 = 0LL;
        Entity = v66;
      }
    }
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_311;
  ServantFaceIconComponent__Set_30632248(servantFaceIcon, v64, 0LL, 0LL, 0, 0, 0LL);
  playerNameLabel = this->fields.playerNameLabel;
  if ( !playerNameLabel )
    goto LABEL_311;
  UILabel__set_text(playerNameLabel, userGameEntity->fields.userName, 0LL);
  playerLevelIconLabel = this->fields.playerLevelIconLabel;
  if ( !playerLevelIconLabel )
    goto LABEL_311;
  UIIconLabel__Set_40377052(playerLevelIconLabel, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  v253 = Entity;
  if ( Entity )
  {
    if ( !v64 )
      goto LABEL_311;
    overwriteServantName = v64->fields.overwriteServantName;
    IsNullOrEmpty = System_String__IsNullOrEmpty(overwriteServantName, 0LL);
    servantNameLabel = this->fields.servantNameLabel;
    if ( IsNullOrEmpty )
    {
      Name = ServantEntity__getName(Entity, v64->fields.limitCount, -1, 0LL);
      if ( !servantNameLabel )
        goto LABEL_311;
      v76 = Name;
      v77 = servantNameLabel;
    }
    else
    {
      if ( !servantNameLabel )
        goto LABEL_311;
      v77 = this->fields.servantNameLabel;
      v76 = overwriteServantName;
    }
    UIRangeLabel__Set(v77, v76, 0LL, 1, 0, 0LL);
    OtherUserGameEntity__getTreasureDeviceInfo(
      userGameEntity,
      &tdInfo,
      this->fields.classPos,
      this->fields.displayServantType,
      this->fields.deckId,
      0LL);
    TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                userGameEntity,
                                this->fields.classPos,
                                this->fields.displayServantType,
                                this->fields.deckId,
                                0LL);
    v85 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v85 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v86 = **(_QWORD **)(v85 + 192);
    if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
      sub_AAFCFC(v86);
    v87 = **(DataManager_o ***)(v86 + 184);
    if ( v87 )
    {
      v88 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v87,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v64, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        v90 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v90 )
          goto LABEL_311;
        v91 = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v90,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !v91 )
          goto LABEL_311;
        FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                       v91,
                                       v64->fields.svtId,
                                       FriendNpNameDispLimitCount,
                                       0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v94 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      v95 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v260.fields.currentCryptoKey = v94;
      *(_QWORD *)&v260.fields.fakeValue = v93;
      v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v260, 0LL);
      if ( v95 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v95,
                                       v96,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64->fields.svtId, 0LL);
        if ( tdInfo )
        {
          if ( v88 )
          {
            OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                v88,
                                v98,
                                ServantLimitCountSealAfter,
                                tdInfo->fields.name,
                                tdInfo->fields.lv,
                                0LL);
            v100 = (System_String_o **)&StringLiteral_9352;
            v101 = TreasureDeviceLevelIcon <= 1;
            v102 = (Il2CppObject *)OverwriteTDName;
            if ( v101 )
              v100 = (System_String_o **)&StringLiteral_9346;
            v103 = *v100;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v104 = LocalizationManager__Get(v103, 0LL);
            v105 = System_String__Format(v104, v102, 0LL);
            if ( tdInfo )
            {
              v106 = v105;
              svtNpTitleLabel = this->fields.svtNpTitleLabel;
              p_userGameEntity = &this->fields.userGameEntity;
              IconName = StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
              if ( svtNpTitleLabel )
              {
                UIRangeLabel__Set(svtNpTitleLabel, v106, IconName, 0, 0, 0LL);
                svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
                {
                  v110 = this->fields.svtNpCommandCard;
                  if ( !v110 )
                    goto LABEL_311;
                  ServantNpCommandCardComponent__Set(v110, tdInfo, 0LL);
                }
                goto LABEL_80;
              }
            }
          }
        }
      }
    }
LABEL_311:
    sub_B170D4();
  }
  v78 = this->fields.servantNameLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_3267, 0LL);
  if ( !v78 )
    goto LABEL_311;
  UIRangeLabel__Set(v78, v79, 0LL, 1, 0, 0LL);
  v80 = this->fields.svtNpTitleLabel;
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_9324, 0LL);
  if ( !v80 )
    goto LABEL_311;
  UIRangeLabel__Set(v80, v81, 0LL, 1, 0, 0LL);
  v82 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    v83 = this->fields.svtNpCommandCard;
    if ( !v83 )
      goto LABEL_311;
    ServantNpCommandCardComponent__Clear(v83, 0LL);
  }
LABEL_80:
  loginDataLabel = this->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, this->fields.classPos, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v113 = LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
  if ( !loginDataLabel )
    goto LABEL_311;
  UILabel__set_text(loginDataLabel, v113, 0LL);
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsInvalidClass = UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
  if ( (IsInvalidClass & 1) != 0 )
  {
    v118 = this->fields.switchSkillInfo;
    if ( !v118 )
      goto LABEL_311;
    SwitchUIWidgetComponent__Clear(v118, 0LL);
    v119 = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !v119 )
      goto LABEL_311;
    SwitchParameterDisplayManager__Reset(v119, 0LL);
  }
  if ( !v64 )
    goto LABEL_107;
  v120 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v261.fields.currentCryptoKey = v120;
  *(_QWORD *)&v261.fields.fakeValue = v121;
  IsInvalidClass = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v261, 0LL);
  if ( (int)IsInvalidClass >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(v64, &skillInfoList, 0LL);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_311;
    v123 = *(_QWORD *)&skillIconList->max_length;
    if ( v123 << 32 >= 1 )
    {
      v124 = 0;
      v125 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v125 < (int)max_length )
        {
          if ( v125 >= max_length )
            goto LABEL_312;
          v127 = skillInfoList->m_Items[v125];
          if ( v127 && v127->fields.id >= 1 )
            v124 = v125 + 1;
        }
        if ( (__int64)++v125 >= (int)v123 )
          goto LABEL_130;
      }
      goto LABEL_311;
    }
    v124 = 0;
LABEL_130:
    if ( (int)v123 >= 1 )
    {
      v139 = v124;
      v140 = 4LL;
      do
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_311;
        v142 = v140 - 4;
        if ( v140 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_312;
        v143 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v140);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsInvalidClass = UnityEngine_Object__op_Inequality(v143, 0LL, 0LL);
        if ( (IsInvalidClass & 1) != 0 )
        {
          if ( (__int64)v142 >= v139 )
          {
            v151 = this->fields.skillBaseList;
            if ( !v151 )
              goto LABEL_311;
            if ( v142 >= v151->max_length )
              goto LABEL_312;
            v152 = (UnityEngine_GameObject_o *)*((_QWORD *)&v151->obj.klass + v140);
            if ( !v152 )
              goto LABEL_311;
            UnityEngine_GameObject__SetActive(v152, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_311;
            if ( v142 >= skillInfoList->max_length )
              goto LABEL_312;
            v144 = this->fields.skillBaseList;
            if ( !v144 )
              goto LABEL_311;
            if ( v142 >= v144->max_length )
              goto LABEL_312;
            v145 = (UnityEngine_GameObject_o *)*((_QWORD *)&v144->obj.klass + v140);
            if ( !v145 )
              goto LABEL_311;
            v146 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v140);
            UnityEngine_GameObject__SetActive(v145, 1, 0LL);
            v147 = this->fields.skillIconList;
            if ( !v147 )
              goto LABEL_311;
            if ( v142 >= v147->max_length )
              goto LABEL_312;
            if ( !v146 )
              goto LABEL_311;
            v148 = (SkillIconComponent_o *)*((_QWORD *)&v147->obj.klass + v140);
            if ( !v148 )
              goto LABEL_311;
            SkillIconComponent__Set_23612468(v148, v146[4], v146[5], v146[12], v146[13], 0LL);
            skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_311;
            if ( v142 >= skillLevelIconLabelList->max_length )
              goto LABEL_312;
            v150 = (UIIconLabel_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v140);
            if ( !v150 )
              goto LABEL_311;
            UIIconLabel__Set_40377052(v150, 48, v146[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v153 = this->fields.skillIconList;
        if ( !v153 )
          goto LABEL_311;
        v154 = v140 - 3;
        ++v140;
      }
      while ( v154 < (int)v153->max_length );
    }
    skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
    {
      v156 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
      if ( !v156 )
        goto LABEL_311;
      gameObject = UnityEngine_Component__get_gameObject(v156, 0LL);
      if ( !gameObject )
        goto LABEL_311;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      switchSkillUIList = this->fields.switchSkillUIList;
      if ( !switchSkillUIList )
        goto LABEL_311;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
  }
  else
  {
LABEL_107:
    v128 = this->fields.skillIconList;
    if ( !v128 )
      goto LABEL_311;
    v129 = 4LL;
    while ( 1 )
    {
      v130 = v129 - 4;
      if ( v129 - 4 >= (int)v128->max_length )
        break;
      v131 = this->fields.skillBaseList;
      if ( !v131 )
        goto LABEL_311;
      if ( v130 >= v131->max_length )
        goto LABEL_312;
      v132 = (UnityEngine_Object_o *)*((_QWORD *)&v131->obj.klass + v129);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsInvalidClass = UnityEngine_Object__op_Inequality(v132, 0LL, 0LL);
      if ( (IsInvalidClass & 1) != 0 )
      {
        v133 = this->fields.skillBaseList;
        if ( !v133 )
          goto LABEL_311;
        if ( v130 >= v133->max_length )
        {
LABEL_312:
          sub_B17100(IsInvalidClass, v116, v117);
          sub_B170A0();
        }
        v134 = (UnityEngine_GameObject_o *)*((_QWORD *)&v133->obj.klass + v129);
        if ( !v134 )
          goto LABEL_311;
        UnityEngine_GameObject__SetActive(v134, 0, 0LL);
      }
      v128 = this->fields.skillIconList;
      ++v129;
      if ( !v128 )
        goto LABEL_311;
    }
    v135 = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
    {
      v137 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
      if ( !v137 )
        goto LABEL_311;
      v138 = UnityEngine_Component__get_gameObject(v137, 0LL);
      if ( !v138 )
        goto LABEL_311;
      UnityEngine_GameObject__SetActive(v138, 0, 0LL);
    }
  }
  FriendIconComponent__SetAppendSkill(this, v64, v136);
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
  {
    v160 = this->fields.svtCommandCardList;
    if ( v64 )
    {
      v161 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v162 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      v163 = p_userGameEntity;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v262.fields.currentCryptoKey = v161;
      *(_QWORD *)&v262.fields.fakeValue = v162;
      v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v262, 0LL);
      commandCardParam = v64->fields.commandCardParam;
      v166 = v164;
      CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(v64, 0LL);
      if ( !v160 )
        goto LABEL_311;
      ServantCommandCardListComponent__Set_30472172(v160, v166, commandCardParam, CommandCodeIdList, 2, 1, 0LL);
      p_userGameEntity = v163;
    }
    else
    {
      if ( !v160 )
        goto LABEL_311;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28870480 = Grade__GetKind_28870480(userGameEntity, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28870480, 0LL);
  baseSpr = this->fields.baseSpr;
  v171 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v171, 0LL);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    v173 = this->fields.playerNameLabel;
    if ( !v173 )
      goto LABEL_311;
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(v173, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
    {
      v175 = this->fields.playerNameLabel;
      v176 = (UnityEngine_Font_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6716, 0LL);
      if ( !v175 )
        goto LABEL_311;
      if ( v176 && v176->klass != UnityEngine_Font_TypeInfo )
      {
        sub_B173C8(v176);
        goto LABEL_318;
      }
      UILabel__set_trueTypeFont(v175, v176, 0LL);
    }
    v177 = this->fields.playerNameLabel;
    if ( !v177 )
      goto LABEL_311;
    LODWORD(v178) = *(_QWORD *)&UILabel__get_printedSize(v177, 0LL);
    v179 = this->fields.gradeIcon;
    if ( !v179 )
      goto LABEL_311;
    v180 = v178;
    LODWORD(v181) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(v179, 0LL);
    v182 = (UnityEngine_Component_o *)this->fields.playerNameLabel;
    if ( !v182 )
      goto LABEL_311;
    v183 = v181;
    v184 = UnityEngine_Component__get_gameObject(v182, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v184, 0LL);
    v186 = (UnityEngine_Component_o *)this->fields.gradeIcon;
    if ( !v186 )
      goto LABEL_311;
    v187 = LocalPositionX;
    v188 = UnityEngine_Component__get_gameObject(v186, 0LL);
    GameObjectExtensions__SetLocalPositionX(v188, (float)(v183 * 0.5) + (float)(v180 + v187), 0LL);
    v189 = (UnityEngine_Component_o *)this->fields.gradeIcon;
    if ( !v189 )
      goto LABEL_311;
    v190 = UnityEngine_Component__get_gameObject(v189, 0LL);
    GameObjectExtensions__SetLocalPositionY(v190, 57.0, 0LL);
    v191 = this->fields.gradeIcon;
    if ( !v191 )
      goto LABEL_311;
    UserGradeComponent__Set(v191, Kind_28870480, 0LL);
  }
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_311;
  v193 = UnityEngine_Component__get_gameObject(pushSprite, 0LL);
  if ( !v193 )
    goto LABEL_311;
  UnityEngine_GameObject__SetActive(v193, 0, 0LL);
  if ( v253 )
  {
    if ( !v64 )
      goto LABEL_311;
    if ( userGameEntity->fields.pushUserSvtId == v64->fields.userSvtId )
    {
      v194 = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !v194 )
        goto LABEL_311;
      v195 = UnityEngine_Component__get_gameObject(v194, 0LL);
      if ( !v195 )
        goto LABEL_311;
      UnityEngine_GameObject__SetActive(v195, 1, 0LL);
    }
  }
  if ( v64 )
  {
    v196 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
    v197 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v263.fields.currentCryptoKey = v196;
    *(_QWORD *)&v263.fields.fakeValue = v197;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v263, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( v254 )
          goto LABEL_219;
        v254 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                      System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                      v198,
                                                                      v199,
                                                                      v200,
                                                                      v201);
        System_Collections_Generic_Dictionary_int__int____ctor(
          v254,
          (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v231 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !v231 )
          goto LABEL_311;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v231->fields.list;
        if ( !list )
          goto LABEL_311;
        Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                       list,
                       (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
        if ( Enumerator )
        {
          while ( 1 )
          {
            klass = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v235 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v235;
                p_offset += 4;
                if ( v235 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_281;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_281:
              p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v238 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v239 = 0LL;
              v240 = &v238->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v240 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
              {
                ++v239;
                v240 += 4;
                if ( v239 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_288;
              }
              v241 = (__int64)&v238->vtable[*v240].method;
            }
            else
            {
LABEL_288:
              v241 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
            }
            v242 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v241)(
                     Enumerator,
                     *(_QWORD *)(v241 + 8));
            v243 = v242;
            if ( v242 )
            {
              v244 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v242 + 300LL) < (unsigned int)v244
                || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v242 + 200LL) + 8 * v244 - 8) != ClassBoardBaseEntity_TypeInfo )
              {
                sub_B173C8(v242);
LABEL_314:
                sub_B170D4();
              }
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v245 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v243 )
              goto LABEL_314;
            if ( !v245 )
              sub_B170D4();
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v245, *(_DWORD *)(v243 + 16), 0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !v254 )
                sub_B170D4();
              System_Collections_Generic_Dictionary_int__int___Add(
                v254,
                *(_DWORD *)(v243 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v256 = 0x10000061FLL;
          v247 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v248 = 0LL;
            v249 = &v247->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v249 - 1) != System_IDisposable_TypeInfo )
            {
              ++v248;
              v249 += 4;
              if ( v248 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_305;
            }
            v250 = (__int64)&v247->vtable[*v249].method;
          }
          else
          {
LABEL_305:
            v250 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v250)(
            Enumerator,
            *(_QWORD *)(v250 + 8));
          v256 = 1567LL;
LABEL_219:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v202 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
          v204 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
          v203 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
          v205 = (DataMasterBase_WarMaster__WarEntity__int__o *)v202;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v264.fields.currentCryptoKey = v204;
          *(_QWORD *)&v264.fields.fakeValue = v203;
          v206 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v264, 0LL);
          if ( !v205 )
            goto LABEL_311;
          v207 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v205,
                   v206,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !v207 )
            goto LABEL_311;
          startType = v207->fields.startType;
          v209 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v209 )
            goto LABEL_311;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v209, startType, 0LL);
          v211 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v211 )
            goto LABEL_311;
          IsInvalidClass = ClassBoardClassMaster__IsInvalidClass(v211, startType, 0LL);
          if ( (IsInvalidClass & 1) != 0 )
            goto LABEL_239;
          userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_311;
          v213 = userClassBoardInfo->max_length;
          if ( v213 < 1 )
          {
LABEL_239:
            v216 = 0;
          }
          else
          {
            v214 = 0;
            while ( 1 )
            {
              if ( v214 >= v213 )
                goto LABEL_312;
              v215 = userClassBoardInfo->m_Items[v214];
              if ( !v215 )
                goto LABEL_311;
              if ( v215->fields.classBoardBaseId == ClassBoardBaseId )
              {
                if ( !v254 )
                  goto LABEL_311;
                IsInvalidClass = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                   v254,
                                   ClassBoardBaseId,
                                   (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                if ( (IsInvalidClass & 1) != 0 )
                  break;
              }
              v213 = userClassBoardInfo->max_length;
              if ( (int)++v214 >= v213 )
                goto LABEL_239;
            }
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     v254,
                     ClassBoardBaseId,
                     (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v215->fields.squareIds;
            if ( !squareIds )
              goto LABEL_311;
            v216 = squareIds->max_length;
            v217 = Item <= v216;
            if ( Item > 0 )
            {
LABEL_241:
              openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
              {
                v219 = (Il2CppObject **)&StringLiteral_6317;
                if ( v217 )
                  v219 = (Il2CppObject **)&StringLiteral_6316;
                v220 = *v219;
                v255 = v216;
                v221 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v255);
                v222 = System_String__Format_43739268((System_String_o *)StringLiteral_15767, v220, v221, 0LL);
                if ( !this->fields.openClassBoardNumLabel )
                  goto LABEL_311;
                UILabel__set_text(this->fields.openClassBoardNumLabel, v222, 0LL);
              }
              classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
              {
                v224 = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
                if ( !v224 )
                  goto LABEL_311;
                v225 = UnityEngine_Component__get_gameObject(v224, 0LL);
                if ( !v225 )
                  goto LABEL_311;
                v226 = 1;
LABEL_263:
                UnityEngine_GameObject__SetActive(v225, v226, 0LL);
                goto LABEL_264;
              }
              goto LABEL_264;
            }
          }
          v217 = 0;
          goto LABEL_241;
        }
LABEL_318:
        sub_B170D4();
      }
    }
  }
  v227 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
  {
    v228 = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( !v228 )
      goto LABEL_311;
    v225 = UnityEngine_Component__get_gameObject(v228, 0LL);
    if ( !v225 )
      goto LABEL_311;
    v226 = 0;
    goto LABEL_263;
  }
LABEL_264:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v230 = this->fields.baseButton;
    if ( !v230 )
      goto LABEL_311;
    UICommonButton__SetColliderEnable(v230, *p_userGameEntity != 0LL, 1, 0LL);
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
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  signed __int64 v22; // x21
  __int64 v23; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  unsigned __int64 v25; // x24
  UnityEngine_Object_o *v26; // x20
  struct UnityEngine_GameObject_array *v27; // x9
  UnityEngine_GameObject_o *v28; // x0
  int32_t *v29; // x20
  struct SkillIconComponent_array *v30; // x8
  SkillIconComponent_o *v31; // x0
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  UIIconLabel_o *v33; // x0
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct SkillIconComponent_array *v36; // x8
  __int64 v37; // x9
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *switchSkillUIList; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v43; // x0
  SwitchUIWidgetComponent_o *v44; // x19
  UIWidget_array *v45; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v4 = this;
  if ( (byte_40FA790 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, info);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    this = (FriendIconComponent_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FA790 = 1;
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
    *(_QWORD *)&v47.fields.currentCryptoKey = v9;
    *(_QWORD *)&v47.fields.fakeValue = v8;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(info, &skillInfoList, 0, 0LL);
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
        v22 = v12;
        v23 = 4LL;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_75;
          v25 = v23 - 4;
          if ( v23 - 4 >= (unsigned __int64)appendSkillBaseList->max_length )
            goto LABEL_76;
          v26 = (UnityEngine_Object_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v23);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v25 >= v22 )
            {
              v34 = v4->fields.appendSkillBaseList;
              if ( !v34 )
                goto LABEL_75;
              if ( v25 >= v34->max_length )
                goto LABEL_76;
              v35 = (UnityEngine_GameObject_o *)*((_QWORD *)&v34->obj.klass + v23);
              if ( !v35 )
                goto LABEL_75;
              UnityEngine_GameObject__SetActive(v35, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_75;
              if ( v25 >= skillInfoList->max_length )
                goto LABEL_76;
              v27 = v4->fields.appendSkillBaseList;
              if ( !v27 )
                goto LABEL_75;
              if ( v25 >= v27->max_length )
                goto LABEL_76;
              v28 = (UnityEngine_GameObject_o *)*((_QWORD *)&v27->obj.klass + v23);
              if ( !v28 )
                goto LABEL_75;
              v29 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v23);
              UnityEngine_GameObject__SetActive(v28, 1, 0LL);
              v30 = v4->fields.appendSkillIconList;
              if ( !v30 )
                goto LABEL_75;
              if ( v25 >= v30->max_length )
                goto LABEL_76;
              if ( !v29 )
                goto LABEL_75;
              v31 = (SkillIconComponent_o *)*((_QWORD *)&v30->obj.klass + v23);
              if ( !v31 )
                goto LABEL_75;
              SkillIconComponent__Set_23612468(v31, v29[4], v29[5], v29[12], v29[13], 0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v25 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              v33 = (UIIconLabel_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v23);
              if ( !v33 )
                goto LABEL_75;
              UIIconLabel__Set_40377052(v33, 48, v29[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
          }
          v36 = v4->fields.appendSkillIconList;
          if ( !v36 )
            goto LABEL_75;
          v37 = v23 - 3;
          ++v23;
        }
        while ( v37 < (int)v36->max_length );
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
          v40 = (UnityEngine_Component_o *)v4->fields.appendSkillInfoUiWidget;
          if ( !v40 )
            goto LABEL_75;
          gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
          if ( !gameObject )
            goto LABEL_75;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          switchSkillUIList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.switchSkillUIList;
          if ( !switchSkillUIList )
            goto LABEL_75;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            switchSkillUIList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.appendSkillInfoUiWidget,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          v43 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4->fields.switchSkillUIList;
          if ( !v43 )
            goto LABEL_75;
          v44 = v4->fields.switchSkillInfo;
          v45 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v43,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v44 )
            goto LABEL_75;
          SwitchUIWidgetComponent__Set(v44, v45, 0LL);
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
            sub_B17100(this, info, method);
            sub_B170A0();
          }
          v19 = v18->m_Items[v17];
          if ( v19 )
          {
            UnityEngine_GameObject__SetActive(v19, 0, 0LL);
            v16 = v4->fields.appendSkillIconList;
            ++v17;
            if ( v16 )
              continue;
          }
        }
        goto LABEL_75;
      }
      v20 = (UnityEngine_Component_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !v20 || (v21 = UnityEngine_Component__get_gameObject(v20, 0LL)) == 0LL )
LABEL_75:
        sub_B170D4();
      UnityEngine_GameObject__SetActive(v21, 0, 0LL);
    }
  }
}