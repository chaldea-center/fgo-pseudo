void BlacklistRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C221D7 & 1) == 0 )
  {
    sub_1C2D490(&BlacklistRootComponent_TypeInfo);
    byte_4C221D7 = 1;
  }
  BlacklistRootComponent_TypeInfo->static_fields->SCROLL_BAR_ACTIVE = 3;
}


void BlacklistRootComponent___ctor(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20

  if ( (byte_4C221D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C221D6 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.friendOfferList = v3;
  sub_1C2D434(&this->fields.friendOfferList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlacklistRootComponent__EndCloseShowServant(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C221D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C221D0 = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent__EndCloseShowServantEquip(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C221CC & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C221CC = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C221CF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent_EndCloseShowServant__);
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221CF = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 5, v5, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C221CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent_EndCloseShowServantEquip__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlacklistRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
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
  __int64 v22; // x2
  SkillInfo_o *v23; // x22
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x3
  System_String_o *v35; // x2
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  FriendOperationItemListViewManager_o *v38; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v39; // x0
  void *v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  FriendOperationItemListViewItem_o *v43; // x22
  struct ListViewItemSeed_o *seed; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v46; // x21
  __int64 v47; // x20
  SkillInfo_o *v48; // x26
  Il2CppObject *v49; // x22
  FriendOperationItemListViewManager_o *v50; // x20
  Il2CppObject *Master_object; // x0
  __int64 v52; // x23
  __int64 v53; // x24
  ServantLimitImageMaster_o *v54; // x22
  int32_t v55; // w23
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v57; // x22
  int32_t v58; // w0
  int32_t limitCount; // w24
  int32_t v60; // w21
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_String_o *v71; // x21
  Il2CppObject *v72; // x0
  System_String_o *v73; // x20
  FriendOperationItemListViewManager_o *v74; // x8
  struct ListViewItemSeed_o *v75; // x9
  ServantLeaderInfo_o *v76; // x0
  const MethodInfo *v77; // x2
  Il2CppObject *v78; // x20
  int32_t Count; // w21
  BalanceConfig_c *v80; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  System_String_o *v82; // x22
  bool v83; // w0
  BlacklistRegistDialog_o *blackListRegistDlg; // x19
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  CommonConfirmDialog_ClickDelegate_o *v88; // x24
  const MethodInfo *v89; // x7
  Il2CppObject *v90; // x20
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v91; // x19
  Il2CppObject *v92; // x0
  System_String_o *v93; // x21
  CommonUI_o *v94; // x19
  System_String_o *v95; // x0
  System_String_o *v96; // x21
  CommonConfirmDialog_ClickDelegate_o *v97; // x22
  System_String_o *v98; // x20
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x0
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  BalanceConfig_c *v106; // x8
  Il2CppObject *v107; // x21
  Il2CppObject *v108; // x0
  System_String_o *v109; // x20
  Il2CppObject *Instance; // x21
  FriendOperationItemListViewManager_CallbackFunc_o *v111; // x21
  System_Nullable_Vector2__o setCondensedScale; // [xsp+0h] [xbp-A0h]
  int32_t m_CancellationTokenSource; // [xsp+18h] [xbp-88h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *v119; // [xsp+40h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+48h] [xbp-58h] BYREF
  SkillInfo_array *v121; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v5 = kind;
  if ( (byte_4C221CD & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__);
    sub_1C2D490(&BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__);
    sub_1C2D490(&BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_2938/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/);
    sub_1C2D490(&StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C2D490(&StringLiteral_2935/*"BLACKLIST_REGIST_MAX_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_2937/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/);
    sub_1C2D490(&StringLiteral_2936/*"BLACKLIST_REGIST_MAX_TITLE"*/);
    sub_1C2D490(&StringLiteral_2934/*"BLACKLIST_REGIST_CANCEL"*/);
    sub_1C2D490(&StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_2939/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/);
    byte_4C221CD = 1;
  }
  v121 = 0;
  v119 = 0;
  defaultName = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  name = 0;
  if ( v5 != 12 )
  {
    v18 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
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
        v43 = (FriendOperationItemListViewItem_o *)friendOperationItemListViewManager;
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
                              v43->fields.classPos,
                              0,
                              0,
                              (int32_t)seed->fields.parent,
                              0,
                              0);
        if ( !ServantLeaderInfo )
          goto LABEL_123;
        v46 = ServantLeaderInfo;
        if ( v5 == 2 )
          v47 = 1;
        else
          v47 = 2LL * (v5 == 3);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                                                       v43,
                                                                                       &v121,
                                                                                       0);
        if ( !v121 )
          goto LABEL_127;
        if ( (unsigned int)v47 >= LODWORD(v121->max_length) )
LABEL_128:
          sub_1C2D6F4(friendOperationItemListViewManager, *(_QWORD *)&kind, v22);
        v48 = v121->m_Items[v47];
        if ( !v48 || v48->fields.id < 1 || v48->fields.lv < 1 )
          goto LABEL_123;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v49 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                v48->fields.id,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SkillLvMaster__GetEntity(
                                                                                       (SkillLvMaster_o *)friendOperationItemListViewManager,
                                                                                       v48->fields.id,
                                                                                       v48->fields.lv,
                                                                                       0);
        if ( !v49 )
          goto LABEL_127;
        v50 = friendOperationItemListViewManager;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v49, &defaultName, &v119, v48->fields.lv, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v53 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
        v52 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
        v54 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v123.fields.currentCryptoKey = v53;
        *(_QWORD *)&v123.fields.fakeValue = v52;
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v123, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)ServantLeaderInfo__getDispLimitCount(
                                                                                       v46,
                                                                                       0);
        if ( !v54 )
          goto LABEL_127;
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v54,
                                       v55,
                                       (int32_t)friendOperationItemListViewManager,
                                       0);
        v57 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46->fields.svtId, 0);
        limitCount = v46->fields.limitCount;
        v60 = v58;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                                       ServantImageLimitSealAfter,
                                                                                       limitCount,
                                                                                       0);
        if ( !v57 )
          goto LABEL_127;
        if ( !ServantLimitAddMaster__TryGetEntity(
                (ServantLimitAddMaster_o *)v57,
                &entity,
                v60,
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
        defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v48->fields.id, defaultName, 0);
LABEL_79:
        v61 = defaultName;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v48->fields.lv;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v63, v64, v65);
        v67 = System_String__Format(v62, v66, 0);
        defaultName = System_String__Concat_63496112(v61, (System_String_o *)StringLiteral_113/*" "*/, v67, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/,
                                                                                       0);
        if ( !v50 )
          goto LABEL_127;
        v71 = (System_String_o *)friendOperationItemListViewManager;
        m_CancellationTokenSource = (int32_t)v50->fields.m_CancellationTokenSource;
        v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v68, v69, v70);
        v73 = System_String__Format(v71, v72, 0);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v34 = v119;
        v33 = defaultName;
        v35 = v73;
        goto LABEL_84;
      case 9:
        v78 = (Il2CppObject *)sub_1C2D6DC(BlacklistRootComponent___c__DisplayClass31_0_TypeInfo);
        System_Object___ctor(v78, 0);
        if ( !v78 )
          goto LABEL_127;
        v78[1].monitor = this;
        sub_1C2D434(&v78[1].monitor);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)friendOperationItemListViewManager,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.indicator;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)friendOperationItemListViewManager,
                  (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
        v80 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v80 = BalanceConfig_TypeInfo;
        }
        if ( Count < v80->static_fields->MaxBlackListNum )
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
                v78[1].klass = *(Il2CppClass **)&kind;
                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendOfferList;
                if ( friendOperationItemListViewManager )
                {
                  v82 = (System_String_o *)StringLiteral_2937/*"BLACKLIST_REGIST_NORMAL_MESSAGE_1"*/;
                  v83 = System_Collections_Generic_List_long___Contains(
                          (System_Collections_Generic_List_long__o *)friendOperationItemListViewManager,
                          *(int64_t *)&kind,
                          (const MethodInfo_3771F30 *)Method_System_Collections_Generic_List_long__Contains__);
                  blackListRegistDlg = this->fields.blackListRegistDlg;
                  v85 = *(System_String_o **)&dropList->fields._size;
                  if ( v83 )
                    v82 = (System_String_o *)StringLiteral_2938/*"BLACKLIST_REGIST_NORMAL_MESSAGE_2"*/;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v86 = LocalizationManager__Get(v82, 0);
                  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BLACKLIST_REGIST_NORMAL_MESSAGE_3"*/, 0);
                  v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v88,
                    v78,
                    Method_BlacklistRootComponent___c__DisplayClass31_0__OnSelectFriendItem_b__0__,
                    0);
                  if ( blackListRegistDlg )
                  {
                    BlacklistRegistDialog__Open(blackListRegistDlg, v85, v86, v87, v88, 0, 0, v89);
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
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2935/*"BLACKLIST_REGIST_MAX_MESSAGE"*/, 0);
        lv = Count;
        v102 = j_il2cpp_value_box_0(int_TypeInfo, &lv, v99, v100, v101);
        v106 = BalanceConfig_TypeInfo;
        v107 = (Il2CppObject *)v102;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v106 = BalanceConfig_TypeInfo;
        }
        m_CancellationTokenSource = v106->static_fields->MaxBlackListNum;
        v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v103, v104, v105);
        v109 = System_String__Format_63499156(v98, v107, v108, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_2936/*"BLACKLIST_REGIST_MAX_TITLE"*/,
                                                                                       0);
        if ( !Instance )
          goto LABEL_127;
        *(_QWORD *)&setCondensedScale.fields.hasValue = 0;
        setCondensedScale.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)friendOperationItemListViewManager,
          v109,
          0,
          1,
          0,
          -1.0,
          1,
          setCondensedScale,
          0);
LABEL_123:
        v38 = this->fields.friendOperationItemListViewManager;
        v39 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v40 = Method_BlacklistRootComponent_OnSelectFriendItem__;
        break;
      case 10:
        v90 = (Il2CppObject *)sub_1C2D6DC(BlacklistRootComponent___c__DisplayClass31_2_TypeInfo);
        System_Object___ctor(v90, 0);
        if ( !v90 )
          goto LABEL_127;
        v90[1].monitor = this;
        sub_1C2D434(&v90[1].monitor);
        friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                       friendOperationItemListViewManager,
                                                                                       this->fields.selectItemNum,
                                                                                       0);
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v91 = friendOperationItemListViewManager->fields.dropList;
        if ( !v91 )
          goto LABEL_127;
        v90[1].klass = (Il2CppClass *)v91->fields._items;
        v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v93 = *(System_String_o **)&v91->fields._size;
        v94 = (CommonUI_o *)v92;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_2934/*"BLACKLIST_REGIST_CANCEL"*/, 0);
        v96 = System_String__Concat_63496112(v93, (System_String_o *)StringLiteral_43/*"\n"*/, v95, 0);
        v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v97,
          v90,
          Method_BlacklistRootComponent___c__DisplayClass31_2__OnSelectFriendItem_b__3__,
          0);
        if ( !v94 )
          goto LABEL_127;
        CommonUI__OpenConfirmDialog_31167644(v94, (System_String_o *)StringLiteral_1/*""*/, v96, 1, v97, 0, 0, 0, 0, 0);
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
        v23 = skillInfoList->m_Items[v21];
        if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
        {
          v24 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v24 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v25 = (System_Reflection_MethodBase_o *)sub_1C2D474(v24, v24[4]);
          OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)friendOperationItemListViewManager,
                                                                                         v23->fields.id,
                                                                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          SkillEntity__getSkillMessageInfo(
            (SkillEntity_o *)friendOperationItemListViewManager,
            &name,
            &detail,
            v23->fields.lv,
            0);
          v26 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
          lv = v23->fields.lv;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v28, v29, v30);
          v32 = System_String__Format(v27, v31, 0);
          name = System_String__Concat_63496112(v26, (System_String_o *)StringLiteral_113/*" "*/, v32, 0);
          friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !friendOperationItemListViewManager )
            goto LABEL_127;
          v34 = detail;
          v33 = name;
          v35 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_84:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)friendOperationItemListViewManager, v33, v35, v34, 1, 0, 0);
        }
        else
        {
          v41 = Method_BlacklistRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v41 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_OnSelectFriendItem__);
          v42 = (System_Reflection_MethodBase_o *)sub_1C2D474(v41, v41[4]);
          OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0, 0);
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
        v74 = friendOperationItemListViewManager;
        friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)friendOperationItemListViewManager->fields.dropList;
        if ( !friendOperationItemListViewManager )
          goto LABEL_127;
        v75 = friendOperationItemListViewManager->fields.seed;
        if ( !v75 )
          goto LABEL_127;
        if ( !LODWORD(v75->fields.m_CancellationTokenSource) )
          goto LABEL_128;
        v76 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)friendOperationItemListViewManager,
                (int32_t)v74->fields.SortObject,
                0,
                0,
                (int32_t)v75->fields.parent,
                0,
                0);
        if ( !v76 )
          goto LABEL_123;
        BlacklistRootComponent__SelectShowServant(this, v76, v77);
        return;
    }
LABEL_124:
    v111 = v39;
    FriendOperationItemListViewManager_CallbackFunc___ctor(v39, (Il2CppObject *)this, (intptr_t)v40, 0);
    if ( v38 )
    {
      FriendOperationItemListViewManager__SetMode(v38, 2, v111, 0);
      return;
    }
LABEL_127:
    sub_1C2D6EC(friendOperationItemListViewManager, *(_QWORD *)&kind);
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
  *(_QWORD *)&v122.fields.currentCryptoKey = v13;
  *(_QWORD *)&v122.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v122, 0) < 1 )
  {
LABEL_41:
    v36 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v36 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_OnSelectFriendItem__);
    v37 = (System_Reflection_MethodBase_o *)sub_1C2D474(v36, v36[4]);
    OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0, 0);
    v38 = this->fields.friendOperationItemListViewManager;
    v39 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    v40 = Method_BlacklistRootComponent_OnSelectFriendItem__;
    goto LABEL_124;
  }
  v14 = Method_BlacklistRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_OnSelectFriendItem__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
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

  if ( (byte_4C221CE & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_EndShowServant__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v6, (Il2CppObject *)this, Method_BlacklistRootComponent_EndShowServant__, 0);
  if ( !Instance )
    sub_1C2D6EC(v7, v8);
  CommonUI__OpenServantStatusDialog_31180036((CommonUI_o *)Instance, 5, servantLeaderInfo, v6, 0);
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

  if ( (byte_4C221CA & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_EndShowServantEquip__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BlacklistRootComponent_EndShowServantEquip__,
    0);
  if ( !Instance )
    sub_1C2D6EC(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_31183144((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
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
  if ( (byte_4C221DB & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    this = (BlacklistRootComponent_o *)sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    byte_4C221DB = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22362/*"ok"*/, 0) )
  {
    BlacklistRootComponent__modeChange(v4, 0, v5);
    return;
  }
  friendOperationItemListViewManager = v4->fields.friendOperationItemListViewManager;
  v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)v4,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
LABEL_8:
    sub_1C2D6EC(this, result);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_4(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C221DE & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C221DE = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C2D6EC(v5, v6);
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
  if ( (byte_4C221DC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BlacklistRootComponent_o *)sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    byte_4C221DC = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22362/*"ok"*/, 0) )
    BlacklistRootComponent__modeChange(v4, 1, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_6__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C2D6EC(this, result);
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v7, 0);
}


void BlacklistRootComponent___OnSelectFriendItem_b__31_6(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *friendOperationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C221DD & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C221DD = 1;
  }
  friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BlacklistRootComponent_OnSelectFriendItem__,
    0);
  if ( !friendOperationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  FriendOperationItemListViewManager__SetMode(friendOperationItemListViewManager, 2, v4, 0);
}


void BlacklistRootComponent___afterMainMenuBar_b__39_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *gameOptionComp; // x0
  UnityEngine_GameObject_o *blackListObj; // x20
  bool activeSelf; // w0
  UnityEngine_GameObject_o *optionTopObj; // x20
  bool v7; // w0

  if ( (byte_4C221DF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C221DF = 1;
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
    sub_1C2D6EC(gameOptionComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameOptionComp, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0);
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
  if ( (byte_4C221DA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&System_Collections_ICollection_TypeInfo);
    sub_1C2D490(&System_Collections_IList_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    this = (BlacklistRootComponent_o *)sub_1C2D490(&StringLiteral_19664/*"friendOfferList"*/);
    byte_4C221DA = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_37;
  if ( System_String__Equals_63493168(v3, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
    goto LABEL_35;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BlacklistRootComponent_o *)JsonManager__getDictionary(v3, 0);
  if ( !this )
    goto LABEL_37;
  v6 = this;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_19664/*"friendOfferList"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || (this = (BlacklistRootComponent_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                             (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                             (Il2CppObject *)StringLiteral_19664/*"friendOfferList"*/,
                                             &value,
                                             (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_35:
    BlacklistRootComponent__modeChange(v4, 0, v5);
    this = (BlacklistRootComponent_o *)v4->fields.myRoomFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0);
      return;
    }
LABEL_37:
    sub_1C2D6EC(this, result);
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
  v10 = sub_1C2D5CC(value, System_Collections_IList_TypeInfo);
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
      v15 = sub_1C7DCA8(v10, System_Collections_ICollection_TypeInfo, 1);
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
          v22 = sub_1C7DCA8(v12, System_Collections_IList_TypeInfo, 0);
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
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size] = (int64_t)result;
        }
        if ( ++v17 == (_DWORD)v9 )
          goto LABEL_35;
      }
      sub_1C2D9AC(this);
      goto LABEL_39;
    }
    goto LABEL_35;
  }
LABEL_39:
  v26 = (BlacklistRootComponent_o *)sub_1C2D9AC(v9);
  BlacklistRootComponent___OnSelectFriendItem_b__31_2(v26, v27, v28);
}


void BlacklistRootComponent___fadeIn_b__23_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blackListObj; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v5; // x9

  if ( (byte_4C221D8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    sub_1C2D490(&StringLiteral_7245/*"HIDE_END"*/);
    byte_4C221D8 = 1;
  }
  blackListObj = this->fields.blackListObj;
  if ( !blackListObj
    || (blackListObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(blackListObj, 0),
        (myRoomFsm = this->fields.myRoomFsm) == 0) )
  {
    sub_1C2D6EC(blackListObj, method);
  }
  v5 = &StringLiteral_6973/*"GO_NEXT"*/;
  if ( ((unsigned __int8)blackListObj & 1) == 0 )
    v5 = &StringLiteral_7245/*"HIDE_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v5, 0);
}


void BlacklistRootComponent___fadeOut_b__24_0(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C221D9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C221D9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0);
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

  if ( (byte_4C221D5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__afterMainMenuBar_b__39_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
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
  if ( (byte_4C221C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent__blackListSetup_b__26_0__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_BlacklistTopRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&StringLiteral_2933/*"BLACKLIST_HELP_TEXT"*/);
    this = (BlacklistRootComponent_o *)sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C221C8 = 1;
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
  this = (BlacklistRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BLACKLIST_HELP_TEXT"*/, 0);
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
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_BlacklistRootComponent__blackListSetup_b__26_0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (BlacklistRootComponent_o *)NetworkManager__getRequest_object_(
                                           v9,
                                           (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BlacklistTopRequest___);
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
    sub_1C2D6EC(this, method);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0);
}


void BlacklistRootComponent__clickBlacklistTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C221D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_clickBlacklistTabButton__);
    byte_4C221D2 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickBlacklistTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickBlacklistTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_clickBlacklistTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BlacklistRootComponent__modeChange(this, 1, v5);
}


void BlacklistRootComponent__clickFriendHistoryTabButton(BlacklistRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C221D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
    byte_4C221D1 = 1;
  }
  v3 = Method_BlacklistRootComponent_clickFriendHistoryTabButton__;
  if ( (*((_BYTE *)Method_BlacklistRootComponent_clickFriendHistoryTabButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BlacklistRootComponent_clickFriendHistoryTabButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C221C6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent__fadeIn_b__23_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeIn_b__23_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C221C7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent__fadeOut_b__24_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlacklistRootComponent__fadeOut_b__24_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C221D3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent_onMoveEnd__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17586/*"btn_txt_requestlist_off"*/);
    sub_1C2D490(&StringLiteral_17436/*"btn_bg_08"*/);
    sub_1C2D490(&StringLiteral_17538/*"btn_txt_blacklist_off"*/);
    sub_1C2D490(&StringLiteral_17437/*"btn_bg_09"*/);
    sub_1C2D490(&StringLiteral_2930/*"BLACKLIST_EXPLANATION_1"*/);
    sub_1C2D490(&StringLiteral_17587/*"btn_txt_requestlist_on"*/);
    sub_1C2D490(&StringLiteral_17539/*"btn_txt_blacklist_on"*/);
    sub_1C2D490(&StringLiteral_2931/*"BLACKLIST_EXPLANATION_2"*/);
    byte_4C221D3 = 1;
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
                                                                                           (System_String_o *)StringLiteral_2931/*"BLACKLIST_EXPLANATION_2"*/,
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
                  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(v13, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v12 )
                  {
                    FriendOperationItemListViewManager__SetMode_32565652(v12, 1, v13, 0);
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
                              (System_String_o *)StringLiteral_17586/*"btn_txt_requestlist_off"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17436/*"btn_bg_08"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17539/*"btn_txt_blacklist_on"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17437/*"btn_bg_09"*/;
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
    sub_1C2D6EC(friendOperationItemListViewManager, *(_QWORD *)&mode);
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
                                                                                           (System_String_o *)StringLiteral_2930/*"BLACKLIST_EXPLANATION_1"*/,
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
                  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlacklistRootComponent_onMoveEnd__, 0);
                  if ( v8 )
                  {
                    FriendOperationItemListViewManager__SetMode_32565652(v8, 1, v9, 0);
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
                              (System_String_o *)StringLiteral_17587/*"btn_txt_requestlist_on"*/,
                              0);
                            friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendHistoryTabButtonBackSpr;
                            if ( friendOperationItemListViewManager )
                            {
                              UISprite__set_spriteName(
                                (UISprite_o *)friendOperationItemListViewManager,
                                (System_String_o *)StringLiteral_17437/*"btn_bg_09"*/,
                                0);
                              friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonTitleSpr;
                              if ( friendOperationItemListViewManager )
                              {
                                UISprite__set_spriteName(
                                  (UISprite_o *)friendOperationItemListViewManager,
                                  (System_String_o *)StringLiteral_17538/*"btn_txt_blacklist_off"*/,
                                  0);
                                friendOperationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.blackLisTabButtonBackSpr;
                                if ( friendOperationItemListViewManager )
                                {
                                  v10 = &StringLiteral_17436/*"btn_bg_08"*/;
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

  if ( (byte_4C221C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&BlacklistRootComponent_TypeInfo);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C221C9 = 1;
  }
  if ( this->fields.listMode <= 1u )
  {
    friendOperationItemListViewManager = this->fields.friendOperationItemListViewManager;
    v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C2D6EC(v5, method);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BalanceConfig_c *v15; // x8
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int32_t MaxBlackListNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t Count; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C221D4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_6561/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4C221D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
  if ( !Instance )
    goto LABEL_12;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  registCntLabel = this->fields.registCntLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6561/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !datalist )
    goto LABEL_12;
  v7 = (System_String_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            datalist,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &Count, v8, v9, v10);
  v15 = BalanceConfig_TypeInfo;
  v16 = (Il2CppObject *)v11;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  MaxBlackListNum = v15->static_fields->MaxBlackListNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxBlackListNum, v12, v13, v14);
  Instance = (DataManager_o *)System_String__Format_63499156(v7, v16, v17, 0);
  if ( !registCntLabel )
LABEL_12:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C221E0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__);
    sub_1C2D490(&BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
    byte_4C221E0 = 1;
  }
  v5 = sub_1C2D6DC(BlacklistRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        v6 = sub_1C2D434(v5 + 24),
        *(_BYTE *)(v5 + 16) = isDecide,
        (_4__this = this->fields.__4__this) == 0)
    || (blackListRegistDlg = (CommonConfirmDialog_o *)_4__this->fields.blackListRegistDlg,
        v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BlacklistRootComponent___c__DisplayClass31_1__OnSelectFriendItem_b__1__,
          0),
        !blackListRegistDlg) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonConfirmDialog__Close_31143760(blackListRegistDlg, v10, 0);
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
  if ( (byte_4C221E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlacklistRootComponent_OnSelectFriendItem__);
    sub_1C2D490(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__);
    sub_1C2D490(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C221E1 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  if ( v2->fields.isDecide )
  {
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_2__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (BlacklistRootComponent___c__DisplayClass31_1_o *)NetworkManager__getRequest_object_(
                                                               v5,
                                                               (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BlacklistRegistRequest___);
    v6 = v2->fields.CS___8__locals1;
    if ( v6 && this )
    {
      BlacklistRegistRequest__beginRequest((BlacklistRegistRequest_o *)this, v6->fields.otherUserId, 0);
      return;
    }
LABEL_13:
    sub_1C2D6EC(this, method);
  }
  v7 = (Il2CppObject *)CS___8__locals1->fields.__4__this;
  if ( !v7 )
    goto LABEL_13;
  monitor = (FriendOperationItemListViewManager_o *)v7[3].monitor;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4C221E2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__);
    sub_1C2D490(&Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__);
    sub_1C2D490(&Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C221E2 = 1;
  }
  if ( isDecide )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      _4__this,
      Method_BlacklistRootComponent__OnSelectFriendItem_b__31_5__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v6,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BlacklistRemoveRequest___);
    if ( Request_object )
    {
      BlacklistRemoveRequest__beginRequest((BlacklistRemoveRequest_o *)Request_object, this->fields.otherUserId, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Request_object, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (Il2CppObject *)this->fields.__4__this;
  v11 = (CommonUI_o *)Instance;
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, v10, Method_BlacklistRootComponent__OnSelectFriendItem_b__31_4__, 0);
  if ( !v11 )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_31167972(v11, v12, 0);
}