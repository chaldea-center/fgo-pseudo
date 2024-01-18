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

  if ( (byte_418A87A & 1) == 0 )
  {
    sub_B2C35C(&FriendIconComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19518/*"img_listbg_01"*/, v8);
    byte_418A87A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FriendIconComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19518/*"img_listbg_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19518/*"img_listbg_01"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_418A879 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UIIconLabel___TypeInfo, v5);
    byte_418A879 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v20; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v22; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v24; // x19

  if ( (byte_418A86C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_19364/*"icon_skill_mini"*/, v6);
    sub_B2C35C(&StringLiteral_19495/*"img_friend_skill"*/, v7);
    sub_B2C35C(&StringLiteral_19275/*"icon_append_mini"*/, v8);
    sub_B2C35C(&StringLiteral_19494/*"img_friend_appendskill"*/, v9);
    byte_418A86C = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19364/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_19495/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v22 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_19275/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v24 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v24, (System_String_o *)StringLiteral_19494/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418A878 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418A878 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  __int64 v4; // x1

  if ( (byte_418A870 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A870 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_418A874 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418A874 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantEquipStatusDialog(Instance, v7, 0LL);
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
    sub_B2C434(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418A86F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B2C35C(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A86F = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_B2C434(v11, v12);
      CommonUI__OpenServantStatusDialog_17984076(Instance, 5, v8, v10, 0LL);
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
  __int64 v23; // x1
  int32_t v24; // w21
  int32_t ClassBoardBaseId; // w20
  struct OtherUserGameEntity_o *v26; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v29; // w10
  __int64 v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _QWORD **v37; // x23
  __int64 v38; // x22
  __int16 v39; // w8
  __int64 v40; // x22
  __int64 v41; // x22
  __int64 v42; // x22
  System_Int32_array ***v43; // x8
  System_Int32_array **v44; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v46; // x23
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_418A877 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Array_Empty_int___, v3);
    sub_B2C35C(&ClassBoardInfo_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_B2C35C(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418A877 = 1;
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
        v16 = (_QWORD *)sub_B2C364(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_B2C340(v16, v16[3]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v48.fields.currentCryptoKey = v20;
      *(_QWORD *)&v48.fields.fakeValue = v19;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
      if ( !v21 )
        goto LABEL_42;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_42;
      v24 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_42;
      ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v24, 0LL);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_42;
      Entity = (void *)ClassBoardClassMaster__IsInvalidClass((ClassBoardClassMaster_o *)Entity, v24, 0LL);
      if ( ((unsigned __int8)Entity & 1) == 0 )
      {
        v26 = this->fields.userGameEntity;
        if ( !v26 )
          goto LABEL_42;
        userClassBoardInfo = v26->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_42;
        max_length = userClassBoardInfo->max_length;
        if ( max_length >= 1 )
        {
          v29 = 0;
          while ( 1 )
          {
            if ( v29 >= max_length )
            {
              v47 = sub_B2C460(Entity);
              sub_B2C400(v47, 0LL);
            }
            v30 = (__int64)userClassBoardInfo->m_Items[v29];
            if ( !v30 )
              break;
            if ( *(_DWORD *)(v30 + 16) == ClassBoardBaseId )
              goto LABEL_39;
            if ( (int)++v29 >= max_length )
              goto LABEL_26;
          }
LABEL_42:
          sub_B2C434(Entity, v23);
        }
      }
LABEL_26:
      v30 = sub_B2C42C(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
      if ( !v30 )
        goto LABEL_42;
      *(_DWORD *)(v30 + 16) = ClassBoardBaseId;
      v37 = (_QWORD **)Method_System_Array_Empty_int___;
      v38 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v39 = *(_WORD *)(v38 + 306);
      if ( (v39 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v39 = *(_WORD *)(v38 + 306);
      }
      if ( (v39 & 0x400) != 0 )
      {
        v40 = *v37[6];
        if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
          sub_AC505C(*v37[6]);
        if ( !*(_DWORD *)(v40 + 224) )
        {
          v41 = *v37[6];
          if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
            sub_AC505C(*v37[6]);
          j_il2cpp_runtime_class_init_0(v41);
        }
      }
      v42 = *v37[6];
      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
        sub_AC505C(*v37[6]);
      v43 = *(System_Int32_array ****)(v42 + 184);
      v44 = *v43;
      *(_QWORD *)(v30 + 24) = *v43;
      sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 24), v44, v31, v32, v33, v34, v35, v36);
LABEL_39:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
        goto LABEL_42;
      CommonUI__OpenClassBoardEffectListDialog(Instance, 1, ClassBoardBaseId, 0, v46, 1, (ClassBoardInfo_o *)v30, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v6; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_418A872 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&SupportInfoJump_TypeInfo, v4);
    byte_418A872 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v6 = (SupportInfoJump_o *)sub_B2C42C(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v6, userGameEntity, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v6, 0LL);
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

  if ( (byte_418A875 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A875 = 1;
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
    sub_B2C434(userGameEntity, method);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL) >= 1 )
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
  __int64 v27; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418A876 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_80/*" "*/, v11);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418A876 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_27;
        if ( skillInfoList->max_length <= skillIndex )
        {
          v27 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v27, 0LL);
        }
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
            v19 = (_QWORD *)sub_B2C364(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_B2C340(v19, v19[3]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              Master_WarQuestSelectionMaster,
                                                                                              v18->fields.id,
                                                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_WarQuestSelectionMaster )
            {
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Master_WarQuestSelectionMaster,
                &name,
                &detail,
                v18->fields.lv,
                0LL);
              v21 = name;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v18->fields.lv;
              v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v24 = System_String__Format(v22, v23, 0LL);
              name = System_String__Concat_44307816(v21, (System_String_o *)StringLiteral_80/*" "*/, v24, 0LL);
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B2C434(Master_WarQuestSelectionMaster, v17);
        }
      }
    }
  }
  v25 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
    v25 = (_QWORD *)sub_B2C364(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v26 = (System_Reflection_MethodBase_o *)sub_B2C340(v25, v25[3]);
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
  __int64 v18; // x0
  int32_t max_length; // w9
  SkillInfo_o *v20; // x22
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  SkillEntity_o *Entity; // x20
  DataManager_o *v24; // x19
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  System_String_o *v31; // x19
  __int64 v32; // x0
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_418A871 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_80/*" "*/, v12);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B2C35C(&StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_418A871 = 1;
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
    v32 = sub_B2C460(v18);
    sub_B2C400(v32, 0LL);
  }
  v20 = skillInfoList->m_Items[skillIndex];
  if ( v20 && v20->fields.id >= 1 && v20->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_32;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v20->fields.id,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v20->fields.id,
                                  v20->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_32;
    v24 = Instance;
    SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v20->fields.lv, 0LL);
    v25 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v20->fields.lv;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v28 = System_String__Format(v26, v27, 0LL);
    name = System_String__Concat_44307816(v25, (System_String_o *)StringLiteral_80/*" "*/, v28, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v24
      || (v29 = (System_String_o *)Instance,
          datalist = (int)v24->fields.datalist,
          v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
          v31 = System_String__Format(v29, v30, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_32:
      sub_B2C434(Instance, v22);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v31, detail, 1, 0, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418A873 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B2C35C(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_418A873 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B2C434(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_17986440(Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  int32_t v84; // w0
  TreasureDvcInfo_o *v85; // x20
  int32_t v86; // w28
  System_String_o *OverwriteTDName; // x0
  System_String_o **v88; // x9
  bool v89; // cc
  Il2CppObject *v90; // x25
  System_String_o *v91; // x20
  System_String_o *v92; // x0
  System_String_o *v93; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x26
  UnityEngine_Object_o *svtNpCommandCard; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v99; // x20
  __int64 v100; // x25
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v102; // x8
  int v103; // w9
  unsigned __int64 v104; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v106; // x14
  struct SkillIconComponent_array *v107; // x8
  __int64 v108; // x21
  unsigned __int64 v109; // x24
  struct UnityEngine_GameObject_array *v110; // x8
  UnityEngine_Object_o *v111; // x20
  struct UnityEngine_GameObject_array *v112; // x8
  UnityEngine_Object_o *v113; // x20
  const MethodInfo *v114; // x2
  signed __int64 v115; // x21
  __int64 v116; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v118; // x25
  UnityEngine_Object_o *v119; // x20
  struct UnityEngine_GameObject_array *v120; // x9
  int32_t *v121; // x20
  struct SkillIconComponent_array *v122; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v124; // x8
  struct SkillIconComponent_array *v125; // x8
  __int64 v126; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v129; // x25
  __int64 v130; // x20
  __int64 v131; // x26
  struct OtherUserGameEntity_o **v132; // x21
  int32_t v133; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v135; // w27
  int32_t Kind_27344472; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x26
  System_String_o *v139; // x20
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v143; // s0
  float v144; // s8
  float v145; // s0
  float v146; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v149; // s10
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_GameObject_o *v151; // x0
  __int64 v152; // x20
  __int64 v153; // x24
  WarQuestSelectionMaster_o *v154; // x0
  __int64 v155; // x20
  __int64 v156; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v157; // x23
  int32_t v158; // w24
  int32_t ClassBoardBaseId; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v161; // w8
  unsigned int v162; // w21
  ClassBoardInfo_o *v163; // x24
  int v164; // w21
  _BOOL4 v165; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v167; // x8
  Il2CppObject *v168; // x20
  Il2CppObject *v169; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  bool v171; // w1
  UnityEngine_Object_o *v172; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v175; // x1
  __int64 v176; // x3
  System_Collections_Generic_IEnumerator_T__o *v177; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v179; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v182; // x3
  System_Collections_Generic_IEnumerator_T__c *v183; // x8
  unsigned __int64 v184; // x10
  int *v185; // x11
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 v188; // x25
  __int64 v189; // x9
  ClassBoardSquareMaster_o *v190; // x0
  __int64 v191; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v193; // x1
  System_Collections_Generic_IEnumerator_T__c *v194; // x8
  unsigned __int64 v195; // x10
  int *v196; // x11
  __int64 v197; // x0
  struct System_Int32_array *squareIds; // x8
  __int64 v199; // x0
  ServantEntity_o *v200; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__int__o *v201; // [xsp+20h] [xbp-90h]
  int v202; // [xsp+2Ch] [xbp-84h] BYREF
  __int64 v203; // [xsp+30h] [xbp-80h]
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  v9 = followerDeckId;
  v11 = displayServantType;
  v12 = classPos;
  v15 = this;
  v201 = classBoardMaxNumDictionary;
  if ( (byte_418A86D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, userGameEntity);
    sub_B2C35C(&ClassBoardBaseEntity_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v25);
    sub_B2C35C(&DataManager_TypeInfo, v26);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v31);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v32);
    sub_B2C35C(&UnityEngine_Font_TypeInfo, v33);
    sub_B2C35C(&Grade_TypeInfo, v34);
    sub_B2C35C(&System_IDisposable_TypeInfo, v35);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v36);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v37);
    sub_B2C35C(&int_TypeInfo, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v39);
    sub_B2C35C(&LocalizationManager_TypeInfo, v40);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v41);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_B2C35C(&OptionManager_TypeInfo, v43);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v44);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v46);
    sub_B2C35C(&StringLiteral_3276/*"COMMON_NO_ENTRY"*/, v47);
    sub_B2C35C(&StringLiteral_6740/*"Fonts/FGO-Main-Font"*/, v48);
    sub_B2C35C(&StringLiteral_6335/*"FFFFFF"*/, v49);
    sub_B2C35C(&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/, v50);
    sub_B2C35C(&StringLiteral_6334/*"FFFF00"*/, v51);
    sub_B2C35C(&StringLiteral_9354/*"NO_ENTRY_NAME"*/, v52);
    sub_B2C35C(&StringLiteral_9376/*"NP_COLOR_NAME"*/, v53);
    this = (FriendIconComponent_o *)sub_B2C35C(&StringLiteral_15830/*"[{0}]+{1}[-]"*/, v54);
    byte_418A86D = 1;
  }
  if ( isUseServantStatus )
    v55 = (System_Int32_array **)userGameEntity;
  else
    v55 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  HIDWORD(v203) = 0;
  if ( !v15 )
    goto LABEL_314;
  p_userGameEntity = &v15->fields.userGameEntity;
  v15->fields.userGameEntity = (struct OtherUserGameEntity_o *)v55;
  sub_B2C2F8(
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
    goto LABEL_265;
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
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_314;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)this,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                      userGameEntity,
                                      v15->fields.classPos,
                                      v15->fields.displayServantType,
                                      v15->fields.deckId,
                                      0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_314;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)this,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v66 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v206.fields.currentCryptoKey = v66;
        *(_QWORD *)&v206.fields.fakeValue = v65;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v206, 0LL) )
          v62 = 0LL;
        Entity = v64;
      }
    }
  }
  this = (FriendIconComponent_o *)v15->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_314;
  ServantFaceIconComponent__Set_30720044((ServantFaceIconComponent_o *)this, v62, 0LL, 0LL, 0, 0, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
  if ( !this )
    goto LABEL_314;
  UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerLevelIconLabel;
  if ( !this )
    goto LABEL_314;
  UIIconLabel__Set_41609428((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  v200 = Entity;
  if ( Entity )
  {
    if ( !v62 )
      goto LABEL_314;
    overwriteServantName = v62->fields.overwriteServantName;
    this = (FriendIconComponent_o *)System_String__IsNullOrEmpty(overwriteServantName, 0LL);
    servantNameLabel = v15->fields.servantNameLabel;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendIconComponent_o *)ServantEntity__getName(Entity, v62->fields.limitCount, -1, 0LL);
      if ( !servantNameLabel )
        goto LABEL_314;
      v69 = (System_String_o *)this;
      v70 = servantNameLabel;
    }
    else
    {
      if ( !servantNameLabel )
        goto LABEL_314;
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
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v76 = **(_QWORD **)(v75 + 192);
    if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
      sub_AC505C(v76);
    this = **(FriendIconComponent_o ***)(v76 + 184);
    if ( this )
    {
      v77 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v62, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_314;
        this = (FriendIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_314;
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
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v81 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
      v80 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
      v82 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v207.fields.currentCryptoKey = v81;
      *(_QWORD *)&v207.fields.fakeValue = v80;
      this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v207, 0LL);
      if ( v82 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v82,
                                       (int32_t)this,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62->fields.svtId, 0LL);
        v85 = tdInfo;
        v86 = v84;
        this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                          v62->fields.svtId,
                                          0LL);
        if ( v85 )
        {
          this = (FriendIconComponent_o *)TreasureDvcInfo__GetName(v85, (int32_t)this, 0LL);
          if ( tdInfo )
          {
            if ( v77 )
            {
              OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                  v77,
                                  v86,
                                  ServantLimitCountSealAfter,
                                  (System_String_o *)this,
                                  tdInfo->fields.lv,
                                  0LL);
              v88 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
              v89 = TreasureDeviceLevelIcon <= 1;
              v90 = (Il2CppObject *)OverwriteTDName;
              if ( v89 )
                v88 = (System_String_o **)&StringLiteral_9376/*"NP_COLOR_NAME"*/;
              v91 = *v88;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v92 = LocalizationManager__Get(v91, 0LL);
              this = (FriendIconComponent_o *)System_String__Format(v92, v90, 0LL);
              if ( tdInfo )
              {
                v93 = (System_String_o *)this;
                svtNpTitleLabel = v15->fields.svtNpTitleLabel;
                p_userGameEntity = &v15->fields.userGameEntity;
                this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                if ( svtNpTitleLabel )
                {
                  UIRangeLabel__Set(svtNpTitleLabel, v93, (System_String_o *)this, 0, 0, 0LL);
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
                      goto LABEL_314;
                    ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                  }
                  goto LABEL_81;
                }
              }
            }
          }
        }
      }
    }
LABEL_314:
    sub_B2C434(this, v55);
  }
  v71 = v15->fields.servantNameLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3276/*"COMMON_NO_ENTRY"*/, 0LL);
  if ( !v71 )
    goto LABEL_314;
  UIRangeLabel__Set(v71, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v72 = v15->fields.svtNpTitleLabel;
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
  if ( !v72 )
    goto LABEL_314;
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
      goto LABEL_314;
    ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
  }
LABEL_81:
  loginDataLabel = v15->fields.loginDataLabel;
  UpdatedAt = OtherUserGameEntity__getUpdatedAt(userGameEntity, v15->fields.classPos, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
  if ( !loginDataLabel )
    goto LABEL_314;
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
      goto LABEL_314;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !this )
      goto LABEL_314;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
  }
  if ( !v62 )
    goto LABEL_108;
  v100 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v208.fields.currentCryptoKey = v100;
  *(_QWORD *)&v208.fields.fakeValue = v99;
  this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v208, 0LL);
  if ( (int)this >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(v62, &skillInfoList, 0LL);
    skillIconList = v15->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_314;
    v102 = *(_QWORD *)&skillIconList->max_length;
    if ( v102 << 32 >= 1 )
    {
      v103 = 0;
      v104 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v104 < (int)max_length )
        {
          if ( v104 >= max_length )
            goto LABEL_315;
          v106 = skillInfoList->m_Items[v104];
          if ( v106 && v106->fields.id >= 1 )
            v103 = v104 + 1;
        }
        if ( (__int64)++v104 >= (int)v102 )
          goto LABEL_131;
      }
      goto LABEL_314;
    }
    v103 = 0;
LABEL_131:
    if ( (int)v102 >= 1 )
    {
      v115 = v103;
      v116 = 4LL;
      do
      {
        skillBaseList = v15->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_314;
        v118 = v116 - 4;
        if ( v116 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_315;
        v119 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v116);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v119, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( (__int64)v118 >= v115 )
          {
            v124 = v15->fields.skillBaseList;
            if ( !v124 )
              goto LABEL_314;
            if ( v118 >= v124->max_length )
              goto LABEL_315;
            this = (FriendIconComponent_o *)*((_QWORD *)&v124->obj.klass + v116);
            if ( !this )
              goto LABEL_314;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_314;
            if ( v118 >= skillInfoList->max_length )
              goto LABEL_315;
            v120 = v15->fields.skillBaseList;
            if ( !v120 )
              goto LABEL_314;
            if ( v118 >= v120->max_length )
              goto LABEL_315;
            this = (FriendIconComponent_o *)*((_QWORD *)&v120->obj.klass + v116);
            if ( !this )
              goto LABEL_314;
            v121 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v116);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v122 = v15->fields.skillIconList;
            if ( !v122 )
              goto LABEL_314;
            if ( v118 >= v122->max_length )
              goto LABEL_315;
            if ( !v121 )
              goto LABEL_314;
            this = (FriendIconComponent_o *)*((_QWORD *)&v122->obj.klass + v116);
            if ( !this )
              goto LABEL_314;
            SkillIconComponent__Set_23786384((SkillIconComponent_o *)this, v121[4], v121[5], v121[12], v121[13], 0LL);
            skillLevelIconLabelList = v15->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_314;
            if ( v118 >= skillLevelIconLabelList->max_length )
              goto LABEL_315;
            this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v116);
            if ( !this )
              goto LABEL_314;
            UIIconLabel__Set_41609428((UIIconLabel_o *)this, 48, v121[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v125 = v15->fields.skillIconList;
        if ( !v125 )
          goto LABEL_314;
        v126 = v116 - 3;
        ++v116;
      }
      while ( v126 < (int)v125->max_length );
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
        goto LABEL_314;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FriendIconComponent_o *)v15->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_314;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.skillInfoUiWidget,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
  }
  else
  {
LABEL_108:
    v107 = v15->fields.skillIconList;
    if ( !v107 )
      goto LABEL_314;
    v108 = 4LL;
    while ( 1 )
    {
      v109 = v108 - 4;
      if ( v108 - 4 >= (int)v107->max_length )
        break;
      v110 = v15->fields.skillBaseList;
      if ( !v110 )
        goto LABEL_314;
      if ( v109 >= v110->max_length )
        goto LABEL_315;
      v111 = (UnityEngine_Object_o *)*((_QWORD *)&v110->obj.klass + v108);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v111, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v112 = v15->fields.skillBaseList;
        if ( !v112 )
          goto LABEL_314;
        if ( v109 >= v112->max_length )
        {
LABEL_315:
          v199 = sub_B2C460(this);
          sub_B2C400(v199, 0LL);
        }
        this = (FriendIconComponent_o *)*((_QWORD *)&v112->obj.klass + v108);
        if ( !this )
          goto LABEL_314;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v107 = v15->fields.skillIconList;
      ++v108;
      if ( !v107 )
        goto LABEL_314;
    }
    v113 = (UnityEngine_Object_o *)v15->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
    {
      this = (FriendIconComponent_o *)v15->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_314;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  FriendIconComponent__SetAppendSkill(v15, v62, v114);
  svtCommandCardList = (UnityEngine_Object_o *)v15->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v129 = v15->fields.svtCommandCardList;
    if ( v62 )
    {
      v131 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
      v130 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
      v132 = p_userGameEntity;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v209.fields.currentCryptoKey = v131;
      *(_QWORD *)&v209.fields.fakeValue = v130;
      v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v209, 0LL);
      commandCardParam = v62->fields.commandCardParam;
      v135 = v133;
      this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v62, 0LL);
      if ( !v129 )
        goto LABEL_314;
      ServantCommandCardListComponent__Set_29228872(v129, v135, commandCardParam, (System_Int32_array *)this, 2, 1, 0LL);
      p_userGameEntity = v132;
    }
    else
    {
      if ( !v129 )
        goto LABEL_314;
      ServantCommandCardListComponent__Clear(v15->fields.svtCommandCardList, 0LL);
    }
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_27344472 = Grade__GetKind_27344472(userGameEntity, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_27344472, 0LL);
  baseSpr = v15->fields.baseSpr;
  v139 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v139, 0LL);
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
      goto LABEL_314;
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
    {
      playerNameLabel = v15->fields.playerNameLabel;
      this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6740/*"Fonts/FGO-Main-Font"*/, 0LL);
      if ( !playerNameLabel )
        goto LABEL_314;
      if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
      {
        sub_B2C728(this);
        goto LABEL_321;
      }
      UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
    }
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_314;
    LODWORD(v143) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_314;
    v144 = v143;
    LODWORD(v145) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_314;
    v146 = v145;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_314;
    v149 = LocalPositionX;
    v150 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v150, (float)(v146 * 0.5) + (float)(v144 + v149), 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_314;
    v151 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v151, 57.0, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_314;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_27344472, 0LL);
  }
  this = (FriendIconComponent_o *)v15->fields.pushSprite;
  if ( !this )
    goto LABEL_314;
  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_314;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v200 )
  {
    if ( !v62 )
      goto LABEL_314;
    if ( userGameEntity->fields.pushUserSvtId == v62->fields.userSvtId )
    {
      this = (FriendIconComponent_o *)v15->fields.pushSprite;
      if ( !this )
        goto LABEL_314;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  if ( v62 )
  {
    v153 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
    v152 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v210.fields.currentCryptoKey = v153;
    *(_QWORD *)&v210.fields.fakeValue = v152;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v210, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( v201 )
          goto LABEL_220;
        v201 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
        System_Collections_Generic_Dictionary_int__int____ctor(
          v201,
          (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !this )
          goto LABEL_314;
        this = (FriendIconComponent_o *)this->fields.playerNameLabel;
        if ( !this )
          goto LABEL_314;
        Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                       (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
        v177 = Enumerator;
        if ( Enumerator )
        {
          while ( 1 )
          {
            klass = v177->klass;
            if ( *(_WORD *)&v177->klass->_2.bitflags1 )
            {
              v179 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v179;
                p_offset += 4;
                if ( v179 >= *(unsigned __int16 *)&v177->klass->_2.bitflags1 )
                  goto LABEL_282;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_282:
              p_method = sub_AC5258(v177, System_Collections_IEnumerator_TypeInfo, 0LL, v176);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    v177,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v183 = v177->klass;
            if ( *(_WORD *)&v177->klass->_2.bitflags1 )
            {
              v184 = 0LL;
              v185 = &v183->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v185 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
              {
                ++v184;
                v185 += 4;
                if ( v184 >= *(unsigned __int16 *)&v177->klass->_2.bitflags1 )
                  goto LABEL_289;
              }
              v186 = (__int64)&v183->vtable[*v185].method;
            }
            else
            {
LABEL_289:
              v186 = sub_AC5258(v177, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v182);
            }
            v187 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v186)(
                     v177,
                     *(_QWORD *)(v186 + 8));
            v188 = v187;
            if ( v187 )
            {
              v189 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v187 + 300LL) < (unsigned int)v189
                || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v187 + 200LL) + 8 * v189 - 8) != ClassBoardBaseEntity_TypeInfo )
              {
                sub_B2C728(v187);
LABEL_317:
                sub_B2C434(v190, v191);
              }
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v190 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v188 )
              goto LABEL_317;
            if ( !v190 )
              sub_B2C434(0LL, v191);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v190, *(_DWORD *)(v188 + 16), 0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !v201 )
                sub_B2C434(OtherThanNoneEntity, v193);
              System_Collections_Generic_Dictionary_int__int___Add(
                v201,
                *(_DWORD *)(v188 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v203 = 0x10000062ALL;
          if ( v177 )
          {
            v194 = v177->klass;
            if ( *(_WORD *)&v177->klass->_2.bitflags1 )
            {
              v195 = 0LL;
              v196 = &v194->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v196 - 1) != System_IDisposable_TypeInfo )
              {
                ++v195;
                v196 += 4;
                if ( v195 >= *(unsigned __int16 *)&v177->klass->_2.bitflags1 )
                  goto LABEL_307;
              }
              v197 = (__int64)&v194->vtable[*v196].method;
            }
            else
            {
LABEL_307:
              v197 = sub_AC5258(v177, System_IDisposable_TypeInfo, 0LL, v182);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v197)(
              v177,
              *(_QWORD *)(v197 + 8));
          }
          v203 = 1578LL;
LABEL_220:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v154 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
          v156 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
          v155 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
          v157 = (DataMasterBase_WarMaster__WarEntity__int__o *)v154;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v211.fields.currentCryptoKey = v156;
          *(_QWORD *)&v211.fields.fakeValue = v155;
          this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v211, 0LL);
          if ( !v157 )
            goto LABEL_314;
          this = (FriendIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v157,
                                            (int32_t)this,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_314;
          v158 = (int32_t)this->fields.skillBaseList;
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_314;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)this, v158, 0LL);
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_314;
          this = (FriendIconComponent_o *)ClassBoardClassMaster__IsInvalidClass(
                                            (ClassBoardClassMaster_o *)this,
                                            v158,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_240;
          userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_314;
          v161 = userClassBoardInfo->max_length;
          if ( v161 < 1 )
          {
LABEL_240:
            v164 = 0;
          }
          else
          {
            v162 = 0;
            while ( 1 )
            {
              if ( v162 >= v161 )
                goto LABEL_315;
              v163 = userClassBoardInfo->m_Items[v162];
              if ( !v163 )
                goto LABEL_314;
              if ( v163->fields.classBoardBaseId == ClassBoardBaseId )
              {
                this = (FriendIconComponent_o *)v201;
                if ( !v201 )
                  goto LABEL_314;
                this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                  v201,
                                                  ClassBoardBaseId,
                                                  (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) != 0 )
                  break;
              }
              v161 = userClassBoardInfo->max_length;
              if ( (int)++v162 >= v161 )
                goto LABEL_240;
            }
            this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v201,
                                              ClassBoardBaseId,
                                              (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v163->fields.squareIds;
            if ( !squareIds )
              goto LABEL_314;
            v164 = squareIds->max_length;
            v165 = (int)this <= v164;
            if ( (int)this > 0 )
            {
LABEL_242:
              openClassBoardNumLabel = (UnityEngine_Object_o *)v15->fields.openClassBoardNumLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
              {
                v167 = (Il2CppObject **)&StringLiteral_6335/*"FFFFFF"*/;
                if ( v165 )
                  v167 = (Il2CppObject **)&StringLiteral_6334/*"FFFF00"*/;
                v168 = *v167;
                v202 = v164;
                v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v202);
                this = (FriendIconComponent_o *)System_String__Format_44301068(
                                                  (System_String_o *)StringLiteral_15830/*"[{0}]+{1}[-]"*/,
                                                  v168,
                                                  v169,
                                                  0LL);
                if ( !v15->fields.openClassBoardNumLabel )
                  goto LABEL_314;
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
                  goto LABEL_314;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_314;
                v171 = 1;
LABEL_264:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v171, 0LL);
                goto LABEL_265;
              }
              goto LABEL_265;
            }
          }
          v165 = 0;
          goto LABEL_242;
        }
LABEL_321:
        sub_B2C434(Enumerator, v175);
      }
    }
  }
  v172 = (UnityEngine_Object_o *)v15->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_314;
    this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_314;
    v171 = 0;
    goto LABEL_264;
  }
LABEL_265:
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
      goto LABEL_314;
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
  if ( (byte_418A86E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, info);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (FriendIconComponent_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_418A86E = 1;
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
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(info, &skillInfoList, 0, 0LL);
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
              SkillIconComponent__Set_23786384((SkillIconComponent_o *)this, v25[4], v25[5], v25[12], v25[13], 0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v22 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v20);
              if ( !this )
                goto LABEL_75;
              UIIconLabel__Set_41609428((UIIconLabel_o *)this, 48, v25[5], 0, 0, 0LL, 0, 0, 0, 0LL);
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
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          v33 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
            v34 = sub_B2C460(this);
            sub_B2C400(v34, 0LL);
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
        sub_B2C434(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}