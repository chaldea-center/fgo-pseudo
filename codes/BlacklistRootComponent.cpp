void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A29443 & 1) == 0 )
  {
    sub_1B761C0(&BlacklistRootComponent_TypeInfo, v1);
    byte_4A29443 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *v4; // x20

  if ( (byte_4A29442 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_long___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_List_long__TypeInfo, v3);
    byte_4A29442 = 1;
  }
  v4 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v4;
  sub_1B76164(&this->fields.friendOfferList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A2943C & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4A2943C = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1B7641C(v6, v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v5, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A29438 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4A29438 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1B7641C(v6, v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v5, 0LL);
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
  __int64 v11; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v13; // x21

  if ( (byte_4A2943B & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_BlacklistRootComponent_EndCloseShowServant__, v4);
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, v5);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A2943B = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v9, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B7641C(v10, v11);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A29437 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A29437 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B7641C(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v39; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  __int64 v51; // x8
  __int64 v52; // x20
  SkillInfo_o *v53; // x22
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  System_String_o *v56; // x20
  System_String_o *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x1
  System_String_o *v64; // x3
  System_String_o *v65; // x2
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  FriendOperationItemListViewManager_o *v68; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v69; // x21
  FriendOperationItemListViewItem_o *v70; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v72; // x20
  SkillInfo_o *v73; // x23
  Il2CppObject *Entity; // x21
  FriendOperationItemListViewManager_o *v75; // x20
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_String_o *v86; // x21
  Il2CppObject *v87; // x0
  System_String_o *v88; // x20
  FriendOperationItemListViewManager_o *v89; // x8
  struct ListViewItemSeed_o *v90; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v92; // x2
  Il2CppObject *v93; // x20
  int32_t Count; // w21
  BalanceConfig_c *v95; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x21
  System_String_o *v97; // x22
  bool v98; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *klass; // x21
  System_String_o *v101; // x22
  System_String_o *v102; // x23
  CommonConfirmDialog_ClickDelegate_o *v103; // x24
  const MethodInfo *v104; // x7
  Il2CppObject *v105; // x20
  struct UnityEngine_GameObject_o *v106; // x19
  Il2CppObject *v107; // x0
  System_String_o *v108; // x21
  CommonUI_o *v109; // x19
  System_String_o *v110; // x0
  System_String_o *v111; // x21
  CommonConfirmDialog_ClickDelegate_o *v112; // x22
  System_String_o *v113; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  __int64 v117; // x0
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  BalanceConfig_c *v121; // x8
  Il2CppObject *v122; // x21
  Il2CppObject *v123; // x0
  System_String_o *v124; // x20
  Il2CppObject *Instance; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-90h]
  int32_t m_CancellationTokenSource; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+24h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+30h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-58h] BYREF
  System_String_o *v132; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *v133; // [xsp+48h] [xbp-48h] BYREF
  SkillInfo_array *v134; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  v5 = kind;
  if ( (byte_4A29439 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v13);
    sub_1B761C0(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1B761C0(&DataManager_TypeInfo, v15);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1B761C0(&int_TypeInfo, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Contains__, v18);
    sub_1B761C0(&LocalizationManager_TypeInfo, v19);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B761C0(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v23);
    sub_1B761C0(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v24);
    sub_1B761C0(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v25);
    sub_1B761C0(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v26);
    sub_1B761C0(&StringLiteral_43/*"\n"*/, v27);
    sub_1B761C0(&StringLiteral_117/*" "*/, v28);
    sub_1B761C0(&StringLiteral_3044/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v29);
    sub_1B761C0(&StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, v30);
    sub_1B761C0(&StringLiteral_3041/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v31);
    sub_1B761C0(&StringLiteral_3043/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v32);
    sub_1B761C0(&StringLiteral_3042/*"BLACKLIST_REGIST_MAX_TITLE"*/, v33);
    sub_1B761C0(&StringLiteral_3040/*"BLACKLIST_REGIST_CANCEL"*/, v34);
    sub_1B761C0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, v35);
    sub_1B761C0(&StringLiteral_1/*""*/, v36);
    sub_1B761C0(&StringLiteral_3045/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v37);
    byte_4A29439 = 1;
  }
  v134 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v5 != 12 )
  {
    v49 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1B761D8();
    v50 = (System_Reflection_MethodBase_o *)sub_1B761A4(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
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
        v70 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                v70->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.parent,
                0LL) )
          break;
        if ( v5 == 2 )
          v72 = 1LL;
        else
          v72 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v70,
                                                                                       &v134,
                                                                                       0LL);
        if ( !v134 )
          goto LABEL_110;
        if ( (unsigned int)v72 >= v134->max_length )
LABEL_111:
          sub_1B76424(friendOperationItemListViewManager, *(_QWORD *)&kind);
        v73 = v134->m_Items[v72];
        if ( !v73 || v73->fields.id < 1 || v73->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                   v73->fields.id,
                   (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v73->fields.id,
                                                                                       v73->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_110;
        v75 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v133, &v132, v73->fields.lv, 0LL);
        v76 = v133;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v73->fields.lv;
        v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v78, v79, v80);
        v82 = System_String__Format(v77, v81, 0LL);
        v133 = System_String__Concat_61546320(v76, (System_String_o *)StringLiteral_117/*" "*/, v82, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v75 )
          goto LABEL_110;
        v86 = (System_String_o *)friendOperationItemListViewManager;
        m_CancellationTokenSource = (int32_t)v75->fields.m_CancellationTokenSource;
        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v83, v84, v85);
        v88 = System_String__Format(v86, v87, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v64 = v132;
        v63 = v133;
        v65 = v88;
LABEL_71:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v63, v65, v64, 1, 0, 0LL);
        break;
      case 9:
        v93 = (Il2CppObject *)sub_1B7640C(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        System_Object___ctor(v93, 0LL);
        if ( !v93 )
          goto LABEL_110;
        v93[1].monitor = this;
        sub_1B76164(&v93[1].monitor);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropObjectList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v95 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v95 = BalanceConfig_TypeInfo;
        }
        if ( Count < v95->static_fields->MaxBlackListNum )
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
                v93[1].klass = *(Il2CppClass **)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v97 = (System_String_o *)StringLiteral_3043/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v98 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          *(int64_t *)&kind,
                          (const MethodInfo_34BF980 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  klass = (System_String_o *)dragParentObject[1].klass;
                  if ( v98 )
                    v97 = (System_String_o *)StringLiteral_3044/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v101 = LocalizationManager__Get(v97, 0LL);
                  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_3045/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v103 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v103,
                    v93,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, klass, v101, v102, v103, 0, 0, v104);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_110;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v113 = LocalizationManager__Get((System_String_o *)StringLiteral_3041/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v117 = j_il2cpp_value_box_0(int_TypeInfo, &lv, v114, v115, v116);
        v121 = BalanceConfig_TypeInfo;
        v122 = (Il2CppObject *)v117;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v121 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v121->static_fields->MaxBlackListNum;
        v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v118, v119, v120);
        v124 = System_String__Format_61549432(v113, v122, v123, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_3042/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_110;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0LL;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
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
        v105 = (Il2CppObject *)sub_1B7640C(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        System_Object___ctor(v105, 0LL);
        if ( !v105 )
          goto LABEL_110;
        v105[1].monitor = this;
        sub_1B76164(&v105[1].monitor);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v106 = friendOperationItemListViewManager->fields.dragParentObject;
        if ( !v106 )
          goto LABEL_110;
        v105[1].klass = *(Il2CppClass **)&v106->fields.m_CachedPtr;
        v107 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v108 = (System_String_o *)v106[1].klass;
        v109 = (CommonUI_o *)v107;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3040/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v111 = System_String__Concat_61546320(v108, (System_String_o *)StringLiteral_43/*"\n"*/, v110, 0LL);
        v112 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v112,
          v105,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v109 )
          goto LABEL_110;
        CommonUI__OpenConfirmDialog_30419280(v109, (System_String_o *)StringLiteral_1/*""*/, v111, 1, v112, 0, 0, 0, 0, 0LL);
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
        v51 = (unsigned int)(v5 - 14);
        v52 = (unsigned int)v51 < 4 ? v51 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_110;
        if ( (unsigned int)v52 >= skillInfoList->max_length )
          goto LABEL_111;
        v53 = skillInfoList->m_Items[v52];
        if ( !v53 || v53->fields.id < 1 || v53->fields.lv < 1 )
          goto LABEL_41;
        v54 = Method_BlacklistRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v54 = (_QWORD *)sub_1B761D8();
        v55 = (System_Reflection_MethodBase_o *)sub_1B761A4(v54, v54[4]);
        OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                       v53->fields.id,
                                                                                       (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)friendOperationItemListViewManager,
          &name,
          &detail,
          v53->fields.lv,
          0LL);
        v56 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v53->fields.lv;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v58, v59, v60);
        v62 = System_String__Format(v57, v61, 0LL);
        name = System_String__Concat_61546320(v56, (System_String_o *)StringLiteral_117/*" "*/, v62, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v64 = detail;
        v63 = name;
        v65 = (System_String_o *)StringLiteral_1/*""*/;
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
        v89 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dragParentObject;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v90 = friendOperationItemListViewManager->fields.seed;
        if ( !v90 )
          goto LABEL_110;
        if ( !LODWORD(v90->fields.m_CancellationTokenSource) )
          goto LABEL_111;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              LODWORD(v89->fields.topFocusOffset),
                              0,
                              0,
                              (int32_t)v90->fields.parent,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v92);
        return;
    }
LABEL_44:
    v68 = this->fields.friendOperationItemListViewManager;
    v69 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v69,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v68 )
    {
      FriendOperationItemListViewManager__SetMode(v68, 2, v69, 0LL);
      return;
    }
LABEL_110:
    sub_1B7641C(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
  v39 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_41;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v39, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_41;
  v42 = EquipTargetInfo;
  v44 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v135.fields.currentCryptoKey = v44;
  *(_QWORD *)&v135.fields.fakeValue = v43;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v135, 0LL) < 1 )
  {
LABEL_41:
    v66 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v66 = (_QWORD *)sub_1B761D8();
    v67 = (System_Reflection_MethodBase_o *)sub_1B761A4(v66, v66[4]);
    OverwriteAssetSoundName__PlaySystemSe(v67, 2, 0LL);
    goto LABEL_44;
  }
  v45 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v45 = (_QWORD *)sub_1B761D8();
  v46 = (System_Reflection_MethodBase_o *)sub_1B761A4(v45, v45[4]);
  OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
  if ( v39->fields.kind == 9 )
    v48 = 14;
  else
    v48 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v42, v48, v47);
}


void __fastcall BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A2943A & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo);
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A2943A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_1B7641C(v9, v10);
  CommonUI__OpenServantStatusDialog_30431468((CommonUI_o *)Instance, 5, servantLeaderInfo, v8, 0LL);
}


void __fastcall BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A29436 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo);
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A29436 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B7641C(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30434564((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  v4 = this;
  if ( (byte_4A29447 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, result);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    this = (BlacklistRootComponent_o *)sub_1B761C0(&StringLiteral_22216/*"ok"*/, v6);
    byte_4A29447 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_61543376(result, (System_String_o *)StringLiteral_22216/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v7);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_1B7641C(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v9, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A2944A & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4A2944A = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1B7641C(v6, v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v5, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  v4 = this;
  if ( (byte_4A29448 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, result);
    sub_1B761C0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BlacklistRootComponent_o *)sub_1B761C0(&StringLiteral_22216/*"ok"*/, v7);
    byte_4A29448 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_61543376(result, (System_String_o *)StringLiteral_22216/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B7641C(this, result);
  CommonUI__CloseConfirmDialog_30419608((CommonUI_o *)Instance, v10, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A29449 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4A29449 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1B7641C(v6, v7);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v5, 0LL);
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

  if ( (byte_4A2944B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6937/*"GO_NEXT"*/, method);
    byte_4A2944B = 1;
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
    sub_1B7641C(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6937/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
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
  struct System_Collections_Generic_List_long__o *friendOfferList; // x8
  int v18; // w9
  Il2CppObject *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  System_Collections_ICollection_c **v24; // x10
  __int64 v25; // x0
  int v26; // w0
  unsigned int v27; // w22
  __int64 v28; // x8
  System_Collections_Generic_List_long__o *v29; // x23
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  BlacklistRootComponent_o *v36; // x0
  System_String_o *v37; // x1
  const MethodInfo *v38; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = result;
  v4 = this;
  if ( (byte_4A29446 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1B761C0(&System_Collections_ICollection_TypeInfo, v6);
    sub_1B761C0(&System_Collections_IList_TypeInfo, v7);
    sub_1B761C0(&long_TypeInfo, v8);
    sub_1B761C0(&JsonManager_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v12);
    sub_1B761C0(&StringLiteral_6937/*"GO_NEXT"*/, v13);
    this = (BlacklistRootComponent_o *)sub_1B761C0(&StringLiteral_19637/*"friendOfferList"*/, v14);
    byte_4A29446 = 1;
  }
  value = 0LL;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_61543376(v3, (System_String_o *)StringLiteral_22046/*"ng"*/, 0LL) )
    goto LABEL_35;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0LL);
  if ( !this )
    goto LABEL_37;
  v16 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_19637/*"friendOfferList"*/,
          (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                             (Il2CppObject *)StringLiteral_19637/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v15);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6937/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_37:
    sub_1B7641C(this, result);
  }
  friendOfferList = v4->fields.friendOfferList;
  if ( !friendOfferList )
    goto LABEL_37;
  v18 = friendOfferList->fields._version + 1;
  friendOfferList->fields._size = 0;
  friendOfferList->fields._version = v18;
  v19 = value;
  if ( !value )
    goto LABEL_37;
  v20 = sub_1B762FC(value, System_Collections_IList_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (System_Collections_ICollection_c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_ICollection_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_17;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_17:
      v25 = sub_1BC81A0(v20, System_Collections_ICollection_TypeInfo, 1LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
    if ( v26 >= 1 )
    {
      v19 = (Il2CppObject *)(unsigned int)v26;
      v27 = 0;
      while ( 1 )
      {
        v28 = *(_QWORD *)v22;
        v29 = v4->fields.friendOfferList;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v31 - 1) != System_Collections_IList_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_25;
          }
          v32 = v28 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_25:
          v32 = sub_1BC81A0(v22, System_Collections_IList_TypeInfo, 0LL);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v32)(
                                             v22,
                                             v27,
                                             *(_QWORD *)(v32 + 8));
        if ( !v29 || !this )
          goto LABEL_37;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        this = (BlacklistRootComponent_o *)j_il2cpp_object_unbox_0();
        result = (System_String_o *)this->klass;
        items = v29->fields._items;
        v34 = Method_System_Collections_Generic_List_long__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v29,
            (int64_t)result,
            *(const MethodInfo_34BF608 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        if ( ++v27 == (_DWORD)v19 )
          goto LABEL_35;
      }
      sub_1B766DC(this);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v36 = (BlacklistRootComponent_o *)sub_1B766DC(v19);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v36, v37, v38);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *blackListObj; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v6; // x9

  if ( (byte_4A29444 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6937/*"GO_NEXT"*/, method);
    sub_1B761C0(&StringLiteral_7150/*"HIDE_END"*/, v3);
    byte_4A29444 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B7641C(blackListObj, method);
  }
  v6 = &StringLiteral_6937/*"GO_NEXT"*/;
  if ( ((unsigned __int8)blackListObj & 1) == 0 )
    v6 = &StringLiteral_7150/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A29445 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6937/*"GO_NEXT"*/, method);
    byte_4A29445 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B7641C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6937/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A29441 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A29441 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !v8 )
    sub_1B7641C(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v17; // x19

  v2 = this;
  if ( (byte_4A29434 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method);
    sub_1B761C0(&LocalizationManager_TypeInfo, v3);
    sub_1B761C0(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v4);
    sub_1B761C0(&NetworkManager_TypeInfo, v5);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_3039/*"BLACKLIST_HELP_TEXT"*/, v7);
    this = (BlacklistRootComponent_o *)sub_1B761C0(&StringLiteral_6937/*"GO_NEXT"*/, v8);
    byte_4A29434 = 1;
  }
  blackListObj = v2->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_21;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = v2->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_21;
  v12 = UnityEngine_GameObject__get_activeSelf(v2->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v12, 0LL);
  helpLabel = v2->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3039/*"BLACKLIST_HELP_TEXT"*/, 0LL);
  if ( !helpLabel )
    goto LABEL_21;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0LL);
  gameOptionComp = v2->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_21;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  this = (BlacklistRootComponent_o *)v2->fields.blackListObj;
  if ( !this )
    goto LABEL_21;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0LL);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v15,
                                           (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v17 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 52, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v17 )
        {
          RequestBase__beginRequest(v17, 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1B7641C(this, method);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_21;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_21;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 46, 1, 0, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.myRoomFsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6937/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A2943E & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_clickBlacklistTabButton__, method);
    byte_4A2943E = 1;
  }
  v3 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B761D8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void __fastcall BlacklistRootComponent__clickFriendHistoryTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A2943D & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__, method);
    byte_4A2943D = 1;
  }
  v3 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B761D8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  BlacklistRootComponent__modeChange(this, 0, v5);
}


void __fastcall BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A29432 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A29432 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !v8 )
    sub_1B7641C(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A29433 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A29433 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !v8 )
    sub_1B7641C(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  int32_t listMode; // w8
  UILabel_o *v17; // x20
  FriendOperationItemListViewManager_o *v18; // x20
  System_Action_o *v19; // x21
  __int64 *v20; // x8
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v22; // x20
  System_Action_o *v23; // x21

  if ( (byte_4A2943F & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_BlacklistRootComponent_onMoveEnd__, v5);
    sub_1B761C0(&LocalizationManager_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_17598/*"btn_txt_requestlist_off"*/, v7);
    sub_1B761C0(&StringLiteral_17468/*"btn_bg_08"*/, v8);
    sub_1B761C0(&StringLiteral_17550/*"btn_txt_blacklist_off"*/, v9);
    sub_1B761C0(&StringLiteral_17469/*"btn_bg_09"*/, v10);
    sub_1B761C0(&StringLiteral_3036/*"BLACKLIST_EXPLANATION_1"*/, v11);
    sub_1B761C0(&StringLiteral_17599/*"btn_txt_requestlist_on"*/, v12);
    sub_1B761C0(&StringLiteral_17551/*"btn_txt_blacklist_on"*/, v13);
    sub_1B761C0(&StringLiteral_3037/*"BLACKLIST_EXPLANATION_2"*/, v14);
    byte_4A2943F = 1;
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3037/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v22 = this->fields.friendOperationItemListViewManager;
                  v23 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                  System_Action___ctor(v23, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v22 )
                  {
                    FriendOperationItemListViewManager__SetMode_30733296(v22, 1, v23, 0LL);
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
                              (System_String_o *)StringLiteral_17598/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17468/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17551/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_17469/*"btn_bg_09"*/;
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
    sub_1B7641C(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
            v17 = this->fields.listExplanationLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3036/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0LL);
            if ( v17 )
            {
              UILabel__set_text(v17, (System_String_o *)friendOperationItemListViewManager, 0LL);
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
                  v18 = this->fields.friendOperationItemListViewManager;
                  v19 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                  System_Action___ctor(v19, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v18 )
                  {
                    FriendOperationItemListViewManager__SetMode_30733296(v18, 1, v19, 0LL);
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
                              (System_String_o *)StringLiteral_17599/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17469/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17550/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_17468/*"btn_bg_08"*/;
LABEL_42:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v20,
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
  __int64 v3; // x1
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  ListViewManager_o *v7; // x0
  int32_t ItemSum; // w20

  if ( (byte_4A29435 & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&BlacklistRootComponent_TypeInfo, v3);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_4A29435 = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_11;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v6, 0LL);
  }
  v7 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v7 )
    goto LABEL_11;
  ItemSum = ListViewManager__get_ItemSum(v7, 0LL);
  if ( !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  v7 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v7 )
LABEL_11:
    sub_1B7641C(v7, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v7,
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
  void *Instance; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A29440 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v4);
    sub_1B761C0(&int_TypeInfo, v5);
    sub_1B761C0(&LocalizationManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B761C0(&StringLiteral_6534/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_4A29440 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  v11 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  registCntLabel = this->fields.registCntLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6534/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v11 )
    goto LABEL_12;
  v13 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            v11,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Count, v14, v15, v16);
  v21 = BalanceConfig_TypeInfo;
  v22 = (Il2CppObject *)v17;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v21->static_fields->MaxBlackListNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum, v18, v19, v20);
  Instance = System_String__Format_61549432(v13, v22, v23, 0LL);
  if ( !registCntLabel )
LABEL_12:
    sub_1B7641C(Instance, v10);
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
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v12; // x20

  if ( (byte_4A2944C & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v5);
    sub_1B761C0(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v6);
    byte_4A2944C = 1;
  }
  v7 = sub_1B7640C(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        v8 = sub_1B76164(v7 + 24),
        *(_BYTE *)(v7 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v12 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_1B7641C(v8, v9);
  }
  CommonConfirmDialog__Close_30396908(blackListRegistDlg, v12, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v11; // x8
  Il2CppObject *v12; // x20
  FriendOperationItemListViewManager_o *monitor; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21

  v2 = this;
  if ( (byte_4A2944D & 1) == 0 )
  {
    sub_1B761C0(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1B761C0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v3);
    sub_1B761C0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B761C0(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_1B761C0(
                                                               &NetworkManager_ResultCallbackFunc_TypeInfo,
                                                               v7);
    byte_4A2944D = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  if ( v2->fields.isDecide )
  {
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                               v10,
                                                               (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v11 = v2->fields.CS___8__locals1;
    if ( v11 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v11->fields.otherUserId, 0LL);
      return;
    }
LABEL_13:
    sub_1B7641C(this, method);
  }
  v12 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v12 )
    goto LABEL_13;
  monitor = (FriendOperationItemListViewManager_o *)v12[3].monitor;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B7640C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v14,
    v12,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !monitor )
    goto LABEL_13;
  FriendOperationItemListViewManager__SetMode(monitor, 2, v14, 0LL);
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
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v16; // x21
  CommonUI_o *v17; // x19
  System_Action_o *v18; // x20

  if ( (byte_4A2944E & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v5);
    sub_1B761C0(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v6);
    sub_1B761C0(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v7);
    sub_1B761C0(&NetworkManager_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A2944E = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_10:
    sub_1B7641C(Request_object, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (Il2CppObject *)this->fields.__4__this;
  v17 = (CommonUI_o *)Instance;
  v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v18, v16, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v17 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_30419608(v17, v18, 0LL);
}