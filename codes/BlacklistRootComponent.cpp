void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438A97B & 1) == 0 )
  {
    sub_B775C4(&BlacklistRootComponent_TypeInfo);
    byte_438A97B = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A97A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438A97A = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.friendOfferList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A974 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438A974 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B7769C(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A970 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438A970 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B7769C(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0LL);
}


void __fastcall BlacklistRootComponent__EndShowServant(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_438A973 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent_EndCloseShowServant__);
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A973 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v5, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B7769C(v6, v7);
  }
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438A96F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent_EndCloseShowServantEquip__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A96F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B7769C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog(Instance, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__OnSelectFriendItem(
        BlacklistRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v5; // w20
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v8; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  __int64 v16; // x8
  __int64 v17; // x20
  SkillInfo_o *v18; // x22
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  System_String_o *v27; // x3
  System_String_o *v28; // x2
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  FriendOperationItemListViewItem_o *v31; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v33; // x20
  SkillInfo_o *v34; // x23
  SkillEntity_o *Entity; // x21
  FriendOperationItemListViewManager_o *v36; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  __int64 v39; // x2
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  __int64 v42; // x2
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x20
  FriendOperationItemListViewManager_o *v46; // x8
  struct ListViewItemSeed_o *v47; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v49; // x2
  __int64 v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t Count; // w21
  BalanceConfig_c *v58; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v60; // x22
  bool v61; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v63; // x21
  System_String_o *v64; // x22
  System_String_o *v65; // x23
  CommonConfirmDialog_ClickDelegate_o *v66; // x24
  const MethodInfo *v67; // x7
  __int64 v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v75; // x19
  WebViewManager_o *v76; // x0
  System_String_o *v77; // x21
  CommonUI_o *v78; // x19
  System_String_o *v79; // x0
  System_String_o *v80; // x21
  CommonConfirmDialog_ClickDelegate_o *v81; // x22
  System_String_o *v82; // x20
  __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x2
  BalanceConfig_c *v86; // x8
  Il2CppObject *v87; // x21
  Il2CppObject *v88; // x0
  System_String_o *v89; // x20
  CommonUI_o *Instance; // x21
  FriendOperationItemListViewManager_o *v91; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v92; // x21
  __int64 v93; // x0
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-80h]
  int32_t dropObjectList; // [xsp+18h] [xbp-68h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *v100; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *v101; // [xsp+40h] [xbp-40h] BYREF
  SkillInfo_array *v102; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  v5 = kind;
  if ( (byte_438A971 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__);
    sub_B775C4(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__);
    sub_B775C4(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_2684/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/);
    sub_B775C4(&StringLiteral_8790/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B775C4(&StringLiteral_2681/*"BLACKLIST_REGIST_MAX_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2683/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/);
    sub_B775C4(&StringLiteral_2682/*"BLACKLIST_REGIST_MAX_TITLE"*/);
    sub_B775C4(&StringLiteral_2680/*"BLACKLIST_REGIST_CANCEL"*/);
    sub_B775C4(&StringLiteral_2625/*"BATTLE_SKILLCHARGETURN"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_2685/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/);
    byte_438A971 = 1;
  }
  v102 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v5 != 12 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.selectItemNum = n;
    switch ( v5 )
    {
      case 1:
      case 2:
      case 3:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v31 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        seed = friendOperationItemListViewManager->fields.seed;
        if ( !seed )
          goto LABEL_125;
        if ( !LODWORD(seed->fields.parent) )
          goto LABEL_126;
        if ( !OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                v31->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.prefab,
                0LL) )
          break;
        if ( v5 == 2 )
          v33 = 1LL;
        else
          v33 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v31,
                                                                                       &v102,
                                                                                       0LL);
        if ( !v102 )
          goto LABEL_125;
        if ( (unsigned int)v33 >= v102->max_length )
        {
LABEL_126:
          v93 = sub_B776C8(friendOperationItemListViewManager);
          sub_B77668(v93, 0LL);
        }
        v34 = v102->m_Items[v33];
        if ( !v34 || v34->fields.id < 1 || v34->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                    v34->fields.id,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v34->fields.id,
                                                                                       v34->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_125;
        v36 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v101, &v100, v34->fields.lv, 0LL);
        v37 = v101;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v34->fields.lv;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v39);
        v41 = System_String__Format(v38, v40, 0LL);
        v101 = System_String__Concat_44904220(v37, (System_String_o *)StringLiteral_82/*" "*/, v41, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2625/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v36 )
          goto LABEL_125;
        v43 = (System_String_o *)friendOperationItemListViewManager;
        dropObjectList = (int32_t)v36->fields.dropObjectList;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList, v42);
        v45 = System_String__Format(v43, v44, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v27 = v100;
        v26 = v101;
        v28 = v45;
        goto LABEL_78;
      case 9:
        v50 = sub_B77694(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_0___ctor((BlacklistRootComponent___c__DisplayClass31_0_o *)v50, 0LL);
        if ( !v50 )
          goto LABEL_125;
        *(_QWORD *)(v50 + 24) = this;
        sub_B77560(
          (BattleServantConfConponent_o *)(v50 + 24),
          (System_Int32_array **)this,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)friendOperationItemListViewManager,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v58 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v58 = BalanceConfig_TypeInfo;
        }
        if ( Count < v58->static_fields->MaxBlackListNum )
        {
          friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
          if ( friendOperationItemListViewManager )
          {
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                           friendOperationItemListViewManager,
                                                                                           this->fields.selectItemNum,
                                                                                           0LL);
            if ( friendOperationItemListViewManager )
            {
              dropList = friendOperationItemListViewManager->fields.dropList;
              if ( dropList )
              {
                *(_QWORD *)&kind = dropList->fields._items;
                *(_QWORD *)(v50 + 16) = *(_QWORD *)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v60 = (System_String_o *)StringLiteral_2683/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v61 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          *(int64_t *)&kind,
                          (const MethodInfo_30EC1EC *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v63 = *(System_String_o **)&dropList->fields._size;
                  if ( v61 )
                    v60 = (System_String_o *)StringLiteral_2684/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v64 = LocalizationManager__Get(v60, 0LL);
                  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2685/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v66 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v66,
                    (Il2CppObject *)v50,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v63, v64, v65, v66, 0, 0, v67);
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
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_2681/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v84 = j_il2cpp_value_box_0(int_TypeInfo, &lv, v83);
        v86 = BalanceConfig_TypeInfo;
        v87 = (Il2CppObject *)v84;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v86 = BalanceConfig_TypeInfo;
        }
        dropObjectList = v86->static_fields->MaxBlackListNum;
        v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList, v85);
        v89 = System_String__Format_44897472(v82, v87, v88, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2682/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_125;
        setCondensedScale.fields.value = 0LL;
        *(_DWORD *)&setCondensedScale.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v89,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v68 = sub_B77694(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_2___ctor((BlacklistRootComponent___c__DisplayClass31_2_o *)v68, 0LL);
        if ( !v68 )
          goto LABEL_125;
        *(_QWORD *)(v68 + 24) = this;
        sub_B77560(
          (BattleServantConfConponent_o *)(v68 + 24),
          (System_Int32_array **)this,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v75 = friendOperationItemListViewManager->fields.dropList;
        if ( !v75 )
          goto LABEL_125;
        *(_QWORD *)(v68 + 16) = v75->fields._items;
        v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v77 = *(System_String_o **)&v75->fields._size;
        v78 = (CommonUI_o *)v76;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_2680/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v80 = System_String__Concat_44904220(v77, (System_String_o *)StringLiteral_26/*"\n"*/, v79, 0LL);
        v81 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v81,
          (Il2CppObject *)v68,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v78 )
          goto LABEL_125;
        CommonUI__OpenConfirmDialog_18055928(v78, (System_String_o *)StringLiteral_1/*""*/, v80, 1, v81, 0, 0, 0, 0, 0LL);
        return;
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        v16 = (unsigned int)(v5 - 14);
        v17 = (unsigned int)v16 < 4 ? v16 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_125;
        if ( (unsigned int)v17 >= skillInfoList->max_length )
          goto LABEL_126;
        v18 = skillInfoList->m_Items[v17];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v19 = (_QWORD *)sub_B775CC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v20 = (System_Reflection_MethodBase_o *)sub_B775A8(v19, v19[3]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                                                                         v18->fields.id,
                                                                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
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
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          lv = v18->fields.lv;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23);
          v25 = System_String__Format(v22, v24, 0LL);
          name = System_String__Concat_44904220(v21, (System_String_o *)StringLiteral_82/*" "*/, v25, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          v27 = detail;
          v26 = name;
          v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_78:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v26, v28, v27, 1, 0, 0LL);
        }
        else
        {
          v29 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v29 = (_QWORD *)sub_B775CC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v30 = (System_Reflection_MethodBase_o *)sub_B775A8(v29, v29[3]);
          OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
        }
        break;
      default:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v46 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v47 = friendOperationItemListViewManager->fields.seed;
        if ( !v47 )
          goto LABEL_125;
        if ( !LODWORD(v47->fields.parent) )
          goto LABEL_126;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              (int32_t)v46->fields.SortObject,
                              0,
                              0,
                              (int32_t)v47->fields.prefab,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v49);
        return;
    }
LABEL_122:
    v91 = this->fields.friendOperationItemListViewManager;
    v92 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v92,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v91 )
    {
      FriendOperationItemListViewManager__SetMode(v91, 2, v92, 0LL);
      return;
    }
LABEL_125:
    sub_B7769C(friendOperationItemListViewManager, *(_QWORD *)&kind);
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.selectItemNum = n;
  if ( !friendOperationItemListViewManager )
    goto LABEL_125;
  friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                 friendOperationItemListViewManager,
                                                                                 n,
                                                                                 0LL);
  if ( !friendOperationItemListViewManager )
    goto LABEL_125;
  v8 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_129;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v8, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_129;
  v11 = EquipTargetInfo;
  v13 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v103.fields.currentCryptoKey = v13;
  *(_QWORD *)&v103.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v103, 0LL) < 1 )
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
  if ( v8->fields.kind == 9 )
    v15 = 14;
  else
    v15 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v11, v15, v14);
}


void __fastcall BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438A972 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_EndShowServant__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A972 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__OpenServantStatusDialog_18068936(Instance, 5, servantLeaderInfo, v6, 0LL);
}


void __fastcall BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438A96E & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_EndShowServantEquip__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A96E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B7769C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_18071300(Instance, statusKind, equipInfo, v8, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_438A97F & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    this = (BlacklistRootComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438A97F = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v5);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_B7769C(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v7, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A982 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438A982 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B7769C(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_438A980 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BlacklistRootComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438A980 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v5);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(this, result);
  CommonUI__CloseConfirmDialog_18056328(Instance, v7, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A981 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438A981 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B7769C(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0LL);
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

  if ( (byte_438A983 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_438A983 = 1;
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
        (gameOptionComp = (SetGameOptionComponent_o *)this->fields.myRoomFsm) == 0LL) )
  {
LABEL_8:
    sub_B7769C(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  BlacklistRootComponent_o *v6; // x20
  System_Xml_Schema_XmlSchemaObject_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x8
  __int64 v10; // x20
  unsigned __int64 v11; // x10
  System_Collections_ICollection_c **v12; // x11
  __int64 v13; // x0
  int v14; // w0
  unsigned int v15; // w22
  __int64 v16; // x8
  System_Collections_Generic_List_long__o *friendOfferList; // x23
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  int64_t *v21; // x0
  BlacklistRootComponent_o *v22; // x0
  System_String_o *v23; // x1
  const MethodInfo *v24; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_438A97E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B775C4(&System_Collections_ICollection_TypeInfo);
    sub_B775C4(&System_Collections_IList_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    this = (BlacklistRootComponent_o *)sub_B775C4(&StringLiteral_19283/*"friendOfferList"*/);
    byte_438A97E = 1;
  }
  value = 0LL;
  if ( !result )
    goto LABEL_34;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
    goto LABEL_32;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(result, 0LL);
  if ( !this )
    goto LABEL_34;
  v6 = this;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19283/*"friendOfferList"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19283/*"friendOfferList"*/,
          &value,
          (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
LABEL_32:
    BlacklistRootComponent__modeChange(v4, 0, v5);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_34:
    sub_B7769C(this, result);
  }
  this = (BlacklistRootComponent_o *)v4->fields.friendOfferList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
  v7 = value;
  if ( !value )
    goto LABEL_34;
  v8 = sub_B77684(value, System_Collections_IList_TypeInfo);
  if ( v8 )
  {
    v9 = *(_QWORD *)v8;
    v10 = v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
    {
      v11 = 0LL;
      v12 = (System_Collections_ICollection_c **)(*(_QWORD *)(v9 + 176) + 8LL);
      while ( *(v12 - 1) != System_Collections_ICollection_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
          goto LABEL_18;
      }
      v13 = v9 + 16LL * (*(_DWORD *)v12 + 1) + 312;
    }
    else
    {
LABEL_18:
      v13 = sub_B0F4C0(v8, System_Collections_ICollection_TypeInfo, 1LL);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
    if ( v14 >= 1 )
    {
      v7 = (System_Xml_Schema_XmlSchemaObject_o *)(unsigned int)v14;
      v15 = 0;
      while ( 1 )
      {
        v16 = *(_QWORD *)v10;
        friendOfferList = v4->fields.friendOfferList;
        if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
        {
          v18 = 0LL;
          v19 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v19 - 1) != System_Collections_IList_TypeInfo )
          {
            ++v18;
            v19 += 4;
            if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
              goto LABEL_26;
          }
          v20 = v16 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_26:
          v20 = sub_B0F4C0(v10, System_Collections_IList_TypeInfo, 0LL);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v20)(
                                             v10,
                                             v15,
                                             *(_QWORD *)(v20 + 8));
        if ( !friendOfferList || !this )
          goto LABEL_34;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        v21 = (int64_t *)j_il2cpp_object_unbox_0(this);
        System_Collections_Generic_List_long___Add(
          friendOfferList,
          *v21,
          (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        if ( (int)++v15 >= (int)v7 )
          goto LABEL_32;
      }
      sub_B77990(this);
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_36:
  v22 = (BlacklistRootComponent_o *)sub_B77990(v7);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v22, v23, v24);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blackListObj; // x0
  __int64 *v4; // x9

  if ( (byte_438A97C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    sub_B775C4(&StringLiteral_7234/*"HIDE_END"*/);
    byte_438A97C = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        !this->fields.myRoomFsm) )
  {
    sub_B7769C(blackListObj, method);
  }
  if ( ((unsigned __int8)blackListObj & 1) != 0 )
    v4 = &StringLiteral_7045/*"GO_NEXT"*/;
  else
    v4 = &StringLiteral_7234/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(this->fields.myRoomFsm, (System_String_o *)*v4, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_438A97D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_438A97D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438A979 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A979 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  BlacklistRootComponent_o *v2; // x19
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v6; // w0
  UILabel_o *helpLabel; // x20
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v11; // x19

  v2 = this;
  if ( (byte_438A96C & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent__blackListSetup_b__26_0__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_BlacklistTopRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&StringLiteral_2679/*"BLACKLIST_HELP_TEXT"*/);
    this = (BlacklistRootComponent_o *)sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_438A96C = 1;
  }
  blackListObj = v2->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_23;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = v2->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_23;
  v6 = UnityEngine_GameObject__get_activeSelf(v2->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v6, 0LL);
  helpLabel = v2->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2679/*"BLACKLIST_HELP_TEXT"*/, 0LL);
  if ( !helpLabel )
    goto LABEL_23;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0LL);
  gameOptionComp = v2->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_23;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  this = (BlacklistRootComponent_o *)v2->fields.blackListObj;
  if ( !this )
    goto LABEL_23;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0LL);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v9,
                                           (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v11 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 52, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v11 )
        {
          RequestBase__beginRequest(v11, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_B7769C(this, method);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_23;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_23;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 46, 1, 0, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.myRoomFsm;
  if ( !this )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438A976 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A976 = 1;
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

  if ( (byte_438A975 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A975 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BlacklistRootComponent__modeChange(this, 0, v3);
}


void __fastcall BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438A96A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent__fadeIn_b__23_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A96A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438A96B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent__fadeOut_b__24_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A96B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__modeChange(
        BlacklistRootComponent_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  int32_t listMode; // w8
  UILabel_o *v7; // x20
  FriendOperationItemListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  __int64 *v10; // x8
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_438A977 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent_onMoveEnd__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_17420/*"btn_txt_requestlist_off"*/);
    sub_B775C4(&StringLiteral_17299/*"btn_bg_08"*/);
    sub_B775C4(&StringLiteral_17373/*"btn_txt_blacklist_off"*/);
    sub_B775C4(&StringLiteral_17300/*"btn_bg_09"*/);
    sub_B775C4(&StringLiteral_2676/*"BLACKLIST_EXPLANATION_1"*/);
    sub_B775C4(&StringLiteral_17421/*"btn_txt_requestlist_on"*/);
    sub_B775C4(&StringLiteral_17374/*"btn_txt_blacklist_on"*/);
    sub_B775C4(&StringLiteral_2677/*"BLACKLIST_EXPLANATION_2"*/);
    byte_438A977 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.listMode = mode;
  if ( !friendOperationItemListViewManager )
    goto LABEL_46;
  FriendOperationItemListViewManager__DestroyList(friendOperationItemListViewManager, 0LL);
  listMode = this->fields.listMode;
  if ( listMode == 1 )
  {
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButton;
    if ( friendOperationItemListViewManager )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 1, 0LL);
      friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabBoxCollider;
      if ( friendOperationItemListViewManager )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 1, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabButton;
        if ( friendOperationItemListViewManager )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 0, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabBoxCollider;
          if ( friendOperationItemListViewManager )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 0, 0LL);
            listExplanationLabel = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2677/*"BLACKLIST_EXPLANATION_2"*/,
                                                                                           0LL);
            if ( listExplanationLabel )
            {
              UILabel__set_text(listExplanationLabel, (System_String_o *)friendOperationItemListViewManager, 0LL);
              friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
              if ( friendOperationItemListViewManager )
              {
                FriendOperationItemListViewManager__CreateList(friendOperationItemListViewManager, 8, 0, 0LL);
                friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                if ( friendOperationItemListViewManager )
                {
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))friendOperationItemListViewManager->klass->vtable._9_SetSortKind.method)(
                    friendOperationItemListViewManager,
                    17LL,
                    friendOperationItemListViewManager->klass->vtable._10_SetSortAscendingOrder.methodPtr);
                  v12 = this->fields.friendOperationItemListViewManager;
                  v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v12 )
                  {
                    FriendOperationItemListViewManager__SetMode_32005004(v12, 1, v13, 0LL);
                    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                    if ( friendOperationItemListViewManager )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(friendOperationItemListViewManager, 0LL);
                      friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                      if ( friendOperationItemListViewManager )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(
                          friendOperationItemListViewManager,
                          0,
                          0LL);
                        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                        if ( friendOperationItemListViewManager )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(
                            friendOperationItemListViewManager,
                            0LL);
                          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonTitleSpr;
                          if ( friendOperationItemListViewManager )
                          {
                            UISprite__set_spriteName(
                              (UISprite_o *)friendOperationItemListViewManager,
                              (System_String_o *)StringLiteral_17420/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17299/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17374/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17300/*"btn_bg_09"*/;
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
    sub_B7769C(friendOperationItemListViewManager, *(_QWORD *)&mode);
  }
  if ( !listMode )
  {
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButton;
    if ( friendOperationItemListViewManager )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 0, 0LL);
      friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabBoxCollider;
      if ( friendOperationItemListViewManager )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 0, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabButton;
        if ( friendOperationItemListViewManager )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 1, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabBoxCollider;
          if ( friendOperationItemListViewManager )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 1, 0LL);
            v7 = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2676/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0LL);
            if ( v7 )
            {
              UILabel__set_text(v7, (System_String_o *)friendOperationItemListViewManager, 0LL);
              friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
              if ( friendOperationItemListViewManager )
              {
                FriendOperationItemListViewManager__CreateList(friendOperationItemListViewManager, 7, 0, 0LL);
                friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                if ( friendOperationItemListViewManager )
                {
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))friendOperationItemListViewManager->klass->vtable._9_SetSortKind.method)(
                    friendOperationItemListViewManager,
                    18LL,
                    friendOperationItemListViewManager->klass->vtable._10_SetSortAscendingOrder.methodPtr);
                  v8 = this->fields.friendOperationItemListViewManager;
                  v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v8 )
                  {
                    FriendOperationItemListViewManager__SetMode_32005004(v8, 1, v9, 0LL);
                    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                    if ( friendOperationItemListViewManager )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(friendOperationItemListViewManager, 0LL);
                      friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                      if ( friendOperationItemListViewManager )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(
                          friendOperationItemListViewManager,
                          0,
                          0LL);
                        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                        if ( friendOperationItemListViewManager )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(
                            friendOperationItemListViewManager,
                            0LL);
                          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonTitleSpr;
                          if ( friendOperationItemListViewManager )
                          {
                            UISprite__set_spriteName(
                              (UISprite_o *)friendOperationItemListViewManager,
                              (System_String_o *)StringLiteral_17421/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17300/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17373/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17299/*"btn_bg_08"*/;
LABEL_44:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v10,
                                    0LL);
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
  BlacklistRootComponent__setRegistCount(this, *(const MethodInfo **)&mode);
}


void __fastcall BlacklistRootComponent__onMoveEnd(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  struct FriendOperationItemListViewManager_o **p_friendOperationItemListViewManager; // x22
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  ListViewManager_o *v6; // x0
  int32_t ItemSum; // w19

  if ( (byte_438A96D & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&BlacklistRootComponent_TypeInfo);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438A96D = 1;
  }
  if ( this->fields.listMode > 1u )
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
  }
  else
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_13;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v5, 0LL);
  }
  v6 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
    goto LABEL_13;
  ItemSum = ListViewManager__get_ItemSum(v6, 0LL);
  if ( (BYTE3(BlacklistRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  }
  v6 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
LABEL_13:
    sub_B7769C(v6, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v6,
    ItemSum >= BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE,
    0LL);
}


void __fastcall BlacklistRootComponent__returnBlackList(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent__setRegistCount(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  BalanceConfig_c *v11; // x8
  Il2CppObject *v12; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-28h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438A978 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_6649/*"FRIEND_SHOW_INFOMATION"*/);
    byte_438A978 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_14;
  lookup = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance->fields.lookup;
  registCntLabel = this->fields.registCntLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6649/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !lookup )
    goto LABEL_14;
  v7 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            lookup,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Count, v8);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v11->static_fields->MaxBlackListNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum, v9);
  Instance = (DataManager_o *)System_String__Format_44897472(v7, v10, v12, 0LL);
  if ( !registCntLabel )
LABEL_14:
    sub_B7769C(Instance, v4);
  UILabel__set_text(registCntLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_0___ctor(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_0___OnSelectFriendItem_b__0(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v10; // x20

  if ( (byte_4388512 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__);
    sub_B775C4(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
    byte_4388512 = 1;
  }
  v5 = sub_B77694(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B77560(v5 + 24),
        *(_BYTE *)(v5 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_B7769C(v6, v7);
  }
  CommonConfirmDialog__Close_17975084(blackListRegistDlg, v10, 0LL);
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
  BlacklistRootComponent___c__DisplayClass31_1_o *v2; // x19
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v6; // x8
  FriendOperationItemListViewManager_o *klass; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  v2 = this;
  if ( (byte_4388513 & 1) == 0 )
  {
    sub_B775C4(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_B775C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__);
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4388513 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( v2->fields.isDecide )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v5,
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v6 = v2->fields.CS___8__locals1;
    if ( v6 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v6->fields.otherUserId, 0LL);
      return;
    }
LABEL_14:
    sub_B7769C(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  klass = (FriendOperationItemListViewManager_o *)_4__this[3].klass;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    _4__this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !klass )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(klass, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_2___ctor(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlacklistRootComponent___c__DisplayClass31_2___OnSelectFriendItem_b__3(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  BlacklistRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *v10; // x21
  CommonUI_o *v11; // x19
  System_Action_o *v12; // x20

  if ( (byte_4388514 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__);
    sub_B775C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__);
    sub_B775C4(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388514 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (BlacklistRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v6,
                                                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      BlacklistRemoveRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(Request_WarBoardWallAttackRequest, v8);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (Il2CppObject *)this->fields.__4__this;
  v11 = (CommonUI_o *)Instance;
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, v10, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v11 )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_18056328(v11, v12, 0LL);
}