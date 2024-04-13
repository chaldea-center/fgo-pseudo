void __fastcall FriendIconComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EBDFD & 1) == 0 )
  {
    sub_B5D5C4(&FriendIconComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19765/*"img_listbg_01"*/, v8, v9, v10);
    byte_42EBDFD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FriendIconComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19765/*"img_listbg_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19765/*"img_listbg_01"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BalanceConfig_c *v14; // x0
  struct UnityEngine_GameObject_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UIIconLabel_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct SkillIconComponent_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UIIconLabel_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EBDFC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UIIconLabel___TypeInfo, v11, v12, v13);
    byte_42EBDFC = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v14->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v34; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v36; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v38; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v40; // x19

  if ( (byte_42EBDEF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19608/*"icon_skill_mini"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19742/*"img_friend_skill"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19519/*"icon_append_mini"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19741/*"img_friend_appendskill"*/, v23, v24, v25);
    byte_42EBDEF = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v34 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v34, (System_String_o *)StringLiteral_19608/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v36 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v36, (System_String_o *)StringLiteral_19742/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v38 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_19519/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v40 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v40, (System_String_o *)StringLiteral_19741/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EBDFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBDFB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EBDF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EBDF3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EBDF7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendIconComponent_EndCloseShowServantEquip__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EBDF7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
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
    sub_B5D69C(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v16; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42EBDF2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendIconComponent_EndShowServant__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBDF2 = 1;
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
      v16 = ServantLeaderInfo;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_B5D69C(v19, v20);
      CommonUI__OpenServantStatusDialog_18214956(Instance, 5, v16, v18, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportClassBoardBuff(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v37; // x20
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x21
  __int64 v42; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x20
  void *Entity; // x0
  __int64 v45; // x1
  int32_t v46; // w22
  struct OtherUserGameEntity_o *v47; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v50; // w20
  unsigned int v51; // w24
  __int64 v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  _QWORD **v59; // x24
  __int64 v60; // x22
  __int16 v61; // w8
  __int64 v62; // x22
  __int64 v63; // x22
  __int64 v64; // x22
  System_Int32_array ***v65; // x8
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  _QWORD **v73; // x23
  __int64 v74; // x22
  __int16 v75; // w8
  __int64 v76; // x22
  __int64 v77; // x22
  __int64 v78; // x22
  System_Int32_array ***v79; // x8
  System_Int32_array **v80; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v82; // x23
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_42EBDFA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Array_Empty_int___, v5, v6, v7);
    sub_B5D5C4(&ClassBoardInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v23, v24, v25);
    sub_B5D5C4(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33, v34);
    byte_42EBDFA = 1;
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
      v37 = ServantLeaderInfo;
      v38 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 75) & 2) != 0 )
        v38 = (_QWORD *)sub_B5D5CC(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v39 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v38, v38[3]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      v42 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
      v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v84.fields.currentCryptoKey = v42;
      *(_QWORD *)&v84.fields.fakeValue = v41;
      Entity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v84, 0LL);
      if ( !v43 )
        goto LABEL_52;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v43,
                 (int32_t)Entity,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_52;
      v46 = *((_DWORD *)Entity + 20);
      Entity = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_52;
      Entity = (void *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, v46, 0LL);
      v47 = this->fields.userGameEntity;
      if ( !v47 )
        goto LABEL_52;
      userClassBoardInfo = v47->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_52;
      max_length = userClassBoardInfo->max_length;
      v50 = (int)Entity;
      if ( max_length >= 1 )
      {
        v51 = 0;
        do
        {
          if ( v51 >= max_length )
          {
            v83 = sub_B5D6C8(Entity);
            sub_B5D668(v83, 0LL);
          }
          v52 = (__int64)userClassBoardInfo->m_Items[v51];
          if ( !v52 )
            goto LABEL_52;
          if ( *(_DWORD *)(v52 + 16) == v50 )
          {
            Entity = (void *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v52, v46, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_49;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v51 < max_length );
      }
      v52 = sub_B5D694(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v52, 0LL);
      if ( !v52 )
        goto LABEL_52;
      *(_DWORD *)(v52 + 16) = v50;
      v59 = (_QWORD **)Method_System_Array_Empty_int___;
      v60 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v61 = *(_WORD *)(v60 + 306);
      if ( (v61 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v61 = *(_WORD *)(v60 + 306);
      }
      if ( (v61 & 0x400) != 0 )
      {
        v62 = *v59[6];
        if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
          sub_AF52C4(*v59[6]);
        if ( !*(_DWORD *)(v62 + 224) )
        {
          v63 = *v59[6];
          if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
            sub_AF52C4(*v59[6]);
          j_il2cpp_runtime_class_init_0(v63);
        }
      }
      v64 = *v59[6];
      if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
        sub_AF52C4(*v59[6]);
      v65 = *(System_Int32_array ****)(v64 + 184);
      v66 = *v65;
      *(_QWORD *)(v52 + 24) = *v65;
      sub_B5D560((BattleServantConfConponent_o *)(v52 + 24), v66, v53, v54, v55, v56, v57, v58);
      v73 = (_QWORD **)Method_System_Array_Empty_int___;
      v74 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v75 = *(_WORD *)(v74 + 306);
      if ( (v75 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v75 = *(_WORD *)(v74 + 306);
      }
      if ( (v75 & 0x400) != 0 )
      {
        v76 = *v73[6];
        if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
          sub_AF52C4(*v73[6]);
        if ( !*(_DWORD *)(v76 + 224) )
        {
          v77 = *v73[6];
          if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
            sub_AF52C4(*v73[6]);
          j_il2cpp_runtime_class_init_0(v77);
        }
      }
      v78 = *v73[6];
      if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
        sub_AF52C4(*v73[6]);
      v79 = *(System_Int32_array ****)(v78 + 184);
      v80 = *v79;
      *(_QWORD *)(v52 + 32) = *v79;
      sub_B5D560((BattleServantConfConponent_o *)(v52 + 32), v80, v67, v68, v69, v70, v71, v72);
LABEL_49:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v82,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_52:
        sub_B5D69C(Entity, v45);
      CommonUI__OpenClassBoardEffectListDialog(Instance, 1, v50, 0, v82, 1, (ClassBoardInfo_o *)v52, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v12; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v14; // x1

  if ( (byte_42EBDF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v8, v9, v10);
    byte_42EBDF5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v12 = (SupportInfoJump_o *)sub_B5D694(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v12, userGameEntity, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v10; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42EBDF8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EBDF8 = 1;
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
  v10 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_24;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_28:
    sub_B5D69C(userGameEntity, method);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v12 = EquipInfo;
    v14 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v14;
    *(_QWORD *)&v17.fields.fakeValue = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( this->fields.followerType == 5 )
        v16 = 14;
      else
        v16 = 13;
      if ( this->fields.followerType != 5 && v10 )
      {
        if ( ServantLeaderInfo__IsNpc(v10, 0LL) )
          v16 = 19;
        else
          v16 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v12, v16, v15);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x1
  SkillInfo_o *v37; // x21
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  System_String_o *v40; // x19
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  __int64 v46; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EBDF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, skillIndex, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42EBDF9 = 1;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_27;
        if ( skillInfoList->max_length <= skillIndex )
        {
          v46 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v46, 0LL);
        }
        v37 = skillInfoList->m_Items[skillIndex];
        if ( v37 && v37->fields.id >= 1 && v37->fields.lv >= 1 )
        {
          v38 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
            v38 = (_QWORD *)sub_B5D5CC(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v39 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v38, v38[3]);
          OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              Master_WarQuestSelectionMaster,
                                                                                              v37->fields.id,
                                                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_WarQuestSelectionMaster )
            {
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Master_WarQuestSelectionMaster,
                &name,
                &detail,
                v37->fields.lv,
                0LL);
              v40 = name;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v37->fields.lv;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
              v43 = System_String__Format(v41, v42, 0LL);
              name = System_String__Concat_44580072(v40, (System_String_o *)StringLiteral_81/*" "*/, v43, 0LL);
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B5D69C(Master_WarQuestSelectionMaster, v36);
        }
      }
    }
  }
  v44 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 75) & 2) != 0 )
    v44 = (_QWORD *)sub_B5D5CC(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v45 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v44, v44[3]);
  OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0LL);
}


void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v38; // x20
  __int64 v39; // x0
  int32_t max_length; // w9
  SkillInfo_o *v41; // x22
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  SkillEntity_o *Entity; // x20
  DataManager_o *v45; // x19
  System_String_o *v46; // x20
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x20
  Il2CppObject *v51; // x0
  System_String_o *v52; // x19
  __int64 v53; // x0
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EBDF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v33, v34, v35);
    byte_42EBDF4 = 1;
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
  v38 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_35;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ServantLeaderInfo__getSkillInfo(v38, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_35;
  max_length = skillInfoList->max_length;
  if ( max_length <= skillIndex )
    goto LABEL_35;
  if ( max_length <= (unsigned int)skillIndex )
  {
    v53 = sub_B5D6C8(v39);
    sub_B5D668(v53, 0LL);
  }
  v41 = skillInfoList->m_Items[skillIndex];
  if ( v41 && v41->fields.id >= 1 && v41->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_32;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v41->fields.id,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v41->fields.id,
                                  v41->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_32;
    v45 = Instance;
    SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v41->fields.lv, 0LL);
    v46 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v41->fields.lv;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
    v49 = System_String__Format(v47, v48, 0LL);
    name = System_String__Concat_44580072(v46, (System_String_o *)StringLiteral_81/*" "*/, v49, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v45
      || (v50 = (System_String_o *)Instance,
          datalist = (int)v45->fields.datalist,
          v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
          v52 = System_String__Format(v50, v51, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_32:
      sub_B5D69C(Instance, v43);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v52, detail, 1, 0, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EBDF6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)equipInfo, statusKind, method);
    sub_B5D5C4(&Method_FriendIconComponent_EndShowServantEquip__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EBDF6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__OpenServantEquipStatusDialog_18217320(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  System_Int32_array **v133; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x27
  const MethodInfo *v135; // x1
  int32_t TargetDeckId; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  ServantEntity_o *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v140; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  ServantEntity_o *v142; // x21
  __int64 v143; // x20
  __int64 v144; // x25
  System_String_o *overwriteServantName; // x26
  UIRangeLabel_o *servantNameLabel; // x25
  System_String_o *v147; // x1
  UIRangeLabel_o *v148; // x0
  UIRangeLabel_o *v149; // x25
  UIRangeLabel_o *v150; // x25
  UnityEngine_Object_o *v151; // x20
  int32_t TreasureDeviceLevelIcon; // w25
  __int64 v153; // x20
  __int64 v154; // x20
  ServantLimitAddMaster_o *v155; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v158; // x20
  __int64 v159; // x24
  ServantLimitImageMaster_o *v160; // x28
  int32_t ServantLimitCountSealAfter; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v163; // x9
  bool v164; // cc
  Il2CppObject *v165; // x25
  System_String_o *v166; // x20
  System_String_o *v167; // x0
  System_String_o *v168; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x26
  UnityEngine_Object_o *svtNpCommandCard; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v174; // x20
  __int64 v175; // x25
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v177; // x8
  int v178; // w9
  unsigned __int64 v179; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v181; // x14
  struct SkillIconComponent_array *v182; // x8
  __int64 v183; // x21
  unsigned __int64 v184; // x24
  struct UnityEngine_GameObject_array *v185; // x8
  UnityEngine_Object_o *v186; // x20
  struct UnityEngine_GameObject_array *v187; // x8
  UnityEngine_Object_o *v188; // x20
  const MethodInfo *v189; // x2
  signed __int64 v190; // x21
  __int64 v191; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v193; // x25
  UnityEngine_Object_o *v194; // x20
  struct UnityEngine_GameObject_array *v195; // x9
  int32_t *v196; // x20
  struct SkillIconComponent_array *v197; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v199; // x8
  struct SkillIconComponent_array *v200; // x8
  __int64 v201; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v204; // x25
  __int64 v205; // x20
  __int64 v206; // x26
  struct OtherUserGameEntity_o **v207; // x21
  int32_t v208; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v210; // w27
  int32_t Kind_28445348; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x20
  System_String_o *v214; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  System_Collections_Generic_Dictionary_int__int__o *v216; // x26
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v219; // s0
  float v220; // s8
  float v221; // s0
  float v222; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v225; // s10
  UnityEngine_GameObject_o *v226; // x0
  UnityEngine_GameObject_o *v227; // x0
  __int64 v228; // x20
  __int64 v229; // x24
  WarQuestSelectionMaster_o *v230; // x0
  __int64 v231; // x20
  __int64 v232; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v233; // x23
  int32_t v234; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v236; // w8
  int32_t v237; // w22
  unsigned int v238; // w21
  ClassBoardInfo_o *v239; // x24
  int v240; // w21
  _BOOL4 v241; // w22
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  Il2CppObject **v243; // x8
  Il2CppObject *v244; // x20
  Il2CppObject *v245; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  bool v247; // w1
  UnityEngine_Object_o *v248; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_Dictionary_int__int__o *v250; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v252; // x1
  __int64 v253; // x3
  System_Collections_Generic_IEnumerator_T__o *v254; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v256; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v259; // x3
  System_Collections_Generic_IEnumerator_T__c *v260; // x8
  unsigned __int64 v261; // x10
  int *v262; // x11
  __int64 v263; // x0
  __int64 v264; // x0
  __int64 v265; // x25
  __int64 v266; // x9
  ClassBoardSquareMaster_o *v267; // x0
  __int64 v268; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v270; // x1
  System_Collections_Generic_IEnumerator_T__c *v271; // x8
  unsigned __int64 v272; // x10
  int *v273; // x11
  __int64 v274; // x0
  struct System_Int32_array *squareIds; // x8
  __int64 v276; // x0
  ServantEntity_o *v277; // [xsp+18h] [xbp-98h]
  int v279; // [xsp+2Ch] [xbp-84h] BYREF
  __int64 v280; // [xsp+30h] [xbp-80h]
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v285; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v286; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16

  v9 = followerDeckId;
  v11 = displayServantType;
  v12 = classPos;
  v15 = this;
  if ( (byte_42EBDF0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)userGameEntity, isUseServantStatus, *(_QWORD *)&classPos);
    sub_B5D5C4(&ClassBoardBaseEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v43, v44, v45);
    sub_B5D5C4(&DataManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v61, v62, v63);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v64, v65, v66);
    sub_B5D5C4(&UnityEngine_Font_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Grade_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v76, v77, v78);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&int_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v85, v86, v87);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v88, v89, v90);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&OptionManager_TypeInfo, v97, v98, v99);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v100, v101, v102);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v103, v104, v105);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_3342/*"COMMON_NO_ENTRY"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_6822/*"Fonts/FGO-Main-Font"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_6414/*"FFFFFF"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_6413/*"FFFF00"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_9450/*"NO_ENTRY_NAME"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_9472/*"NP_COLOR_NAME"*/, v127, v128, v129);
    this = (FriendIconComponent_o *)sub_B5D5C4(&StringLiteral_16021/*"[{0}]+{1}[-]"*/, v130, v131, v132);
    byte_42EBDF0 = 1;
  }
  if ( isUseServantStatus )
    v133 = (System_Int32_array **)userGameEntity;
  else
    v133 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  HIDWORD(v280) = 0;
  if ( !v15 )
    goto LABEL_312;
  p_userGameEntity = &v15->fields.userGameEntity;
  v15->fields.userGameEntity = (struct OtherUserGameEntity_o *)v133;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v15->fields.userGameEntity,
    v133,
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
    TargetDeckId = FriendIconComponent__GetTargetDeckId(v15, v135);
    v11 = v15->fields.displayServantType;
    v12 = v15->fields.classPos;
    v9 = TargetDeckId;
  }
  v15->fields.deckId = v9;
  if ( OtherUserGameEntity__getSvtId(userGameEntity, v12, v11, v9, 0LL) )
  {
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_312;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)this,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
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
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v140 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( !ServantLeaderInfo->fields.userSvtId )
    {
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v142 = Entity;
        v143 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v144 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v283.fields.currentCryptoKey = v143;
        *(_QWORD *)&v283.fields.fakeValue = v144;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v283, 0LL) )
          v140 = 0LL;
        Entity = v142;
      }
    }
  }
  this = (FriendIconComponent_o *)v15->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_312;
  ServantFaceIconComponent__Set_30776084((ServantFaceIconComponent_o *)this, v140, 0LL, 0LL, 0, 0, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
  if ( !this )
    goto LABEL_312;
  UILabel__set_text((UILabel_o *)this, userGameEntity->fields.userName, 0LL);
  this = (FriendIconComponent_o *)v15->fields.playerLevelIconLabel;
  if ( !this )
    goto LABEL_312;
  UIIconLabel__Set_41886452((UIIconLabel_o *)this, 2, userGameEntity->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  v277 = Entity;
  if ( Entity )
  {
    if ( !v140 )
      goto LABEL_312;
    overwriteServantName = v140->fields.overwriteServantName;
    this = (FriendIconComponent_o *)System_String__IsNullOrEmpty(overwriteServantName, 0LL);
    servantNameLabel = v15->fields.servantNameLabel;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendIconComponent_o *)ServantEntity__getName(Entity, v140->fields.limitCount, -1, 0LL);
      if ( !servantNameLabel )
        goto LABEL_312;
      v147 = (System_String_o *)this;
      v148 = servantNameLabel;
    }
    else
    {
      if ( !servantNameLabel )
        goto LABEL_312;
      v148 = v15->fields.servantNameLabel;
      v147 = overwriteServantName;
    }
    UIRangeLabel__Set(v148, v147, 0LL, 1, 0, 0LL);
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
    v153 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v153 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v154 = **(_QWORD **)(v153 + 192);
    if ( (*(_BYTE *)(v154 + 306) & 1) == 0 )
      sub_AF52C4(v154);
    this = **(FriendIconComponent_o ***)(v154 + 184);
    if ( this )
    {
      v155 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v140, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_312;
        this = (FriendIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_312;
        FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                       (ServantLimitSpoilerProtectionMaster_o *)this,
                                       v140->fields.svtId,
                                       FriendNpNameDispLimitCount,
                                       0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v159 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
      v158 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
      v160 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v284.fields.currentCryptoKey = v159;
      *(_QWORD *)&v284.fields.fakeValue = v158;
      this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v284, 0LL);
      if ( v160 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v160,
                                       (int32_t)this,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                          v140->fields.svtId,
                                          0LL);
        if ( tdInfo )
        {
          if ( v155 )
          {
            OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                v155,
                                (int32_t)this,
                                ServantLimitCountSealAfter,
                                tdInfo->fields.name,
                                tdInfo->fields.lv,
                                0LL);
            v163 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
            v164 = TreasureDeviceLevelIcon <= 1;
            v165 = (Il2CppObject *)OverwriteTDName;
            if ( v164 )
              v163 = (System_String_o **)&StringLiteral_9472/*"NP_COLOR_NAME"*/;
            v166 = *v163;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v167 = LocalizationManager__Get(v166, 0LL);
            this = (FriendIconComponent_o *)System_String__Format(v167, v165, 0LL);
            if ( tdInfo )
            {
              v168 = (System_String_o *)this;
              svtNpTitleLabel = v15->fields.svtNpTitleLabel;
              p_userGameEntity = &v15->fields.userGameEntity;
              this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
              if ( svtNpTitleLabel )
              {
                UIRangeLabel__Set(svtNpTitleLabel, v168, (System_String_o *)this, 0, 0, 0LL);
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
    sub_B5D69C(this, v133);
  }
  v149 = v15->fields.servantNameLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_NO_ENTRY"*/, 0LL);
  if ( !v149 )
    goto LABEL_312;
  UIRangeLabel__Set(v149, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v150 = v15->fields.svtNpTitleLabel;
  this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
  if ( !v150 )
    goto LABEL_312;
  UIRangeLabel__Set(v150, (System_String_o *)this, 0LL, 1, 0, 0LL);
  v151 = (UnityEngine_Object_o *)v15->fields.svtNpCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v151, 0LL, 0LL) )
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
    this = (FriendIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !this )
      goto LABEL_312;
    SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
  }
  if ( !v140 )
    goto LABEL_107;
  v174 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
  v175 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v285.fields.currentCryptoKey = v174;
  *(_QWORD *)&v285.fields.fakeValue = v175;
  this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v285, 0LL);
  if ( (int)this >= 1 )
  {
    ServantLeaderInfo__getSkillInfo(v140, &skillInfoList, 0LL);
    skillIconList = v15->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_312;
    v177 = *(_QWORD *)&skillIconList->max_length;
    if ( v177 << 32 >= 1 )
    {
      v178 = 0;
      v179 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v179 < (int)max_length )
        {
          if ( v179 >= max_length )
            goto LABEL_313;
          v181 = skillInfoList->m_Items[v179];
          if ( v181 && v181->fields.id >= 1 )
            v178 = v179 + 1;
        }
        if ( (__int64)++v179 >= (int)v177 )
          goto LABEL_130;
      }
      goto LABEL_312;
    }
    v178 = 0;
LABEL_130:
    if ( (int)v177 >= 1 )
    {
      v190 = v178;
      v191 = 4LL;
      do
      {
        skillBaseList = v15->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_312;
        v193 = v191 - 4;
        if ( v191 - 4 >= (unsigned __int64)skillBaseList->max_length )
          goto LABEL_313;
        v194 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v191);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v194, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( (__int64)v193 >= v190 )
          {
            v199 = v15->fields.skillBaseList;
            if ( !v199 )
              goto LABEL_312;
            if ( v193 >= v199->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&v199->obj.klass + v191);
            if ( !this )
              goto LABEL_312;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_312;
            if ( v193 >= skillInfoList->max_length )
              goto LABEL_313;
            v195 = v15->fields.skillBaseList;
            if ( !v195 )
              goto LABEL_312;
            if ( v193 >= v195->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&v195->obj.klass + v191);
            if ( !this )
              goto LABEL_312;
            v196 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v191);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v197 = v15->fields.skillIconList;
            if ( !v197 )
              goto LABEL_312;
            if ( v193 >= v197->max_length )
              goto LABEL_313;
            if ( !v196 )
              goto LABEL_312;
            this = (FriendIconComponent_o *)*((_QWORD *)&v197->obj.klass + v191);
            if ( !this )
              goto LABEL_312;
            SkillIconComponent__Set_26821136((SkillIconComponent_o *)this, v196[4], v196[5], v196[12], v196[13], 0LL);
            skillLevelIconLabelList = v15->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_312;
            if ( v193 >= skillLevelIconLabelList->max_length )
              goto LABEL_313;
            this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v191);
            if ( !this )
              goto LABEL_312;
            UIIconLabel__Set_41886452((UIIconLabel_o *)this, 48, v196[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v200 = v15->fields.skillIconList;
        if ( !v200 )
          goto LABEL_312;
        v201 = v191 - 3;
        ++v191;
      }
      while ( v201 < (int)v200->max_length );
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
  }
  else
  {
LABEL_107:
    v182 = v15->fields.skillIconList;
    if ( !v182 )
      goto LABEL_312;
    v183 = 4LL;
    while ( 1 )
    {
      v184 = v183 - 4;
      if ( v183 - 4 >= (int)v182->max_length )
        break;
      v185 = v15->fields.skillBaseList;
      if ( !v185 )
        goto LABEL_312;
      if ( v184 >= v185->max_length )
        goto LABEL_313;
      v186 = (UnityEngine_Object_o *)*((_QWORD *)&v185->obj.klass + v183);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v186, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v187 = v15->fields.skillBaseList;
        if ( !v187 )
          goto LABEL_312;
        if ( v184 >= v187->max_length )
        {
LABEL_313:
          v276 = sub_B5D6C8(this);
          sub_B5D668(v276, 0LL);
        }
        this = (FriendIconComponent_o *)*((_QWORD *)&v187->obj.klass + v183);
        if ( !this )
          goto LABEL_312;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v182 = v15->fields.skillIconList;
      ++v183;
      if ( !v182 )
        goto LABEL_312;
    }
    v188 = (UnityEngine_Object_o *)v15->fields.skillInfoUiWidget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v188, 0LL, 0LL) )
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
  FriendIconComponent__SetAppendSkill(v15, v140, v189);
  svtCommandCardList = (UnityEngine_Object_o *)v15->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v204 = v15->fields.svtCommandCardList;
    if ( v140 )
    {
      v205 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
      v206 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
      v207 = p_userGameEntity;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v286.fields.currentCryptoKey = v205;
      *(_QWORD *)&v286.fields.fakeValue = v206;
      v208 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v286, 0LL);
      commandCardParam = v140->fields.commandCardParam;
      v210 = v208;
      this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v140, 0LL);
      if ( !v204 )
        goto LABEL_312;
      ServantCommandCardListComponent__Set_27528516(v204, v210, commandCardParam, (System_Int32_array *)this, 2, 1, 0LL);
      p_userGameEntity = v207;
    }
    else
    {
      if ( !v204 )
        goto LABEL_312;
      ServantCommandCardListComponent__Clear(v15->fields.svtCommandCardList, 0LL);
    }
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28445348 = Grade__GetKind_28445348(userGameEntity, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28445348, 0LL);
  baseSpr = v15->fields.baseSpr;
  v214 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v214, 0LL);
  gradeIcon = (UnityEngine_Object_o *)v15->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v216 = classBoardMaxNumDictionary;
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
      this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6822/*"Fonts/FGO-Main-Font"*/, 0LL);
      if ( !playerNameLabel )
        goto LABEL_312;
      if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
      {
        sub_B5D990(this);
        goto LABEL_319;
      }
      UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
      v216 = classBoardMaxNumDictionary;
    }
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_312;
    LODWORD(v219) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v220 = v219;
    LODWORD(v221) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FriendIconComponent_o *)v15->fields.playerNameLabel;
    if ( !this )
      goto LABEL_312;
    v222 = v221;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v225 = LocalPositionX;
    v226 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v226, (float)(v222 * 0.5) + (float)(v220 + v225), 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    v227 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v227, 57.0, 0LL);
    this = (FriendIconComponent_o *)v15->fields.gradeIcon;
    if ( !this )
      goto LABEL_312;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_28445348, 0LL);
  }
  this = (FriendIconComponent_o *)v15->fields.pushSprite;
  if ( !this )
    goto LABEL_312;
  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v277 )
  {
    if ( !v140 )
      goto LABEL_312;
    if ( userGameEntity->fields.pushUserSvtId == v140->fields.userSvtId )
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
  if ( v140 )
  {
    v228 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
    v229 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v287.fields.currentCryptoKey = v228;
    *(_QWORD *)&v287.fields.fakeValue = v229;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v287, 0LL) >= 1 )
    {
      if ( userGameEntity->fields.userClassBoardInfo )
      {
        if ( v216 )
          goto LABEL_219;
        v250 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
        System_Collections_Generic_Dictionary_int__int____ctor(
          v250,
          (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !this )
          goto LABEL_312;
        this = (FriendIconComponent_o *)this->fields.playerNameLabel;
        if ( !this )
          goto LABEL_312;
        Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this,
                       (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
        v254 = Enumerator;
        if ( Enumerator )
        {
          while ( 1 )
          {
            klass = v254->klass;
            if ( *(_WORD *)&v254->klass->_2.bitflags1 )
            {
              v256 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v256;
                p_offset += 4;
                if ( v256 >= *(unsigned __int16 *)&v254->klass->_2.bitflags1 )
                  goto LABEL_280;
              }
              p_method = (__int64)&klass->vtable[*p_offset].method;
            }
            else
            {
LABEL_280:
              p_method = sub_AF54C0(v254, System_Collections_IEnumerator_TypeInfo, 0LL, v253);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                    v254,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v260 = v254->klass;
            if ( *(_WORD *)&v254->klass->_2.bitflags1 )
            {
              v261 = 0LL;
              v262 = &v260->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v262 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
              {
                ++v261;
                v262 += 4;
                if ( v261 >= *(unsigned __int16 *)&v254->klass->_2.bitflags1 )
                  goto LABEL_287;
              }
              v263 = (__int64)&v260->vtable[*v262].method;
            }
            else
            {
LABEL_287:
              v263 = sub_AF54C0(v254, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v259);
            }
            v264 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v263)(
                     v254,
                     *(_QWORD *)(v263 + 8));
            v265 = v264;
            if ( v264 )
            {
              v266 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v264 + 300LL) < (unsigned int)v266
                || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v264 + 200LL) + 8 * v266 - 8) != ClassBoardBaseEntity_TypeInfo )
              {
                sub_B5D990(v264);
LABEL_315:
                sub_B5D69C(v267, v268);
              }
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v267 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
            if ( !v265 )
              goto LABEL_315;
            if ( !v267 )
              sub_B5D69C(0LL, v268);
            OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v267, *(_DWORD *)(v265 + 16), 0LL);
            if ( OtherThanNoneEntity )
            {
              if ( !v250 )
                sub_B5D69C(OtherThanNoneEntity, v270);
              System_Collections_Generic_Dictionary_int__int___Add(
                v250,
                *(_DWORD *)(v265 + 16),
                OtherThanNoneEntity->max_length,
                (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
          v280 = 0x10000061FLL;
          v216 = v250;
          if ( v254 )
          {
            v271 = v254->klass;
            if ( *(_WORD *)&v254->klass->_2.bitflags1 )
            {
              v272 = 0LL;
              v273 = &v271->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v273 - 1) != System_IDisposable_TypeInfo )
              {
                ++v272;
                v273 += 4;
                if ( v272 >= *(unsigned __int16 *)&v254->klass->_2.bitflags1 )
                  goto LABEL_305;
              }
              v274 = (__int64)&v271->vtable[*v273].method;
            }
            else
            {
LABEL_305:
              v274 = sub_AF54C0(v254, System_IDisposable_TypeInfo, 0LL, v259);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v274)(
              v254,
              *(_QWORD *)(v274 + 8));
          }
          v280 = 1567LL;
LABEL_219:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v230 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
          v232 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
          v231 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
          v233 = (DataMasterBase_WarMaster__WarEntity__int__o *)v230;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v288.fields.currentCryptoKey = v232;
          *(_QWORD *)&v288.fields.fakeValue = v231;
          this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v288, 0LL);
          if ( !v233 )
            goto LABEL_312;
          this = (FriendIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v233,
                                            (int32_t)this,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_312;
          v234 = (int32_t)this->fields.skillBaseList;
          this = (FriendIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_312;
          this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                            (ClassBoardClassMaster_o *)this,
                                            v234,
                                            0LL);
          userClassBoardInfo = userGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_312;
          v236 = userClassBoardInfo->max_length;
          if ( v236 < 1 )
          {
LABEL_238:
            v240 = 0;
          }
          else
          {
            v237 = (int)this;
            v238 = 0;
            while ( 1 )
            {
              if ( v238 >= v236 )
                goto LABEL_313;
              v239 = userClassBoardInfo->m_Items[v238];
              if ( !v239 )
                goto LABEL_312;
              if ( v239->fields.classBoardBaseId == v237 )
              {
                if ( !v216 )
                  goto LABEL_312;
                this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                  v216,
                                                  v237,
                                                  (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v239, v234, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
              }
              v236 = userClassBoardInfo->max_length;
              if ( (int)++v238 >= v236 )
                goto LABEL_238;
            }
            this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v216,
                                              v237,
                                              (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v239->fields.squareIds;
            if ( !squareIds )
              goto LABEL_312;
            v240 = squareIds->max_length;
            v241 = (int)this <= v240;
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
                v243 = (Il2CppObject **)&StringLiteral_6414/*"FFFFFF"*/;
                if ( v241 )
                  v243 = (Il2CppObject **)&StringLiteral_6413/*"FFFF00"*/;
                v244 = *v243;
                v279 = v240;
                v245 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v279);
                this = (FriendIconComponent_o *)System_String__Format_44573324(
                                                  (System_String_o *)StringLiteral_16021/*"[{0}]+{1}[-]"*/,
                                                  v244,
                                                  v245,
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
                v247 = 1;
LABEL_262:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v247, 0LL);
                goto LABEL_263;
              }
              goto LABEL_263;
            }
          }
          v241 = 0;
          goto LABEL_240;
        }
LABEL_319:
        sub_B5D69C(Enumerator, v252);
      }
    }
  }
  v248 = (UnityEngine_Object_o *)v15->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v248, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v15->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_312;
    this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_312;
    v247 = 0;
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
  __int64 v3; // x3
  FriendIconComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v18; // x8
  int v19; // w9
  signed __int64 v20; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v22; // x14
  struct SkillIconComponent_array *v23; // x8
  __int64 v24; // x20
  struct UnityEngine_GameObject_array *v25; // x8
  signed __int64 v26; // x21
  __int64 v27; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  unsigned __int64 v29; // x24
  UnityEngine_Object_o *v30; // x20
  struct UnityEngine_GameObject_array *v31; // x9
  int32_t *v32; // x20
  struct SkillIconComponent_array *v33; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v35; // x8
  struct SkillIconComponent_array *v36; // x8
  __int64 v37; // x9
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  SwitchUIWidgetComponent_o *v40; // x19
  __int64 v41; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v5 = this;
  if ( (byte_42EBDF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, (_DWORD)info, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (FriendIconComponent_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42EBDF1 = 1;
  }
  skillInfoList = 0LL;
  if ( v5->fields.appendSkillBaseList )
  {
    if ( !info )
      goto LABEL_20;
    v16 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v16;
    *(_QWORD *)&v43.fields.fakeValue = v15;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140(info, &skillInfoList, 0, 0LL);
      appendSkillIconList = v5->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_75;
      v18 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v18 << 32 < 1 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 0;
        v20 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v20 < (int)max_length )
            {
              if ( v20 >= max_length )
                goto LABEL_76;
              v22 = skillInfoList->m_Items[v20];
              if ( v22 && v22->fields.id >= 1 )
                v19 = v20 + 1;
            }
          }
          ++v20;
        }
        while ( v20 < (int)v18 );
      }
      if ( (int)v18 >= 1 )
      {
        v26 = v19;
        v27 = 4LL;
        do
        {
          appendSkillBaseList = v5->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_75;
          v29 = v27 - 4;
          if ( v27 - 4 >= (unsigned __int64)appendSkillBaseList->max_length )
            goto LABEL_76;
          v30 = (UnityEngine_Object_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v27);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v29 >= v26 )
            {
              v35 = v5->fields.appendSkillBaseList;
              if ( !v35 )
                goto LABEL_75;
              if ( v29 >= v35->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v35->obj.klass + v27);
              if ( !this )
                goto LABEL_75;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_75;
              if ( v29 >= skillInfoList->max_length )
                goto LABEL_76;
              v31 = v5->fields.appendSkillBaseList;
              if ( !v31 )
                goto LABEL_75;
              if ( v29 >= v31->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&v31->obj.klass + v27);
              if ( !this )
                goto LABEL_75;
              v32 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v27);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v33 = v5->fields.appendSkillIconList;
              if ( !v33 )
                goto LABEL_75;
              if ( v29 >= v33->max_length )
                goto LABEL_76;
              if ( !v32 )
                goto LABEL_75;
              this = (FriendIconComponent_o *)*((_QWORD *)&v33->obj.klass + v27);
              if ( !this )
                goto LABEL_75;
              SkillIconComponent__Set_26821136((SkillIconComponent_o *)this, v32[4], v32[5], v32[12], v32[13], 0LL);
              appendSkillLevelIconLabelList = v5->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_75;
              if ( v29 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_76;
              this = (FriendIconComponent_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v27);
              if ( !this )
                goto LABEL_75;
              UIIconLabel__Set_41886452((UIIconLabel_o *)this, 48, v32[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
          }
          v36 = v5->fields.appendSkillIconList;
          if ( !v36 )
            goto LABEL_75;
          v37 = v27 - 3;
          ++v27;
        }
        while ( v37 < (int)v36->max_length );
      }
      appendSkillInfoUiWidget = (UnityEngine_Object_o *)v5->fields.appendSkillInfoUiWidget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
      {
        switchSkillInfo = (UnityEngine_Object_o *)v5->fields.switchSkillInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
        {
          this = (FriendIconComponent_o *)v5->fields.appendSkillInfoUiWidget;
          if ( !this )
            goto LABEL_75;
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_75;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FriendIconComponent_o *)v5->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v5->fields.appendSkillInfoUiWidget,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          this = (FriendIconComponent_o *)v5->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_75;
          v40 = v5->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v40 )
            goto LABEL_75;
          SwitchUIWidgetComponent__Set(v40, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_20:
      v23 = v5->fields.appendSkillIconList;
      if ( !v23 )
        goto LABEL_75;
      v24 = 0LL;
      while ( (int)v24 < (signed int)v23->max_length )
      {
        v25 = v5->fields.appendSkillBaseList;
        if ( v25 )
        {
          if ( (unsigned int)v24 >= v25->max_length )
          {
LABEL_76:
            v41 = sub_B5D6C8(this);
            sub_B5D668(v41, 0LL);
          }
          this = (FriendIconComponent_o *)v25->m_Items[v24];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v23 = v5->fields.appendSkillIconList;
            ++v24;
            if ( v23 )
              continue;
          }
        }
        goto LABEL_75;
      }
      this = (FriendIconComponent_o *)v5->fields.appendSkillInfoUiWidget;
      if ( !this
        || (this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
      {
LABEL_75:
        sub_B5D69C(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}