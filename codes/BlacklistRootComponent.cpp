void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F90AF & 1) == 0 )
  {
    sub_B16FFC(&BlacklistRootComponent_TypeInfo, v1);
    byte_40F90AF = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F90AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_40F90AE = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendOfferList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F90A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    byte_40F90A8 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B170D4();
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F90A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    byte_40F90A4 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B170D4();
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServant(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  CommonUI_o *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21

  if ( (byte_40F90A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_BlacklistRootComponent_EndCloseShowServant__, v6);
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40F90A7 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               isDecide,
                                                               method,
                                                               v3,
                                                               v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v11, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
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

  if ( (byte_40F90A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F90A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__OnSelectFriendItem(
        BlacklistRootComponent_o *this,
        int32_t kind,
        int32_t n,
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
  FriendOperationItemListViewManager_o *v39; // x0
  FriendOperationItemListViewItem_o *v40; // x0
  FriendOperationItemListViewItem_o *v41; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  FriendOperationItemListViewManager_o *v53; // x0
  FriendOperationItemListViewItem_o *v54; // x0
  __int64 v55; // x8
  __int64 v56; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x2
  SkillInfo_o *v60; // x22
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillEntity_o *v64; // x0
  System_String_o *v65; // x20
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  CommonUI_o *v69; // x0
  System_String_o *v70; // x1
  System_String_o *v71; // x3
  System_String_o *v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v79; // x21
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v81; // x20
  SkillInfo_o *v82; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x21
  WebViewManager_o *v86; // x0
  SkillLvMaster_o *v87; // x0
  SkillLvEntity_o *v88; // x0
  SkillLvEntity_o *v89; // x20
  System_String_o *v90; // x21
  System_String_o *v91; // x22
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  System_String_o *v95; // x21
  Il2CppObject *v96; // x0
  System_String_o *v97; // x20
  FriendOperationItemListViewManager_o *v98; // x0
  FriendOperationItemListViewItem_o *v99; // x0
  FriendOperationItemListViewItem_o *v100; // x8
  struct System_Int32_array *v101; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v103; // x20
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  WebViewManager_o *v110; // x0
  WarQuestSelectionMaster_o *v111; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  BalanceConfig_c *v114; // x8
  FriendOperationItemListViewManager_o *v115; // x0
  FriendOperationItemListViewItem_o *v116; // x0
  struct OtherUserGameEntity_o *v117; // x21
  int64_t userId; // x1
  System_Collections_Generic_List_long__o *friendOfferList; // x0
  System_String_o *v120; // x22
  bool v121; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *userName; // x21
  System_String_o *v124; // x22
  System_String_o *v125; // x23
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  CommonConfirmDialog_ClickDelegate_o *v130; // x24
  const MethodInfo *v131; // x7
  __int64 v132; // x20
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  FriendOperationItemListViewManager_o *v139; // x0
  FriendOperationItemListViewItem_o *v140; // x0
  struct OtherUserGameEntity_o *v141; // x19
  WebViewManager_o *v142; // x0
  System_String_o *v143; // x21
  CommonUI_o *v144; // x19
  System_String_o *v145; // x0
  System_String_o *v146; // x21
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  CommonConfirmDialog_ClickDelegate_o *v151; // x22
  System_String_o *v152; // x20
  __int64 v153; // x0
  BalanceConfig_c *v154; // x8
  Il2CppObject *v155; // x21
  Il2CppObject *v156; // x0
  System_String_o *v157; // x20
  CommonUI_o *v158; // x21
  System_String_o *v159; // x0
  FriendOperationItemListViewManager_o *v160; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v161; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-80h]
  int32_t chargeTurn; // [xsp+18h] [xbp-68h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *v168; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *v169; // [xsp+40h] [xbp-40h] BYREF
  SkillInfo_array *v170; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16

  if ( (byte_40F90A5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B16FFC(&SoundManager_TypeInfo, v23);
    sub_B16FFC(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v24);
    sub_B16FFC(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_B16FFC(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v26);
    sub_B16FFC(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v28);
    sub_B16FFC(&StringLiteral_80/*" "*/, v29);
    sub_B16FFC(&StringLiteral_2565/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v30);
    sub_B16FFC(&StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, v31);
    sub_B16FFC(&StringLiteral_2562/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v32);
    sub_B16FFC(&StringLiteral_2564/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v33);
    sub_B16FFC(&StringLiteral_2563/*"BLACKLIST_REGIST_MAX_TITLE"*/, v34);
    sub_B16FFC(&StringLiteral_2561/*"BLACKLIST_REGIST_CANCEL"*/, v35);
    sub_B16FFC(&StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, v36);
    sub_B16FFC(&StringLiteral_1/*""*/, v37);
    sub_B16FFC(&StringLiteral_2566/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v38);
    byte_40F90A5 = 1;
  }
  v170 = 0LL;
  v168 = 0LL;
  v169 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( kind != 12 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.selectItemNum = n;
    switch ( kind )
    {
      case 1:
      case 2:
      case 3:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Item = FriendOperationItemListViewManager__GetItem(friendOperationItemListViewManager, n, 0LL);
        if ( !Item )
          goto LABEL_125;
        v79 = Item;
        otherUserGameEntity = Item->fields.otherUserGameEntity;
        if ( !otherUserGameEntity )
          goto LABEL_125;
        mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !mainSupportDeckIds )
          goto LABEL_125;
        if ( !mainSupportDeckIds->max_length )
          goto LABEL_126;
        if ( !OtherUserGameEntity__getServantLeaderInfo(
                otherUserGameEntity,
                v79->fields.classPos,
                0,
                0,
                mainSupportDeckIds->m_Items[1],
                0LL) )
          break;
        if ( kind == 2 )
          v81 = 1LL;
        else
          v81 = 2LL * (kind == 3);
        otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetSkillInfo(v79, &v170, 0LL);
        if ( !v170 )
          goto LABEL_125;
        if ( (unsigned int)v81 >= v170->max_length )
        {
LABEL_126:
          sub_B17100(otherUserGameEntity, v58, v59);
          sub_B170A0();
        }
        v82 = v170->m_Items[v81];
        if ( !v82 || v82->fields.id < 1 || v82->fields.lv < 1 )
          break;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_125;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_125;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v82->fields.id,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v86 )
          goto LABEL_125;
        v87 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v86,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !v87 )
          goto LABEL_125;
        v88 = SkillLvMaster__GetEntity(v87, v82->fields.id, v82->fields.lv, 0LL);
        if ( !Entity )
          goto LABEL_125;
        v89 = v88;
        SkillEntity__getSkillMessageInfo(Entity, &v169, &v168, v82->fields.lv, 0LL);
        v90 = v169;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v82->fields.lv;
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v93 = System_String__Format(v91, v92, 0LL);
        v169 = System_String__Concat_43746016(v90, (System_String_o *)StringLiteral_80/*" "*/, v93, 0LL);
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
        if ( !v89 )
          goto LABEL_125;
        v95 = v94;
        chargeTurn = v89->fields.chargeTurn;
        v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
        v97 = System_String__Format(v95, v96, 0LL);
        v69 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v69 )
          goto LABEL_125;
        v71 = v168;
        v70 = v169;
        v72 = v97;
        goto LABEL_78;
      case 9:
        v103 = sub_B170CC(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v49, v50, v51, v52);
        BlacklistRootComponent___c__DisplayClass31_0___ctor((BlacklistRootComponent___c__DisplayClass31_0_o *)v103, 0LL);
        if ( !v103 )
          goto LABEL_125;
        *(_QWORD *)(v103 + 24) = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v103 + 24),
          (System_Int32_array **)this,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v110 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v110 )
          goto LABEL_125;
        v111 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)v110,
                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !v111 )
          goto LABEL_125;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v111->fields.list;
        if ( !list )
          goto LABEL_125;
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v114 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v114 = BalanceConfig_TypeInfo;
        }
        if ( Count < v114->static_fields->MaxBlackListNum )
        {
          v115 = this->fields.friendOperationItemListViewManager;
          if ( v115 )
          {
            v116 = FriendOperationItemListViewManager__GetItem(v115, this->fields.selectItemNum, 0LL);
            if ( v116 )
            {
              v117 = v116->fields.otherUserGameEntity;
              if ( v117 )
              {
                userId = v117->fields.userId;
                *(_QWORD *)(v103 + 16) = userId;
                friendOfferList = this->fields.friendOfferList;
                if ( friendOfferList )
                {
                  v120 = (System_String_o *)StringLiteral_2564/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v121 = System_Collections_Generic_List_long___Contains(
                           friendOfferList,
                           userId,
                           (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  userName = v117->fields.userName;
                  if ( v121 )
                    v120 = (System_String_o *)StringLiteral_2565/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v124 = LocalizationManager__Get(v120, 0LL);
                  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_2566/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v126,
                                                                  v127,
                                                                  v128,
                                                                  v129);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v130,
                    (Il2CppObject *)v103,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, userName, v124, v125, v130, 0, 0, v131);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_125;
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2562/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v153 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v154 = BalanceConfig_TypeInfo;
        v155 = (Il2CppObject *)v153;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v154 = BalanceConfig_TypeInfo;
        }
        chargeTurn = v154->static_fields->MaxBlackListNum;
        v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
        v157 = System_String__Format_43739268(v152, v155, v156, 0LL);
        v158 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v159 = LocalizationManager__Get((System_String_o *)StringLiteral_2563/*"BLACKLIST_REGIST_MAX_TITLE"*/, 0LL);
        if ( !v158 )
          goto LABEL_125;
        setCondensedScale.fields.value = 0LL;
        *(_DWORD *)&setCondensedScale.fields.has_value = 0;
        CommonUI__OpenWarningDialog(v158, v159, v157, 0LL, 1, 0, -1.0, 1, setCondensedScale, 0LL);
        break;
      case 10:
        v132 = sub_B170CC(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v49, v50, v51, v52);
        BlacklistRootComponent___c__DisplayClass31_2___ctor((BlacklistRootComponent___c__DisplayClass31_2_o *)v132, 0LL);
        if ( !v132 )
          goto LABEL_125;
        *(_QWORD *)(v132 + 24) = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v132 + 24),
          (System_Int32_array **)this,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138);
        v139 = this->fields.friendOperationItemListViewManager;
        if ( !v139 )
          goto LABEL_125;
        v140 = FriendOperationItemListViewManager__GetItem(v139, this->fields.selectItemNum, 0LL);
        if ( !v140 )
          goto LABEL_125;
        v141 = v140->fields.otherUserGameEntity;
        if ( !v141 )
          goto LABEL_125;
        *(_QWORD *)(v132 + 16) = v141->fields.userId;
        v142 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v143 = v141->fields.userName;
        v144 = (CommonUI_o *)v142;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v145 = LocalizationManager__Get((System_String_o *)StringLiteral_2561/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v146 = System_String__Concat_43746016(v143, (System_String_o *)StringLiteral_26/*"\n"*/, v145, 0LL);
        v151 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v147,
                                                        v148,
                                                        v149,
                                                        v150);
        CommonConfirmDialog_ClickDelegate___ctor(
          v151,
          (Il2CppObject *)v132,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v144 )
          goto LABEL_125;
        CommonUI__OpenConfirmDialog_18237400(v144, (System_String_o *)StringLiteral_1/*""*/, v146, 1, v151, 0, 0, 0, 0, 0LL);
        return;
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
        v53 = this->fields.friendOperationItemListViewManager;
        if ( !v53 )
          goto LABEL_125;
        v54 = FriendOperationItemListViewManager__GetItem(v53, n, 0LL);
        v55 = (unsigned int)(kind - 14);
        v56 = (unsigned int)v55 < 4 ? v55 + 1 : 0LL;
        if ( !v54 )
          goto LABEL_125;
        otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                         v54,
                                                         &skillInfoList,
                                                         0LL);
        if ( !skillInfoList )
          goto LABEL_125;
        if ( (unsigned int)v56 >= skillInfoList->max_length )
          goto LABEL_126;
        v60 = skillInfoList->m_Items[v56];
        if ( v60 && v60->fields.id >= 1 && v60->fields.lv >= 1 )
        {
          v61 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v61 = (_QWORD *)sub_B17004(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v62 = (System_Reflection_MethodBase_o *)sub_B16FE0(v61, v61[3]);
          OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_125;
          v64 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   v60->fields.id,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !v64 )
            goto LABEL_125;
          SkillEntity__getSkillMessageInfo(v64, &name, &detail, v60->fields.lv, 0LL);
          v65 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          lv = v60->fields.lv;
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
          v68 = System_String__Format(v66, v67, 0LL);
          name = System_String__Concat_43746016(v65, (System_String_o *)StringLiteral_80/*" "*/, v68, 0LL);
          v69 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v69 )
            goto LABEL_125;
          v71 = detail;
          v70 = name;
          v72 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_78:
          CommonUI__OpenDetailLongInfoDialog(v69, v70, v72, v71, 1, 0, 0LL);
        }
        else
        {
          v75 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v75 = (_QWORD *)sub_B17004(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v76 = (System_Reflection_MethodBase_o *)sub_B16FE0(v75, v75[3]);
          OverwriteAssetSoundName__PlaySystemSe(v76, 2, 0LL);
        }
        break;
      default:
        v98 = this->fields.friendOperationItemListViewManager;
        if ( !v98 )
          goto LABEL_125;
        v99 = FriendOperationItemListViewManager__GetItem(v98, n, 0LL);
        if ( !v99 )
          goto LABEL_125;
        v100 = v99;
        otherUserGameEntity = v99->fields.otherUserGameEntity;
        if ( !otherUserGameEntity )
          goto LABEL_125;
        v101 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v101 )
          goto LABEL_125;
        if ( !v101->max_length )
          goto LABEL_126;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              otherUserGameEntity,
                              v100->fields.classPos,
                              0,
                              0,
                              v101->m_Items[1],
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v59);
        return;
    }
LABEL_122:
    v160 = this->fields.friendOperationItemListViewManager;
    v161 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                  v58,
                                                                  v59,
                                                                  v73,
                                                                  v74);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v161,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v160 )
    {
      FriendOperationItemListViewManager__SetMode(v160, 2, v161, 0LL);
      return;
    }
LABEL_125:
    sub_B170D4();
  }
  v39 = this->fields.friendOperationItemListViewManager;
  this->fields.selectItemNum = n;
  if ( !v39 )
    goto LABEL_125;
  v40 = FriendOperationItemListViewManager__GetItem(v39, n, 0LL);
  if ( !v40 )
    goto LABEL_125;
  v41 = v40;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(v40, 0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_129;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v41, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_129;
  v44 = EquipTargetInfo;
  v46 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v171.fields.currentCryptoKey = v46;
  *(_QWORD *)&v171.fields.fakeValue = v45;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v171, 0LL) < 1 )
  {
LABEL_129:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    goto LABEL_122;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( v41->fields.kind == 9 )
    v48 = 14;
  else
    v48 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v44, v48, v47);
}


void __fastcall BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_40F90A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F90A6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v8, v9, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(v12, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantStatusDialog_18250312(Instance, 5, servantLeaderInfo, v12, 0LL);
}


void __fastcall BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
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

  if ( (byte_40F90A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40F90A2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantEquipStatusDialog_18252676(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_40F90B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, result);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v6);
    byte_40F90B3 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(this, 0, v8);
    return;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_B170D4();
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v12, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F90B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    byte_40F90B6 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B170D4();
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F90B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    byte_40F90B4 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(this, 1, v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseConfirmDialog_18237824(Instance, v14, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F90B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    byte_40F90B5 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B170D4();
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent___afterMainMenuBar_b__39_0(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v7; // w0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F90B7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, method);
    byte_40F90B7 = 1;
  }
  gameOptionComp = this->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_8;
  SetGameOptionComponent__hideGameOption(gameOptionComp, 0LL);
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.blackListObj, 0LL),
        UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL),
        (optionTopObj = this->fields.optionTopObj) == 0LL)
    || (v7 = UnityEngine_GameObject__get_activeSelf(this->fields.optionTopObj, 0LL),
        UnityEngine_GameObject__SetActive(optionTopObj, !v7, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
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
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x20
  System_Collections_Generic_List_long__o *friendOfferList; // x0
  System_Xml_Schema_XmlSchemaObject_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  unsigned __int64 v23; // x10
  System_Collections_ICollection_c **v24; // x11
  __int64 v25; // x0
  int v26; // w0
  unsigned int v27; // w22
  __int64 v28; // x8
  System_Collections_Generic_List_long__o *v29; // x23
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  int64_t *v34; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  BlacklistRootComponent_o *v36; // x0
  System_String_o *v37; // x1
  const MethodInfo *v38; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F90B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B16FFC(&System_Collections_ICollection_TypeInfo, v6);
    sub_B16FFC(&System_Collections_IList_TypeInfo, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    sub_B16FFC(&JsonManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, v13);
    sub_B16FFC(&StringLiteral_18830/*"friendOfferList"*/, v14);
    byte_40F90B2 = 1;
  }
  value = 0LL;
  if ( !result )
    goto LABEL_34;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    goto LABEL_32;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_34;
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18830/*"friendOfferList"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v17,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18830/*"friendOfferList"*/,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
LABEL_32:
    BlacklistRootComponent__modeChange(this, 0, v15);
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_34:
    sub_B170D4();
  }
  friendOfferList = this->fields.friendOfferList;
  if ( !friendOfferList )
    goto LABEL_34;
  System_Collections_Generic_List_long___Clear(
    friendOfferList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  v19 = value;
  if ( !value )
    goto LABEL_34;
  v20 = sub_B170BC(value, System_Collections_IList_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (System_Collections_ICollection_c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_ICollection_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_18;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_18:
      v25 = sub_AAFEF8(v20, System_Collections_ICollection_TypeInfo, 1LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
    if ( v26 >= 1 )
    {
      v19 = (System_Xml_Schema_XmlSchemaObject_o *)(unsigned int)v26;
      v27 = 0;
      while ( 1 )
      {
        v28 = *(_QWORD *)v22;
        v29 = this->fields.friendOfferList;
        if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
        {
          v30 = 0LL;
          v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v31 - 1) != System_Collections_IList_TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
              goto LABEL_26;
          }
          v32 = v28 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_26:
          v32 = sub_AAFEF8(v22, System_Collections_IList_TypeInfo, 0LL);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v32)(v22, v27, *(_QWORD *)(v32 + 8));
        if ( !v29 || !v33 )
          goto LABEL_34;
        if ( *(Il2CppClass **)(*(_QWORD *)v33 + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v34 = (int64_t *)j_il2cpp_object_unbox_0(v33);
        System_Collections_Generic_List_long___Add(
          v29,
          *v34,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        if ( (int)++v27 >= (int)v19 )
          goto LABEL_32;
      }
      sub_B173C8(v33);
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_36:
  v36 = (BlacklistRootComponent_o *)sub_B173C8(v19);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v36, v37, v38);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *blackListObj; // x0
  bool activeSelf; // w0
  __int64 *v6; // x9

  if ( (byte_40F90B0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, method);
    sub_B16FFC(&StringLiteral_7053/*"HIDE_END"*/, v3);
    byte_40F90B0 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL), !this->fields.myRoomFsm) )
  {
    sub_B170D4();
  }
  if ( activeSelf )
    v6 = &StringLiteral_6864/*"GO_NEXT"*/;
  else
    v6 = &StringLiteral_7053/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(this->fields.myRoomFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F90B1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, method);
    byte_40F90B1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F90AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F90AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v12; // w0
  UILabel_o *helpLabel; // x20
  System_String_o *v14; // x0
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  UnityEngine_GameObject_o *v16; // x0
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v25; // x19
  FriendOperationItemListViewManager_o *v26; // x0
  TitleInfoControl_o *v27; // x0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F90A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2560/*"BLACKLIST_HELP_TEXT"*/, v7);
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, v8);
    byte_40F90A0 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_23;
  activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = this->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_23;
  v12 = UnityEngine_GameObject__get_activeSelf(this->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v12, 0LL);
  helpLabel = this->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2560/*"BLACKLIST_HELP_TEXT"*/, 0LL);
  if ( !helpLabel )
    goto LABEL_23;
  UILabel__set_text(helpLabel, v14, 0LL);
  gameOptionComp = this->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_23;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  v16 = this->fields.blackListObj;
  if ( !v16 )
    goto LABEL_23;
  if ( UnityEngine_GameObject__get_activeSelf(v16, 0LL) )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    if ( friendOperationItemListViewManager )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo(friendOperationItemListViewManager, 0LL);
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20,
                                                     v21);
      NetworkManager_ResultCallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v22,
                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = this->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v25 = (RequestBase_o *)Request_WarBoardWallAttackRequest;
        TitleInfoControl__setTitleImg(titleInfoCtr, 52, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v25 )
        {
          RequestBase__beginRequest(v25, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v26 = this->fields.friendOperationItemListViewManager;
  if ( !v26 )
    goto LABEL_23;
  FriendOperationItemListViewManager__DestroyList(v26, 0LL);
  v27 = this->fields.titleInfoCtr;
  if ( !v27 )
    goto LABEL_23;
  TitleInfoControl__setTitleImg(v27, 46, 1, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_23;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F90AA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F90AA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BlacklistRootComponent__modeChange(this, 1, v3);
}


void __fastcall BlacklistRootComponent__clickFriendHistoryTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F90A9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F90A9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BlacklistRootComponent__modeChange(this, 0, v3);
}


void __fastcall BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F909E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F909E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F909F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F909F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__modeChange(
        BlacklistRootComponent_o *this,
        int32_t mode,
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
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  const MethodInfo *v16; // x1
  int32_t listMode; // w8
  UnityEngine_Behaviour_o *v18; // x0
  UnityEngine_Collider_o *v19; // x0
  UnityEngine_Behaviour_o *v20; // x0
  UnityEngine_Collider_o *v21; // x0
  UILabel_o *v22; // x20
  System_String_o *v23; // x0
  FriendOperationItemListViewManager_o *v24; // x0
  struct FriendOperationItemListViewManager_o *v25; // x0
  FriendOperationItemListViewManager_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x21
  FriendOperationItemListViewManager_o *v32; // x0
  FriendOperationItemListViewManager_o *v33; // x0
  FriendOperationItemListViewManager_o *v34; // x0
  UISprite_o *v35; // x0
  UISprite_o *v36; // x0
  UISprite_o *v37; // x0
  UISprite_o *blackLisTabButtonBackSpr; // x0
  __int64 *v39; // x8
  UnityEngine_Behaviour_o *friendHistoryTabButton; // x0
  UnityEngine_Collider_o *friendHistoryTabBoxCollider; // x0
  UnityEngine_Behaviour_o *blackListTabButton; // x0
  UnityEngine_Collider_o *blackListTabBoxCollider; // x0
  UILabel_o *listExplanationLabel; // x20
  System_String_o *v45; // x0
  FriendOperationItemListViewManager_o *v46; // x0
  struct FriendOperationItemListViewManager_o *v47; // x0
  FriendOperationItemListViewManager_o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Action_o *v53; // x21
  FriendOperationItemListViewManager_o *v54; // x0
  FriendOperationItemListViewManager_o *v55; // x0
  FriendOperationItemListViewManager_o *v56; // x0
  UISprite_o *friendHistoryTabButtonTitleSpr; // x0
  UISprite_o *friendHistoryTabButtonBackSpr; // x0
  UISprite_o *blackLisTabButtonTitleSpr; // x0

  if ( (byte_40F90AB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_BlacklistRootComponent_onMoveEnd__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_17015/*"btn_txt_requestlist_off"*/, v7);
    sub_B16FFC(&StringLiteral_16894/*"btn_bg_08"*/, v8);
    sub_B16FFC(&StringLiteral_16968/*"btn_txt_blacklist_off"*/, v9);
    sub_B16FFC(&StringLiteral_16895/*"btn_bg_09"*/, v10);
    sub_B16FFC(&StringLiteral_2557/*"BLACKLIST_EXPLANATION_1"*/, v11);
    sub_B16FFC(&StringLiteral_17016/*"btn_txt_requestlist_on"*/, v12);
    sub_B16FFC(&StringLiteral_16969/*"btn_txt_blacklist_on"*/, v13);
    sub_B16FFC(&StringLiteral_2558/*"BLACKLIST_EXPLANATION_2"*/, v14);
    byte_40F90AB = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.listMode = mode;
  if ( !friendOperationItemListViewManager )
    goto LABEL_46;
  FriendOperationItemListViewManager__DestroyList(friendOperationItemListViewManager, 0LL);
  listMode = this->fields.listMode;
  if ( listMode == 1 )
  {
    friendHistoryTabButton = (UnityEngine_Behaviour_o *)this->fields.friendHistoryTabButton;
    if ( friendHistoryTabButton )
    {
      UnityEngine_Behaviour__set_enabled(friendHistoryTabButton, 1, 0LL);
      friendHistoryTabBoxCollider = (UnityEngine_Collider_o *)this->fields.friendHistoryTabBoxCollider;
      if ( friendHistoryTabBoxCollider )
      {
        UnityEngine_Collider__set_enabled(friendHistoryTabBoxCollider, 1, 0LL);
        blackListTabButton = (UnityEngine_Behaviour_o *)this->fields.blackListTabButton;
        if ( blackListTabButton )
        {
          UnityEngine_Behaviour__set_enabled(blackListTabButton, 0, 0LL);
          blackListTabBoxCollider = (UnityEngine_Collider_o *)this->fields.blackListTabBoxCollider;
          if ( blackListTabBoxCollider )
          {
            UnityEngine_Collider__set_enabled(blackListTabBoxCollider, 0, 0LL);
            listExplanationLabel = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_2558/*"BLACKLIST_EXPLANATION_2"*/, 0LL);
            if ( listExplanationLabel )
            {
              UILabel__set_text(listExplanationLabel, v45, 0LL);
              v46 = this->fields.friendOperationItemListViewManager;
              if ( v46 )
              {
                FriendOperationItemListViewManager__CreateList(v46, 8, 0, 0LL);
                v47 = this->fields.friendOperationItemListViewManager;
                if ( v47 )
                {
                  ((void (__fastcall *)(struct FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))v47->klass->vtable._9_SetSortKind.method)(
                    v47,
                    17LL,
                    v47->klass->vtable._10_SetSortAscendingOrder.methodPtr);
                  v48 = this->fields.friendOperationItemListViewManager;
                  v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v49, v50, v51, v52);
                  System_Action___ctor(v53, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v48 )
                  {
                    FriendOperationItemListViewManager__SetMode_31848260(v48, 1, v53, 0LL);
                    v54 = this->fields.friendOperationItemListViewManager;
                    if ( v54 )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(v54, 0LL);
                      v55 = this->fields.friendOperationItemListViewManager;
                      if ( v55 )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(v55, 0, 0LL);
                        v56 = this->fields.friendOperationItemListViewManager;
                        if ( v56 )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(v56, 0LL);
                          friendHistoryTabButtonTitleSpr = this->fields.friendHistoryTabButtonTitleSpr;
                          if ( friendHistoryTabButtonTitleSpr )
                          {
                            UISprite__set_spriteName(
                              friendHistoryTabButtonTitleSpr,
                              (System_String_o *)StringLiteral_17015/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendHistoryTabButtonBackSpr = this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendHistoryTabButtonBackSpr )
                            {
                              UISprite__set_spriteName(
                                friendHistoryTabButtonBackSpr,
                                (System_String_o *)StringLiteral_16894/*"btn_bg_08"*/,
                                0LL);
                              blackLisTabButtonTitleSpr = this->fields.blackLisTabButtonTitleSpr;
                              if ( blackLisTabButtonTitleSpr )
                              {
                                UISprite__set_spriteName(
                                  blackLisTabButtonTitleSpr,
                                  (System_String_o *)StringLiteral_16969/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                blackLisTabButtonBackSpr = this->fields.blackLisTabButtonBackSpr;
                                if ( blackLisTabButtonBackSpr )
                                {
                                  v39 = &StringLiteral_16895/*"btn_bg_09"*/;
                                  goto LABEL_44;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  if ( !listMode )
  {
    v18 = (UnityEngine_Behaviour_o *)this->fields.friendHistoryTabButton;
    if ( v18 )
    {
      UnityEngine_Behaviour__set_enabled(v18, 0, 0LL);
      v19 = (UnityEngine_Collider_o *)this->fields.friendHistoryTabBoxCollider;
      if ( v19 )
      {
        UnityEngine_Collider__set_enabled(v19, 0, 0LL);
        v20 = (UnityEngine_Behaviour_o *)this->fields.blackListTabButton;
        if ( v20 )
        {
          UnityEngine_Behaviour__set_enabled(v20, 1, 0LL);
          v21 = (UnityEngine_Collider_o *)this->fields.blackListTabBoxCollider;
          if ( v21 )
          {
            UnityEngine_Collider__set_enabled(v21, 1, 0LL);
            v22 = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2557/*"BLACKLIST_EXPLANATION_1"*/, 0LL);
            if ( v22 )
            {
              UILabel__set_text(v22, v23, 0LL);
              v24 = this->fields.friendOperationItemListViewManager;
              if ( v24 )
              {
                FriendOperationItemListViewManager__CreateList(v24, 7, 0, 0LL);
                v25 = this->fields.friendOperationItemListViewManager;
                if ( v25 )
                {
                  ((void (__fastcall *)(struct FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))v25->klass->vtable._9_SetSortKind.method)(
                    v25,
                    18LL,
                    v25->klass->vtable._10_SetSortAscendingOrder.methodPtr);
                  v26 = this->fields.friendOperationItemListViewManager;
                  v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
                  System_Action___ctor(v31, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v26 )
                  {
                    FriendOperationItemListViewManager__SetMode_31848260(v26, 1, v31, 0LL);
                    v32 = this->fields.friendOperationItemListViewManager;
                    if ( v32 )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(v32, 0LL);
                      v33 = this->fields.friendOperationItemListViewManager;
                      if ( v33 )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(v33, 0, 0LL);
                        v34 = this->fields.friendOperationItemListViewManager;
                        if ( v34 )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(v34, 0LL);
                          v35 = this->fields.friendHistoryTabButtonTitleSpr;
                          if ( v35 )
                          {
                            UISprite__set_spriteName(v35, (System_String_o *)StringLiteral_17016/*"btn_txt_requestlist_on"*/, 0LL);
                            v36 = this->fields.friendHistoryTabButtonBackSpr;
                            if ( v36 )
                            {
                              UISprite__set_spriteName(v36, (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/, 0LL);
                              v37 = this->fields.blackLisTabButtonTitleSpr;
                              if ( v37 )
                              {
                                UISprite__set_spriteName(v37, (System_String_o *)StringLiteral_16968/*"btn_txt_blacklist_off"*/, 0LL);
                                blackLisTabButtonBackSpr = this->fields.blackLisTabButtonBackSpr;
                                if ( blackLisTabButtonBackSpr )
                                {
                                  v39 = &StringLiteral_16894/*"btn_bg_08"*/;
LABEL_44:
                                  UISprite__set_spriteName(blackLisTabButtonBackSpr, (System_String_o *)*v39, 0LL);
                                  goto LABEL_45;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_46;
  }
LABEL_45:
  BlacklistRootComponent__setRegistCount(this, v16);
}


void __fastcall BlacklistRootComponent__onMoveEnd(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  ListViewManager_o **p_friendOperationItemListViewManager; // x22
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  int32_t ItemSum; // w19

  if ( (byte_40F90A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&BlacklistRootComponent_TypeInfo, v6);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v7);
    byte_40F90A1 = 1;
  }
  if ( this->fields.listMode > 1u )
  {
    p_friendOperationItemListViewManager = (ListViewManager_o **)&this->fields.friendOperationItemListViewManager;
  }
  else
  {
    p_friendOperationItemListViewManager = (ListViewManager_o **)&this->fields.friendOperationItemListViewManager;
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                 FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_13;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v10, 0LL);
  }
  if ( !*p_friendOperationItemListViewManager )
    goto LABEL_13;
  ItemSum = ListViewManager__get_ItemSum(*p_friendOperationItemListViewManager, 0LL);
  if ( (BYTE3(BlacklistRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  }
  if ( !*p_friendOperationItemListViewManager )
LABEL_13:
    sub_B170D4();
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)*p_friendOperationItemListViewManager,
    ItemSum >= BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE,
    0LL);
}


void __fastcall BlacklistRootComponent__returnBlackList(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent__setRegistCount(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  BalanceConfig_c *v16; // x8
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-28h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F90AC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_6477/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_40F90AC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  registCntLabel = this->fields.registCntLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !list )
    goto LABEL_14;
  v14 = v13;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v16->static_fields->MaxBlackListNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  v18 = System_String__Format_43739268(v14, v15, v17, 0LL);
  if ( !registCntLabel )
LABEL_14:
    sub_B170D4();
  UILabel__set_text(registCntLabel, v18, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_0___ctor(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent___c__DisplayClass31_0___OnSelectFriendItem_b__0(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v22; // x20

  if ( (byte_40F71E5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v7);
    sub_B16FFC(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v8);
    byte_40F71E5 = 1;
  }
  v9 = sub_B170CC(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, isDecide, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 24) = this,
        sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_BYTE *)(v9 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v9,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_B170D4();
  }
  CommonConfirmDialog__Close_18159552(blackListRegistDlg, v22, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_1___ctor(
        BlacklistRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_1___OnSelectFriendItem_b__1(
        BlacklistRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v13; // x21
  BlacklistRegistRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v15; // x8
  FriendOperationItemListViewManager_o *klass; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_40F71E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B16FFC(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v6);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_40F71E6 = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( this->fields.isDecide )
  {
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (BlacklistRegistRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v13,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v15 = this->fields.CS___8__locals1;
    if ( v15 && Request_WarBoardWallAttackRequest )
    {
      BlacklistRegistRequest__beginRequest(Request_WarBoardWallAttackRequest, v15->fields.otherUserId, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( !_4__this )
    goto LABEL_14;
  klass = (FriendOperationItemListViewManager_o *)_4__this[3].klass;
  v17 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v17,
    _4__this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !klass )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(klass, 2, v17, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_2___ctor(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent___c__DisplayClass31_2___OnSelectFriendItem_b__3(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  BlacklistRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  WebViewManager_o *Instance; // x0
  Il2CppObject *v17; // x21
  CommonUI_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x20

  if ( (byte_40F71E7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v7);
    sub_B16FFC(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v8);
    sub_B16FFC(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40F71E7 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (BlacklistRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v14,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      BlacklistRemoveRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (Il2CppObject *)this->fields.__4__this;
  v18 = (CommonUI_o *)Instance;
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v23, v17, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v18 )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_18237824(v18, v23, 0LL);
}