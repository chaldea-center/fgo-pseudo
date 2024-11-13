void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11572 & 1) == 0 )
  {
    sub_1BCA7E0(&BlacklistRootComponent_TypeInfo, v1, v2);
    byte_4B11572 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_long__o *v7; // x20

  if ( (byte_4B11571 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v5, v6);
    byte_4B11571 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v7;
  sub_1BCA784(&this->fields.friendOfferList, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1156B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    byte_4B1156B = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11567 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    byte_4B11567 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServant(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  if ( (byte_4B1156A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent_EndCloseShowServant__, v5, v6);
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7, v8);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B1156A = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               isDecide,
                                                               method,
                                                               v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v14, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
        System_Action___ctor(v21, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BCAA3C(v15, v16);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B11566 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B11566 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__OnSelectFriendItem(
        BlacklistRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v70; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  __int64 v73; // x1
  EquipTargetInfo_o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x8
  __int64 v86; // x20
  SkillInfo_o *v87; // x22
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x1
  System_String_o *v92; // x20
  System_String_o *v93; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x1
  System_String_o *v97; // x3
  System_String_o *v98; // x2
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  const MethodInfo *v101; // x2
  __int64 v102; // x3
  FriendOperationItemListViewManager_o *v103; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v104; // x21
  FriendOperationItemListViewItem_o *v105; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v107; // x20
  SkillInfo_o *v108; // x23
  Il2CppObject *Entity; // x21
  FriendOperationItemListViewManager_o *v110; // x20
  __int64 v111; // x1
  System_String_o *v112; // x21
  System_String_o *v113; // x22
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  System_String_o *v116; // x21
  Il2CppObject *v117; // x0
  System_String_o *v118; // x20
  FriendOperationItemListViewManager_o *v119; // x8
  struct ListViewItemSeed_o *v120; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *v122; // x20
  int32_t Count; // w21
  BalanceConfig_c *v124; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x21
  System_String_o *v126; // x22
  bool v127; // w0
  __int64 v128; // x1
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *klass; // x21
  System_String_o *v131; // x22
  System_String_o *v132; // x23
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  CommonConfirmDialog_ClickDelegate_o *v136; // x24
  const MethodInfo *v137; // x7
  Il2CppObject *v138; // x20
  struct UnityEngine_GameObject_o *v139; // x19
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  System_String_o *v142; // x21
  CommonUI_o *v143; // x19
  System_String_o *v144; // x0
  System_String_o *v145; // x21
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  CommonConfirmDialog_ClickDelegate_o *v149; // x22
  System_String_o *v150; // x20
  __int64 v151; // x0
  __int64 v152; // x1
  BalanceConfig_c *v153; // x8
  Il2CppObject *v154; // x21
  Il2CppObject *v155; // x0
  System_String_o *v156; // x20
  Il2CppObject *Instance; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-90h]
  int32_t m_CancellationTokenSource; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+24h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+30h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-58h] BYREF
  System_String_o *v164; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *v165; // [xsp+48h] [xbp-48h] BYREF
  SkillInfo_array *v166; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  v5 = kind;
  if ( (byte_4B11568 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7, v8);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v39, v40);
    sub_1BCA7E0(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v43, v44);
    sub_1BCA7E0(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_3066/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3063/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_3065/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_3064/*"BLACKLIST_REGIST_MAX_TITLE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_3062/*"BLACKLIST_REGIST_CANCEL"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3067/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v67, v68);
    byte_4B11568 = 1;
  }
  v166 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v5 != 12 )
  {
    v81 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v81 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v82 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v81, v81[4]);
    OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0LL);
    this->fields.selectItemNum = n;
    switch ( v5 )
    {
      case 1:
      case 2:
      case 3:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v105 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dragParentObject;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        seed = friendOperationItemListViewManager->fields.seed;
        if ( !seed )
          goto LABEL_110;
        if ( !LODWORD(seed->fields.m_CancellationTokenSource) )
          goto LABEL_111;
        if ( !OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                v105->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.parent,
                0LL) )
          break;
        if ( v5 == 2 )
          v107 = 1LL;
        else
          v107 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v105,
                                                                                       &v166,
                                                                                       0LL);
        if ( !v166 )
          goto LABEL_110;
        if ( (unsigned int)v107 >= v166->max_length )
LABEL_111:
          sub_1BCAA44(friendOperationItemListViewManager, *(_QWORD *)&kind);
        v108 = v166->m_Items[v107];
        if ( !v108 || v108->fields.id < 1 || v108->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                   v108->fields.id,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v108->fields.id,
                                                                                       v108->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_110;
        v110 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v165, &v164, v108->fields.lv, 0LL);
        v112 = v165;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v111);
        v113 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v108->fields.lv;
        v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v115 = System_String__Format(v113, v114, 0LL);
        v165 = System_String__Concat_62412480(v112, (System_String_o *)StringLiteral_116/*" "*/, v115, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v110 )
          goto LABEL_110;
        v116 = (System_String_o *)friendOperationItemListViewManager;
        m_CancellationTokenSource = (int32_t)v110->fields.m_CancellationTokenSource;
        v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
        v118 = System_String__Format(v116, v117, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v97 = v164;
        v96 = v165;
        v98 = v118;
LABEL_71:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v96, v98, v97, 1, 0, 0LL);
        break;
      case 9:
        v122 = (Il2CppObject *)sub_1BCAA2C(
                                 BlacklistRootComponent___c__DisplayClass31_0_TypeInfo,
                                 *(_QWORD *)&kind,
                                 v83,
                                 v84);
        System_Object___ctor(v122, 0LL);
        if ( !v122 )
          goto LABEL_110;
        v122[1].monitor = this;
        sub_1BCA784(&v122[1].monitor, this);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropObjectList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v124 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
          v124 = BalanceConfig_TypeInfo;
        }
        if ( Count < v124->static_fields->MaxBlackListNum )
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
              dragParentObject = friendOperationItemListViewManager->fields.dragParentObject;
              if ( dragParentObject )
              {
                *(_QWORD *)&kind = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
                v122[1].klass = *(Il2CppClass **)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v126 = (System_String_o *)StringLiteral_3065/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v127 = System_Collections_Generic_List_long___Contains(
                           (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                           *(int64_t *)&kind,
                           (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  klass = (System_String_o *)dragParentObject[1].klass;
                  if ( v127 )
                    v126 = (System_String_o *)StringLiteral_3066/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
                  v131 = LocalizationManager__Get(v126, 0LL);
                  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_3067/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v136 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v133,
                                                                  v134,
                                                                  v135);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v136,
                    v122,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, klass, v131, v132, v136, 0, 0, v137);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_110;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_3063/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v151 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v153 = BalanceConfig_TypeInfo;
        v154 = (Il2CppObject *)v151;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v152);
          v153 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v153->static_fields->MaxBlackListNum;
        v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
        v156 = System_String__Format_62415592(v150, v154, v155, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_3064/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_110;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0LL;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v156,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v138 = (Il2CppObject *)sub_1BCAA2C(
                                 BlacklistRootComponent___c__DisplayClass31_2_TypeInfo,
                                 *(_QWORD *)&kind,
                                 v83,
                                 v84);
        System_Object___ctor(v138, 0LL);
        if ( !v138 )
          goto LABEL_110;
        v138[1].monitor = this;
        sub_1BCA784(&v138[1].monitor, this);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v139 = friendOperationItemListViewManager->fields.dragParentObject;
        if ( !v139 )
          goto LABEL_110;
        v138[1].klass = *(Il2CppClass **)&v139->fields.m_CachedPtr;
        v140 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v142 = (System_String_o *)v139[1].klass;
        v143 = (CommonUI_o *)v140;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v141);
        v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3062/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v145 = System_String__Concat_62412480(v142, (System_String_o *)StringLiteral_43/*"\n"*/, v144, 0LL);
        v149 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v146,
                                                        v147,
                                                        v148);
        CommonConfirmDialog_ClickDelegate___ctor(
          v149,
          v138,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v143 )
          goto LABEL_110;
        CommonUI__OpenConfirmDialog_30766568(v143, (System_String_o *)StringLiteral_1/*""*/, v145, 1, v149, 0, 0, 0, 0, 0LL);
        return;
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        v85 = (unsigned int)(v5 - 14);
        v86 = (unsigned int)v85 < 4 ? v85 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_110;
        if ( (unsigned int)v86 >= skillInfoList->max_length )
          goto LABEL_111;
        v87 = skillInfoList->m_Items[v86];
        if ( !v87 || v87->fields.id < 1 || v87->fields.lv < 1 )
          goto LABEL_41;
        v88 = Method_BlacklistRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v88 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_OnSelectFriendItem__);
        v89 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v88, v88[4]);
        OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                       v87->fields.id,
                                                                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)friendOperationItemListViewManager,
          &name,
          &detail,
          v87->fields.lv,
          0LL);
        v92 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v87->fields.lv;
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v95 = System_String__Format(v93, v94, 0LL);
        name = System_String__Concat_62412480(v92, (System_String_o *)StringLiteral_116/*" "*/, v95, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v97 = detail;
        v96 = name;
        v98 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_71;
      default:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v119 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dragParentObject;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v120 = friendOperationItemListViewManager->fields.seed;
        if ( !v120 )
          goto LABEL_110;
        if ( !LODWORD(v120->fields.m_CancellationTokenSource) )
          goto LABEL_111;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              LODWORD(v119->fields.topFocusOffset),
                              0,
                              0,
                              (int32_t)v120->fields.parent,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v101);
        return;
    }
LABEL_44:
    v103 = this->fields.friendOperationItemListViewManager;
    v104 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&kind,
                                                                  v101,
                                                                  v102);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v104,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v103 )
    {
      FriendOperationItemListViewManager__SetMode(v103, 2, v104, 0LL);
      return;
    }
LABEL_110:
    sub_1BCAA3C(friendOperationItemListViewManager, *(_QWORD *)&kind);
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.selectItemNum = n;
  if ( !friendOperationItemListViewManager )
    goto LABEL_110;
  friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                 friendOperationItemListViewManager,
                                                                                 n,
                                                                                 0LL);
  if ( !friendOperationItemListViewManager )
    goto LABEL_110;
  v70 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_41;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v70, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_41;
  v74 = EquipTargetInfo;
  v76 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v73);
  *(_QWORD *)&v167.fields.currentCryptoKey = v76;
  *(_QWORD *)&v167.fields.fakeValue = v75;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v167, 0LL) < 1 )
  {
LABEL_41:
    v99 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v99 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v100 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v99, v99[4]);
    OverwriteAssetSoundName__PlaySystemSe(v100, 2, 0LL);
    goto LABEL_44;
  }
  v77 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v77 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_OnSelectFriendItem__);
  v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v77, v77[4]);
  OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0LL);
  if ( v70->fields.kind == 9 )
    v80 = 14;
  else
    v80 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v74, v80, v79);
}


void __fastcall BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  ServantStatusDialog_EndDelegate_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B11569 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo, method);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11569 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12);
  ServantStatusDialog_EndDelegate___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)Instance, 5, servantLeaderInfo, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ServantStatusDialog_EndDelegate_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B11565 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo, *(_QWORD *)&statusKind);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B11565 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
  ServantStatusDialog_EndDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v16, v17);
  CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)Instance, statusKind, equipInfo, v15, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v13; // x21

  v4 = this;
  if ( (byte_4B11576 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, result, method);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BlacklistRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    byte_4B11576 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v10);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v13 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_1BCAA3C(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v13, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11579 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    byte_4B11579 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x2
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x21

  v4 = this;
  if ( (byte_4B11577 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    this = (BlacklistRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    byte_4B11577 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(this, result);
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v16, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11578 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    byte_4B11578 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v8, 0LL);
}


void __fastcall BlacklistRootComponent___afterMainMenuBar_b__39_0(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v8; // w0

  if ( (byte_4B1157A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B1157A = 1;
  }
  gameOptionComp = this->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_8;
  SetGameOptionComponent__hideGameOption(gameOptionComp, method);
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.blackListObj, 0LL),
        UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL),
        (optionTopObj = this->fields.optionTopObj) == 0LL)
    || (v8 = UnityEngine_GameObject__get_activeSelf(this->fields.optionTopObj, 0LL),
        UnityEngine_GameObject__SetActive(optionTopObj, !v8, 0LL),
        (gameOptionComp = (SetGameOptionComponent_o *)this->fields.myRoomFsm) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  BlacklistRootComponent_o *v27; // x20
  struct System_Collections_Generic_List_long__o *friendOfferList; // x8
  int v29; // w9
  Il2CppObject *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x20
  __int64 v34; // x9
  System_Collections_ICollection_c **v35; // x10
  __int64 v36; // x0
  int v37; // w0
  unsigned int v38; // w22
  __int64 v39; // x8
  System_Collections_Generic_List_long__o *v40; // x23
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  BlacklistRootComponent_o *v47; // x0
  System_String_o *v48; // x1
  const MethodInfo *v49; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = result;
  v4 = this;
  if ( (byte_4B11575 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    sub_1BCA7E0(&System_Collections_ICollection_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IList_TypeInfo, v9, v10);
    sub_1BCA7E0(&long_TypeInfo, v11, v12);
    sub_1BCA7E0(&JsonManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v21, v22);
    this = (BlacklistRootComponent_o *)sub_1BCA7E0(&StringLiteral_19845/*"friendOfferList"*/, v23, v24);
    byte_4B11575 = 1;
  }
  value = 0LL;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_62409536(v3, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    goto LABEL_35;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v25);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0LL);
  if ( !this )
    goto LABEL_37;
  v27 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_19845/*"friendOfferList"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v27,
                                             (Il2CppObject *)StringLiteral_19845/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v26);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_37:
    sub_1BCAA3C(this, result);
  }
  friendOfferList = v4->fields.friendOfferList;
  if ( !friendOfferList )
    goto LABEL_37;
  v29 = friendOfferList->fields._version + 1;
  friendOfferList->fields._size = 0;
  friendOfferList->fields._version = v29;
  v30 = value;
  if ( !value )
    goto LABEL_37;
  v31 = sub_1BCA91C(value, System_Collections_IList_TypeInfo);
  if ( v31 )
  {
    v32 = *(_QWORD *)v31;
    v33 = v31;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v35 = (System_Collections_ICollection_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v35 - 1) != System_Collections_ICollection_TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_17;
      }
      v36 = v32 + 16LL * (*(_DWORD *)v35 + 1) + 312;
    }
    else
    {
LABEL_17:
      v36 = sub_1C1C7C0(v31, System_Collections_ICollection_TypeInfo, 1LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
    if ( v37 >= 1 )
    {
      v30 = (Il2CppObject *)(unsigned int)v37;
      v38 = 0;
      while ( 1 )
      {
        v39 = *(_QWORD *)v33;
        v40 = v4->fields.friendOfferList;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v42 - 1) != System_Collections_IList_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_25;
          }
          v43 = v39 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_25:
          v43 = sub_1C1C7C0(v33, System_Collections_IList_TypeInfo, 0LL);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v43)(
                                             v33,
                                             v38,
                                             *(_QWORD *)(v43 + 8));
        if ( !v40 || !this )
          goto LABEL_37;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        this = (BlacklistRootComponent_o *)j_il2cpp_object_unbox_0();
        result = (System_String_o *)this->klass;
        items = v40->fields._items;
        v45 = Method_System_Collections_Generic_List_long__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v40,
            (int64_t)result,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v40->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        if ( ++v38 == (_DWORD)v30 )
          goto LABEL_35;
      }
      sub_1BCACFC(this);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v47 = (BlacklistRootComponent_o *)sub_1BCACFC(v30);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v47, v48, v49);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *blackListObj; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v8; // x9

  if ( (byte_4B11573 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_7276/*"HIDE_END"*/, v4, v5);
    byte_4B11573 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(blackListObj, method);
  }
  v8 = &StringLiteral_7061/*"GO_NEXT"*/;
  if ( ((unsigned __int8)blackListObj & 1) == 0 )
    v8 = &StringLiteral_7276/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v8, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11574 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B11574 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B11570 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11570 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlacklistRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v19; // w0
  __int64 v20; // x1
  UILabel_o *helpLabel; // x20
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v29; // x19

  v3 = this;
  if ( (byte_4B11563 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_3061/*"BLACKLIST_HELP_TEXT"*/, v12, v13);
    this = (BlacklistRootComponent_o *)sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v14, v15);
    byte_4B11563 = 1;
  }
  blackListObj = v3->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_21;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v3->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = v3->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_21;
  v19 = UnityEngine_GameObject__get_activeSelf(v3->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v19, 0LL);
  helpLabel = v3->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3061/*"BLACKLIST_HELP_TEXT"*/, 0LL);
  if ( !helpLabel )
    goto LABEL_21;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0LL);
  gameOptionComp = v3->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_21;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  this = (BlacklistRootComponent_o *)v3->fields.blackListObj;
  if ( !this )
    goto LABEL_21;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BlacklistRootComponent_o *)v3->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0LL);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)v3,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v26,
                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v3->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v29 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 53, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v29 )
        {
          RequestBase__beginRequest(v29, 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, method);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  this = (BlacklistRootComponent_o *)v3->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_21;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (BlacklistRootComponent_o *)v3->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_21;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 47, 1, 0, 0LL);
  this = (BlacklistRootComponent_o *)v3->fields.myRoomFsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1156D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_clickBlacklistTabButton__, method, v2);
    byte_4B1156D = 1;
  }
  v4 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_clickBlacklistTabButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  BlacklistRootComponent__modeChange(this, 1, v6);
}


void __fastcall BlacklistRootComponent__clickFriendHistoryTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1156C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__, method, v2);
    byte_4B1156C = 1;
  }
  v4 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  BlacklistRootComponent__modeChange(this, 0, v6);
}


void __fastcall BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B11561 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11561 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B11562 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11562 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__modeChange(
        BlacklistRootComponent_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  int32_t listMode; // w8
  __int64 v27; // x1
  UILabel_o *v28; // x20
  FriendOperationItemListViewManager_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x21
  __int64 *v34; // x8
  __int64 v35; // x1
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x21

  if ( (byte_4B1156E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent_onMoveEnd__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_17781/*"btn_txt_requestlist_off"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17647/*"btn_bg_08"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17733/*"btn_txt_blacklist_off"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17648/*"btn_bg_09"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3058/*"BLACKLIST_EXPLANATION_1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17782/*"btn_txt_requestlist_on"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17734/*"btn_txt_blacklist_on"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3059/*"BLACKLIST_EXPLANATION_2"*/, v23, v24);
    byte_4B1156E = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.listMode = mode;
  if ( !friendOperationItemListViewManager )
    goto LABEL_44;
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
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3059/*"BLACKLIST_EXPLANATION_2"*/,
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
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))friendOperationItemListViewManager->klass->vtable._10_SetSortKind.method)(
                    friendOperationItemListViewManager,
                    17LL,
                    friendOperationItemListViewManager->klass->vtable._11_SetSortAscendingOrder.methodPtr);
                  v37 = this->fields.friendOperationItemListViewManager;
                  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
                  System_Action___ctor(v41, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v37 )
                  {
                    FriendOperationItemListViewManager__SetMode_31476800(v37, 1, v41, 0LL);
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
                              (System_String_o *)StringLiteral_17781/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17647/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17734/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v34 = &StringLiteral_17648/*"btn_bg_09"*/;
                                  goto LABEL_42;
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
LABEL_44:
    sub_1BCAA3C(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
            v28 = this->fields.listExplanationLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3058/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0LL);
            if ( v28 )
            {
              UILabel__set_text(v28, (System_String_o *)friendOperationItemListViewManager, 0LL);
              friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
              if ( friendOperationItemListViewManager )
              {
                FriendOperationItemListViewManager__CreateList(friendOperationItemListViewManager, 7, 0, 0LL);
                friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                if ( friendOperationItemListViewManager )
                {
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))friendOperationItemListViewManager->klass->vtable._10_SetSortKind.method)(
                    friendOperationItemListViewManager,
                    18LL,
                    friendOperationItemListViewManager->klass->vtable._11_SetSortAscendingOrder.methodPtr);
                  v29 = this->fields.friendOperationItemListViewManager;
                  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
                  System_Action___ctor(v33, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v29 )
                  {
                    FriendOperationItemListViewManager__SetMode_31476800(v29, 1, v33, 0LL);
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
                              (System_String_o *)StringLiteral_17782/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17733/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v34 = &StringLiteral_17647/*"btn_bg_08"*/;
LABEL_42:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v34,
                                    0LL);
                                  goto LABEL_43;
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
    goto LABEL_44;
  }
LABEL_43:
  BlacklistRootComponent__setRegistCount(this, *(const MethodInfo **)&mode);
}


void __fastcall BlacklistRootComponent__onMoveEnd(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  ListViewManager_o *v11; // x0
  int32_t ItemSum; // w20

  if ( (byte_4B11564 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&BlacklistRootComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
    byte_4B11564 = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                 FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_11;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v10, 0LL);
  }
  v11 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v11 )
    goto LABEL_11;
  ItemSum = ListViewManager__get_ItemSum(v11, 0LL);
  if ( !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo, method);
  v11 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v11 )
LABEL_11:
    sub_1BCAA3C(v11, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v11,
    ItemSum >= BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE,
    0LL);
}


void __fastcall BlacklistRootComponent__returnBlackList(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent__setRegistCount(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  void *Instance; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *v18; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  BalanceConfig_c *v23; // x8
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1156F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_6654/*"FRIEND_SHOW_INFOMATION"*/, v14, v15);
    byte_4B1156F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  v18 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  registCntLabel = this->fields.registCntLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6654/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v18 )
    goto LABEL_12;
  v20 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            v18,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v23 = BalanceConfig_TypeInfo;
  v24 = (Il2CppObject *)v21;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
    v23 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v23->static_fields->MaxBlackListNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  Instance = System_String__Format_62415592(v20, v24, v25, 0LL);
  if ( !registCntLabel )
LABEL_12:
    sub_1BCAA3C(Instance, v17);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v17; // x20

  if ( (byte_4B1157B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v6, v7);
    sub_1BCA7E0(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v8, v9);
    byte_4B1157B = 1;
  }
  v10 = sub_1BCAA2C(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        v11 = sub_1BCA784(v10 + 24, this),
        *(_BYTE *)(v10 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v10,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_1BCAA3C(v11, v12);
  }
  CommonConfirmDialog__Close_30742760(blackListRegistDlg, v17, 0LL);
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
  BlacklistRootComponent___c__DisplayClass31_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v19; // x8
  Il2CppObject *v20; // x20
  FriendOperationItemListViewManager_o *monitor; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v22; // x21

  v4 = this;
  if ( (byte_4B1157C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method, v2);
    sub_1BCA7E0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v5, v6);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_1BCA7E0(
                                                               &NetworkManager_ResultCallbackFunc_TypeInfo,
                                                               v13,
                                                               v14);
    byte_4B1157C = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  if ( v4->fields.isDecide )
  {
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                               v17,
                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v19 = v4->fields.CS___8__locals1;
    if ( v19 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v19->fields.otherUserId, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  v20 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v20 )
    goto LABEL_13;
  monitor = (FriendOperationItemListViewManager_o *)v20[3].monitor;
  v22 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v22,
    v20,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !monitor )
    goto LABEL_13;
  FriendOperationItemListViewManager__SetMode(monitor, 2, v22, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  __int64 v20; // x1
  Il2CppObject *Request_object; // x0
  __int64 v22; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v24; // x21
  CommonUI_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_4B1157D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v6, v7);
    sub_1BCA7E0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B1157D = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    Request_object = NetworkManager__getRequest_object_(
                       v19,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Request_object, v22);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (Il2CppObject *)this->fields.__4__this;
  v25 = (CommonUI_o *)Instance;
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(v29, v24, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v25 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_30766896(v25, v29, 0LL);
}