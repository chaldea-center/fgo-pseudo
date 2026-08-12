void BlacklistRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596B429 & 1) == 0 )
  {
    sub_2213A60(&BlacklistRootComponent_TypeInfo);
    byte_596B429 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B428 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596B428 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.friendOfferList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B422 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B422 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_2213CDC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent__EndCloseShowServantEquip(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B41E & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B41E = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_2213CDC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent__EndShowServant(BlacklistRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_596B421 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent_EndCloseShowServant__);
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B421 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v5, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0);
}


void BlacklistRootComponent__EndShowServantEquip(
        BlacklistRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596B41D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent_EndCloseShowServantEquip__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B41D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlacklistRootComponent__OnSelectFriendItem(
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
  __int64 v11; // x1
  __int64 v12; // x2
  EquipTargetInfo_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  FriendOperationItemListViewItem_o *v22; // x22
  struct UnityEngine_GameObject_o *dropDragPrefab; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v25; // x21
  __int64 v26; // x20
  SkillInfo_o *v27; // x23
  Il2CppObject *v28; // x22
  FriendOperationItemListViewManager_o *v29; // x20
  int32_t ServantId; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  __int64 v34; // x2
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x1
  System_String_o *v43; // x3
  System_String_o *v44; // x2
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  FriendOperationItemListViewManager_o *v47; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v48; // x21
  __int64 v49; // x8
  __int64 v50; // x20
  SkillInfo_o *v51; // x22
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  System_String_o *v58; // x20
  System_String_o *v59; // x21
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  FriendOperationItemListViewManager_o *v64; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v65; // x21
  __int64 v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v73; // x19
  const MethodInfo_47A29F8 *v74; // x0
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  System_String_o *v78; // x21
  CommonUI_o *v79; // x19
  System_String_o *v80; // x0
  System_String_o *v81; // x21
  CommonConfirmDialog_ClickDelegate_o *v82; // x22
  FriendOperationItemListViewManager_o *v83; // x8
  struct UnityEngine_GameObject_o *v84; // x9
  ServantLeaderInfo_o *v85; // x0
  const MethodInfo *v86; // x2
  __int64 v87; // x20
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x2
  int32_t Count; // w21
  BalanceConfig_c *v96; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v98; // x22
  bool v99; // zf
  __int64 v100; // x1
  __int64 v101; // x2
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v103; // x21
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  CommonConfirmDialog_ClickDelegate_o *v106; // x24
  const MethodInfo *v107; // x7
  System_String_o *v108; // x20
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  BalanceConfig_c *v112; // x8
  Il2CppObject *v113; // x21
  Il2CppObject *v114; // x0
  System_String_o *v115; // x20
  Il2CppObject *Instance; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-A0h]
  int32_t m_CancellationTokenSource; // [xsp+20h] [xbp-80h] BYREF
  int32_t lv; // [xsp+24h] [xbp-7Ch] BYREF
  System_String_o *v120; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *v121; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *v122; // [xsp+38h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+40h] [xbp-60h] BYREF
  System_String_o *detail; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+50h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16

  v5 = kind;
  if ( (byte_596B41F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Contains__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__);
    sub_2213A60(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__);
    sub_2213A60(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_3062/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/);
    sub_2213A60(&StringLiteral_8913/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_2213A60(&StringLiteral_3059/*"BLACKLIST_REGIST_MAX_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3061/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/);
    sub_2213A60(&StringLiteral_3060/*"BLACKLIST_REGIST_MAX_TITLE"*/);
    sub_2213A60(&StringLiteral_3058/*"BLACKLIST_REGIST_CANCEL"*/);
    sub_2213A60(&StringLiteral_2987/*"BATTLE_SKILLCHARGETURN"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3063/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/);
    byte_596B41F = 1;
  }
  name = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  v121 = 0;
  v122 = 0;
  v120 = 0;
  if ( v5 != 12 )
  {
    v20 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
    this->fields.selectItemNum = n;
    if ( v5 > 12 )
    {
      if ( (unsigned int)(v5 - 13) < 5 )
      {
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0);
        v49 = (unsigned int)(v5 - 14);
        v50 = (unsigned int)v49 < 4 ? v49 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &v122,
                                                                                       0);
        if ( !v122 )
          goto LABEL_127;
        if ( (unsigned int)v50 < LODWORD(v122->max_length) )
        {
          v51 = v122->m_Items[v50];
          if ( v51 && v51->fields.id >= 1 && v51->fields.lv >= 1 )
          {
            v52 = Method_BlacklistRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v52 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_OnSelectFriendItem__);
            v53 = (System_Reflection_MethodBase_o *)sub_2213A44(v52, v52[4]);
            OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0);
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54, v55);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
            if ( !friendOperationItemListViewManager )
              goto LABEL_127;
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                           v51->fields.id,
                                                                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( !friendOperationItemListViewManager )
              goto LABEL_127;
            SkillEntity__getSkillMessageInfo(
              (SkillEntity_o *)friendOperationItemListViewManager,
              &v121,
              &v120,
              v51->fields.lv,
              0);
            v58 = v121;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MASTER_EQSKILL_LV_TXT"*/, 0);
            lv = v51->fields.lv;
            v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &lv);
            v61 = System_String__Format(v59, v60, 0);
            v121 = System_String__Concat_75694928(v58, (System_String_o *)StringLiteral_113/*" "*/, v61, 0);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !friendOperationItemListViewManager )
              goto LABEL_127;
            v43 = v120;
            v42 = v121;
            v44 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
            CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v42, v44, v43, 1, 0, 0);
            goto LABEL_84;
          }
          v62 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v62 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v63 = (System_Reflection_MethodBase_o *)sub_2213A44(v62, v62[4]);
          OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0, 0);
LABEL_84:
          v64 = this->fields.friendOperationItemListViewManager;
          v65 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v65,
            (Il2CppObject *)this,
            (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
            0);
          if ( v64 )
          {
            FriendOperationItemListViewManager__SetMode(v64, 2, v65, 0);
            return;
          }
          goto LABEL_127;
        }
LABEL_128:
        sub_2213CE4(friendOperationItemListViewManager);
      }
    }
    else
    {
      if ( (unsigned int)(v5 - 1) < 3 )
      {
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v22 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        dropDragPrefab = friendOperationItemListViewManager->fields.dropDragPrefab;
        if ( !dropDragPrefab )
          goto LABEL_127;
        if ( LODWORD(dropDragPrefab[1].klass) )
        {
          ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                                (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                                v22->fields.classPos,
                                0,
                                0,
                                (int32_t)dropDragPrefab[1].monitor,
                                0,
                                0);
          if ( !ServantLeaderInfo )
            goto LABEL_84;
          v25 = ServantLeaderInfo;
          if ( v5 == 2 )
            v26 = 1;
          else
            v26 = 2LL * (v5 == 3);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                         v22,
                                                                                         &skillInfoList,
                                                                                         0);
          if ( !skillInfoList )
            goto LABEL_127;
          if ( (unsigned int)v26 < LODWORD(skillInfoList->max_length) )
          {
            v27 = skillInfoList->m_Items[v26];
            if ( v27 && v27->fields.id >= 1 && v27->fields.lv >= 1 )
            {
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !friendOperationItemListViewManager )
                goto LABEL_127;
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                             (DataManager_o *)friendOperationItemListViewManager,
                                                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
              if ( !friendOperationItemListViewManager )
                goto LABEL_127;
              v28 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                      v27->fields.id,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !friendOperationItemListViewManager )
                goto LABEL_127;
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                             (DataManager_o *)friendOperationItemListViewManager,
                                                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
              if ( !friendOperationItemListViewManager )
                goto LABEL_127;
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                             (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                             v27->fields.id,
                                                                                             v27->fields.lv,
                                                                                             0);
              if ( !v28 )
                goto LABEL_127;
              v29 = friendOperationItemListViewManager;
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)v28, &name, &detail, v27->fields.lv, 0);
              ServantId = ServantLeaderInfo__GetServantId(v25, -1, 0);
              DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                                v25,
                                                                0);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              if ( !friendOperationItemListViewManager )
                goto LABEL_127;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)friendOperationItemListViewManager,
                     &entity,
                     ServantId,
                     DispLimitCountStageSealAfterAtStageLimitCount,
                     0) )
              {
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)entity;
                if ( !entity )
                  goto LABEL_127;
                if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
                {
                  friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)entity;
                  if ( !entity )
                    goto LABEL_127;
                  name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v27->fields.id, name, 0);
                }
              }
              v35 = name;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v34);
              v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MASTER_EQSKILL_LV_TXT"*/, 0);
              lv = v27->fields.lv;
              v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &lv);
              v38 = System_String__Format(v36, v37, 0);
              name = System_String__Concat_75694928(v35, (System_String_o *)StringLiteral_113/*" "*/, v38, 0);
              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                             (System_String_o *)StringLiteral_2987/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                             0);
              if ( !v29
                || (v39 = (System_String_o *)friendOperationItemListViewManager,
                    m_CancellationTokenSource = (int32_t)v29->fields.m_CancellationTokenSource,
                    v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CancellationTokenSource),
                    v41 = System_String__Format(v39, v40, 0),
                    (friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
              {
LABEL_127:
                sub_2213CDC(friendOperationItemListViewManager, *(_QWORD *)&kind);
              }
              v43 = detail;
              v42 = name;
              v44 = v41;
              goto LABEL_80;
            }
            goto LABEL_84;
          }
        }
        goto LABEL_128;
      }
      if ( v5 == 9 )
      {
        v87 = sub_2213CCC(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v87, 0);
        if ( !v87 )
          goto LABEL_127;
        *(_QWORD *)(v87 + 24) = this;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v87 + 24), (int32_t)this, v88, v89, v90, v91, v92, v93);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
        v96 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind, v94);
          v96 = BalanceConfig_TypeInfo;
        }
        if ( Count < v96->static_fields->MaxBlackListNum )
        {
          friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
          if ( friendOperationItemListViewManager )
          {
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                           friendOperationItemListViewManager,
                                                                                           this->fields.selectItemNum,
                                                                                           0);
            if ( friendOperationItemListViewManager )
            {
              dropList = friendOperationItemListViewManager->fields.dropList;
              if ( dropList )
              {
                *(_QWORD *)&kind = dropList->fields._items;
                *(_QWORD *)(v87 + 16) = *(_QWORD *)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v98 = (System_String_o *)StringLiteral_3061/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v99 = !System_Collections_Generic_List_long___Contains(
                           (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                           *(int64_t *)&kind,
                           (const MethodInfo_446C61C *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v103 = *(System_String_o **)&dropList->fields._size;
                  if ( !v99 )
                    v98 = (System_String_o *)StringLiteral_3062/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100, v101);
                  v104 = LocalizationManager__Get(v98, 0);
                  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_3063/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0);
                  v106 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v106,
                    (Il2CppObject *)v87,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v103, v104, v105, v106, 0, 0, v107);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_127;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v94);
        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3059/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0);
        lv = Count;
        v109 = j_il2cpp_value_box_0(qword_5984348, &lv);
        v112 = BalanceConfig_TypeInfo;
        v113 = (Il2CppObject *)v109;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v110, v111);
          v112 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v112->static_fields->MaxBlackListNum;
        v114 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CancellationTokenSource);
        v115 = System_String__Format_75697880(v108, v113, v114, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_3060/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0);
        if ( !Instance )
          goto LABEL_127;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v115,
          0,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0);
        goto LABEL_84;
      }
      if ( v5 == 10 )
      {
        v66 = sub_2213CCC(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v66, 0);
        if ( v66 )
        {
          *(_QWORD *)(v66 + 24) = this;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 24), (int32_t)this, v67, v68, v69, v70, v71, v72);
          friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
          if ( friendOperationItemListViewManager )
          {
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                           friendOperationItemListViewManager,
                                                                                           this->fields.selectItemNum,
                                                                                           0);
            if ( friendOperationItemListViewManager )
            {
              v73 = friendOperationItemListViewManager->fields.dropList;
              if ( v73 )
              {
                v74 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
                *(_QWORD *)(v66 + 16) = v73->fields._items;
                v75 = SingletonMonoBehaviour_object___get_Instance(v74);
                v78 = *(System_String_o **)&v73->fields._size;
                v79 = (CommonUI_o *)v75;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76, v77);
                v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"BLACKLIST_REGIST_CANCEL"*/, 0);
                v81 = System_String__Concat_75694928(v78, (System_String_o *)StringLiteral_43/*"\n"*/, v80, 0);
                v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v82,
                  (Il2CppObject *)v66,
                  Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
                  0);
                if ( v79 )
                {
                  CommonUI__OpenConfirmDialog_37373484(
                    v79,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v81,
                    1,
                    v82,
                    0,
                    0,
                    0,
                    0,
                    0);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_127;
      }
    }
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    if ( !friendOperationItemListViewManager )
      goto LABEL_127;
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   friendOperationItemListViewManager,
                                                                                   n,
                                                                                   0);
    if ( !friendOperationItemListViewManager )
      goto LABEL_127;
    v83 = friendOperationItemListViewManager;
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
    if ( !friendOperationItemListViewManager )
      goto LABEL_127;
    v84 = friendOperationItemListViewManager->fields.dropDragPrefab;
    if ( !v84 )
      goto LABEL_127;
    if ( LODWORD(v84[1].klass) )
    {
      v85 = OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
              (int32_t)v83->fields.SortObject,
              0,
              0,
              (int32_t)v84[1].monitor,
              0,
              0);
      if ( v85 )
      {
        BlacklistRootComponent__SelectShowServant(this, v85, v86);
        return;
      }
      goto LABEL_57;
    }
    goto LABEL_128;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.selectItemNum = n;
  if ( !friendOperationItemListViewManager )
    goto LABEL_127;
  friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                 friendOperationItemListViewManager,
                                                                                 n,
                                                                                 0);
  if ( !friendOperationItemListViewManager )
    goto LABEL_127;
  v8 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
  ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                    (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                    0);
  if ( ServantLeader && ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
    goto LABEL_54;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v8, 0);
  if ( !EquipTargetInfo )
    goto LABEL_54;
  v13 = EquipTargetInfo;
  v14 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
  *(_QWORD *)&v127.fields.currentCryptoKey = v14;
  *(_QWORD *)&v127.fields.fakeValue = v15;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v127, 0) < 1 )
  {
LABEL_54:
    v45 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v46 = (System_Reflection_MethodBase_o *)sub_2213A44(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
LABEL_57:
    v47 = this->fields.friendOperationItemListViewManager;
    v48 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v48,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0);
    if ( v47 )
    {
      FriendOperationItemListViewManager__SetMode(v47, 2, v48, 0);
      return;
    }
    goto LABEL_127;
  }
  v16 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_OnSelectFriendItem__);
  v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
  if ( v8->fields.kind == 9 )
    v19 = 14;
  else
    v19 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v13, v19, v18);
}


void BlacklistRootComponent__SelectShowServant(
        BlacklistRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596B420 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_EndShowServant__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0);
  if ( !Instance )
    sub_2213CDC(v7, v8);
  CommonUI__OpenServantStatusDialog_37385604((CommonUI_o *)Instance, 5, servantLeaderInfo, v6, 0);
}


void BlacklistRootComponent__SelectShowServantEquip(
        BlacklistRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596B41C & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_EndShowServantEquip__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B41C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0);
  if ( !Instance )
    sub_2213CDC(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_37388712((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_2(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_596B42D & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    this = (BlacklistRootComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596B42D = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v5);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_2213CDC(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_4(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B430 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B430 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_2213CDC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_5(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_596B42E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BlacklistRootComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596B42E = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
    BlacklistRootComponent__modeChange(v4, 1, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(this, result);
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_6(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B42F & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B42F = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_2213CDC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent___afterMainMenuBar_b__39_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v7; // w0

  if ( (byte_596B431 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B431 = 1;
  }
  gameOptionComp = this->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_8;
  SetGameOptionComponent__hideGameOption(gameOptionComp, 0);
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.blackListObj, 0),
        UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0),
        (optionTopObj = this->fields.optionTopObj) == 0)
    || (v7 = UnityEngine_GameObject__get_activeSelf(this->fields.optionTopObj, 0),
        UnityEngine_GameObject__SetActive(optionTopObj, !v7, 0),
        (gameOptionComp = (SetGameOptionComponent_o *)this->fields.myRoomFsm) == 0) )
  {
LABEL_8:
    sub_2213CDC(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  BlacklistRootComponent_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  BlacklistRootComponent_o *v7; // x20
  struct System_Collections_Generic_List_long__o *friendOfferList; // x8
  Il2CppObject *v9; // x21
  int v10; // w9
  System_Collections_IList_c *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 v17; // x9
  System_Collections_ICollection_c **v18; // x10
  __int64 v19; // x0
  int v20; // w0
  __int64 v21; // x8
  System_Collections_Generic_List_long__o *v22; // x23
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  BlacklistRootComponent_o *v31; // x0
  System_String_o *v32; // x1
  const MethodInfo *v33; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = result;
  v4 = this;
  if ( (byte_596B42C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_ICollection_TypeInfo);
    sub_2213A60(&System_Collections_IList_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    this = (BlacklistRootComponent_o *)sub_2213A60(&StringLiteral_20609/*"friendOfferList"*/);
    byte_596B42C = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_75686512(v3, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    goto LABEL_35;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0);
  if ( !this )
    goto LABEL_37;
  v7 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_20609/*"friendOfferList"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                             (Il2CppObject *)StringLiteral_20609/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v6);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
      return;
    }
LABEL_37:
    sub_2213CDC(this, result);
  }
  friendOfferList = v4->fields.friendOfferList;
  if ( !friendOfferList )
    goto LABEL_37;
  v9 = value;
  v10 = friendOfferList->fields._version + 1;
  friendOfferList->fields._size = 0;
  friendOfferList->fields._version = v10;
  if ( !v9 )
    goto LABEL_37;
  v11 = System_Collections_IList_TypeInfo;
  v12 = sub_2213BB4(v9, System_Collections_IList_TypeInfo);
  if ( v12 )
  {
    v15 = *(_QWORD *)v12;
    v16 = v12;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v18 = (System_Collections_ICollection_c **)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *(v18 - 1) != System_Collections_ICollection_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = v15 + 16LL * (*(_DWORD *)v18 + 1) + 312;
    }
    else
    {
LABEL_17:
      v19 = sub_224BC3C(v12, System_Collections_ICollection_TypeInfo, 1);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
    if ( v20 >= 1 )
    {
      v9 = (Il2CppObject *)(unsigned int)v20;
      v11 = 0;
      while ( 1 )
      {
        v21 = *(_QWORD *)v16;
        v22 = v4->fields.friendOfferList;
        v23 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
        {
          v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v24 - 1) != System_Collections_IList_TypeInfo )
          {
            --v23;
            v24 += 4;
            if ( !v23 )
              goto LABEL_25;
          }
          v25 = v21 + 16LL * *v24 + 312;
        }
        else
        {
LABEL_25:
          v25 = sub_224BC3C(v16, System_Collections_IList_TypeInfo, 0);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v25)(
                                             v16,
                                             (unsigned int)v11,
                                             *(_QWORD *)(v25 + 8));
        if ( !v22 || !this )
          goto LABEL_37;
        if ( this->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
          break;
        this = (BlacklistRootComponent_o *)j_il2cpp_object_unbox_0(this, qword_5984368, v26, v27);
        items = v22->fields._items;
        result = (System_String_o *)this->klass;
        v29 = Method_System_Collections_Generic_List_long__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v22,
            (int64_t)result,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v22->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        v11 = (System_Collections_IList_c *)(unsigned int)((_DWORD)v11 + 1);
        if ( (_DWORD)v11 == (_DWORD)v9 )
          goto LABEL_35;
      }
      sub_221405C(this, qword_5984368, v26, v27);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v31 = (BlacklistRootComponent_o *)sub_221405C(v9, v11, v13, v14);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v31, v32, v33);
}


void BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blackListObj; // x0
  bool activeSelf; // w8
  __int64 *v5; // x8

  if ( (byte_596B42A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    sub_2213A60(&StringLiteral_7551/*"HIDE_END"*/);
    byte_596B42A = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_10;
  activeSelf = UnityEngine_GameObject__get_activeSelf(blackListObj, 0);
  blackListObj = (UnityEngine_GameObject_o *)this->fields.myRoomFsm;
  if ( !activeSelf )
  {
    if ( blackListObj )
    {
      v5 = &StringLiteral_7551/*"HIDE_END"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(blackListObj, method);
  }
  if ( !blackListObj )
    goto LABEL_10;
  v5 = &StringLiteral_7273/*"GO_NEXT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)blackListObj, (System_String_o *)*v5, 0);
}


void BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B42B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B42B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596B427 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B427 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  BlacklistRootComponent_o *v2; // x19
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v6; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *helpLabel; // x20
  __int64 v10; // x2
  struct SetGameOptionComponent_o *gameOptionComp; // x8
  OtherUserServantLimitCountManager_c *v12; // x0
  int v13; // w9
  OtherUserServantLimitCountManager_c *v14; // x0
  struct OtherUserServantLimitCountManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  TitleInfoControl_o *titleInfoCtr; // x8
  RequestBase_o *v20; // x19

  v2 = this;
  if ( (byte_596B41A & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent__blackListSetup_b__26_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_BlacklistTopRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&StringLiteral_3057/*"BLACKLIST_HELP_TEXT"*/);
    this = (BlacklistRootComponent_o *)sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B41A = 1;
  }
  blackListObj = v2->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_27;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.blackListObj, 0);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0);
  optionTopObj = v2->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_27;
  v6 = UnityEngine_GameObject__get_activeSelf(v2->fields.optionTopObj, 0);
  UnityEngine_GameObject__SetActive(optionTopObj, !v6, 0);
  helpLabel = v2->fields.helpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"BLACKLIST_HELP_TEXT"*/, 0);
  if ( !helpLabel )
    goto LABEL_27;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0);
  gameOptionComp = v2->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_27;
  v12 = OtherUserServantLimitCountManager_TypeInfo;
  v13 = *(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1);
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(v12, method, v10);
  if ( !byte_596AF97 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596AF97 = 1;
  }
  v14 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v10);
    v14 = OtherUserServantLimitCountManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  this = (BlacklistRootComponent_o *)v2->fields.blackListObj;
  static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  if ( !this )
    goto LABEL_27;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v18);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v16,
                                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v20 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 56, 1, 0, 0);
        MainMenuBar__setMenuActive(1, 0, 0);
        if ( v20 )
        {
          RequestBase__beginRequest(v20, 0);
          return;
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, method);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_27;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0);
  this = (BlacklistRootComponent_o *)v2->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_27;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 50, 1, 0, 0);
  this = (BlacklistRootComponent_o *)v2->fields.myRoomFsm;
  if ( !this )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent__clickBlacklistTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B424 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_clickBlacklistTabButton__);
    byte_596B424 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_clickBlacklistTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void BlacklistRootComponent__clickFriendHistoryTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B423 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
    byte_596B423 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BlacklistRootComponent__modeChange(this, 0, v5);
}


void BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596B418 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent__fadeIn_b__23_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B418 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, v9, 0);
}


void BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596B419 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent__fadeOut_b__24_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B419 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlacklistRootComponent__modeChange(BlacklistRootComponent_o *this, int32_t mode, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x0
  int32_t listMode; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x20
  FriendOperationItemListViewManager_o *v10; // x20
  System_Action_o *v11; // x21
  __int64 *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *listExplanationLabel; // x20
  FriendOperationItemListViewManager_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_596B425 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent_onMoveEnd__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18365/*"btn_txt_requestlist_off"*/);
    sub_2213A60(&StringLiteral_18204/*"btn_bg_08"*/);
    sub_2213A60(&StringLiteral_18316/*"btn_txt_blacklist_off"*/);
    sub_2213A60(&StringLiteral_18205/*"btn_bg_09"*/);
    sub_2213A60(&StringLiteral_3054/*"BLACKLIST_EXPLANATION_1"*/);
    sub_2213A60(&StringLiteral_18366/*"btn_txt_requestlist_on"*/);
    sub_2213A60(&StringLiteral_18317/*"btn_txt_blacklist_on"*/);
    sub_2213A60(&StringLiteral_3055/*"BLACKLIST_EXPLANATION_2"*/);
    byte_596B425 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  this->fields.listMode = mode;
  if ( !friendOperationItemListViewManager )
    goto LABEL_44;
  FriendOperationItemListViewManager__DestroyList(friendOperationItemListViewManager, 0);
  listMode = this->fields.listMode;
  if ( listMode == 1 )
  {
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButton;
    if ( friendOperationItemListViewManager )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 1, 0);
      friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabBoxCollider;
      if ( friendOperationItemListViewManager )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 1, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabButton;
        if ( friendOperationItemListViewManager )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 0, 0);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabBoxCollider;
          if ( friendOperationItemListViewManager )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 0, 0);
            listExplanationLabel = this->fields.listExplanationLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3055/*"BLACKLIST_EXPLANATION_2"*/,
                                                                                           0);
            if ( listExplanationLabel )
            {
              UILabel__set_text(listExplanationLabel, (System_String_o *)friendOperationItemListViewManager, 0);
              friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
              if ( friendOperationItemListViewManager )
              {
                FriendOperationItemListViewManager__CreateList(friendOperationItemListViewManager, 8, 0, 0);
                friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                if ( friendOperationItemListViewManager )
                {
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, const MethodInfo *))friendOperationItemListViewManager->klass->vtable._10_SetSortKind.methodPtr)(
                    friendOperationItemListViewManager,
                    17,
                    friendOperationItemListViewManager->klass->vtable._10_SetSortKind.method);
                  v16 = this->fields.friendOperationItemListViewManager;
                  v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v17, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v16 )
                  {
                    FriendOperationItemListViewManager__SetMode_39345336(v16, 1, v17, 0);
                    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                    if ( friendOperationItemListViewManager )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(friendOperationItemListViewManager, 0);
                      friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                      if ( friendOperationItemListViewManager )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(friendOperationItemListViewManager, 0, 0);
                        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                        if ( friendOperationItemListViewManager )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(friendOperationItemListViewManager, 0);
                          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonTitleSpr;
                          if ( friendOperationItemListViewManager )
                          {
                            UISprite__set_spriteName(
                              (UISprite_o *)friendOperationItemListViewManager,
                              (System_String_o *)StringLiteral_18365/*"btn_txt_requestlist_off"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_18204/*"btn_bg_08"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_18317/*"btn_txt_blacklist_on"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v12 = &StringLiteral_18205/*"btn_bg_09"*/;
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
    sub_2213CDC(friendOperationItemListViewManager, *(_QWORD *)&mode);
  }
  if ( !listMode )
  {
    friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButton;
    if ( friendOperationItemListViewManager )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 0, 0);
      friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabBoxCollider;
      if ( friendOperationItemListViewManager )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 0, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabButton;
        if ( friendOperationItemListViewManager )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendOperationItemListViewManager, 1, 0);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackListTabBoxCollider;
          if ( friendOperationItemListViewManager )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)friendOperationItemListViewManager, 1, 0);
            v9 = this->fields.listExplanationLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_3054/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0);
            if ( v9 )
            {
              UILabel__set_text(v9, (System_String_o *)friendOperationItemListViewManager, 0);
              friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
              if ( friendOperationItemListViewManager )
              {
                FriendOperationItemListViewManager__CreateList(friendOperationItemListViewManager, 7, 0, 0);
                friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                if ( friendOperationItemListViewManager )
                {
                  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, __int64, const MethodInfo *))friendOperationItemListViewManager->klass->vtable._10_SetSortKind.methodPtr)(
                    friendOperationItemListViewManager,
                    18,
                    friendOperationItemListViewManager->klass->vtable._10_SetSortKind.method);
                  v10 = this->fields.friendOperationItemListViewManager;
                  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v11, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v10 )
                  {
                    FriendOperationItemListViewManager__SetMode_39345336(v10, 1, v11, 0);
                    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                    if ( friendOperationItemListViewManager )
                    {
                      FriendOperationItemListViewManager__resetScrollBarPos(friendOperationItemListViewManager, 0);
                      friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                      if ( friendOperationItemListViewManager )
                      {
                        FriendOperationItemListViewManager__setScrollBarActive(friendOperationItemListViewManager, 0, 0);
                        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
                        if ( friendOperationItemListViewManager )
                        {
                          FriendOperationItemListViewManager__changeSortKindDisp(friendOperationItemListViewManager, 0);
                          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonTitleSpr;
                          if ( friendOperationItemListViewManager )
                          {
                            UISprite__set_spriteName(
                              (UISprite_o *)friendOperationItemListViewManager,
                              (System_String_o *)StringLiteral_18366/*"btn_txt_requestlist_on"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_18205/*"btn_bg_09"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_18316/*"btn_txt_blacklist_off"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v12 = &StringLiteral_18204/*"btn_bg_08"*/;
LABEL_42:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v12,
                                    0);
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


void BlacklistRootComponent__onMoveEnd(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  ListViewManager_o *v5; // x0
  int32_t ItemSum; // w0
  __int64 v7; // x2
  BlacklistRootComponent_c *v8; // x8
  int32_t v9; // w20
  int32_t SCROLL_BAR_ACTIVE; // w8

  if ( (byte_596B41B & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&BlacklistRootComponent_TypeInfo);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B41B = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
      0);
    if ( !friendOperationItemListViewManager )
      goto LABEL_11;
    FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
  }
  v5 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v5 )
    goto LABEL_11;
  ItemSum = ListViewManager__get_ItemSum(v5, 0);
  v8 = BlacklistRootComponent_TypeInfo;
  v9 = ItemSum;
  if ( !*(&BlacklistRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo, method, v7);
    v8 = BlacklistRootComponent_TypeInfo;
  }
  v5 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  SCROLL_BAR_ACTIVE = v8->static_fields->SCROLL_BAR_ACTIVE;
  if ( !v5 )
LABEL_11:
    sub_2213CDC(v5, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v5,
    v9 >= SCROLL_BAR_ACTIVE,
    0);
}


void BlacklistRootComponent__returnBlackList(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__setMenuActive(1, 0, 0);
}


void BlacklistRootComponent__setRegistCount(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_ObjectModel_Collection_T__o *datalist; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x8
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B426 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_2213A60(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_6852/*"FRIEND_SHOW_INFOMATION"*/);
    byte_596B426 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  registCntLabel = this->fields.registCntLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6852/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !datalist )
    goto LABEL_12;
  v8 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            datalist,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
  v9 = j_il2cpp_value_box_0(qword_5984348, &Count);
  v12 = BalanceConfig_TypeInfo;
  v13 = (Il2CppObject *)v9;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v11);
    v12 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v12->static_fields->MaxBlackListNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &MaxBlackListNum);
  Instance = (DataManager_o *)System_String__Format_75697880(v8, v13, v14, 0);
  if ( !registCntLabel )
LABEL_12:
    sub_2213CDC(Instance, v4);
  UILabel__set_text(registCntLabel, (System_String_o *)Instance, 0);
}


void BlacklistRootComponent___c__DisplayClass31_0___ctor(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlacklistRootComponent___c__DisplayClass31_0___OnSelectFriendItem_b__0(
        BlacklistRootComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v16; // x20

  if ( (byte_596B432 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__);
    sub_2213A60(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
    byte_596B432 = 1;
  }
  v5 = sub_2213CCC(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        _4__this = this->fields.__4__this,
        *(_BYTE *)(v5 + 16) = isDecide,
        !_4__this)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0),
        !blackListRegistDlg) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonConfirmDialog__Close_37350844(blackListRegistDlg, v16, 0);
}


void BlacklistRootComponent___c__DisplayClass31_1___ctor(
        BlacklistRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlacklistRootComponent___c__DisplayClass31_1___OnSelectFriendItem_b__1(
        BlacklistRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  BlacklistRootComponent___c__DisplayClass31_1_o *v2; // x19
  struct BlacklistRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v8; // x8
  Il2CppObject *v9; // x20
  FriendOperationItemListViewManager_o *monitor; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21

  v2 = this;
  if ( (byte_596B433 & 1) == 0 )
  {
    sub_2213A60(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_2213A60(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__);
    sub_2213A60(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B433 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( v2->fields.isDecide )
  {
    if ( CS___8__locals1 )
    {
      _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
      v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v5,
        _4__this,
        Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
      this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                                 v5,
                                                                 (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
      v8 = v2->fields.CS___8__locals1;
      if ( v8 )
      {
        if ( this )
        {
          BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v8->fields.otherUserId, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v9 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v9 )
    goto LABEL_14;
  monitor = (FriendOperationItemListViewManager_o *)v9[3].monitor;
  v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_2213CCC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !monitor )
    goto LABEL_14;
  FriendOperationItemListViewManager__SetMode(monitor, 2, v11, 0);
}


void BlacklistRootComponent___c__DisplayClass31_2___ctor(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlacklistRootComponent___c__DisplayClass31_2___OnSelectFriendItem_b__3(
        BlacklistRootComponent___c__DisplayClass31_2_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v12; // x21
  CommonUI_o *v13; // x19
  System_Action_o *v14; // x20

  if ( (byte_596B434 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__);
    sub_2213A60(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__);
    sub_2213A60(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B434 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Request_object = NetworkManager__getRequest_object_(
                       v6,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Request_object, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (Il2CppObject *)this->fields.__4__this;
  v13 = (CommonUI_o *)Instance;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, v12, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0);
  if ( !v13 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_37373868(v13, v14, 0);
}