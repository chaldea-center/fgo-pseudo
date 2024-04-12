void __fastcall FriendIconComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B31DB & 1) == 0 )
  {
    sub_B52984(&FriendIconComponent_TypeInfo);
    sub_B52984(&StringLiteral_19665/*"img_listbg_01"*/);
    byte_42B31DB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FriendIconComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19665/*"img_listbg_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19665/*"img_listbg_01"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UIIconLabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct SkillIconComponent_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UIIconLabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42B31DA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&SkillIconComponent___TypeInfo);
    sub_B52984(&UIIconLabel___TypeInfo);
    byte_42B31DA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_B5299C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct SkillIconComponent_array *)sub_B5299C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UIIconLabel_array *)sub_B5299C(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_B5299C(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_B5299C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v32;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIIconLabel_array *)sub_B5299C(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v39;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v11; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v13; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v17; // x19

  if ( (byte_42B31CD & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19510/*"icon_skill_mini"*/);
    sub_B52984(&StringLiteral_19642/*"img_friend_skill"*/);
    sub_B52984(&StringLiteral_19421/*"icon_append_mini"*/);
    sub_B52984(&StringLiteral_19641/*"img_friend_appendskill"*/);
    byte_42B31CD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v11 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_19510/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v13 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_19642/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v15 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_19421/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v17 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_19641/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B31D9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B31D9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B31D1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B31D1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B31D5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FriendIconComponent_EndCloseShowServantEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B31D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B52A5C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog(Instance, v5, 0LL);
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
    sub_B52A5C(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v5; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B31D0 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_FriendIconComponent_EndShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B31D0 = 1;
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
      v5 = ServantLeaderInfo;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndShowServant__, 0LL);
      if ( !Instance )
        sub_B52A5C(v8, v9);
      CommonUI__OpenServantStatusDialog_18171020(Instance, 5, v5, v7, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  void *Entity; // x0
  __int64 v13; // x1
  int32_t v14; // w22
  struct OtherUserGameEntity_o *v15; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v18; // w20
  unsigned int v19; // w24
  __int64 v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  _QWORD **v27; // x24
  __int64 v28; // x22
  __int16 v29; // w8
  __int64 v30; // x22
  __int64 v31; // x22
  __int64 v32; // x22
  System_Int32_array ***v33; // x8
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  _QWORD **v41; // x23
  __int64 v42; // x22
  __int16 v43; // w8
  __int64 v44; // x22
  __int64 v45; // x22
  __int64 v46; // x22
  System_Int32_array ***v47; // x8
  System_Int32_array **v48; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v50; // x23
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42B31D8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&ClassBoardInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__);
    sub_B52984(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B31D8 = 1;
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
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 75) & 2) != 0 )
        v6 = (_QWORD *)sub_B5298C(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      v10 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v10;
      *(_QWORD *)&v52.fields.fakeValue = v9;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v52, 0LL);
      if ( !v11 )
        goto LABEL_52;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v11,
                 (int32_t)Entity,
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_52;
      v14 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_52;
      Entity = (void *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v14, 0LL);
      v15 = this->fields.userGameEntity;
      if ( !v15 )
        goto LABEL_52;
      userClassBoardInfo = v15->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_52;
      max_length = userClassBoardInfo->max_length;
      v18 = (int)Entity;
      if ( max_length >= 1 )
      {
        v19 = 0;
        do
        {
          if ( v19 >= max_length )
          {
            v51 = sub_B52A88(Entity);
            sub_B52A28(v51, 0LL);
          }
          v20 = (__int64)userClassBoardInfo->m_Items[v19];
          if ( !v20 )
            goto LABEL_52;
          if ( *(_DWORD *)(v20 + 16) == v18 )
          {
            Entity = (void *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v20, v14, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_49;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v19 < max_length );
      }
      v20 = sub_B52A54(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v20, 0LL);
      if ( !v20 )
        goto LABEL_52;
      *(_DWORD *)(v20 + 16) = v18;
      v27 = (_QWORD **)Method_System_Array_Empty_int___;
      v28 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v29 = *(_WORD *)(v28 + 306);
      if ( (v29 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v29 = *(_WORD *)(v28 + 306);
      }
      if ( (v29 & 0x400) != 0 )
      {
        v30 = *v27[6];
        if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
          sub_AEB684(*v27[6]);
        if ( !*(_DWORD *)(v30 + 224) )
        {
          v31 = *v27[6];
          if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
            sub_AEB684(*v27[6]);
          j_il2cpp_runtime_class_init_0(v31);
        }
      }
      v32 = *v27[6];
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        sub_AEB684(*v27[6]);
      v33 = *(System_Int32_array ****)(v32 + 184);
      v34 = *v33;
      *(_QWORD *)(v20 + 24) = *v33;
      sub_B52920((BattleServantConfConponent_o *)(v20 + 24), v34, v21, v22, v23, v24, v25, v26);
      v41 = (_QWORD **)Method_System_Array_Empty_int___;
      v42 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v43 = *(_WORD *)(v42 + 306);
      if ( (v43 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v43 = *(_WORD *)(v42 + 306);
      }
      if ( (v43 & 0x400) != 0 )
      {
        v44 = *v41[6];
        if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
          sub_AEB684(*v41[6]);
        if ( !*(_DWORD *)(v44 + 224) )
        {
          v45 = *v41[6];
          if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
            sub_AEB684(*v41[6]);
          j_il2cpp_runtime_class_init_0(v45);
        }
      }
      v46 = *v41[6];
      if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
        sub_AEB684(*v41[6]);
      v47 = *(System_Int32_array ****)(v46 + 184);
      v48 = *v47;
      *(_QWORD *)(v20 + 32) = *v47;
      sub_B52920((BattleServantConfConponent_o *)(v20 + 32), v48, v35, v36, v37, v38, v39, v40);
LABEL_49:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_52:
        sub_B52A5C(Entity, v13);
      CommonUI__OpenClassBoardEffectListDialog(Instance, 1, v18, 0, v50, 1, (ClassBoardInfo_o *)v20, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v4; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42B31D3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&SupportInfoJump_TypeInfo);
    byte_42B31D3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v4 = (SupportInfoJump_o *)sub_B52A54(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v4, userGameEntity, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v4, 0LL);
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
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B31D6 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B31D6 = 1;
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
  v5 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_24;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_28:
    sub_B52A5C(userGameEntity, method);
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( this->fields.followerType == 5 )
        v11 = 14;
      else
        v11 = 13;
      if ( this->fields.followerType != 5 && v5 )
      {
        if ( ServantLeaderInfo__IsNpc(v5, 0LL) )
          v11 = 19;
        else
          v11 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v7, v11, v10);
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


void __fastcall FriendIconComponent__OpenAppendSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  SkillInfo_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42B31D7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B31D7 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29298404(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_27;
        if ( skillInfoList->max_length <= skillIndex )
        {
          v18 = sub_B52A88(Master_WarQuestSelectionMaster);
          sub_B52A28(v18, 0LL);
        }
        v9 = skillInfoList->m_Items[skillIndex];
        if ( v9 && v9->fields.id >= 1 && v9->fields.lv >= 1 )
        {
          v10 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
            v10 = (_QWORD *)sub_B5298C(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v11 = (System_Reflection_MethodBase_o *)sub_B52968(v10, v10[3]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              Master_WarQuestSelectionMaster,
                                                                                              v9->fields.id,
                                                                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_WarQuestSelectionMaster )
            {
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Master_WarQuestSelectionMaster,
                &name,
                &detail,
                v9->fields.lv,
                0LL);
              v12 = name;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v9->fields.lv;
              v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v15 = System_String__Format(v13, v14, 0LL);
              name = System_String__Concat_44570600(v12, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B52A5C(Master_WarQuestSelectionMaster, v8);
        }
      }
    }
  }
  v16 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
    v16 = (_QWORD *)sub_B5298C(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v17 = (System_Reflection_MethodBase_o *)sub_B52968(v16, v16[3]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
}


void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v7; // x20
  __int64 v8; // x0
  int32_t max_length; // w9
  SkillInfo_o *v10; // x22
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  SkillEntity_o *Entity; // x20
  DataManager_o *v14; // x19
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x19
  __int64 v22; // x0
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B31D2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B52984(&StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/);
    byte_42B31D2 = 1;
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
  v7 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_35;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ServantLeaderInfo__getSkillInfo(v7, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_35;
  max_length = skillInfoList->max_length;
  if ( max_length <= skillIndex )
    goto LABEL_35;
  if ( max_length <= (unsigned int)skillIndex )
  {
    v22 = sub_B52A88(v8);
    sub_B52A28(v22, 0LL);
  }
  v10 = skillInfoList->m_Items[skillIndex];
  if ( v10 && v10->fields.id >= 1 && v10->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_32;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v10->fields.id,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v10->fields.id,
                                  v10->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_32;
    v14 = Instance;
    SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v10->fields.lv, 0LL);
    v15 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v10->fields.lv;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v18 = System_String__Format(v16, v17, 0LL);
    name = System_String__Concat_44570600(v15, (System_String_o *)StringLiteral_81/*" "*/, v18, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v14
      || (v19 = (System_String_o *)Instance,
          datalist = (int)v14->fields.datalist,
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
          v21 = System_String__Format(v19, v20, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_32:
      sub_B52A5C(Instance, v12);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v21, detail, 1, 0, 0LL);
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
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42B31D4 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_FriendIconComponent_EndShowServantEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B31D4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_18173384(Instance, statusKind, equipInfo, v8, 0LL, 0LL);
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
  System_Int32_array **v16; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x27
  const MethodInfo *v18; // x1
  int32_t TargetDeckId; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  ServantEntity_o *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v23; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  ServantEntity_o *v25; // x21
  __int64 v26; // x20
  __int64 v27; // x25
  System_String_o *overwriteServantName; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  System_String_o *v30; // x1
  UIRangeLabel_o *v31; // x0
  UIRangeLabel_o *v32; // x25
  UIRangeLabel_o *v33; // x25
  UnityEngine_Object_o *v34; // x20
  int32_t TreasureDeviceLevelIcon; // w25
  __int64 v36; // x20
  __int64 v37; // x20
  ServantLimitAddMaster_o *v38; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x20
  __int64 v42; // x24
  ServantLimitImageMaster_o *v43; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v46; // x9
  bool v47; // cc
  Il2CppObject *v48; // x25
  System_String_o *v49; // x20
  System_String_o *v50; // x0
  System_String_o *v51; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x26
  UnityEngine_Object_o *svtNpCommandCard; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v57; // x20
  __int64 v58; // x25
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v60; // x8
  int v61; // w9
  unsigned __int64 v62; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v64; // x14
  struct SkillIconComponent_array *v65; // x8
  __int64 v66; // x21
  unsigned __int64 v67; // x24
  struct UnityEngine_GameObject_array *v68; // x8
  UnityEngine_Object_o *v69; // x20
  struct UnityEngine_GameObject_array *v70; // x8
  UnityEngine_Object_o *v71; // x20
  const MethodInfo *v72; // x2
  signed __int64 v73; // x21
  __int64 v74; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v76; // x25
  UnityEngine_Object_o *v77; // x20
  struct UnityEngine_GameObject_array *v78; // x9
  int32_t *v79; // x20
  struct SkillIconComponent_array *v80; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v82; // x8
  struct SkillIconComponent_array *v83; // x8
  __int64 v84; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v87; // x25
  __int64 v88; // x20
  __int64 v89; // x26
  struct OtherUserGameEntity_o **v90; // x21
  int32_t v91; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v93; // w27
  int32_t Kind_28256712; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x20
  System_String_o *v97; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  System_Collections_Generic_Dictionary_int__int__o *v99; // x26
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v102; // s0
  float v103; // s8
  float v104; // s0
  float v105; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v108; // s10
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  __int64 v111; // x20
  __int64 v112; // x24
  WarQuestSelectionMaster_o *v113; // x0
  __int64 v114; // x20
  __int64 v115; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v116; // x23
  int32_t v117; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v119; // w8
  int32_t v120; // w22
  unsigned int v121; // w21
  ClassBoardInfo_o *v122; // x24
  int v123; // w21
  _BOOL4 v124; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v126; // x8
  Il2CppObject *v127; // x20
  Il2CppObject *v128; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  bool v130; // w1
  UnityEngine_Object_o *v131; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_Dictionary_int__int__o *v133; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v135; // x1
  __int64 v136; // x3
  System_Collections_Generic_IEnumerator_T__o *v137; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v139; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v142; // x3
  System_Collections_Generic_IEnumerator_T__c *v143; // x8
  unsigned __int64 v144; // x10
  int *v145; // x11
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x25
  __int64 v149; // x9
  ClassBoardSquareMaster_o *v150; // x0
  __int64 v151; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v153; // x1
  System_Collections_Generic_IEnumerator_T__c *v154; // x8
  unsigned __int64 v155; // x10
  int *v156; // x11
  __int64 v157; // x0
  struct System_Int32_array *squareIds; // x8
  __int64 v159; // x0
  ServantEntity_o *v160; // [xsp+18h] [xbp-98h]
  int v162; // [xsp+2Ch] [xbp-84h] BYREF
  __int64 v163; // [xsp+30h] [xbp-80h]
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16

  v9 = followerDeckId;
  v11 = displayServantType;
  v12 = classPos;
  v15 = this;
  if ( (byte_42B31CE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&ClassBoardBaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&UnityEngine_Font_TypeInfo);
    sub_B52984(&Grade_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_B52984(&StringLiteral_3309/*"COMMON_NO_ENTRY"*/);
    sub_B52984(&StringLiteral_6786/*"Fonts/FGO-Main-Font"*/);
    sub_B52984(&StringLiteral_6378/*"FFFFFF"*/);
    sub_B52984(&StringLiteral_9439/*"NP_MAX_COLOR_NAME"*/);
    sub_B52984(&StringLiteral_6377/*"FFFF00"*/);
    sub_B52984(&StringLiteral_9411/*"NO_ENTRY_NAME"*/);
    sub_B52984(&StringLiteral_9433/*"NP_COLOR_NAME"*/);
    this = (FriendIconComponent_o *)sub_B52984(&StringLiteral_15936/*"[{0}]+{1}[-]"*/);
    byte_42B31CE = 1;
  }
  if ( isUseServantStatus )
    v16 = (System_Int32_array **)userGameEntity;
  else
    v16 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  HIDWORD(v163) = 0;
  if ( !v15 )
    goto LABEL_312;
  p_userGameEntity = &v15->fields.userGameEntity;
  v15->fields.userGameEntity = (struct OtherUserGameEntity_o *)v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&v15->fields.userGameEntity,
    v16,
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
    goto LABEL_263;
  if ( !v9 )
  {
    TargetDeckId = FriendIconComponent__GetTargetDeckId(v15, v18);
    v11 = v15->fields.displayServantType;
    v12 = v15->fields.classPos;
    v9 = TargetDeckId;
  }
  v15->fields.deckId = v9;
  if ( OtherUserGameEntity__getSvtId(userGameEntity, v12, v11, v9, 0LL) )
  {
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_312;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)this,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                      userGameEntity,
                                      v15->fields.classPos,
                                      v15->fields.displayServantType,
                                      v15->fields.deckId,
                                      0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_312;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)this,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v23 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v25 = Entity;
        v26 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v166.fields.currentCryptoKey = v26;
        *(_QWORD *)&v166.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v166, 0LL) )
          v23 = 0LL;
        Entity = v25;
      }
    }
  }
  this = (FriendIconComponent_o *)v15->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_312;
  ServantFaceIconComponent__Set_30396768((ServantFaceIconComponent_o *)this, v23, 0LL, 0LL, 0, 0, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
  if ( !this )
    goto LABEL_312;
  UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerLevelIconLabel;
  if ( !this )
    goto LABEL_312;
  UIIconLabel__Set_41786400((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  v160 = Entity;
  if ( Entity )
  {
    if ( !v23 )
      goto LABEL_312;
    overwriteServantName = v23->fields.overwriteServantName;
    this = (FriendIconComponent_o *)System_String__IsNullOrEmpty(overwriteServantName, 0LL);
    servantNameLabel = v15->fields.servantNameLabel;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendIconComponent_o *)ServantEntity__getName(Entity, v23->fields.limitCount, -1, 0LL);
      if ( !servantNameLabel )
        goto LABEL_312;
      v30 = (System_String_o *)this;
      v31 = servantNameLabel;
    }
    else
    {
      if ( !servantNameLabel )
        goto LABEL_312;
      v31 = v15->fields.servantNameLabel;
      v30 = overwriteServantName;
    }
    UIRangeLabel__Set(v31, v30, 0LL, 1, 0, 0LL);
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
    v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v37 = **(_QWORD **)(v36 + 192);
    if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
      sub_AEB684(v37);
    this = **(FriendIconComponent_o ***)(v37 + 184);
    if ( this )
    {
      v38 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v23, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_312;
        this = (FriendIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_312;
        FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                       (ServantLimitSpoilerProtectionMaster_o *)this,
                                       v23->fields.svtId,
                                       FriendNpNameDispLimitCount,
                                       0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v42 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      v43 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v167.fields.currentCryptoKey = v42;
      *(_QWORD *)&v167.fields.fakeValue = v41;
      this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v167, 0LL);
      if ( v43 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v43,
                                       (int32_t)this,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                          v23->fields.svtId,
                                          0LL);
        if ( tdInfo )
        {
          if ( v38 )
          {
            OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                v38,
                                (int32_t)this,
                                ServantLimitCountSealAfter,
                                tdInfo->fields.name,
                                tdInfo->fields.lv,
                                0LL);
            v46 = (System_String_o **)&StringLiteral_9439/*"NP_MAX_COLOR_NAME"*/;
            v47 = TreasureDeviceLevelIcon <= 1;
            v48 = (Il2CppObject *)OverwriteTDName;
            if ( v47 )
              v46 = (System_String_o **)&StringLiteral_9433/*"NP_COLOR_NAME"*/;
            v49 = *v46;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v50 = LocalizationManager__Get(v49, 0LL);
            this = (FriendIconComponent_o *)System_String__Format(v50, v48, 0LL);
            if ( tdInfo )
            {
              v51 = (System_String_o *)this;
              svtNpTitleLabel = v15->fields.svtNpTitleLabel;
              p_userGameEntity = &v15->fields.userGameEntity;
              this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
              if ( svtNpTitleLabel )
              {
                UIRangeLabel__Set(svtNpTitleLabel, v51, (System_String_o *)this, 0, 0, 0LL);
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
                    goto LABEL_312;
                  ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                }
                goto LABEL_80;
              }
            }
          }
        }
      }
    }
LABEL_312:
    sub_B52A5C(this, v16);
  }
  v32 = v15->fields.servantNameLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3309/*"COMMON_NO_ENTRY"*/, 0LL);
  if ( !v32 )
    goto LABEL_312;
  UIRangeLabel__Set(v32, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v33 = v15->fields.svtNpTitleLabel;
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9411/*"NO_ENTRY_NAME"*/, 0LL);
  if ( !v33 )
    goto LABEL_312;
  UIRangeLabel__Set(v33, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v34 = (UnityEngine_Object_o *)v15->fields.svtNpCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.svtNpCommandCard;
    if ( !this )
      goto LABEL_312;
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
    goto LABEL_312;
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
      goto LABEL_312;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !this )
      goto LABEL_312;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
  }
  if ( !v23 )
    goto LABEL_107;
  v57 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v168.fields.currentCryptoKey = v57;
  *(_QWORD *)&v168.fields.fakeValue = v58;
  this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v168, 0LL);
  if ( (int)this >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(v23, &skillInfoList, 0LL);
    skillIconList = v15->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_312;
    v60 = *(_QWORD *)&skillIconList->max_length;
    if ( v60 << 32 >= 1 )
    {
      v61 = 0;
      v62 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v62 < (int)max_length )
        {
          if ( v62 >= max_length )
            goto LABEL_313;
          v64 = skillInfoList->m_Items[v62];
          if ( v64 && v64->fields.id >= 1 )
            v61 = v62 + 1;
        }
        if ( (__int64)++v62 >= (int)v60 )
          goto LABEL_130;
      }
      goto LABEL_312;
    }
    v61 = 0;
LABEL_130:
    if ( (int)v60 >= 1 )
    {
      v73 = v61;
      v74 = 4LL;
      do
      {
        skillBaseList = v15->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_312;
        v76 = v74 - 4;
        if ( v74 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_313;
        v77 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v74);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( (__int64)v76 >= v73 )
          {
            v82 = v15->fields.skillBaseList;
            if ( !v82 )
              goto LABEL_312;
            if ( v76 >= v82->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&v82->obj.klass + v74);
            if ( !this )
              goto LABEL_312;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_312;
            if ( v76 >= skillInfoList->max_length )
              goto LABEL_313;
            v78 = v15->fields.skillBaseList;
            if ( !v78 )
              goto LABEL_312;
            if ( v76 >= v78->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&v78->obj.klass + v74);
            if ( !this )
              goto LABEL_312;
            v79 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v74);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v80 = v15->fields.skillIconList;
            if ( !v80 )
              goto LABEL_312;
            if ( v76 >= v80->max_length )
              goto LABEL_313;
            if ( !v79 )
              goto LABEL_312;
            this = (FriendIconComponent_o *)*((_QWORD *)&v80->obj.klass + v74);
            if ( !this )
              goto LABEL_312;
            SkillIconComponent__Set_26536852((SkillIconComponent_o *)this, v79[4], v79[5], v79[12], v79[13], 0LL);
            skillLevelIconLabelList = v15->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_312;
            if ( v76 >= skillLevelIconLabelList->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v74);
            if ( !this )
              goto LABEL_312;
            UIIconLabel__Set_41786400((UIIconLabel_o *)this, 48, v79[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v83 = v15->fields.skillIconList;
        if ( !v83 )
          goto LABEL_312;
        v84 = v74 - 3;
        ++v74;
      }
      while ( v84 < (int)v83->max_length );
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
        goto LABEL_312;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_312;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FriendIconComponent_o *)v15->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_312;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.skillInfoUiWidget,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
  }
  else
  {
LABEL_107:
    v65 = v15->fields.skillIconList;
    if ( !v65 )
      goto LABEL_312;
    v66 = 4LL;
    while ( 1 )
    {
      v67 = v66 - 4;
      if ( v66 - 4 >= (int)v65->max_length )
        break;
      v68 = v15->fields.skillBaseList;
      if ( !v68 )
        goto LABEL_312;
      if ( v67 >= v68->max_length )
        goto LABEL_313;
      v69 = (UnityEngine_Object_o *)*((_QWORD *)&v68->obj.klass + v66);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v70 = v15->fields.skillBaseList;
        if ( !v70 )
          goto LABEL_312;
        if ( v67 >= v70->max_length )
        {
LABEL_313:
          v159 = sub_B52A88(this);
          sub_B52A28(v159, 0LL);
        }
        this = (FriendIconComponent_o *)*((_QWORD *)&v70->obj.klass + v66);
        if ( !this )
          goto LABEL_312;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v65 = v15->fields.skillIconList;
      ++v66;
      if ( !v65 )
        goto LABEL_312;
    }
    v71 = (UnityEngine_Object_o *)v15->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      this = (FriendIconComponent_o *)v15->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_312;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_312;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  FriendIconComponent__SetAppendSkill(v15, v23, v72);
  svtCommandCardList = (UnityEngine_Object_o *)v15->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v87 = v15->fields.svtCommandCardList;
    if ( v23 )
    {
      v88 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      v90 = p_userGameEntity;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v169.fields.currentCryptoKey = v88;
      *(_QWORD *)&v169.fields.fakeValue = v89;
      v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v169, 0LL);
      commandCardParam = v23->fields.commandCardParam;
      v93 = v91;
      this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v23, 0LL);
      if ( !v87 )
        goto LABEL_312;
      ServantCommandCardListComponent__Set_27215728(v87, v93, commandCardParam, (System_Int32_array *)this, 2, 1, 0LL);
      p_userGameEntity = v90;
    }
    else
    {
      if ( !v87 )
        goto LABEL_312;
      ServantCommandCardListComponent__Clear(v15->fields.svtCommandCardList, 0LL);
    }
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28256712 = Grade__GetKind_28256712(userGameEntity, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28256712, 0LL);
  baseSpr = v15->fields.baseSpr;
  v97 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v97, 0LL);
  gradeIcon = (UnityEngine_Object_o *)v15->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v99 = classBoardMaxNumDictionary;
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_312;
    trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
    {
      playerNameLabel = v15->fields.playerNameLabel;
      this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6786/*"Fonts/FGO-Main-Font"*/, 0LL);
      if ( !playerNameLabel )
        goto LABEL_312;
      if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
      {
        sub_B52D50(this);
        goto LABEL_319;
      }
      UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
      v99 = classBoardMaxNumDictionary;
    }
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_312;
    LODWORD(v102) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v103 = v102;
    LODWORD(v104) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_312;
    v105 = v104;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v108 = LocalPositionX;
    v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v109, (float)(v105 * 0.5) + (float)(v103 + v108), 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v110, 57.0, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_28256712, 0LL);
  }
  this = (FriendIconComponent_o *)v15->fields.pushSprite;
  if ( !this )
    goto LABEL_312;
  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v160 )
  {
    if ( !v23 )
      goto LABEL_312;
    if ( userGameEntity->fields.pushUserSvtId == v23->fields.userSvtId )
    {
      this = (FriendIconComponent_o *)v15->fields.pushSprite;
      if ( !this )
        goto LABEL_312;
      this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_312;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  if ( v23 )
  {
    v111 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
    v112 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v170.fields.currentCryptoKey = v111;
    *(_QWORD *)&v170.fields.fakeValue = v112;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v170, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( v99 )
          goto LABEL_219;
        v133 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
        System_Collections_Generic_Dictionary_int__int____ctor(
          v133,
          (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !this )
          goto LABEL_312;
        this = (FriendIconComponent_o *)this->fields.playerNameLabel;
        if ( !this )
          goto LABEL_312;
        Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                       (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
        v137 = Enumerator;
        if ( Enumerator )
        {
          while ( 1 )
          {
            klass = v137->klass;
            if ( *(_WORD *)&v137->klass->_2.bitflags1 )
            {
              v139 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v139;
                p_offset += 4;
                if ( v139 >= *(unsigned __int16 *)&v137->klass->_2.bitflags1 )
                  goto LABEL_280;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_280:
              p_method = sub_AEB880(v137, System_Collections_IEnumerator_TypeInfo, 0LL, v136);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    v137,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v143 = v137->klass;
            if ( *(_WORD *)&v137->klass->_2.bitflags1 )
            {
              v144 = 0LL;
              v145 = &v143->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v145 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
              {
                ++v144;
                v145 += 4;
                if ( v144 >= *(unsigned __int16 *)&v137->klass->_2.bitflags1 )
                  goto LABEL_287;
              }
              v146 = (__int64)&v143->vtable[*v145].method;
            }
            else
            {
LABEL_287:
              v146 = sub_AEB880(v137, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v142);
            }
            v147 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v146)(
                     v137,
                     *(_QWORD *)(v146 + 8));
            v148 = v147;
            if ( v147 )
            {
              v149 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v147 + 300LL) < (unsigned int)v149
                || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v147 + 200LL) + 8 * v149 - 8) != ClassBoardBaseEntity_TypeInfo )
              {
                sub_B52D50(v147);
LABEL_315:
                sub_B52A5C(v150, v151);
              }
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v150 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v148 )
              goto LABEL_315;
            if ( !v150 )
              sub_B52A5C(0LL, v151);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v150, *(_DWORD *)(v148 + 16), 0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !v133 )
                sub_B52A5C(OtherThanNoneEntity, v153);
              System_Collections_Generic_Dictionary_int__int___Add(
                v133,
                *(_DWORD *)(v148 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v163 = 0x10000061FLL;
          v99 = v133;
          if ( v137 )
          {
            v154 = v137->klass;
            if ( *(_WORD *)&v137->klass->_2.bitflags1 )
            {
              v155 = 0LL;
              v156 = &v154->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v156 - 1) != System_IDisposable_TypeInfo )
              {
                ++v155;
                v156 += 4;
                if ( v155 >= *(unsigned __int16 *)&v137->klass->_2.bitflags1 )
                  goto LABEL_305;
              }
              v157 = (__int64)&v154->vtable[*v156].method;
            }
            else
            {
LABEL_305:
              v157 = sub_AEB880(v137, System_IDisposable_TypeInfo, 0LL, v142);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v157)(
              v137,
              *(_QWORD *)(v157 + 8));
          }
          v163 = 1567LL;
LABEL_219:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v113 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
          v115 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
          v114 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
          v116 = (DataMasterBase_WarMaster__WarEntity__int__o *)v113;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v171.fields.currentCryptoKey = v115;
          *(_QWORD *)&v171.fields.fakeValue = v114;
          this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v171, 0LL);
          if ( !v116 )
            goto LABEL_312;
          this = (FriendIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v116,
                                            (int32_t)this,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_312;
          v117 = (int32_t)this->fields.skillBaseList;
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_312;
          this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                            (ClassBoardClassMaster_o *)this,
                                            v117,
                                            0LL);
          userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_312;
          v119 = userClassBoardInfo->max_length;
          if ( v119 < 1 )
          {
LABEL_238:
            v123 = 0;
          }
          else
          {
            v120 = (int)this;
            v121 = 0;
            while ( 1 )
            {
              if ( v121 >= v119 )
                goto LABEL_313;
              v122 = userClassBoardInfo->m_Items[v121];
              if ( !v122 )
                goto LABEL_312;
              if ( v122->fields.classBoardBaseId == v120 )
              {
                if ( !v99 )
                  goto LABEL_312;
                this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                  v99,
                                                  v120,
                                                  (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v122, v117, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
              }
              v119 = userClassBoardInfo->max_length;
              if ( (int)++v121 >= v119 )
                goto LABEL_238;
            }
            this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v99,
                                              v120,
                                              (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v122->fields.squareIds;
            if ( !squareIds )
              goto LABEL_312;
            v123 = squareIds->max_length;
            v124 = (int)this <= v123;
            if ( (int)this > 0 )
            {
LABEL_240:
              openClassBoardNumLabel = (UnityEngine_Object_o *)v15->fields.openClassBoardNumLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
              {
                v126 = (Il2CppObject **)&StringLiteral_6378/*"FFFFFF"*/;
                if ( v124 )
                  v126 = (Il2CppObject **)&StringLiteral_6377/*"FFFF00"*/;
                v127 = *v126;
                v162 = v123;
                v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
                this = (FriendIconComponent_o *)System_String__Format_44563852(
                                                  (System_String_o *)StringLiteral_15936/*"[{0}]+{1}[-]"*/,
                                                  v127,
                                                  v128,
                                                  0LL);
                if ( !v15->fields.openClassBoardNumLabel )
                  goto LABEL_312;
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
                  goto LABEL_312;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_312;
                v130 = 1;
LABEL_262:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v130, 0LL);
                goto LABEL_263;
              }
              goto LABEL_263;
            }
          }
          v124 = 0;
          goto LABEL_240;
        }
LABEL_319:
        sub_B52A5C(Enumerator, v135);
      }
    }
  }
  v131 = (UnityEngine_Object_o *)v15->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_312;
    this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_312;
    v130 = 0;
    goto LABEL_262;
  }
LABEL_263:
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
      goto LABEL_312;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_userGameEntity != 0LL, 1, 0LL);
  }
}


void __fastcall FriendIconComponent__SetAppendSkill(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
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
  signed __int64 v16; // x21
  __int64 v17; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  unsigned __int64 v19; // x24
  UnityEngine_Object_o *v20; // x20
  struct UnityEngine_GameObject_array *v21; // x9
  int32_t *v22; // x20
  struct SkillIconComponent_array *v23; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v25; // x8
  struct SkillIconComponent_array *v26; // x8
  __int64 v27; // x9
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  SwitchUIWidgetComponent_o *v30; // x19
  __int64 v31; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v4 = this;
  if ( (byte_42B31CF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (FriendIconComponent_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B31CF = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !info )
      goto LABEL_20;
    v6 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v6;
    *(_QWORD *)&v33.fields.fakeValue = v5;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29298404(info, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_75;
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
                goto LABEL_76;
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
        v16 = v9;
        v17 = 4LL;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_75;
          v19 = v17 - 4;
          if ( v17 - 4 >= (unsigned __int64)appendSkillBaseList->max_length )
            goto LABEL_76;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v17);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v19 >= v16 )
            {
              v25 = v4->fields.appendSkillBaseList;
              if ( !v25 )
                goto LABEL_75;
              if ( v19 >= v25->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v25->obj.klass + v17);
              if ( !this )
                goto LABEL_75;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_75;
              if ( v19 >= skillInfoList->max_length )
                goto LABEL_76;
              v21 = v4->fields.appendSkillBaseList;
              if ( !v21 )
                goto LABEL_75;
              if ( v19 >= v21->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v21->obj.klass + v17);
              if ( !this )
                goto LABEL_75;
              v22 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v17);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v23 = v4->fields.appendSkillIconList;
              if ( !v23 )
                goto LABEL_75;
              if ( v19 >= v23->max_length )
                goto LABEL_76;
              if ( !v22 )
                goto LABEL_75;
              this = (FriendIconComponent_o *)*((_QWORD *)&v23->obj.klass + v17);
              if ( !this )
                goto LABEL_75;
              SkillIconComponent__Set_26536852((SkillIconComponent_o *)this, v22[4], v22[5], v22[12], v22[13], 0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v19 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v17);
              if ( !this )
                goto LABEL_75;
              UIIconLabel__Set_41786400((UIIconLabel_o *)this, 48, v22[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
          }
          v26 = v4->fields.appendSkillIconList;
          if ( !v26 )
            goto LABEL_75;
          v27 = v17 - 3;
          ++v17;
        }
        while ( v27 < (int)v26->max_length );
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          v30 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v30 )
            goto LABEL_75;
          SwitchUIWidgetComponent__Set(v30, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_20:
      v13 = v4->fields.appendSkillIconList;
      if ( !v13 )
        goto LABEL_75;
      v14 = 0LL;
      while ( (int)v14 < (signed int)v13->max_length )
      {
        v15 = v4->fields.appendSkillBaseList;
        if ( v15 )
        {
          if ( (unsigned int)v14 >= v15->max_length )
          {
LABEL_76:
            v31 = sub_B52A88(this);
            sub_B52A28(v31, 0LL);
          }
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
        goto LABEL_75;
      }
      this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !this
        || (this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
      {
LABEL_75:
        sub_B52A5C(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}