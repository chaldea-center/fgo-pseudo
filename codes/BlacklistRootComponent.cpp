void __fastcall BlacklistRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E8A & 1) == 0 )
  {
    sub_B5D5C4(&BlacklistRootComponent_TypeInfo, v1, v2, v3);
    byte_42E7E8A = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void __fastcall BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_long__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7E89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v5, v6, v7);
    byte_42E7E89 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendOfferList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E7E83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E7E83 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v9, 0LL);
}


void __fastcall BlacklistRootComponent__EndCloseShowServantEquip(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E7E7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E7E7F = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v9, 0LL);
}


void __fastcall BlacklistRootComponent__EndShowServant(
        BlacklistRootComponent_o *this,
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v22; // x21

  if ( (byte_42E7E82 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent_EndCloseShowServant__, v5, v6, v7);
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, v8, v9, v10);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42E7E82 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v18 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v18, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v22, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B5D69C(v19, v20);
  }
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
}


void __fastcall BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
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

  if ( (byte_42E7E7E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent_EndCloseShowServantEquip__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E7E7E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__OnSelectFriendItem(
        BlacklistRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *v104; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v107; // x21
  __int64 v108; // x22
  __int64 v109; // x23
  const MethodInfo *v110; // x3
  int32_t v111; // w2
  __int64 v112; // x8
  __int64 v113; // x20
  SkillInfo_o *v114; // x22
  _QWORD *v115; // x0
  System_Reflection_MethodBase_o *v116; // x0
  System_String_o *v117; // x20
  System_String_o *v118; // x21
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x1
  System_String_o *v122; // x3
  System_String_o *v123; // x2
  _QWORD *v124; // x0
  System_Reflection_MethodBase_o *v125; // x0
  FriendOperationItemListViewItem_o *v126; // x21
  struct ListViewItemSeed_o *seed; // x8
  __int64 v128; // x20
  SkillInfo_o *v129; // x23
  SkillEntity_o *Entity; // x21
  FriendOperationItemListViewManager_o *v131; // x20
  System_String_o *v132; // x21
  System_String_o *v133; // x22
  Il2CppObject *v134; // x0
  System_String_o *v135; // x0
  System_String_o *v136; // x21
  Il2CppObject *v137; // x0
  System_String_o *v138; // x20
  FriendOperationItemListViewManager_o *v139; // x8
  struct ListViewItemSeed_o *v140; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v142; // x2
  __int64 v143; // x20
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int32_t Count; // w21
  BalanceConfig_c *v151; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v153; // x22
  bool v154; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v156; // x21
  System_String_o *v157; // x22
  System_String_o *v158; // x23
  CommonConfirmDialog_ClickDelegate_o *v159; // x24
  const MethodInfo *v160; // x7
  __int64 v161; // x20
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v168; // x19
  WebViewManager_o *v169; // x0
  System_String_o *v170; // x21
  CommonUI_o *v171; // x19
  System_String_o *v172; // x0
  System_String_o *v173; // x21
  CommonConfirmDialog_ClickDelegate_o *v174; // x22
  System_String_o *v175; // x20
  __int64 v176; // x0
  BalanceConfig_c *v177; // x8
  Il2CppObject *v178; // x21
  Il2CppObject *v179; // x0
  System_String_o *v180; // x20
  CommonUI_o *Instance; // x21
  FriendOperationItemListViewManager_o *v182; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v183; // x21
  __int64 v184; // x0
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-80h]
  int32_t dropObjectList; // [xsp+18h] [xbp-68h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *v191; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *v192; // [xsp+40h] [xbp-40h] BYREF
  SkillInfo_array *v193; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  v5 = kind;
  if ( (byte_42E7E80 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, n, method);
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, v7, v8, v9);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v28, v29, v30);
    sub_B5D5C4(&DataManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v34, v35, v36);
    sub_B5D5C4(&int_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Contains__, v40, v41, v42);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v52, v53, v54);
    sub_B5D5C4(&SoundManager_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__, v58, v59, v60);
    sub_B5D5C4(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__, v64, v65, v66);
    sub_B5D5C4(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_2630/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_2627/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_2629/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_2628/*"BLACKLIST_REGIST_MAX_TITLE"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_2626/*"BLACKLIST_REGIST_CANCEL"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_1/*""*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_2631/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, v100, v101, v102);
    byte_42E7E80 = 1;
  }
  v193 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
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
        v126 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                v126->fields.classPos,
                0,
                0,
                (int32_t)seed->fields.prefab,
                0LL) )
          break;
        if ( v5 == 2 )
          v128 = 1LL;
        else
          v128 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v126,
                                                                                       &v193,
                                                                                       0LL);
        if ( !v193 )
          goto LABEL_125;
        if ( (unsigned int)v128 >= v193->max_length )
        {
LABEL_126:
          v184 = sub_B5D6C8(friendOperationItemListViewManager);
          sub_B5D668(v184, 0LL);
        }
        v129 = v193->m_Items[v128];
        if ( !v129 || v129->fields.id < 1 || v129->fields.lv < 1 )
          break;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                    v129->fields.id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v129->fields.id,
                                                                                       v129->fields.lv,
                                                                                       0LL);
        if ( !Entity )
          goto LABEL_125;
        v131 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v192, &v191, v129->fields.lv, 0LL);
        v132 = v192;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v129->fields.lv;
        v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v135 = System_String__Format(v133, v134, 0LL);
        v192 = System_String__Concat_44580072(v132, (System_String_o *)StringLiteral_81/*" "*/, v135, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0LL);
        if ( !v131 )
          goto LABEL_125;
        v136 = (System_String_o *)friendOperationItemListViewManager;
        dropObjectList = (int32_t)v131->fields.dropObjectList;
        v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v138 = System_String__Format(v136, v137, 0LL);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v122 = v191;
        v121 = v192;
        v123 = v138;
        goto LABEL_78;
      case 9:
        v143 = sub_B5D694(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_0___ctor((BlacklistRootComponent___c__DisplayClass31_0_o *)v143, 0LL);
        if ( !v143 )
          goto LABEL_125;
        *(_QWORD *)(v143 + 24) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v143 + 24),
          (System_Int32_array **)this,
          v144,
          v145,
          v146,
          v147,
          v148,
          v149);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)friendOperationItemListViewManager,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v151 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v151 = BalanceConfig_TypeInfo;
        }
        if ( Count < v151->static_fields->MaxBlackListNum )
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
                *(_QWORD *)(v143 + 16) = *(_QWORD *)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v153 = (System_String_o *)StringLiteral_2629/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v154 = System_Collections_Generic_List_long___Contains(
                           (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                           *(int64_t *)&kind,
                           (const MethodInfo_3047BDC *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v156 = *(System_String_o **)&dropList->fields._size;
                  if ( v154 )
                    v153 = (System_String_o *)StringLiteral_2630/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v157 = LocalizationManager__Get(v153, 0LL);
                  v158 = LocalizationManager__Get((System_String_o *)StringLiteral_2631/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0LL);
                  v159 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v159,
                    (Il2CppObject *)v143,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0LL);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v156, v157, v158, v159, 0, 0, v160);
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
        v175 = LocalizationManager__Get((System_String_o *)StringLiteral_2627/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0LL);
        lv = Count;
        v176 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v177 = BalanceConfig_TypeInfo;
        v178 = (Il2CppObject *)v176;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v177 = BalanceConfig_TypeInfo;
        }
        dropObjectList = v177->static_fields->MaxBlackListNum;
        v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &dropObjectList);
        v180 = System_String__Format_44573324(v175, v178, v179, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2628/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0LL);
        if ( !Instance )
          goto LABEL_125;
        setCondensedScale.fields.value = 0LL;
        *(_DWORD *)&setCondensedScale.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v180,
          0LL,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0LL);
        break;
      case 10:
        v161 = sub_B5D694(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        BlacklistRootComponent___c__DisplayClass31_2___ctor((BlacklistRootComponent___c__DisplayClass31_2_o *)v161, 0LL);
        if ( !v161 )
          goto LABEL_125;
        *(_QWORD *)(v161 + 24) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v161 + 24),
          (System_Int32_array **)this,
          v162,
          v163,
          v164,
          v165,
          v166,
          v167);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0LL);
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v168 = friendOperationItemListViewManager->fields.dropList;
        if ( !v168 )
          goto LABEL_125;
        *(_QWORD *)(v161 + 16) = v168->fields._items;
        v169 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v170 = *(System_String_o **)&v168->fields._size;
        v171 = (CommonUI_o *)v169;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v172 = LocalizationManager__Get((System_String_o *)StringLiteral_2626/*"BLACKLIST_REGIST_CANCEL"*/, 0LL);
        v173 = System_String__Concat_44580072(v170, (System_String_o *)StringLiteral_26/*"\n"*/, v172, 0LL);
        v174 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v174,
          (Il2CppObject *)v161,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0LL);
        if ( !v171 )
          goto LABEL_125;
        CommonUI__OpenConfirmDialog_18201948(v171, (System_String_o *)StringLiteral_1/*""*/, v173, 1, v174, 0, 0, 0, 0, 0LL);
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
        v112 = (unsigned int)(v5 - 14);
        v113 = (unsigned int)v112 < 4 ? v112 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0LL);
        if ( !skillInfoList )
          goto LABEL_125;
        if ( (unsigned int)v113 >= skillInfoList->max_length )
          goto LABEL_126;
        v114 = skillInfoList->m_Items[v113];
        if ( v114 && v114->fields.id >= 1 && v114->fields.lv >= 1 )
        {
          v115 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v115 = (_QWORD *)sub_B5D5CC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v116 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v115, v115[3]);
          OverwriteAssetSoundName__PlaySystemSe(v116, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)friendOperationItemListViewManager,
                                                                                         v114->fields.id,
                                                                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
            &name,
            &detail,
            v114->fields.lv,
            0LL);
          v117 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          lv = v114->fields.lv;
          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
          v120 = System_String__Format(v118, v119, 0LL);
          name = System_String__Concat_44580072(v117, (System_String_o *)StringLiteral_81/*" "*/, v120, 0LL);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_125;
          v122 = detail;
          v121 = name;
          v123 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_78:
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)friendOperationItemListViewManager,
            v121,
            v123,
            v122,
            1,
            0,
            0LL);
        }
        else
        {
          v124 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
            v124 = (_QWORD *)sub_B5D5CC(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v125 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v124, v124[3]);
          OverwriteAssetSoundName__PlaySystemSe(v125, 2, 0LL);
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
        v139 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_125;
        v140 = friendOperationItemListViewManager->fields.seed;
        if ( !v140 )
          goto LABEL_125;
        if ( !LODWORD(v140->fields.parent) )
          goto LABEL_126;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              (int32_t)v139->fields.SortObject,
                              0,
                              0,
                              (int32_t)v140->fields.prefab,
                              0LL);
        if ( !ServantLeaderInfo )
          break;
        BlacklistRootComponent__SelectShowServant(this, ServantLeaderInfo, v142);
        return;
    }
LABEL_122:
    v182 = this->fields.friendOperationItemListViewManager;
    v183 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v183,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( v182 )
    {
      FriendOperationItemListViewManager__SetMode(v182, 2, v183, 0LL);
      return;
    }
LABEL_125:
    sub_B5D69C(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
  v104 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0LL);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
    goto LABEL_129;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v104, 0LL);
  if ( !EquipTargetInfo )
    goto LABEL_129;
  v107 = EquipTargetInfo;
  v109 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v108 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v194.fields.currentCryptoKey = v109;
  *(_QWORD *)&v194.fields.fakeValue = v108;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v194, 0LL) < 1 )
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
  if ( v104->fields.kind == 9 )
    v111 = 14;
  else
    v111 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v107, v111, v110);
}


void __fastcall BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E7E81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_EndShowServant__, (_DWORD)servantLeaderInfo, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E7E81 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__OpenServantStatusDialog_18214956(Instance, 5, servantLeaderInfo, v13, 0LL);
}


void __fastcall BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
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

  if ( (byte_42E7E7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_EndShowServantEquip__, (_DWORD)equipInfo, statusKind, method);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42E7E7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__OpenServantEquipStatusDialog_18217320(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BlacklistRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21

  v5 = this;
  if ( (byte_42E7E8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    this = (BlacklistRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v9, v10, v11);
    byte_42E7E8E = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    BlacklistRootComponent__modeChange(v5, 0, v12);
    return;
  }
  friendOperationItemListViewManager = v5->fields.friendOperationItemListViewManager;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v5,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_B5D69C(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v14, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_4(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E7E91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E7E91 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v9, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BlacklistRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v17; // x21

  v5 = this;
  if ( (byte_42E7E8F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    this = (BlacklistRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    byte_42E7E8F = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
    BlacklistRootComponent__modeChange(v5, 1, v15);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v5, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(this, result);
  CommonUI__CloseConfirmDialog_18202348(Instance, v17, 0LL);
}


void __fastcall BlacklistRootComponent___OnSelectFriendItem_b__31_6(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E7E90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E7E90 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !friendOperationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v9, 0LL);
}


void __fastcall BlacklistRootComponent___afterMainMenuBar_b__39_0(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v9; // w0

  if ( (byte_42E7E92 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E7E92 = 1;
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
    || (v9 = UnityEngine_GameObject__get_activeSelf(this->fields.optionTopObj, 0LL),
        UnityEngine_GameObject__SetActive(optionTopObj, !v9, 0LL),
        (gameOptionComp = (SetGameOptionComponent_o *)this->fields.myRoomFsm) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BlacklistRootComponent_o *v5; // x19
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
  const MethodInfo *v36; // x2
  BlacklistRootComponent_o *v37; // x20
  System_Xml_Schema_XmlSchemaObject_o *v38; // x21
  __int64 v39; // x0
  __int64 v40; // x3
  __int64 v41; // x8
  __int64 v42; // x20
  unsigned __int64 v43; // x10
  System_Collections_ICollection_c **v44; // x11
  __int64 v45; // x0
  int v46; // w0
  __int64 v47; // x3
  unsigned int v48; // w22
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *friendOfferList; // x23
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  int64_t *v54; // x0
  BlacklistRootComponent_o *v55; // x0
  System_String_o *v56; // x1
  const MethodInfo *v57; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_42E7E8D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_ICollection_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IList_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&long_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&JsonManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v30, v31, v32);
    this = (BlacklistRootComponent_o *)sub_B5D5C4(&StringLiteral_19140/*"friendOfferList"*/, v33, v34, v35);
    byte_42E7E8D = 1;
  }
  value = 0LL;
  if ( !result )
    goto LABEL_34;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    goto LABEL_32;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(result, 0LL);
  if ( !this )
    goto LABEL_34;
  v37 = this;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19140/*"friendOfferList"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v37,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19140/*"friendOfferList"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
LABEL_32:
    BlacklistRootComponent__modeChange(v5, 0, v36);
    this = (BlacklistRootComponent_o *)v5->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_34:
    sub_B5D69C(this, result);
  }
  this = (BlacklistRootComponent_o *)v5->fields.friendOfferList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  v38 = value;
  if ( !value )
    goto LABEL_34;
  v39 = sub_B5D684(value, System_Collections_IList_TypeInfo);
  if ( v39 )
  {
    v41 = *(_QWORD *)v39;
    v42 = v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v43 = 0LL;
      v44 = (System_Collections_ICollection_c **)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *(v44 - 1) != System_Collections_ICollection_TypeInfo )
      {
        ++v43;
        v44 += 2;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_18;
      }
      v45 = v41 + 16LL * (*(_DWORD *)v44 + 1) + 312;
    }
    else
    {
LABEL_18:
      v45 = sub_AF54C0(v39, System_Collections_ICollection_TypeInfo, 1LL, v40);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
    if ( v46 >= 1 )
    {
      v38 = (System_Xml_Schema_XmlSchemaObject_o *)(unsigned int)v46;
      v48 = 0;
      while ( 1 )
      {
        v49 = *(_QWORD *)v42;
        friendOfferList = v5->fields.friendOfferList;
        if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
        {
          v51 = 0LL;
          v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v52 - 1) != System_Collections_IList_TypeInfo )
          {
            ++v51;
            v52 += 4;
            if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
              goto LABEL_26;
          }
          v53 = v49 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_26:
          v53 = sub_AF54C0(v42, System_Collections_IList_TypeInfo, 0LL, v47);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v53)(
                                             v42,
                                             v48,
                                             *(_QWORD *)(v53 + 8));
        if ( !friendOfferList || !this )
          goto LABEL_34;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        v54 = (int64_t *)j_il2cpp_object_unbox_0(this);
        System_Collections_Generic_List_long___Add(
          friendOfferList,
          *v54,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        if ( (int)++v48 >= (int)v38 )
          goto LABEL_32;
      }
      sub_B5D990(this);
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_36:
  v55 = (BlacklistRootComponent_o *)sub_B5D990(v38);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v55, v56, v57);
}


void __fastcall BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *blackListObj; // x0
  __int64 *v9; // x9

  if ( (byte_42E7E8B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7163/*"HIDE_END"*/, v5, v6, v7);
    byte_42E7E8B = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0LL),
        !this->fields.myRoomFsm) )
  {
    sub_B5D69C(blackListObj, method);
  }
  if ( ((unsigned __int8)blackListObj & 1) != 0 )
    v9 = &StringLiteral_6975/*"GO_NEXT"*/;
  else
    v9 = &StringLiteral_7163/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(this->fields.myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E7E8C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E7E8C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E7E88 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E7E88 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlacklistRootComponent_o *v4; // x19
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
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v26; // w0
  UILabel_o *helpLabel; // x20
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v31; // x19

  v4 = this;
  if ( (byte_42E7E7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent__blackListSetup_b__26_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BlacklistTopRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2625/*"BLACKLIST_HELP_TEXT"*/, v17, v18, v19);
    this = (BlacklistRootComponent_o *)sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v20, v21, v22);
    byte_42E7E7B = 1;
  }
  blackListObj = v4->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_23;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v4->fields.blackListObj, 0LL);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0LL);
  optionTopObj = v4->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_23;
  v26 = UnityEngine_GameObject__get_activeSelf(v4->fields.optionTopObj, 0LL);
  UnityEngine_GameObject__SetActive(optionTopObj, !v26, 0LL);
  helpLabel = v4->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2625/*"BLACKLIST_HELP_TEXT"*/, 0LL);
  if ( !helpLabel )
    goto LABEL_23;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0LL);
  gameOptionComp = v4->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_23;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  this = (BlacklistRootComponent_o *)v4->fields.blackListObj;
  if ( !this )
    goto LABEL_23;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BlacklistRootComponent_o *)v4->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0LL);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)v4,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v29,
                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v4->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v31 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 52, 1, 0, 0LL);
        MainMenuBar__setMenuActive(1, 0LL, 0LL);
        if ( v31 )
        {
          RequestBase__beginRequest(v31, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_B5D69C(this, method);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  this = (BlacklistRootComponent_o *)v4->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_23;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (BlacklistRootComponent_o *)v4->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_23;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 46, 1, 0, 0LL);
  this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall BlacklistRootComponent__clickBlacklistTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E7E85 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E85 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void __fastcall BlacklistRootComponent__clickFriendHistoryTabButton(
        BlacklistRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E7E84 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E84 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BlacklistRootComponent__modeChange(this, 0, v5);
}


void __fastcall BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E7E79 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BlacklistRootComponent__fadeIn_b__23_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E7E79 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E7E7A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BlacklistRootComponent__fadeOut_b__24_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E7E7A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlacklistRootComponent__modeChange(
        BlacklistRootComponent_o *this,
        int32_t mode,
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
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  int32_t listMode; // w8
  UILabel_o *v38; // x20
  FriendOperationItemListViewManager_o *v39; // x20
  System_Action_o *v40; // x21
  __int64 *v41; // x8
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v43; // x20
  System_Action_o *v44; // x21

  if ( (byte_42E7E86 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent_onMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17290/*"btn_txt_requestlist_off"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17169/*"btn_bg_08"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17243/*"btn_txt_blacklist_off"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17170/*"btn_bg_09"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_2622/*"BLACKLIST_EXPLANATION_1"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17291/*"btn_txt_requestlist_on"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17244/*"btn_txt_blacklist_on"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2623/*"BLACKLIST_EXPLANATION_2"*/, v33, v34, v35);
    byte_42E7E86 = 1;
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
                                                                                           (System_String_o *)StringLiteral_2623/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v43 = this->fields.friendOperationItemListViewManager;
                  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(v44, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v43 )
                  {
                    FriendOperationItemListViewManager__SetMode_31318652(v43, 1, v44, 0LL);
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
                              (System_String_o *)StringLiteral_17290/*"btn_txt_requestlist_off"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17169/*"btn_bg_08"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17244/*"btn_txt_blacklist_on"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v41 = &StringLiteral_17170/*"btn_bg_09"*/;
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
    sub_B5D69C(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
            v38 = this->fields.listExplanationLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2622/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0LL);
            if ( v38 )
            {
              UILabel__set_text(v38, (System_String_o *)friendOperationItemListViewManager, 0LL);
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
                  v39 = this->fields.friendOperationItemListViewManager;
                  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(v40, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0LL);
                  if ( v39 )
                  {
                    FriendOperationItemListViewManager__SetMode_31318652(v39, 1, v40, 0LL);
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
                              (System_String_o *)StringLiteral_17291/*"btn_txt_requestlist_on"*/,
                              0LL);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/,
                                0LL);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17243/*"btn_txt_blacklist_off"*/,
                                  0LL);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v41 = &StringLiteral_17169/*"btn_bg_08"*/;
LABEL_44:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v41,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  struct FriendOperationItemListViewManager_o **p_friendOperationItemListViewManager; // x22
  FriendOperationItemListViewManager_CallbackFunc_o *v13; // x21
  ListViewManager_o *v14; // x0
  int32_t ItemSum; // w19

  if ( (byte_42E7E7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BlacklistRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8, v9, v10);
    byte_42E7E7C = 1;
  }
  if ( this->fields.listMode > 1u )
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
  }
  else
  {
    p_friendOperationItemListViewManager = &this->fields.friendOperationItemListViewManager;
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v13 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0LL);
    if ( !friendOperationItemListViewManager )
      goto LABEL_13;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v13, 0LL);
  }
  v14 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
    goto LABEL_13;
  ItemSum = ListViewManager__get_ItemSum(v14, 0LL);
  if ( (BYTE3(BlacklistRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  }
  v14 = (ListViewManager_o *)*p_friendOperationItemListViewManager;
  if ( !*p_friendOperationItemListViewManager )
LABEL_13:
    sub_B5D69C(v14, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v14,
    ItemSum >= BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE,
    0LL);
}


void __fastcall BlacklistRootComponent__returnBlackList(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}


void __fastcall BlacklistRootComponent__setRegistCount(BlacklistRootComponent_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v27; // x20
  Il2CppObject *v28; // x21
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-28h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7E87 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6580/*"FRIEND_SHOW_INFOMATION"*/, v20, v21, v22);
    byte_42E7E87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_14;
  lookup = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance->fields.lookup;
  registCntLabel = this->fields.registCntLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6580/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !lookup )
    goto LABEL_14;
  v27 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            lookup,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v29->static_fields->MaxBlackListNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  Instance = (DataManager_o *)System_String__Format_44573324(v27, v28, v30, 0LL);
  if ( !registCntLabel )
LABEL_14:
    sub_B5D69C(Instance, v24);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v17; // x20

  if ( (byte_42E5E08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__, v6, v7, v8);
    sub_B5D5C4(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo, v9, v10, v11);
    byte_42E5E08 = 1;
  }
  v12 = sub_B5D694(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_B5D560(v12 + 24),
        *(_BYTE *)(v12 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0LL)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v12,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0LL),
        !blackListRegistDlg) )
  {
    sub_B5D69C(v13, v14);
  }
  CommonConfirmDialog__Close_18121248(blackListRegistDlg, v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BlacklistRootComponent___c__DisplayClass31_1_o *v4; // x19
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
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v22; // x21
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v23; // x8
  FriendOperationItemListViewManager_o *klass; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v25; // x21

  v4 = this;
  if ( (byte_42E5E09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlacklistRootComponent_OnSelectFriendItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__, v5, v6, v7);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BlacklistRegistRequest___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_B5D5C4(
                                                               &NetworkManager_ResultCallbackFunc_TypeInfo,
                                                               v17,
                                                               v18,
                                                               v19);
    byte_42E5E09 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( v4->fields.isDecide )
  {
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v22,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v23 = v4->fields.CS___8__locals1;
    if ( v23 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v23->fields.otherUserId, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  klass = (FriendOperationItemListViewManager_o *)_4__this[3].klass;
  v25 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v25,
    _4__this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !klass )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(klass, 2, v25, 0LL);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  BlacklistRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v27; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *v29; // x21
  CommonUI_o *v30; // x19
  System_Action_o *v31; // x20

  if ( (byte_42E5E0A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, v6, v7, v8);
    sub_B5D5C4(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E5E0A = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v25,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (BlacklistRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v25,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      BlacklistRemoveRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.otherUserId, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v27);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (Il2CppObject *)this->fields.__4__this;
  v30 = (CommonUI_o *)Instance;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, v29, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0LL);
  if ( !v30 )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_18202348(v30, v31, 0LL);
}