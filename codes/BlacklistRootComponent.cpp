void BlacklistRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CB1158 & 1) == 0 )
  {
    sub_1C6BA08(&BlacklistRootComponent_TypeInfo);
    byte_4CB1158 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20

  if ( (byte_4CB1157 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CB1157 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v3;
  sub_1C6B9AC(&this->fields.friendOfferList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB1151 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB1151 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C6BC60(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent__EndCloseShowServantEquip(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB114D & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB114D = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB1150 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent_EndCloseShowServant__);
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1150 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v5, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB114C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent_EndCloseShowServantEquip__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB114C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1C6BC60(v6, v7);
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
  EquipTargetInfo_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  SkillInfo_o *v22; // x22
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x1
  System_String_o *v30; // x3
  System_String_o *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  FriendOperationItemListViewManager_o *v34; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v35; // x0
  void *v36; // x2
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  FriendOperationItemListViewItem_o *v39; // x22
  struct ListViewItemSeed_o *seed; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v42; // x21
  __int64 v43; // x20
  SkillInfo_o *v44; // x26
  Il2CppObject *v45; // x22
  FriendOperationItemListViewManager_o *v46; // x20
  Il2CppObject *Master_object; // x0
  __int64 v48; // x23
  __int64 v49; // x24
  ServantLimitImageMaster_o *v50; // x22
  int32_t v51; // w23
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v53; // x22
  int32_t v54; // w0
  int32_t limitCount; // w24
  int32_t v56; // w21
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x21
  Il2CppObject *v62; // x0
  System_String_o *v63; // x20
  FriendOperationItemListViewManager_o *v64; // x8
  struct ListViewItemSeed_o *v65; // x9
  ServantLeaderInfo_o *v66; // x0
  const MethodInfo *v67; // x2
  Il2CppObject *v68; // x20
  int32_t Count; // w21
  BalanceConfig_c *v70; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v72; // x22
  bool v73; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v75; // x21
  System_String_o *v76; // x22
  System_String_o *v77; // x23
  CommonConfirmDialog_ClickDelegate_o *v78; // x24
  const MethodInfo *v79; // x7
  Il2CppObject *v80; // x20
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v81; // x19
  Il2CppObject *v82; // x0
  System_String_o *v83; // x21
  CommonUI_o *v84; // x19
  System_String_o *v85; // x0
  System_String_o *v86; // x21
  CommonConfirmDialog_ClickDelegate_o *v87; // x22
  System_String_o *v88; // x20
  __int64 v89; // x0
  BalanceConfig_c *v90; // x8
  Il2CppObject *v91; // x21
  Il2CppObject *v92; // x0
  System_String_o *v93; // x20
  Il2CppObject *Instance; // x21
  FriendOperationItemListViewManager_CallbackFunc_o *v95; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-A0h]
  int32_t m_CancellationTokenSource; // [xsp+18h] [xbp-88h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *v103; // [xsp+40h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+48h] [xbp-58h] BYREF
  SkillInfo_array *v105; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  v5 = kind;
  if ( (byte_4CB114E & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__);
    sub_1C6BA08(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__);
    sub_1C6BA08(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_2933/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/);
    sub_1C6BA08(&StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C6BA08(&StringLiteral_2930/*"BLACKLIST_REGIST_MAX_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2932/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/);
    sub_1C6BA08(&StringLiteral_2931/*"BLACKLIST_REGIST_MAX_TITLE"*/);
    sub_1C6BA08(&StringLiteral_2929/*"BLACKLIST_REGIST_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_2934/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/);
    byte_4CB114E = 1;
  }
  v105 = 0;
  v103 = 0;
  defaultName = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  name = 0;
  if ( v5 != 12 )
  {
    v18 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    this->fields.selectItemNum = n;
    switch ( v5 )
    {
      case 1:
      case 2:
      case 3:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v39 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        seed = friendOperationItemListViewManager->fields.seed;
        if ( !seed )
          goto LABEL_127;
        if ( !LODWORD(seed->fields.m_CancellationTokenSource) )
          goto LABEL_128;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                              v39->fields.classPos,
                              0,
                              0,
                              (int32_t)seed->fields.parent,
                              0,
                              0);
        if ( !ServantLeaderInfo )
          goto LABEL_123;
        v42 = ServantLeaderInfo;
        if ( v5 == 2 )
          v43 = 1;
        else
          v43 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v39,
                                                                                       &v105,
                                                                                       0);
        if ( !v105 )
          goto LABEL_127;
        if ( (unsigned int)v43 >= LODWORD(v105->max_length) )
LABEL_128:
          sub_1C6BC68(friendOperationItemListViewManager);
        v44 = v105->m_Items[v43];
        if ( !v44 || v44->fields.id < 1 || v44->fields.lv < 1 )
          goto LABEL_123;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v45 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                v44->fields.id,
                (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v44->fields.id,
                                                                                       v44->fields.lv,
                                                                                       0);
        if ( !v45 )
          goto LABEL_127;
        v46 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v45, &defaultName, &v103, v44->fields.lv, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v49 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
        v50 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v107.fields.currentCryptoKey = v49;
        *(_QWORD *)&v107.fields.fakeValue = v48;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v107, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)ServantLeaderInfo__getDispLimitCount(
                                                                                       v42,
                                                                                       0);
        if ( !v50 )
          goto LABEL_127;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v50,
                                       v51,
                                       (int32_t)friendOperationItemListViewManager,
                                       0);
        v53 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v42->fields.svtId, 0);
        limitCount = v42->fields.limitCount;
        v56 = v54;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                                       ServantImageLimitSealAfter,
                                                                                       limitCount,
                                                                                       0);
        if ( !v53 )
          goto LABEL_127;
        if ( !ServantLimitAddMaster__TryGetEntity(
                (ServantLimitAddMaster_o *)v53,
                &entity,
                v56,
                (int32_t)friendOperationItemListViewManager,
                0) )
          goto LABEL_79;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)entity;
        if ( !entity )
          goto LABEL_127;
        if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
          goto LABEL_79;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)entity;
        if ( !entity )
          goto LABEL_127;
        defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v44->fields.id, defaultName, 0);
LABEL_79:
        v57 = defaultName;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v44->fields.lv;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v60 = System_String__Format(v58, v59, 0);
        defaultName = System_String__Concat_64005056(v57, (System_String_o *)StringLiteral_113/*" "*/, v60, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0);
        if ( !v46 )
          goto LABEL_127;
        v61 = (System_String_o *)friendOperationItemListViewManager;
        m_CancellationTokenSource = (int32_t)v46->fields.m_CancellationTokenSource;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
        v63 = System_String__Format(v61, v62, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v30 = v103;
        v29 = defaultName;
        v31 = v63;
        goto LABEL_84;
      case 9:
        v68 = (Il2CppObject *)sub_1C6BC54(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        System_Object___ctor(v68, 0);
        if ( !v68 )
          goto LABEL_127;
        v68[1].monitor = this;
        sub_1C6B9AC(&v68[1].monitor, this);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
        v70 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v70 = BalanceConfig_TypeInfo;
        }
        if ( Count < v70->static_fields->MaxBlackListNum )
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
                v68[1].klass = *(Il2CppClass **)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v72 = (System_String_o *)StringLiteral_2932/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v73 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          *(int64_t *)&kind,
                          (const MethodInfo_37E8D20 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v75 = *(System_String_o **)&dropList->fields._size;
                  if ( v73 )
                    v72 = (System_String_o *)StringLiteral_2933/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v76 = LocalizationManager__Get(v72, 0);
                  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_2934/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0);
                  v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v78,
                    v68,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v75, v76, v77, v78, 0, 0, v79);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_127;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0);
        lv = Count;
        v89 = j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v90 = BalanceConfig_TypeInfo;
        v91 = (Il2CppObject *)v89;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v90 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v90->static_fields->MaxBlackListNum;
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
        v93 = System_String__Format_64008100(v88, v91, v92, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2931/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0);
        if ( !Instance )
          goto LABEL_127;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v93,
          0,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0);
LABEL_123:
        v34 = this->fields.friendOperationItemListViewManager;
        v35 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v36 = Method_BlacklistRootComponent_OnSelectFriendItem__;
        break;
      case 10:
        v80 = (Il2CppObject *)sub_1C6BC54(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        System_Object___ctor(v80, 0);
        if ( !v80 )
          goto LABEL_127;
        v80[1].monitor = this;
        sub_1C6B9AC(&v80[1].monitor, this);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v81 = friendOperationItemListViewManager->fields.dropList;
        if ( !v81 )
          goto LABEL_127;
        v80[1].klass = (Il2CppClass *)v81->fields._items;
        v82 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v83 = *(System_String_o **)&v81->fields._size;
        v84 = (CommonUI_o *)v82;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_2929/*"BLACKLIST_REGIST_CANCEL"*/, 0);
        v86 = System_String__Concat_64005056(v83, (System_String_o *)StringLiteral_43/*"\n"*/, v85, 0);
        v87 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v87,
          v80,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0);
        if ( !v84 )
          goto LABEL_127;
        CommonUI__OpenConfirmDialog_31417624(v84, (System_String_o *)StringLiteral_1/*""*/, v86, 1, v87, 0, 0, 0, 0, 0);
        return;
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0);
        v20 = (unsigned int)(v5 - 14);
        v21 = (unsigned int)v20 < 4 ? v20 + 1 : 0LL;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                                                       (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager,
                                                                                       &skillInfoList,
                                                                                       0);
        if ( !skillInfoList )
          goto LABEL_127;
        if ( (unsigned int)v21 >= LODWORD(skillInfoList->max_length) )
          goto LABEL_128;
        v22 = skillInfoList->m_Items[v21];
        if ( v22 && v22->fields.id >= 1 && v22->fields.lv >= 1 )
        {
          v23 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v23 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v24 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v23, v23[4]);
          OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                         v22->fields.id,
                                                                                         (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
            &name,
            &detail,
            v22->fields.lv,
            0);
          v25 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/, 0);
          lv = v22->fields.lv;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
          v28 = System_String__Format(v26, v27, 0);
          name = System_String__Concat_64005056(v25, (System_String_o *)StringLiteral_113/*" "*/, v28, 0);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          v30 = detail;
          v29 = name;
          v31 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_84:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v29, v31, v30, 1, 0, 0);
        }
        else
        {
          v37 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v37 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v38 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v37, v37[4]);
          OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0);
        }
        goto LABEL_123;
      default:
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       n,
                                                                                       0);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v64 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v65 = friendOperationItemListViewManager->fields.seed;
        if ( !v65 )
          goto LABEL_127;
        if ( !LODWORD(v65->fields.m_CancellationTokenSource) )
          goto LABEL_128;
        v66 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                (int32_t)v64->fields.SortObject,
                0,
                0,
                (int32_t)v65->fields.parent,
                0,
                0);
        if ( !v66 )
          goto LABEL_123;
        BlacklistRootComponent__SelectShowServant(this, v66, v67);
        return;
    }
LABEL_124:
    v95 = v35;
    FriendOperationItemListViewManager_CallbackFunc___ctor(v35, (Il2CppObject *)this, (intptr_t)v36, 0);
    if ( v34 )
    {
      FriendOperationItemListViewManager__SetMode(v34, 2, v95, 0);
      return;
    }
LABEL_127:
    sub_1C6BC60(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
    goto LABEL_41;
  EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v8, 0);
  if ( !EquipTargetInfo )
    goto LABEL_41;
  v11 = EquipTargetInfo;
  v13 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v106.fields.currentCryptoKey = v13;
  *(_QWORD *)&v106.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v106, 0) < 1 )
  {
LABEL_41:
    v32 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v33 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0);
    v34 = this->fields.friendOperationItemListViewManager;
    v35 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    v36 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    goto LABEL_124;
  }
  v14 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_OnSelectFriendItem__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  if ( v8->fields.kind == 9 )
    v17 = 14;
  else
    v17 = 13;
  BlacklistRootComponent__SelectShowServantEquip(this, v11, v17, v16);
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

  if ( (byte_4CB114F & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_EndShowServant__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB114F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0);
  if ( !Instance )
    sub_1C6BC60(v7, v8);
  CommonUI__OpenServantStatusDialog_31430016((CommonUI_o *)Instance, 5, servantLeaderInfo, v6, 0);
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

  if ( (byte_4CB114B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_EndShowServantEquip__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB114B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0);
  if ( !Instance )
    sub_1C6BC60(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_31433124((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
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
  if ( (byte_4CB115C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    this = (BlacklistRootComponent_o *)sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    byte_4CB115C = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_64002112(result, (System_String_o *)StringLiteral_22471/*"ok"*/, 0) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v5);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_1C6BC60(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_4(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB115F & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB115F = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C6BC60(v5, v6);
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
  if ( (byte_4CB115D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BlacklistRootComponent_o *)sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    byte_4CB115D = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_64002112(result, (System_String_o *)StringLiteral_22471/*"ok"*/, 0) )
    BlacklistRootComponent__modeChange(v4, 1, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C6BC60(this, result);
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_6(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB115E & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB115E = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C6BC60(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent___afterMainMenuBar_b__39_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v7; // w0

  if ( (byte_4CB1160 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    byte_4CB1160 = 1;
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
    sub_1C6BC60(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6972/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent___blackListSetup_b__26_0(
        BlacklistRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  BlacklistRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  BlacklistRootComponent_o *v6; // x20
  struct System_Collections_Generic_List_long__o *friendOfferList; // x8
  int v8; // w9
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x20
  __int64 v13; // x9
  System_Collections_ICollection_c **v14; // x10
  __int64 v15; // x0
  int v16; // w0
  unsigned int v17; // w22
  __int64 v18; // x8
  System_Collections_Generic_List_long__o *v19; // x23
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  BlacklistRootComponent_o *v26; // x0
  System_String_o *v27; // x1
  const MethodInfo *v28; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = result;
  v4 = this;
  if ( (byte_4CB115B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&System_Collections_ICollection_TypeInfo);
    sub_1C6BA08(&System_Collections_IList_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    this = (BlacklistRootComponent_o *)sub_1C6BA08(&StringLiteral_19742/*"friendOfferList"*/);
    byte_4CB115B = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_64002112(v3, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
    goto LABEL_35;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0);
  if ( !this )
    goto LABEL_37;
  v6 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_19742/*"friendOfferList"*/,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                             (Il2CppObject *)StringLiteral_19742/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v5);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6972/*"GO_NEXT"*/, 0);
      return;
    }
LABEL_37:
    sub_1C6BC60(this, result);
  }
  friendOfferList = v4->fields.friendOfferList;
  if ( !friendOfferList )
    goto LABEL_37;
  v8 = friendOfferList->fields._version + 1;
  friendOfferList->fields._size = 0;
  friendOfferList->fields._version = v8;
  v9 = value;
  if ( !value )
    goto LABEL_37;
  v10 = sub_1C6BB44(value, System_Collections_IList_TypeInfo);
  if ( v10 )
  {
    v11 = *(_QWORD *)v10;
    v12 = v10;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v14 = (System_Collections_ICollection_c **)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *(v14 - 1) != System_Collections_ICollection_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = v11 + 16LL * (*(_DWORD *)v14 + 1) + 312;
    }
    else
    {
LABEL_17:
      v15 = sub_1C41D90(v10, System_Collections_ICollection_TypeInfo, 1);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
    if ( v16 >= 1 )
    {
      v9 = (Il2CppObject *)(unsigned int)v16;
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_QWORD *)v12;
        v19 = v4->fields.friendOfferList;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v21 - 1) != System_Collections_IList_TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_25;
          }
          v22 = v18 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_25:
          v22 = sub_1C41D90(v12, System_Collections_IList_TypeInfo, 0);
        }
        this = (BlacklistRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v22)(
                                             v12,
                                             v17,
                                             *(_QWORD *)(v22 + 8));
        if ( !v19 || !this )
          goto LABEL_37;
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          break;
        this = (BlacklistRootComponent_o *)j_il2cpp_object_unbox_0();
        result = (System_String_o *)this->klass;
        items = v19->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v19,
            (int64_t)result,
            *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        if ( ++v17 == (_DWORD)v9 )
          goto LABEL_35;
      }
      sub_1C6BFFC(this);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v26 = (BlacklistRootComponent_o *)sub_1C6BFFC(v9);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v26, v27, v28);
}


void BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blackListObj; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v5; // x9

  if ( (byte_4CB1159 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    sub_1C6BA08(&StringLiteral_7244/*"HIDE_END"*/);
    byte_4CB1159 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0),
        (myRoomFsm = this->fields.myRoomFsm) == 0) )
  {
    sub_1C6BC60(blackListObj, method);
  }
  v5 = &StringLiteral_6972/*"GO_NEXT"*/;
  if ( ((unsigned __int8)blackListObj & 1) == 0 )
    v5 = &StringLiteral_7244/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v5, 0);
}


void BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CB115A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    byte_4CB115A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6972/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent__afterMainMenuBar(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CB1156 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1156 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void BlacklistRootComponent__blackListSetup(BlacklistRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4CB1149 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent__blackListSetup_b__26_0__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_BlacklistTopRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&StringLiteral_2928/*"BLACKLIST_HELP_TEXT"*/);
    this = (BlacklistRootComponent_o *)sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    byte_4CB1149 = 1;
  }
  blackListObj = v2->fields.blackListObj;
  if ( !blackListObj )
    goto LABEL_21;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.blackListObj, 0);
  UnityEngine_GameObject__SetActive(blackListObj, !activeSelf, 0);
  optionTopObj = v2->fields.optionTopObj;
  if ( !optionTopObj )
    goto LABEL_21;
  v6 = UnityEngine_GameObject__get_activeSelf(v2->fields.optionTopObj, 0);
  UnityEngine_GameObject__SetActive(optionTopObj, !v6, 0);
  helpLabel = v2->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2928/*"BLACKLIST_HELP_TEXT"*/, 0);
  if ( !helpLabel )
    goto LABEL_21;
  UILabel__set_text(helpLabel, (System_String_o *)this, 0);
  gameOptionComp = v2->fields.gameOptionComp;
  if ( !gameOptionComp )
    goto LABEL_21;
  gameOptionComp->fields._optionSceneType_k__BackingField = gameOptionComp->fields._optionSceneType_k__BackingField == 0;
  this = (BlacklistRootComponent_o *)v2->fields.blackListObj;
  if ( !this )
    goto LABEL_21;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
    if ( this )
    {
      FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)this, 0);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v9,
                                           (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
      titleInfoCtr = v2->fields.titleInfoCtr;
      if ( titleInfoCtr )
      {
        v11 = (RequestBase_o *)this;
        TitleInfoControl__setTitleImg(titleInfoCtr, 55, 1, 0, 0);
        MainMenuBar__setMenuActive(1, 0, 0);
        if ( v11 )
        {
          RequestBase__beginRequest(v11, 0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C6BC60(this, method);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  this = (BlacklistRootComponent_o *)v2->fields.friendOperationItemListViewManager;
  if ( !this )
    goto LABEL_21;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0);
  this = (BlacklistRootComponent_o *)v2->fields.titleInfoCtr;
  if ( !this )
    goto LABEL_21;
  TitleInfoControl__setTitleImg((TitleInfoControl_o *)this, 49, 1, 0, 0);
  this = (BlacklistRootComponent_o *)v2->fields.myRoomFsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6972/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent__clickBlacklistTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB1153 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_clickBlacklistTabButton__);
    byte_4CB1153 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_clickBlacklistTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void BlacklistRootComponent__clickFriendHistoryTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB1152 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
    byte_4CB1152 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BlacklistRootComponent__modeChange(this, 0, v5);
}


void BlacklistRootComponent__fadeIn(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CB1147 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent__fadeIn_b__23_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1147 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0);
}


void BlacklistRootComponent__fadeOut(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CB1148 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent__fadeOut_b__24_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1148 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlacklistRootComponent__modeChange(BlacklistRootComponent_o *this, int32_t mode, const MethodInfo *method)
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

  if ( (byte_4CB1154 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent_onMoveEnd__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_17607/*"btn_txt_requestlist_off"*/);
    sub_1C6BA08(&StringLiteral_17457/*"btn_bg_08"*/);
    sub_1C6BA08(&StringLiteral_17559/*"btn_txt_blacklist_off"*/);
    sub_1C6BA08(&StringLiteral_17458/*"btn_bg_09"*/);
    sub_1C6BA08(&StringLiteral_2925/*"BLACKLIST_EXPLANATION_1"*/);
    sub_1C6BA08(&StringLiteral_17608/*"btn_txt_requestlist_on"*/);
    sub_1C6BA08(&StringLiteral_17560/*"btn_txt_blacklist_on"*/);
    sub_1C6BA08(&StringLiteral_2926/*"BLACKLIST_EXPLANATION_2"*/);
    byte_4CB1154 = 1;
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
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2926/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v12 = this->fields.friendOperationItemListViewManager;
                  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v12 )
                  {
                    FriendOperationItemListViewManager__SetMode_32984628(v12, 1, v13, 0);
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
                              (System_String_o *)StringLiteral_17607/*"btn_txt_requestlist_off"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17457/*"btn_bg_08"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17560/*"btn_txt_blacklist_on"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17458/*"btn_bg_09"*/;
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
    sub_1C6BC60(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
            v7 = this->fields.listExplanationLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_2925/*"BLACKLIST_EXPLANATION_1"*/,
                                                                                           0);
            if ( v7 )
            {
              UILabel__set_text(v7, (System_String_o *)friendOperationItemListViewManager, 0);
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
                  v8 = this->fields.friendOperationItemListViewManager;
                  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v8 )
                  {
                    FriendOperationItemListViewManager__SetMode_32984628(v8, 1, v9, 0);
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
                              (System_String_o *)StringLiteral_17608/*"btn_txt_requestlist_on"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17458/*"btn_bg_09"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17559/*"btn_txt_blacklist_off"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17457/*"btn_bg_08"*/;
LABEL_42:
                                  UISprite__set_spriteName(
                                    (UISprite_o *)friendOperationItemListViewManager,
                                    (System_String_o *)*v10,
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
  int32_t ItemSum; // w20

  if ( (byte_4CB114A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&BlacklistRootComponent_TypeInfo);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB114A = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
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
  if ( !BlacklistRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlacklistRootComponent_TypeInfo);
  v5 = (ListViewManager_o *)this->fields.friendOperationItemListViewManager;
  if ( !v5 )
LABEL_11:
    sub_1C6BC60(v5, method);
  FriendOperationItemListViewManager__setScrollBarActive(
    (FriendOperationItemListViewManager_o *)v5,
    ItemSum >= BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE,
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
  System_Collections_ObjectModel_Collection_T__o *datalist; // x21
  UILabel_o *registCntLabel; // x19
  System_String_o *v7; // x20
  __int64 v8; // x0
  BalanceConfig_c *v9; // x8
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB1155 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_6559/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4CB1155 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  registCntLabel = this->fields.registCntLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6559/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !datalist )
    goto LABEL_12;
  v7 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            datalist,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Count);
  v9 = BalanceConfig_TypeInfo;
  v10 = (Il2CppObject *)v8;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v9->static_fields->MaxBlackListNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum);
  Instance = (DataManager_o *)System_String__Format_64008100(v7, v10, v11, 0);
  if ( !registCntLabel )
LABEL_12:
    sub_1C6BC60(Instance, v4);
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
  struct BlacklistRootComponent_o *_4__this; // x8
  CommonConfirmDialog_o *blackListRegistDlg; // x19
  System_Action_o *v10; // x20

  if ( (byte_4CB1161 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__);
    sub_1C6BA08(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
    byte_4CB1161 = 1;
  }
  v5 = sub_1C6BC54(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        v6 = sub_1C6B9AC(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0),
        !blackListRegistDlg) )
  {
    sub_1C6BC60(v6, v7);
  }
  CommonConfirmDialog__Close_31393588(blackListRegistDlg, v10, 0);
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
  struct BlacklistRootComponent___c__DisplayClass31_0_o *v6; // x8
  Il2CppObject *v7; // x20
  FriendOperationItemListViewManager_o *monitor; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  v2 = this;
  if ( (byte_4CB1162 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C6BA08(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__);
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB1162 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  if ( v2->fields.isDecide )
  {
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                               v5,
                                                               (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v6 = v2->fields.CS___8__locals1;
    if ( v6 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v6->fields.otherUserId, 0);
      return;
    }
LABEL_13:
    sub_1C6BC60(this, method);
  }
  v7 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v7 )
    goto LABEL_13;
  monitor = (FriendOperationItemListViewManager_o *)v7[3].monitor;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C6BC54(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !monitor )
    goto LABEL_13;
  FriendOperationItemListViewManager__SetMode(monitor, 2, v9, 0);
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
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v10; // x21
  CommonUI_o *v11; // x19
  System_Action_o *v12; // x20

  if ( (byte_4CB1163 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__);
    sub_1C6BA08(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1163 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v6,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0);
      return;
    }
LABEL_10:
    sub_1C6BC60(Request_object, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (Il2CppObject *)this->fields.__4__this;
  v11 = (CommonUI_o *)Instance;
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v12, v10, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0);
  if ( !v11 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_31417952(v11, v12, 0);
}