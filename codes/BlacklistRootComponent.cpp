void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42140C6 & 1) == 0 )
  {
    sub_B0D8A4(&BlacklistRootComponent_TypeInfo, v1);
    byte_42140C6 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_long__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42140C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_42140C5 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendOfferList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42140BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_42140BF = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v6, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42140BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_42140BB = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServant(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  CommonUI_o *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21

  if ( (byte_42140BE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_BlacklistRootComponent_EndCloseShowServant__, v4);
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, v5);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_42140BE = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v9, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B0D97C(v10);
  }
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42140BA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42140BA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantEquipStatusDialog(Instance, v9, 0LL);
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
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v40; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v43; // x21
  __int64 v44; // x22
  __int64 v45; // x23
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x8
  __int64 v51; // x20
  SkillInfo_o *v52; // x22
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  System_String_o *v55; // x20
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x1
  System_String_o *v60; // x3
  System_String_o *v61; // x2
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  FriendOperationItemListViewItem_o *v66; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v68; // x20
  SkillInfo_o *v69; // x23
  SkillEntity_o *Entity; // x21
  FriendOperationItemListViewManager_o *v71; // x20
  System_String_o *v72; // x21
  System_String_o *v73; // x22
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x21
  Il2CppObject *v77; // x0
  System_String_o *v78; // x20
  FriendOperationItemListViewManager_o *v79; // x8
  struct ListViewItemSeed_o *v80; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int32_t Count; // w21
  BalanceConfig_c *v90; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  int64_t items; // x1
  System_String_o *v93; // x22
  bool v94; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v96; // x21
  System_String_o *v97; // x22
  System_String_o *v98; // x23
  __int64 v99; // x1
  __int64 v100; // x2
  CommonConfirmDialog_ClickDelegate_o *v101; // x24
  const MethodInfo *v102; // x7
  __int64 v103; // x20
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v110; // x19
  WebViewManager_o *v111; // x0
  System_String_o *v112; // x21
  CommonUI_o *v113; // x19
  System_String_o *v114; // x0
  System_String_o *v115; // x21
  __int64 v116; // x1
  __int64 v117; // x2
  CommonConfirmDialog_ClickDelegate_o *v118; // x22
  System_String_o *v119; // x20
  __int64 v120; // x0
  BalanceConfig_c *v121; // x8
  Il2CppObject *v122; // x21
  Il2CppObject *v123; // x0
  System_String_o *v124; // x20
  CommonUI_o *Instance; // x21
  FriendOperationItemListViewManager_o *v126; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v127; // x21
  __int64 v128; // x0
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-80h]
  int32_t dropObjectList; // [xsp+18h] [xbp-68h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *v135; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *v136; // [xsp+40h] [xbp-40h] BYREF
  SkillInfo_array *v137; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_42140BC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_B0D8A4(&int_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Contains__, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B0D8A4(&SoundManager_TypeInfo, v23);
    sub_B0D8A4(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v24);
    sub_B0D8A4(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_B0D8A4(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v26);
    sub_B0D8A4(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v28);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v29);
    sub_B0D8A4(&StringLiteral_2587/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v30);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v31);
    sub_B0D8A4(&StringLiteral_2584/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v32);
    sub_B0D8A4(&StringLiteral_2586/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v33);
    sub_B0D8A4(&StringLiteral_2585/*"BLACKLIST_REGIST_MAX_TITLE"*/, v34);
    sub_B0D8A4(&StringLiteral_2583/*"BLACKLIST_REGIST_CANCEL"*/, v35);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v36);
    sub_B0D8A4(&StringLiteral_1/*""*/, v37);
    sub_B0D8A4(&StringLiteral_2588/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v38);
    byte_42140BC = 1;
  }
  v137 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
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
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v66 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                v66->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.prefab,
                0LL) )
          break;
        if ( kind == 2 )
          v68 = 1LL;
        else
          v68 = 2LL * (kind == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v66,
                                                                                       &v137,
                                                                                       0LL);
        if ( !v137 )
          goto LABEL_125;
        if ( (unsigned int)v68 >= v137->max_length )
        {
LABEL_126:
          v128 = sub_B0D9A8(friendOperationItemListViewManager);
          sub_B0D948(v128, 0LL);
        }
        v69 = v137->m_Items[v68];
        if ( !v69 || v69->fields.id < 1 || v69->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                    v69->fields.id,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v69->fields.id,
                                                                                       v69->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_125;
        v71 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v136, &v135, v69->fields.lv, 0LL);
        v72 = v136;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v69->fields.lv;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v75 = System_String__Format(v73, v74, 0LL);
        v136 = System_String__Concat_43852188(v72, (System_String_o *)StringLiteral_80/*" "*/, v75, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v71 )
          goto LABEL_125;
        v76 = (System_String_o *)friendOperationItemListViewManager;
        dropObjectList = (int32_t)v71->fields.dropObjectList;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v78 = System_String__Format(v76, v77, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v60 = v135;
        v59 = v136;
        v61 = v78;
        goto LABEL_78;
      case 9:
        v82 = sub_B0D974(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v48, v49);
        BlacklistRootComponent___c__DisplayClass31_0___ctor((BlacklistRootComponent___c__DisplayClass31_0_o *)v82, 0LL);
        if ( !v82 )
          goto LABEL_125;
        *(_QWORD *)(v82 + 24) = this;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v82 + 24),
          (System_Int32_array **)this,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)friendOperationItemListViewManager,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v90 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v90 = BalanceConfig_TypeInfo;
        }
        if ( Count < v90->static_fields->MaxBlackListNum )
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
                items = (int64_t)dropList->fields._items;
                *(_QWORD *)(v82 + 16) = items;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v93 = (System_String_o *)StringLiteral_2586/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v94 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          items,
                          (const MethodInfo_2FB6304 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v96 = *(System_String_o **)&dropList->fields._size;
                  if ( v94 )
                    v93 = (System_String_o *)StringLiteral_2587/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v97 = LocalizationManager__Get(v93, 0LL);
                  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2588/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v101 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v99,
                                                                  v100);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v101,
                    (Il2CppObject *)v82,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v96, v97, v98, v101, 0, 0, v102);
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
        v119 = LocalizationManager__Get((System_String_o *)StringLiteral_2584/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v120 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v121 = BalanceConfig_TypeInfo;
        v122 = (Il2CppObject *)v120;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v121 = BalanceConfig_TypeInfo;
        }
        dropObjectList = v121->static_fields->MaxBlackListNum;
        v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v124 = System_String__Format_43845440(v119, v122, v123, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2585/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_125;
        setCondensedScale.fields.value = 0LL;
        *(_DWORD *)&setCondensedScale.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v124,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v103 = sub_B0D974(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v48, v49);
        BlacklistRootComponent___c__DisplayClass31_2___ctor((BlacklistRootComponent___c__DisplayClass31_2_o *)v103, 0LL);
        if ( !v103 )
          goto LABEL_125;
        *(_QWORD *)(v103 + 24) = this;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v103 + 24),
          (System_Int32_array **)this,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v110 = friendOperationItemListViewManager->fields.dropList;
        if ( !v110 )
          goto LABEL_125;
        *(_QWORD *)(v103 + 16) = v110->fields._items;
        v111 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v112 = *(System_String_o **)&v110->fields._size;
        v113 = (CommonUI_o *)v111;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_2583/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v115 = System_String__Concat_43852188(v112, (System_String_o *)StringLiteral_26/*"\n"*/, v114, 0LL);
        v118 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v116, v117);
        CommonConfirmDialog_ClickDelegate___ctor(
          v118,
          (Il2CppObject *)v103,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v113 )
          goto LABEL_125;
        CommonUI__OpenConfirmDialog_17016736(v113, (System_String_o *)StringLiteral_1/*""*/, v115, 1, v118, 0, 0, 0, 0, 0LL);
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
        v50 = (unsigned int)(kind - 14);
        v51 = (unsigned int)v50 < 4 ? v50 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_125;
        if ( (unsigned int)v51 >= skillInfoList->max_length )
          goto LABEL_126;
        v52 = skillInfoList->m_Items[v51];
        if ( v52 && v52->fields.id >= 1 && v52->fields.lv >= 1 )
        {
          v53 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v53 = (_QWORD *)sub_B0D8AC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v54 = (System_Reflection_MethodBase_o *)sub_B0D888(v53, v53[3]);
          OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                                                                         v52->fields.id,
                                                                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
            &name,
            &detail,
            v52->fields.lv,
            0LL);
          v55 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          lv = v52->fields.lv;
          v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
          v58 = System_String__Format(v56, v57, 0LL);
          name = System_String__Concat_43852188(v55, (System_String_o *)StringLiteral_80/*" "*/, v58, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          v60 = detail;
          v59 = name;
          v61 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_78:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v59, v61, v60, 1, 0, 0LL);
        }
        else
        {
          v64 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v64 = (_QWORD *)sub_B0D8AC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v65 = (System_Reflection_MethodBase_o *)sub_B0D888(v64, v64[3]);
          OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
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
        v79 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v80 = friendOperationItemListViewManager->fields.seed;
        if ( !v80 )
          goto LABEL_125;
        if ( !LODWORD(v80->fields.parent) )
          goto LABEL_126;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              (int32_t)v79->fields.SortObject,
                              0,
                              0,
                              (int32_t)v80->fields.prefab,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v63);
        return;
    }
LABEL_122:
    v126 = this->fields.friendOperationItemListViewManager;
    v127 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                  FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                  v62,
                                                                  v63);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v127,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v126 )
    {
      FriendOperationItemListViewManager__SetMode(v126, 2, v127, 0LL);
      return;
    }
LABEL_125:
    sub_B0D97C(friendOperationItemListViewManager);
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
  v40 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_129;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v40, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_129;
  v43 = EquipTargetInfo;
  v45 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v45;
  *(_QWORD *)&v138.fields.fakeValue = v44;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v138, 0LL) < 1 )
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
  if ( v40->fields.kind == 9 )
    v47 = 14;
  else
    v47 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v43, v47, v46);
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
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_42140BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_42140BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
  ServantStatusDialog_EndDelegate___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__OpenServantStatusDialog_17029768(Instance, 5, servantLeaderInfo, v10, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_42140B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_42140B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__OpenServantEquipStatusDialog_17032132(Instance, statusKind, equipInfo, v12, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_42140CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, result);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    this = (BlacklistRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v6);
    byte_42140CA = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v8);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_B0D97C(this);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v10, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42140CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_42140CD = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v6, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  v4 = this;
  if ( (byte_42140CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BlacklistRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    byte_42140CB = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B0D97C(this);
  CommonUI__CloseConfirmDialog_17017160(Instance, v12, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42140CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_42140CC = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v6, 0LL);
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

  if ( (byte_42140CE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, method);
    byte_42140CE = 1;
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
    sub_B0D97C(gameOptionComp);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
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
  BlacklistRootComponent_o *v16; // x20
  System_Xml_Schema_XmlSchemaObject_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  unsigned __int64 v21; // x10
  System_Collections_ICollection_c **v22; // x11
  __int64 v23; // x0
  int v24; // w0
  unsigned int v25; // w22
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *friendOfferList; // x23
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  int64_t *v31; // x0
  BlacklistRootComponent_o *v32; // x0
  System_String_o *v33; // x1
  const MethodInfo *v34; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42140C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B0D8A4(&System_Collections_ICollection_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IList_TypeInfo, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    sub_B0D8A4(&JsonManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v13);
    this = (BlacklistRootComponent_o *)sub_B0D8A4(&StringLiteral_18960/*"friendOfferList"*/, v14);
    byte_42140C9 = 1;
  }
  value = 0LL;
  if ( !result )
    goto LABEL_34;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    goto LABEL_32;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(result, 0LL);
  if ( !this )
    goto LABEL_34;
  v16 = this;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18960/*"friendOfferList"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18960/*"friendOfferList"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
LABEL_32:
    BlacklistRootComponent__modeChange(v4, 0, v15);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_34:
    sub_B0D97C(this);
  }
  this = (BlacklistRootComponent_o *)v4->fields.friendOfferList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  v17 = value;
  if ( !value )
    goto LABEL_34;
  v18 = sub_B0D964(value, System_Collections_IList_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (System_Collections_ICollection_c **)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *(v22 - 1) != System_Collections_ICollection_TypeInfo )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_18;
      }
      v23 = v19 + 16LL * (*(_DWORD *)v22 + 1) + 312;
    }
    else
    {
LABEL_18:
      v23 = sub_AA67A0(v18, System_Collections_ICollection_TypeInfo, 1LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
    if ( v24 >= 1 )
    {
      v17 = (System_Xml_Schema_XmlSchemaObject_o *)(unsigned int)v24;
      v25 = 0;
      while ( 1 )
      {
        v26 = *(_QWORD *)v20;
        friendOfferList = v4->fields.friendOfferList;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v28 = 0LL;
          v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v29 - 1) != System_Collections_IList_TypeInfo )
          {
            ++v28;
            v29 += 4;
            if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_26;
          }
          v30 = v26 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_26:
          v30 = sub_AA67A0(v20, System_Collections_IList_TypeInfo, 0LL);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v30)(
                                             v20,
                                             v25,
                                             *(_QWORD *)(v30 + 8));
        if ( !friendOfferList || !this )
          goto LABEL_34;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        v31 = (int64_t *)j_il2cpp_object_unbox_0(this);
        System_Collections_Generic_List_long___Add(
          friendOfferList,
          *v31,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        if ( (int)++v25 >= (int)v17 )
          goto LABEL_32;
      }
      sub_B0DC70(this);
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_36:
  v32 = (BlacklistRootComponent_o *)sub_B0DC70(v17);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v32, v33, v34);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *blackListObj; // x0
  __int64 *v5; // x9

  if ( (byte_42140C7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, method);
    sub_B0D8A4(&StringLiteral_7101/*"HIDE_END"*/, v3);
    byte_42140C7 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        !this->fields.myRoomFsm) )
  {
    sub_B0D97C(blackListObj);
  }
  if ( ((unsigned __int8)blackListObj & 1) != 0 )
    v5 = &StringLiteral_6912/*"GO_NEXT"*/;
  else
    v5 = &StringLiteral_7101/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(this->fields.myRoomFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42140C8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, method);
    byte_42140C8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42140C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42140C4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  BlacklistRootComponent_o *v2; // x19
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
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v19; // x19

  v2 = this;
  if ( (byte_42140B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2582/*"BLACKLIST_HELP_TEXT"*/, v7);
    this = (BlacklistRootComponent_o *)sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v8);
    byte_42140B7 = 1;
  }
  blackListObj = v2->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_23;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = v2->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_23;
  v12 = UnityEngine_GameObject__get_activeSelf(v2->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v12, 0LL);
  helpLabel = v2->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2582/*"BLACKLIST_HELP_TEXT"*/, 0LL);
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
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v17,
                                           (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v19 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 52, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v19 )
        {
          RequestBase__beginRequest(v19, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_B0D97C(this);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42140C1 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42140C1 = 1;
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

  if ( (byte_42140C0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42140C0 = 1;
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42140B5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42140B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42140B6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42140B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
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
  UILabel_o *v18; // x20
  FriendOperationItemListViewManager_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  __int64 *v23; // x8
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x21

  if ( (byte_42140C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_BlacklistRootComponent_onMoveEnd__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_17132/*"btn_txt_requestlist_off"*/, v7);
    sub_B0D8A4(&StringLiteral_17011/*"btn_bg_08"*/, v8);
    sub_B0D8A4(&StringLiteral_17085/*"btn_txt_blacklist_off"*/, v9);
    sub_B0D8A4(&StringLiteral_17012/*"btn_bg_09"*/, v10);
    sub_B0D8A4(&StringLiteral_2579/*"BLACKLIST_EXPLANATION_1"*/, v11);
    sub_B0D8A4(&StringLiteral_17133/*"btn_txt_requestlist_on"*/, v12);
    sub_B0D8A4(&StringLiteral_17086/*"btn_txt_blacklist_on"*/, v13);
    sub_B0D8A4(&StringLiteral_2580/*"BLACKLIST_EXPLANATION_2"*/, v14);
    byte_42140C2 = 1;
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
                                                                                           (System_String_o *)StringLiteral_2580/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v25 = this->fields.friendOperationItemListViewManager;
                  v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
                  System_Action___ctor(v28, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v25 )
                  {
                    FriendOperationItemListViewManager__SetMode_29792744(v25, 1, v28, 0LL);
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
                              (System_String_o *)StringLiteral_17132/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17011/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17086/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v23 = &StringLiteral_17012/*"btn_bg_09"*/;
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
    sub_B0D97C(friendOperationItemListViewManager);
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
            v18 = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2579/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0LL);
            if ( v18 )
            {
              UILabel__set_text(v18, (System_String_o *)friendOperationItemListViewManager, 0LL);
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
                  v19 = this->fields.friendOperationItemListViewManager;
                  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
                  System_Action___ctor(v22, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v19 )
                  {
                    FriendOperationItemListViewManager__SetMode_29792744(v19, 1, v22, 0LL);
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
                              (System_String_o *)StringLiteral_17133/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17085/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v23 = &StringLiteral_17011/*"btn_bg_08"*/;
LABEL_44:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v23,
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
  BlacklistRootComponent__setRegistCount(this, v16);
}


void __fastcall BlacklistRootComponent__onMoveEnd(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  struct FriendOperationItemListViewManager_o **p_friendOperationItemListViewManager; // x22
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  ListViewManager_o *v9; // x0
  int32_t ItemSum; // w19

  if ( (byte_42140B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&BlacklistRootComponent_TypeInfo, v4);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    byte_42140B8 = 1;
  }
  if ( this->fields.listMode > 1u )
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
  }
  else
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                method,
                                                                v2);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_13;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
  }
  v9 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
    goto LABEL_13;
  ItemSum = ListViewManager__get_ItemSum(v9, 0LL);
  if ( (BYTE3(BlacklistRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  }
  v9 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
LABEL_13:
    sub_B0D97C(v9);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v9,
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
  DataManager_o *Instance; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v12; // x20
  Il2CppObject *v13; // x21
  BalanceConfig_c *v14; // x8
  Il2CppObject *v15; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-28h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42140C3 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_42140C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_14;
  lookup = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance->fields.lookup;
  registCntLabel = this->fields.registCntLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !lookup )
    goto LABEL_14;
  v12 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            lookup,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v14->static_fields->MaxBlackListNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  Instance = (DataManager_o *)System_String__Format_43845440(v12, v13, v15, 0LL);
  if ( !registCntLabel )
LABEL_14:
    sub_B0D97C(Instance);
  UILabel__set_text(registCntLabel, (System_String_o *)Instance, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v13; // x20

  if ( (byte_4211DB0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v5);
    sub_B0D8A4(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v6);
    byte_4211DB0 = 1;
  }
  v7 = sub_B0D974(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_B0D840(v7 + 24, this),
        *(_BYTE *)(v7 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v7,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_B0D97C(v8);
  }
  CommonConfirmDialog__Close_16936408(blackListRegistDlg, v13, 0LL);
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
  BlacklistRootComponent___c__DisplayClass31_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v12; // x8
  FriendOperationItemListViewManager_o *klass; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21

  v3 = this;
  if ( (byte_4211DB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B0D8A4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v4);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4211DB1 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( v3->fields.isDecide )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v11,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v12 = v3->fields.CS___8__locals1;
    if ( v12 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v12->fields.otherUserId, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(this);
  }
  if ( !_4__this )
    goto LABEL_14;
  klass = (FriendOperationItemListViewManager_o *)_4__this[3].klass;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v14,
    _4__this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !klass )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(klass, 2, v14, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  BlacklistRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  WebViewManager_o *Instance; // x0
  Il2CppObject *v15; // x21
  CommonUI_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_4211DB2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v5);
    sub_B0D8A4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v6);
    sub_B0D8A4(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4211DB2 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (BlacklistRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v12,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      BlacklistRemoveRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (Il2CppObject *)this->fields.__4__this;
  v16 = (CommonUI_o *)Instance;
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(v19, v15, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v16 )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_17017160(v16, v19, 0LL);
}