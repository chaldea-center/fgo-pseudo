void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B174A8 & 1) == 0 )
  {
    sub_1BCAFF8(&BlacklistRootComponent_TypeInfo, v1);
    byte_4B174A8 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *v4; // x20

  if ( (byte_4B174A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v3);
    byte_4B174A7 = 1;
  }
  v4 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v4;
  sub_1BCAF9C(&this->fields.friendOfferList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B174A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B174A1 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCB254(v6, v7);
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

  if ( (byte_4B1749D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B1749D = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCB254(v6, v7);
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

  if ( (byte_4B174A0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_BlacklistRootComponent_EndCloseShowServant__, v4);
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, v5);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B174A0 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v9, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BCB254(v10, v11);
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

  if ( (byte_4B1749C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B1749C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
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
  __int64 v38; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v40; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v43; // x21
  __int64 v44; // x22
  __int64 v45; // x23
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  __int64 v52; // x8
  __int64 v53; // x20
  __int64 v54; // x2
  SkillInfo_o *v55; // x22
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  System_String_o *v58; // x20
  System_String_o *v59; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x1
  System_String_o *v66; // x3
  System_String_o *v67; // x2
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  FriendOperationItemListViewManager_o *v70; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v71; // x21
  FriendOperationItemListViewItem_o *v72; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v74; // x20
  SkillInfo_o *v75; // x23
  Il2CppObject *Entity; // x21
  FriendOperationItemListViewManager_o *v77; // x20
  System_String_o *v78; // x21
  System_String_o *v79; // x22
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_String_o *v88; // x21
  Il2CppObject *v89; // x0
  System_String_o *v90; // x20
  FriendOperationItemListViewManager_o *v91; // x8
  struct ListViewItemSeed_o *v92; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v94; // x2
  Il2CppObject *v95; // x20
  int32_t Count; // w21
  BalanceConfig_c *v97; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x21
  System_String_o *v99; // x22
  bool v100; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *klass; // x21
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  CommonConfirmDialog_ClickDelegate_o *v105; // x24
  const MethodInfo *v106; // x7
  Il2CppObject *v107; // x20
  struct UnityEngine_GameObject_o *v108; // x19
  Il2CppObject *v109; // x0
  System_String_o *v110; // x21
  CommonUI_o *v111; // x19
  System_String_o *v112; // x0
  System_String_o *v113; // x21
  CommonConfirmDialog_ClickDelegate_o *v114; // x22
  System_String_o *v115; // x20
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  __int64 v119; // x0
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  BalanceConfig_c *v123; // x8
  Il2CppObject *v124; // x21
  Il2CppObject *v125; // x0
  System_String_o *v126; // x20
  Il2CppObject *Instance; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-90h]
  int32_t m_CancellationTokenSource; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+24h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+30h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-58h] BYREF
  System_String_o *v134; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *v135; // [xsp+48h] [xbp-48h] BYREF
  SkillInfo_array *v136; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  v5 = kind;
  if ( (byte_4B1749E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__, v17);
    sub_1BCAFF8(&int_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Contains__, v19);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BCAFF8(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v24);
    sub_1BCAFF8(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_1BCAFF8(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v26);
    sub_1BCAFF8(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v27);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v28);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v29);
    sub_1BCAFF8(&StringLiteral_2922/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v30);
    sub_1BCAFF8(&StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, v31);
    sub_1BCAFF8(&StringLiteral_2919/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v32);
    sub_1BCAFF8(&StringLiteral_2921/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v33);
    sub_1BCAFF8(&StringLiteral_2920/*"BLACKLIST_REGIST_MAX_TITLE"*/, v34);
    sub_1BCAFF8(&StringLiteral_2918/*"BLACKLIST_REGIST_CANCEL"*/, v35);
    sub_1BCAFF8(&StringLiteral_2855/*"BATTLE_SKILLCHARGETURN"*/, v36);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v37);
    sub_1BCAFF8(&StringLiteral_2923/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v38);
    byte_4B1749E = 1;
  }
  v136 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v5 != 12 )
  {
    v50 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v51 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v50, v50[4]);
    OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0LL);
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
        v72 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                v72->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.parent,
                0,
                0LL) )
          break;
        if ( v5 == 2 )
          v74 = 1LL;
        else
          v74 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v72,
                                                                                       &v136,
                                                                                       0LL);
        if ( !v136 )
          goto LABEL_110;
        if ( (unsigned int)v74 >= v136->max_length )
LABEL_111:
          sub_1BCB25C(friendOperationItemListViewManager, *(_QWORD *)&kind, v54);
        v75 = v136->m_Items[v74];
        if ( !v75 || v75->fields.id < 1 || v75->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                   v75->fields.id,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v75->fields.id,
                                                                                       v75->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_110;
        v77 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v135, &v134, v75->fields.lv, 0LL);
        v78 = v135;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v75->fields.lv;
        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v80, v81, v82);
        v84 = System_String__Format(v79, v83, 0LL);
        v135 = System_String__Concat_62488672(v78, (System_String_o *)StringLiteral_113/*" "*/, v84, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2855/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v77 )
          goto LABEL_110;
        v88 = (System_String_o *)friendOperationItemListViewManager;
        m_CancellationTokenSource = (int32_t)v77->fields.m_CancellationTokenSource;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v85, v86, v87);
        v90 = System_String__Format(v88, v89, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v66 = v134;
        v65 = v135;
        v67 = v90;
LABEL_71:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v65, v67, v66, 1, 0, 0LL);
        break;
      case 9:
        v95 = (Il2CppObject *)sub_1BCB244(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        System_Object___ctor(v95, 0LL);
        if ( !v95 )
          goto LABEL_110;
        v95[1].monitor = this;
        sub_1BCAF9C(&v95[1].monitor);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
        v97 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v97 = BalanceConfig_TypeInfo;
        }
        if ( Count < v97->static_fields->MaxBlackListNum )
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
                v95[1].klass = *(Il2CppClass **)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v99 = (System_String_o *)StringLiteral_2921/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v100 = System_Collections_Generic_List_long___Contains(
                           (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                           *(int64_t *)&kind,
                           (const MethodInfo_36A1F7C *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  klass = (System_String_o *)dragParentObject[1].klass;
                  if ( v100 )
                    v99 = (System_String_o *)StringLiteral_2922/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v103 = LocalizationManager__Get(v99, 0LL);
                  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v105 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v105,
                    v95,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, klass, v103, v104, v105, 0, 0, v106);
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
        v115 = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v119 = j_il2cpp_value_box_0(int_TypeInfo, &lv, v116, v117, v118);
        v123 = BalanceConfig_TypeInfo;
        v124 = (Il2CppObject *)v119;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v123 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v123->static_fields->MaxBlackListNum;
        v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v120, v121, v122);
        v126 = System_String__Format_62491716(v115, v124, v125, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2920/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_110;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0LL;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v126,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v107 = (Il2CppObject *)sub_1BCB244(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        System_Object___ctor(v107, 0LL);
        if ( !v107 )
          goto LABEL_110;
        v107[1].monitor = this;
        sub_1BCAF9C(&v107[1].monitor);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v108 = friendOperationItemListViewManager->fields.dragParentObject;
        if ( !v108 )
          goto LABEL_110;
        v107[1].klass = *(Il2CppClass **)&v108->fields.m_CachedPtr;
        v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v110 = (System_String_o *)v108[1].klass;
        v111 = (CommonUI_o *)v109;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v112 = LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v113 = System_String__Concat_62488672(v110, (System_String_o *)StringLiteral_43/*"\n"*/, v112, 0LL);
        v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v114,
          v107,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v111 )
          goto LABEL_110;
        CommonUI__OpenConfirmDialog_30763752(v111, (System_String_o *)StringLiteral_1/*""*/, v113, 1, v114, 0, 0, 0, 0, 0LL);
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
        v52 = (unsigned int)(v5 - 14);
        v53 = (unsigned int)v52 < 4 ? v52 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_110;
        if ( (unsigned int)v53 >= skillInfoList->max_length )
          goto LABEL_111;
        v55 = skillInfoList->m_Items[v53];
        if ( !v55 || v55->fields.id < 1 || v55->fields.lv < 1 )
          goto LABEL_41;
        v56 = Method_BlacklistRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v56 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_OnSelectFriendItem__);
        v57 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v56, v56[4]);
        OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                       v55->fields.id,
                                                                                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)friendOperationItemListViewManager,
          &name,
          &detail,
          v55->fields.lv,
          0LL);
        v58 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v55->fields.lv;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v60, v61, v62);
        v64 = System_String__Format(v59, v63, 0LL);
        name = System_String__Concat_62488672(v58, (System_String_o *)StringLiteral_113/*" "*/, v64, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v66 = detail;
        v65 = name;
        v67 = (System_String_o *)StringLiteral_1/*""*/;
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
        v91 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dragParentObject;
        if ( !friendOperationItemListViewManager )
          goto LABEL_110;
        v92 = friendOperationItemListViewManager->fields.seed;
        if ( !v92 )
          goto LABEL_110;
        if ( !LODWORD(v92->fields.m_CancellationTokenSource) )
          goto LABEL_111;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              LODWORD(v91->fields.topFocusOffset),
                              0,
                              0,
                              (int32_t)v92->fields.parent,
                              0,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v94);
        return;
    }
LABEL_44:
    v70 = this->fields.friendOperationItemListViewManager;
    v71 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v71,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v70 )
    {
      FriendOperationItemListViewManager__SetMode(v70, 2, v71, 0LL);
      return;
    }
LABEL_110:
    sub_1BCB254(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
  v40 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_41;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v40, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_41;
  v43 = EquipTargetInfo;
  v45 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = v45;
  *(_QWORD *)&v137.fields.fakeValue = v44;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v137, 0LL) < 1 )
  {
LABEL_41:
    v68 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v68 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v69 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v68, v68[4]);
    OverwriteAssetSoundName__PlaySystemSe(v69, 2, 0, 0LL);
    goto LABEL_44;
  }
  v46 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_OnSelectFriendItem__);
  v47 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v46, v46[4]);
  OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0LL);
  if ( v40->fields.kind == 9 )
    v49 = 14;
  else
    v49 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v43, v49, v48);
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

  if ( (byte_4B1749F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B1749F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_1BCB254(v9, v10);
  CommonUI__OpenServantStatusDialog_30776144((CommonUI_o *)Instance, 5, servantLeaderInfo, v8, 0LL);
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

  if ( (byte_4B1749B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B1749B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BCB254(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30779252((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  if ( (byte_4B174AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, result);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    this = (BlacklistRootComponent_o *)sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v6);
    byte_4B174AC = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_62485728(result, (System_String_o *)StringLiteral_22181/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v7);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_1BCB254(this, result);
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

  if ( (byte_4B174AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B174AF = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCB254(v6, v7);
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
  if ( (byte_4B174AD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, result);
    sub_1BCAFF8(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BlacklistRootComponent_o *)sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v7);
    byte_4B174AD = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_62485728(result, (System_String_o *)StringLiteral_22181/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCB254(this, result);
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v10, 0LL);
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

  if ( (byte_4B174AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B174AE = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_1BCB254(v6, v7);
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

  if ( (byte_4B174B0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, method);
    byte_4B174B0 = 1;
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
    sub_1BCB254(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL);
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
  if ( (byte_4B174AB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1BCAFF8(&System_Collections_ICollection_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_IList_TypeInfo, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    sub_1BCAFF8(&JsonManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v12);
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, v13);
    this = (BlacklistRootComponent_o *)sub_1BCAFF8(&StringLiteral_19505/*"friendOfferList"*/, v14);
    byte_4B174AB = 1;
  }
  value = 0LL;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_62485728(v3, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
    goto LABEL_35;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0LL);
  if ( !this )
    goto LABEL_37;
  v16 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_19505/*"friendOfferList"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                             (Il2CppObject *)StringLiteral_19505/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v15);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_37:
    sub_1BCB254(this, result);
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
  v20 = sub_1BCB134(value, System_Collections_IList_TypeInfo);
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
      v25 = sub_1C1B560(v20, System_Collections_ICollection_TypeInfo, 1LL);
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
          v32 = sub_1C1B560(v22, System_Collections_IList_TypeInfo, 0LL);
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
            *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        if ( ++v27 == (_DWORD)v19 )
          goto LABEL_35;
      }
      sub_1BCB514(this);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v36 = (BlacklistRootComponent_o *)sub_1BCB514(v19);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v36, v37, v38);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *blackListObj; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v6; // x9

  if ( (byte_4B174A9 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, method);
    sub_1BCAFF8(&StringLiteral_7184/*"HIDE_END"*/, v3);
    byte_4B174A9 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCB254(blackListObj, method);
  }
  v6 = &StringLiteral_6926/*"GO_NEXT"*/;
  if ( ((unsigned __int8)blackListObj & 1) == 0 )
    v6 = &StringLiteral_7184/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B174AA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, method);
    byte_4B174AA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCB254(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL);
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

  if ( (byte_4B174A6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B174A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !v8 )
    sub_1BCB254(v11, v12);
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
  if ( (byte_4B17499 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_2917/*"BLACKLIST_HELP_TEXT"*/, v7);
    this = (BlacklistRootComponent_o *)sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, v8);
    byte_4B17499 = 1;
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
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BLACKLIST_HELP_TEXT"*/, 0LL);
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
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v15,
                                           (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v17 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 55, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v17 )
        {
          RequestBase__beginRequest(v17, 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1BCB254(this, method);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_21;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_21;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 49, 1, 0, 0LL);
  this = (BlacklistRootComponent_o *)v2->fields.myRoomFsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B174A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_clickBlacklistTabButton__, method);
    byte_4B174A3 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_clickBlacklistTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void __fastcall BlacklistRootComponent__clickFriendHistoryTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B174A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__, method);
    byte_4B174A2 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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

  if ( (byte_4B17497 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B17497 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !v8 )
    sub_1BCB254(v11, v12);
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

  if ( (byte_4B17498 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B17498 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !v8 )
    sub_1BCB254(v11, v12);
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

  if ( (byte_4B174A4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_BlacklistRootComponent_onMoveEnd__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_17447/*"btn_txt_requestlist_off"*/, v7);
    sub_1BCAFF8(&StringLiteral_17302/*"btn_bg_08"*/, v8);
    sub_1BCAFF8(&StringLiteral_17399/*"btn_txt_blacklist_off"*/, v9);
    sub_1BCAFF8(&StringLiteral_17303/*"btn_bg_09"*/, v10);
    sub_1BCAFF8(&StringLiteral_2914/*"BLACKLIST_EXPLANATION_1"*/, v11);
    sub_1BCAFF8(&StringLiteral_17448/*"btn_txt_requestlist_on"*/, v12);
    sub_1BCAFF8(&StringLiteral_17400/*"btn_txt_blacklist_on"*/, v13);
    sub_1BCAFF8(&StringLiteral_2915/*"BLACKLIST_EXPLANATION_2"*/, v14);
    byte_4B174A4 = 1;
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
                                                                                           (System_String_o *)StringLiteral_2915/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(v23, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v22 )
                  {
                    FriendOperationItemListViewManager__SetMode_32067700(v22, 1, v23, 0LL);
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
                              (System_String_o *)StringLiteral_17447/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17302/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17400/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_17303/*"btn_bg_09"*/;
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
    sub_1BCB254(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
                                                                                           (System_String_o *)StringLiteral_2914/*"BLACKLIST_EXPLANATION_1"*/,
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
                  v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(v19, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v18 )
                  {
                    FriendOperationItemListViewManager__SetMode_32067700(v18, 1, v19, 0LL);
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
                              (System_String_o *)StringLiteral_17448/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17303/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17399/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_17302/*"btn_bg_08"*/;
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

  if ( (byte_4B1749A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&BlacklistRootComponent_TypeInfo, v3);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_4B1749A = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(v7, method);
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
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BalanceConfig_c *v22; // x8
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B174A5 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__, v5);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, v9);
    byte_4B174A5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  registCntLabel = this->fields.registCntLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !datalist )
    goto LABEL_12;
  v14 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            datalist,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &Count, v15, v16, v17);
  v22 = BalanceConfig_TypeInfo;
  v23 = (Il2CppObject *)v18;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v22->static_fields->MaxBlackListNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum, v19, v20, v21);
  Instance = (DataManager_o *)System_String__Format_62491716(v14, v23, v24, 0LL);
  if ( !registCntLabel )
LABEL_12:
    sub_1BCB254(Instance, v11);
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

  if ( (byte_4B174B1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v5);
    sub_1BCAFF8(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v6);
    byte_4B174B1 = 1;
  }
  v7 = sub_1BCB244(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        v8 = sub_1BCAF9C(v7 + 24),
        *(_BYTE *)(v7 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_1BCB254(v8, v9);
  }
  CommonConfirmDialog__Close_30740152(blackListRegistDlg, v12, 0LL);
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
  if ( (byte_4B174B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_1BCAFF8(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v3);
    sub_1BCAFF8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_1BCAFF8(
                                                               &NetworkManager_ResultCallbackFunc_TypeInfo,
                                                               v7);
    byte_4B174B2 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  if ( v2->fields.isDecide )
  {
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                               v10,
                                                               (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v11 = v2->fields.CS___8__locals1;
    if ( v11 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v11->fields.otherUserId, 0LL);
      return;
    }
LABEL_13:
    sub_1BCB254(this, method);
  }
  v12 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v12 )
    goto LABEL_13;
  monitor = (FriendOperationItemListViewManager_o *)v12[3].monitor;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCB244(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4B174B3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v5);
    sub_1BCAFF8(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v6);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B174B3 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(Request_object, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (Il2CppObject *)this->fields.__4__this;
  v17 = (CommonUI_o *)Instance;
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v18, v16, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v17 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_30764080(v17, v18, 0LL);
}