void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187603 & 1) == 0 )
  {
    sub_B2C35C(&BlacklistRootComponent_TypeInfo, v1);
    byte_4187603 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187602 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v3);
    byte_4187602 = 1;
  }
  v4 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendOfferList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41875FC & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_41875FC = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B2C434(v6, v7);
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

  if ( (byte_41875F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_41875F8 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B2C434(v6, v7);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21

  if ( (byte_41875FB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_BlacklistRootComponent_EndCloseShowServant__, v4);
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, v5);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_41875FB = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v9, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B2C434(v10, v11);
  }
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41875F7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41875F7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantEquipStatusDialog(Instance, v7, 0LL);
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
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  __int64 v48; // x8
  __int64 v49; // x20
  SkillInfo_o *v50; // x22
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  System_String_o *v53; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x1
  System_String_o *v58; // x3
  System_String_o *v59; // x2
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  FriendOperationItemListViewItem_o *v62; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v64; // x20
  SkillInfo_o *v65; // x23
  SkillEntity_o *Entity; // x21
  FriendOperationItemListViewManager_o *v67; // x20
  System_String_o *v68; // x21
  System_String_o *v69; // x22
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x21
  Il2CppObject *v73; // x0
  System_String_o *v74; // x20
  FriendOperationItemListViewManager_o *v75; // x8
  struct ListViewItemSeed_o *v76; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v78; // x2
  __int64 v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int32_t Count; // w21
  BalanceConfig_c *v87; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v89; // x22
  bool v90; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v92; // x21
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  CommonConfirmDialog_ClickDelegate_o *v95; // x24
  const MethodInfo *v96; // x7
  __int64 v97; // x20
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v104; // x19
  WebViewManager_o *v105; // x0
  System_String_o *v106; // x21
  CommonUI_o *v107; // x19
  System_String_o *v108; // x0
  System_String_o *v109; // x21
  CommonConfirmDialog_ClickDelegate_o *v110; // x22
  System_String_o *v111; // x20
  __int64 v112; // x0
  BalanceConfig_c *v113; // x8
  Il2CppObject *v114; // x21
  Il2CppObject *v115; // x0
  System_String_o *v116; // x20
  CommonUI_o *Instance; // x21
  FriendOperationItemListViewManager_o *v118; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v119; // x21
  __int64 v120; // x0
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-80h]
  int32_t dropObjectList; // [xsp+18h] [xbp-68h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *v127; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *v128; // [xsp+40h] [xbp-40h] BYREF
  SkillInfo_array *v129; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  v5 = kind;
  if ( (byte_41875F9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_B2C35C(&int_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B2C35C(&SoundManager_TypeInfo, v23);
    sub_B2C35C(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v24);
    sub_B2C35C(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_B2C35C(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v26);
    sub_B2C35C(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v28);
    sub_B2C35C(&StringLiteral_80/*" "*/, v29);
    sub_B2C35C(&StringLiteral_2576/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v30);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v31);
    sub_B2C35C(&StringLiteral_2573/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_2575/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v33);
    sub_B2C35C(&StringLiteral_2574/*"BLACKLIST_REGIST_MAX_TITLE"*/, v34);
    sub_B2C35C(&StringLiteral_2572/*"BLACKLIST_REGIST_CANCEL"*/, v35);
    sub_B2C35C(&StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, v36);
    sub_B2C35C(&StringLiteral_1/*""*/, v37);
    sub_B2C35C(&StringLiteral_2577/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v38);
    byte_41875F9 = 1;
  }
  v129 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
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
        v62 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                v62->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.prefab,
                0LL) )
          break;
        if ( v5 == 2 )
          v64 = 1LL;
        else
          v64 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v62,
                                                                                       &v129,
                                                                                       0LL);
        if ( !v129 )
          goto LABEL_125;
        if ( (unsigned int)v64 >= v129->max_length )
        {
LABEL_126:
          v120 = sub_B2C460(friendOperationItemListViewManager);
          sub_B2C400(v120, 0LL);
        }
        v65 = v129->m_Items[v64];
        if ( !v65 || v65->fields.id < 1 || v65->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                    v65->fields.id,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v65->fields.id,
                                                                                       v65->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_125;
        v67 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v128, &v127, v65->fields.lv, 0LL);
        v68 = v128;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v65->fields.lv;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v71 = System_String__Format(v69, v70, 0LL);
        v128 = System_String__Concat_44307816(v68, (System_String_o *)StringLiteral_80/*" "*/, v71, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v67 )
          goto LABEL_125;
        v72 = (System_String_o *)friendOperationItemListViewManager;
        dropObjectList = (int32_t)v67->fields.dropObjectList;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v74 = System_String__Format(v72, v73, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v58 = v127;
        v57 = v128;
        v59 = v74;
        goto LABEL_78;
      case 9:
        v79 = sub_B2C42C(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_0___ctor((BlacklistRootComponent___c__DisplayClass31_0_o *)v79, 0LL);
        if ( !v79 )
          goto LABEL_125;
        *(_QWORD *)(v79 + 24) = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v79 + 24),
          (System_Int32_array **)this,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)friendOperationItemListViewManager,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v87 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v87 = BalanceConfig_TypeInfo;
        }
        if ( Count < v87->static_fields->MaxBlackListNum )
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
                *(_QWORD *)(v79 + 16) = *(_QWORD *)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v89 = (System_String_o *)StringLiteral_2575/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v90 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          *(int64_t *)&kind,
                          (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v92 = *(System_String_o **)&dropList->fields._size;
                  if ( v90 )
                    v89 = (System_String_o *)StringLiteral_2576/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v93 = LocalizationManager__Get(v89, 0LL);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_2577/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v95,
                    (Il2CppObject *)v79,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v92, v93, v94, v95, 0, 0, v96);
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
        v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2573/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v112 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v113 = BalanceConfig_TypeInfo;
        v114 = (Il2CppObject *)v112;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v113 = BalanceConfig_TypeInfo;
        }
        dropObjectList = v113->static_fields->MaxBlackListNum;
        v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v116 = System_String__Format_44301068(v111, v114, v115, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2574/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_125;
        setCondensedScale.fields.value = 0LL;
        *(_DWORD *)&setCondensedScale.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v116,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v97 = sub_B2C42C(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_2___ctor((BlacklistRootComponent___c__DisplayClass31_2_o *)v97, 0LL);
        if ( !v97 )
          goto LABEL_125;
        *(_QWORD *)(v97 + 24) = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v97 + 24),
          (System_Int32_array **)this,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v104 = friendOperationItemListViewManager->fields.dropList;
        if ( !v104 )
          goto LABEL_125;
        *(_QWORD *)(v97 + 16) = v104->fields._items;
        v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v106 = *(System_String_o **)&v104->fields._size;
        v107 = (CommonUI_o *)v105;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v109 = System_String__Concat_44307816(v106, (System_String_o *)StringLiteral_26/*"\n"*/, v108, 0LL);
        v110 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v110,
          (Il2CppObject *)v97,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v107 )
          goto LABEL_125;
        CommonUI__OpenConfirmDialog_17971164(v107, (System_String_o *)StringLiteral_1/*""*/, v109, 1, v110, 0, 0, 0, 0, 0LL);
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
        v48 = (unsigned int)(v5 - 14);
        v49 = (unsigned int)v48 < 4 ? v48 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_125;
        if ( (unsigned int)v49 >= skillInfoList->max_length )
          goto LABEL_126;
        v50 = skillInfoList->m_Items[v49];
        if ( v50 && v50->fields.id >= 1 && v50->fields.lv >= 1 )
        {
          v51 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v51 = (_QWORD *)sub_B2C364(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v52 = (System_Reflection_MethodBase_o *)sub_B2C340(v51, v51[3]);
          OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                                                                         v50->fields.id,
                                                                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
            &name,
            &detail,
            v50->fields.lv,
            0LL);
          v53 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          lv = v50->fields.lv;
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
          v56 = System_String__Format(v54, v55, 0LL);
          name = System_String__Concat_44307816(v53, (System_String_o *)StringLiteral_80/*" "*/, v56, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          v58 = detail;
          v57 = name;
          v59 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_78:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v57, v59, v58, 1, 0, 0LL);
        }
        else
        {
          v60 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v60 = (_QWORD *)sub_B2C364(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v61 = (System_Reflection_MethodBase_o *)sub_B2C340(v60, v60[3]);
          OverwriteAssetSoundName__PlaySystemSe(v61, 2, 0LL);
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
        v75 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v76 = friendOperationItemListViewManager->fields.seed;
        if ( !v76 )
          goto LABEL_125;
        if ( !LODWORD(v76->fields.parent) )
          goto LABEL_126;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              (int32_t)v75->fields.SortObject,
                              0,
                              0,
                              (int32_t)v76->fields.prefab,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v78);
        return;
    }
LABEL_122:
    v118 = this->fields.friendOperationItemListViewManager;
    v119 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v119,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v118 )
    {
      FriendOperationItemListViewManager__SetMode(v118, 2, v119, 0LL);
      return;
    }
LABEL_125:
    sub_B2C434(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
  *(_QWORD *)&v130.fields.currentCryptoKey = v45;
  *(_QWORD *)&v130.fields.fakeValue = v44;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v130, 0LL) < 1 )
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
  ServantStatusDialog_EndDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_41875FA & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_EndShowServant__, servantLeaderInfo);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41875FA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenServantStatusDialog_17984076(Instance, 5, servantLeaderInfo, v8, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_41875F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_EndShowServantEquip__, equipInfo);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_41875F6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B2C434(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_17986440(Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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
  if ( (byte_4187607 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, result);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5);
    this = (BlacklistRootComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    byte_4187607 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v7);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_B2C434(this, result);
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

  if ( (byte_418760A & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_418760A = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B2C434(v6, v7);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21

  v4 = this;
  if ( (byte_4187608 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BlacklistRootComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    byte_4187608 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v4, 1, v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(this, result);
  CommonUI__CloseConfirmDialog_17971588(Instance, v10, 0LL);
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

  if ( (byte_4187609 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4187609 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B2C434(v6, v7);
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

  if ( (byte_418760B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_418760B = 1;
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
    sub_B2C434(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
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
  __int64 v19; // x3
  __int64 v20; // x8
  __int64 v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_ICollection_c **v23; // x11
  __int64 v24; // x0
  int v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w22
  __int64 v28; // x8
  System_Collections_Generic_List_long__o *friendOfferList; // x23
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  int64_t *v33; // x0
  BlacklistRootComponent_o *v34; // x0
  System_String_o *v35; // x1
  const MethodInfo *v36; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4187606 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, result);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B2C35C(&System_Collections_ICollection_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IList_TypeInfo, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    sub_B2C35C(&JsonManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v12);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v13);
    this = (BlacklistRootComponent_o *)sub_B2C35C(&StringLiteral_18902/*"friendOfferList"*/, v14);
    byte_4187606 = 1;
  }
  value = 0LL;
  if ( !result )
    goto LABEL_34;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    goto LABEL_32;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(result, 0LL);
  if ( !this )
    goto LABEL_34;
  v16 = this;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18902/*"friendOfferList"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18902/*"friendOfferList"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
LABEL_32:
    BlacklistRootComponent__modeChange(v4, 0, v15);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_34:
    sub_B2C434(this, result);
  }
  this = (BlacklistRootComponent_o *)v4->fields.friendOfferList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  v17 = value;
  if ( !value )
    goto LABEL_34;
  v18 = sub_B2C41C(value, System_Collections_IList_TypeInfo);
  if ( v18 )
  {
    v20 = *(_QWORD *)v18;
    v21 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v22 = 0LL;
      v23 = (System_Collections_ICollection_c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v23 - 1) != System_Collections_ICollection_TypeInfo )
      {
        ++v22;
        v23 += 2;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_18;
      }
      v24 = v20 + 16LL * (*(_DWORD *)v23 + 1) + 312;
    }
    else
    {
LABEL_18:
      v24 = sub_AC5258(v18, System_Collections_ICollection_TypeInfo, 1LL, v19);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( v25 >= 1 )
    {
      v17 = (System_Xml_Schema_XmlSchemaObject_o *)(unsigned int)v25;
      v27 = 0;
      while ( 1 )
      {
        v28 = *(_QWORD *)v21;
        friendOfferList = v4->fields.friendOfferList;
        if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
        {
          v30 = 0LL;
          v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v31 - 1) != System_Collections_IList_TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
              goto LABEL_26;
          }
          v32 = v28 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_26:
          v32 = sub_AC5258(v21, System_Collections_IList_TypeInfo, 0LL, v26);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v32)(
                                             v21,
                                             v27,
                                             *(_QWORD *)(v32 + 8));
        if ( !friendOfferList || !this )
          goto LABEL_34;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        v33 = (int64_t *)j_il2cpp_object_unbox_0(this);
        System_Collections_Generic_List_long___Add(
          friendOfferList,
          *v33,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        if ( (int)++v27 >= (int)v17 )
          goto LABEL_32;
      }
      sub_B2C728(this);
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_36:
  v34 = (BlacklistRootComponent_o *)sub_B2C728(v17);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v34, v35, v36);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *blackListObj; // x0
  __int64 *v5; // x9

  if ( (byte_4187604 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    sub_B2C35C(&StringLiteral_7081/*"HIDE_END"*/, v3);
    byte_4187604 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        !this->fields.myRoomFsm) )
  {
    sub_B2C434(blackListObj, method);
  }
  if ( ((unsigned __int8)blackListObj & 1) != 0 )
    v5 = &StringLiteral_6892/*"GO_NEXT"*/;
  else
    v5 = &StringLiteral_7081/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(this->fields.myRoomFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4187605 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_4187605 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4187601 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187601 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
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
  if ( (byte_41875F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2571/*"BLACKLIST_HELP_TEXT"*/, v7);
    this = (BlacklistRootComponent_o *)sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v8);
    byte_41875F4 = 1;
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
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2571/*"BLACKLIST_HELP_TEXT"*/, 0LL);
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
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v15,
                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
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
LABEL_23:
    sub_B2C434(this, method);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_41875FE & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41875FE = 1;
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

  if ( (byte_41875FD & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41875FD = 1;
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_41875F2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41875F2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_41875F3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41875F3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
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

  if ( (byte_41875FF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_BlacklistRootComponent_onMoveEnd__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_17081/*"btn_txt_requestlist_off"*/, v7);
    sub_B2C35C(&StringLiteral_16960/*"btn_bg_08"*/, v8);
    sub_B2C35C(&StringLiteral_17034/*"btn_txt_blacklist_off"*/, v9);
    sub_B2C35C(&StringLiteral_16961/*"btn_bg_09"*/, v10);
    sub_B2C35C(&StringLiteral_2568/*"BLACKLIST_EXPLANATION_1"*/, v11);
    sub_B2C35C(&StringLiteral_17082/*"btn_txt_requestlist_on"*/, v12);
    sub_B2C35C(&StringLiteral_17035/*"btn_txt_blacklist_on"*/, v13);
    sub_B2C35C(&StringLiteral_2569/*"BLACKLIST_EXPLANATION_2"*/, v14);
    byte_41875FF = 1;
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
                                                                                           (System_String_o *)StringLiteral_2569/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v22 = this->fields.friendOperationItemListViewManager;
                  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(v23, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v22 )
                  {
                    FriendOperationItemListViewManager__SetMode_30420888(v22, 1, v23, 0LL);
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
                              (System_String_o *)StringLiteral_17081/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_16960/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17035/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_16961/*"btn_bg_09"*/;
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
    sub_B2C434(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2568/*"BLACKLIST_EXPLANATION_1"*/,
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
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, Il2CppMethodPointer))friendOperationItemListViewManager->klass->vtable._9_SetSortKind.method)(
                    friendOperationItemListViewManager,
                    18LL,
                    friendOperationItemListViewManager->klass->vtable._10_SetSortAscendingOrder.methodPtr);
                  v18 = this->fields.friendOperationItemListViewManager;
                  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(v19, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v18 )
                  {
                    FriendOperationItemListViewManager__SetMode_30420888(v18, 1, v19, 0LL);
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
                              (System_String_o *)StringLiteral_17082/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_16961/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17034/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v20 = &StringLiteral_16960/*"btn_bg_08"*/;
LABEL_44:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v20,
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
  __int64 v3; // x1
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  struct FriendOperationItemListViewManager_o **p_friendOperationItemListViewManager; // x22
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  ListViewManager_o *v8; // x0
  int32_t ItemSum; // w19

  if ( (byte_41875F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&BlacklistRootComponent_TypeInfo, v3);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    byte_41875F5 = 1;
  }
  if ( this->fields.listMode > 1u )
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
  }
  else
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_13;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v7, 0LL);
  }
  v8 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
    goto LABEL_13;
  ItemSum = ListViewManager__get_ItemSum(v8, 0LL);
  if ( (BYTE3(BlacklistRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  }
  v8 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
LABEL_13:
    sub_B2C434(v8, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v8,
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v13; // x20
  Il2CppObject *v14; // x21
  BalanceConfig_c *v15; // x8
  Il2CppObject *v16; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-28h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187600 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_6501/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_4187600 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_14;
  lookup = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance->fields.lookup;
  registCntLabel = this->fields.registCntLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6501/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !lookup )
    goto LABEL_14;
  v13 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            lookup,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v15->static_fields->MaxBlackListNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  Instance = (DataManager_o *)System_String__Format_44301068(v13, v14, v16, 0LL);
  if ( !registCntLabel )
LABEL_14:
    sub_B2C434(Instance, v10);
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

  if ( (byte_4184E81 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v5);
    sub_B2C35C(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v6);
    byte_4184E81 = 1;
  }
  v7 = sub_B2C42C(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_B2C2F8(v7 + 24, this),
        *(_BYTE *)(v7 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_B2C434(v8, v9);
  }
  CommonConfirmDialog__Close_17891128(blackListRegistDlg, v12, 0LL);
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
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v11; // x8
  FriendOperationItemListViewManager_o *klass; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v13; // x21

  v2 = this;
  if ( (byte_4184E82 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlacklistRootComponent_OnSelectFriendItem__, method);
    sub_B2C35C(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v3);
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4184E82 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( v2->fields.isDecide )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v10,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v11 = v2->fields.CS___8__locals1;
    if ( v11 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v11->fields.otherUserId, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  klass = (FriendOperationItemListViewManager_o *)_4__this[3].klass;
  v13 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C42C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v13,
    _4__this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !klass )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(klass, 2, v13, 0LL);
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
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *v16; // x21
  CommonUI_o *v17; // x19
  System_Action_o *v18; // x20

  if ( (byte_4184E83 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v5);
    sub_B2C35C(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v6);
    sub_B2C35C(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4184E83 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      BlacklistRemoveRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(Request_WarBoardWallAttackRequest, v14);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (Il2CppObject *)this->fields.__4__this;
  v17 = (CommonUI_o *)Instance;
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, v16, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v17 )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_17971588(v17, v18, 0LL);
}