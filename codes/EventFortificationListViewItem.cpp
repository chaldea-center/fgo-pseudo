void EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  IconLabelInfo_o *v14; // x21
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Master_object; // x0
  __int64 v17; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  struct ServantEntity_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v21; // x28
  ServantLimitMaster_o *v22; // x25
  __int64 v23; // x26
  __int64 v24; // x27
  int32_t v25; // w0
  __int64 v26; // x8
  int32_t v27; // w24
  int32_t v28; // w8
  UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  __int64 v34; // x24
  bool v35; // w8
  const MethodInfo *v36; // x1
  bool v37; // w0
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  UserServantCollectionMaster_o *v40; // x22
  struct UserServantEntity_o *v41; // x8
  int64_t v42; // x23
  __int64 v43; // x24
  __int64 v44; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v46; // x23
  __int64 v47; // x22
  unsigned int v48; // w24
  __int64 v49; // x25
  __int64 v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v51; // x27
  unsigned int v52; // w29
  __int64 v53; // x8
  unsigned int v54; // w9
  __int64 v55; // x8
  struct UserServantEntity_o *v56; // x9
  __int128 v57; // q0
  __int64 v58; // x28
  int v59; // w22
  BalanceConfig_c *v60; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v62; // x8
  __int64 rarity; // x22
  struct UserServantEntity_o *v64; // x8
  __int64 v65; // x21
  __int64 v66; // x22
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q0
  int64_t v69; // x8
  struct UserServantEntity_o *v70; // x8
  __int64 v71; // x22
  __int64 v72; // x23
  int32_t v73; // w0
  const MethodInfo *v74; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4DFEB75 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFEB75 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1CE66A4(&this->fields.iconLabelInfo1, v13);
  v14 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo2 = v14;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4(&this->fields.iconLabelInfo2, v14);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  Master_object = sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  if ( !userServantEntity )
    goto LABEL_93;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  Master_object = sub_1CE66A4(&this->fields.servantEntity, ServantEntity);
  if ( !this->fields.servantEntity )
    goto LABEL_93;
  this->fields.classId = this->fields.servantEntity->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v20 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_93;
  v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v22 = (ServantLimitMaster_o *)Master_object;
  v24 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v82.fields.currentCryptoKey = v24;
  *(_QWORD *)&v82.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v82, 0);
  v26 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v83.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  v27 = v25;
  *(_QWORD *)&v83.fields.currentCryptoKey = v26;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v83, 0);
  if ( !v22 )
    goto LABEL_93;
  Master_object = (__int64)ServantLimitMaster__GetEntity(v22, v27, Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  v28 = *(_DWORD *)(Master_object + 24);
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.isParty = 0;
  this->fields.rarity = v28;
  if ( !Master_object )
    goto LABEL_93;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  v29 = this->fields.userServantEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v29 )
    goto LABEL_93;
  Master_object = UserServantEntity__IsChoice(v29, 0);
  v30 = this->fields.userServantEntity;
  this->fields.isChoice = Master_object & 1;
  if ( !v30 )
    goto LABEL_93;
  v31 = *(_OWORD *)&v30->fields.userId.fields.fakeValue;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v30->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v81;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v80, 0) == 0;
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_93;
  v32 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
  v34 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v79.fields.fakeValue = v33;
  v35 = v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v79, 0) && !this->fields.isNpc;
  this->fields.isPush = v35;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1CE66A4(&this->fields.targetFortificationWorkItem, targetFortificationWorkItem);
  this->fields.svtTypeSetInMaster = -1;
  v37 = EventFortificationListViewItem__CheckFortificationAppointment(this, v36);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v37;
  sub_1CE66A4(&this->fields.setupInfo, setupInfo);
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_93;
  Master_object = UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_29;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Master_object = TutorialFlag__Get_41569468(126, 0);
  if ( (Master_object & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v70 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v72 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
  v71 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v72;
  *(_QWORD *)&v86.fields.fakeValue = v71;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v86, 0);
  if ( EventFortificationListViewItem__isNotSelect(this, v73, v74) )
    goto LABEL_30;
LABEL_31:
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v38 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v39 = *(_OWORD *)&v38->fields.userId.fields.fakeValue;
  v40 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v38->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v78 = v81;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v78, 0);
  v41 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v42 = Master_object;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v44;
  *(_QWORD *)&v84.fields.fakeValue = v43;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v84, 0);
  if ( !v40 )
    goto LABEL_93;
  Master_object = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v40, v42, Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Master_object,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_93;
  Master_object = (__int64)UserDeckMaster__getDeckList(
                             (UserDeckMaster_o *)MasterData_object,
                             *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                             0);
  if ( !Master_object )
    goto LABEL_93;
  v46 = *(_QWORD *)(Master_object + 24);
  v47 = Master_object;
  if ( (int)v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      v49 = *(_QWORD *)(v47 + 8LL * (int)v48 + 32);
      if ( !v49 )
        break;
      v50 = *(_QWORD *)(v49 + 48);
      if ( !v50 )
        break;
      v51 = v21;
      v52 = 0;
      while ( 1 )
      {
        v53 = *(_QWORD *)(v50 + 16);
        if ( !v53 )
          goto LABEL_93;
        v54 = *(_DWORD *)(v53 + 24);
        if ( (int)v52 >= (int)v54 )
          break;
        if ( v52 >= v54 )
          goto LABEL_67;
        v55 = *(_QWORD *)(v53 + 8LL * (int)v52 + 32);
        if ( !v55 )
          goto LABEL_93;
        v56 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_93;
        v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
        v58 = *(_QWORD *)(v55 + 24);
        *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v81.fields.fakeValue = v57;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v77 = v81;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v77, 0);
        if ( v58 == Master_object )
        {
          v21 = v51;
          this->fields.isParty = 1;
          goto LABEL_69;
        }
        v50 = *(_QWORD *)(v49 + 48);
        ++v52;
        if ( !v50 )
          goto LABEL_93;
      }
      v21 = v51;
      if ( this->fields.isParty )
        goto LABEL_69;
      if ( ++v48 == (_DWORD)v46 )
        goto LABEL_69;
      if ( v48 >= *(_DWORD *)(v47 + 24) )
LABEL_67:
        sub_1CE6960(Master_object);
    }
LABEL_93:
    sub_1CE6958(Master_object, v17);
  }
LABEL_69:
  Master_object = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v59 = *(_DWORD *)(Master_object + 420);
  v60 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
    Master_object = (__int64)*p_userServantEntity;
  }
  static_fields = v60->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v59;
  if ( !Master_object )
    goto LABEL_93;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_93;
  v62 = *(int *)(Master_object + 52);
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.priority = v62;
  this->fields.sortValue1B = v62;
  if ( !Master_object )
    goto LABEL_93;
  rarity = (unsigned int)this->fields.rarity;
  Master_object = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  v64 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  this->fields.sortValue2 = ((__int64)*(int *)(Master_object + 208) << 16) | (rarity << 48) | v64->fields.lv;
  v66 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( !(*v21)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v21);
  *(_QWORD *)&v85.fields.currentCryptoKey = v66;
  *(_QWORD *)&v85.fields.fakeValue = v65;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v85, 0);
  v67 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v67 )
    goto LABEL_93;
  v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v68;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v76 = v81;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v76, 0);
  Master_object = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v69;
  this->fields.amountSortValue = -1;
  if ( !Master_object )
    goto LABEL_93;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
  Master_object = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_93;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


bool EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x0
  struct System_String_o *TeamName; // x0
  struct System_String_o *Name; // x0
  bool v9; // w26
  EventFortificationMaster_o *v10; // x21
  char v11; // w8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v16; // x25
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x24
  _BOOL8 v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_String_o *v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  struct System_String_o *v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  struct System_String_o **p_myDetailName; // [xsp+0h] [xbp-C0h]
  struct System_String_o **p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v40; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v41; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4DFEB7B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_1CE6700(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__);
    sub_1CE6700(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEB7B = 1;
  }
  userEventFortificationList = 0;
  memset(&v43, 0, sizeof(v43));
  v41 = 0;
  entity = 0;
  v40 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0);
      this->fields.myTeamName = TeamName;
      sub_1CE66A4(&this->fields.myTeamName, TeamName);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0);
        this->fields.myDetailName = Name;
        sub_1CE66A4(&this->fields.myDetailName, Name);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          v9 = 1;
          this->fields.myWorkType = EventFortificationWorkItem__get_WorkType(
                                      (EventFortificationWorkItem_o *)Instance,
                                      0);
          this->fields.svtTypeSetInMaster = 1;
          return v9;
        }
      }
    }
LABEL_35:
    sub_1CE6958(Instance, v4);
  }
  v10 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = &this->fields.myDetailName;
  p_myTeamName = &this->fields.myTeamName;
  v11 = 0;
  v43 = v39;
LABEL_16:
  v9 = v11;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1CE6958(v12, v13);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v43.fields._current[2].monitor;
    v16 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__,
      0);
    v17 = System_Linq_Enumerable__FirstOrDefault_object__52613440(
            monitor,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v19 = v17;
    if ( v17 )
    {
      if ( !MasterData_object )
        sub_1CE6958(v17, v18);
      v20 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v17[1].klass,
              0);
      if ( v20 )
      {
        if ( !v10 )
          sub_1CE6958(v20, v21);
        v22 = EventFortificationMaster__TryGetEntity(v10, &v41, this->fields.eventId, HIDWORD(current[1].monitor), 0);
        if ( v22 )
        {
          if ( !v41 )
            sub_1CE6958(v22, v23);
          v24 = v41->fields.name;
          *p_myTeamName = v24;
          v25 = sub_1CE66A4(p_myTeamName, v24);
          if ( !entity )
            sub_1CE6958(v25, v26);
          v27 = entity->fields.name;
          *p_myDetailName = v27;
          v28 = sub_1CE66A4(p_myDetailName, v27);
          if ( !v41 )
            sub_1CE6958(v28, v29);
          this->fields.myWorkType = v41->fields.workType;
          v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v30 )
            sub_1CE6958(0, v31);
          v32 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v30,
                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v32 )
            sub_1CE6958(0, v33);
          v34 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v32,
                  &v40,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v19[1].klass,
                  0);
          v11 = 1;
          if ( v34 )
          {
            if ( !v40 )
              sub_1CE6958(v34, v35);
            this->fields.svtTypeSetInMaster = v40->fields.type;
            v11 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v9;
}


bool EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v10; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4DFEB79 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEB79 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1CE6958(this, sort);
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( bonusKindId == bonusKind2Id )
      {
LABEL_12:
        switch ( bonusKind2 )
        {
          case 0u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_36;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (EventFortificationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                         0);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_23;
            if ( !EntitiesByGroupId )
              goto LABEL_36;
            if ( EntitiesByGroupId->fields._size < 2 )
            {
LABEL_23:
              result = 0;
            }
            else
            {
              v10 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__,
                0);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_36;
            v12 = (EventCampaignMaster_o *)this;
            v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v14;
            *(_QWORD *)&v16.fields.fakeValue = v13;
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                         v16,
                                                         0);
            if ( !v12 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v12, (int32_t)this, v4->fields.bonusKindId, 0);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal((UserServantEntity_o *)this, v4->fields.setupInfo, bonusKindId, 0, 0) )
              return 1;
            goto LABEL_23;
          case 7u:
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v15 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v15[5],
                     v4->fields.bonusKindId,
                     0);
          default:
            goto LABEL_23;
        }
        return result;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    goto LABEL_12;
  }
  return result;
}


void EventFortificationListViewItem__InitFortificationItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, method);
}


bool EventFortificationListViewItem__IsMatchServantFilter(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 v14; // w8

  if ( (byte_4DFEB78 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1CE6700(&ServantEventBonusFilterController_TypeInfo);
    byte_4DFEB78 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_40;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_40;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_1CE6958(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    sub_1CE6960(ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v14 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v14;
}


void EventFortificationListViewItem__ModifyChoiceItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  EventFortificationListViewItem__UpdateServantInfoAndSortInfo(this, v4);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v5);
  EventFortificationListViewItem__ModifyLockItem(this, v6);
  EventFortificationListViewItem__ModifyChoiceItem(this, v7);
  EventFortificationListViewItem__ModifyPushItem(this, v8);
}


void EventFortificationListViewItem__ModifyLockItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void EventFortificationListViewItem__ModifyPushItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  bool v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4DFEB76 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFEB76 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1CE6958(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v9, 0)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
}


bool EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t *p_sortValue0; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int64_t IsBaseSvt; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v12; // w9
  __int64 rarity; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x8
  int64_t v21; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v25; // w1
  int64_t v26; // x20
  IconLabelInfo_o *v27; // x21
  int32_t v28; // w3
  int32_t v29; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v35; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  const MethodInfo *v40; // x2
  __int64 v41; // x20
  __int64 v42; // x8
  int32_t v43; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4DFEB77 & 1) == 0 )
  {
    sub_1CE6700(&EventFortificationListViewManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFEB77 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = -1;
  this->fields.sortValue0 = 0;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v10), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v12 = !this->fields.isChoice;
  else
    v12 = this->fields.isChoice;
  if ( v12 )
  {
    if ( !sort )
      goto LABEL_83;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10;
  }
  else if ( !sort )
  {
    goto LABEL_83;
  }
  if ( sort->fields.isSmartSort )
  {
    if ( isChoice && sort->fields.isChoiceSort )
      this->fields.sortValue0B = 10;
    if ( this->fields.isCanNotSelect )
      *p_sortValue0 = -30;
  }
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0),
        IsBaseSvt = (int64_t)this->fields.userServantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !IsBaseSvt)
    || (rarity = (unsigned int)this->fields.rarity,
        (IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0)) == 0)
    || (userServantEntity = this->fields.userServantEntity) == 0 )
  {
LABEL_83:
    sub_1CE6958(IsBaseSvt, v9);
  }
  this->fields.sortValue2 = ((__int64)*(int *)(IsBaseSvt + 208) << 16) | (rarity << 48) | userServantEntity->fields.lv;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v16;
  *(_QWORD *)&v48.fields.fakeValue = v15;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v48, 0);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v17 = this->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_83;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v45 = v46;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v45, 0);
      v19 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v19 )
        goto LABEL_83;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v19->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_65;
    case 2:
      v20 = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_78;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v21 = *(int *)(IsBaseSvt + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v21;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_83;
      IconLabelInfo__Set_42060700(iconLabelInfo1, 2, v21, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_82;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 436);
      UserServantEntity__getTreasureDeviceInfo_44310656((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = tdMaxLv[0];
      v25 = 33;
      goto LABEL_64;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v26 = *(int *)(IsBaseSvt + 412);
      v27 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v26;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v27 )
        goto LABEL_83;
      v28 = IsBaseSvt;
      v29 = 3;
      goto LABEL_49;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v26 = *(int *)(IsBaseSvt + 408);
      v27 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v26;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v27 )
        goto LABEL_83;
      v28 = IsBaseSvt;
      v29 = 5;
LABEL_49:
      IconLabelInfo__Set_42060700(v27, v29, v26, v28, 0, 0, 0, 0, 0, 0);
      goto LABEL_65;
    case 7:
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_83;
      cost = servantEntity->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_65;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v20 = -this->fields.priority;
      goto LABEL_78;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.friendshipMax;
      v25 = 32;
      goto LABEL_64;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_75;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = EventFortificationListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewManager_TypeInfo )
          v35 = sort->fields.manager;
        else
          v35 = 0;
      }
      else
      {
        v35 = 0;
      }
      v37 = this->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_83;
      v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v39;
      *(_QWORD *)&v49.fields.fakeValue = v38;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v49, 0);
      if ( !v35 )
        goto LABEL_83;
      amountSortValue = EventFortificationListViewManager__GetAmountSortValue(
                          (EventFortificationListViewManager_o *)v35,
                          IsBaseSvt,
                          v40);
      this->fields.amountSortValue = amountSortValue;
LABEL_75:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v41 = (unsigned int)this->fields.rarity;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_83;
      v42 = *(int *)(IsBaseSvt + 208);
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v20 = ((v41 << 32) + (amountSortValue << 48)) | v42;
LABEL_78:
      this->fields.sortValue1 = v20;
      if ( !IsBaseSvt )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_80;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v25 = 44;
      goto LABEL_64;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v25 = 45;
LABEL_64:
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)IsBaseSvt, v25, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_65:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_80:
      v43 = *(_DWORD *)(IsBaseSvt + 400);
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_83;
      IconLabelInfo__Set_42060700(iconLabelInfo2, 2, v43, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_82:
      LOBYTE(IsBaseSvt) = 1;
      break;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void EventFortificationListViewItem__SetUserServantEntity(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  EventFortificationListViewItem__UpdateServantInfoAndSortInfo(this, v4);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v5);
}


bool EventFortificationListViewItem__SwapChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool EventFortificationListViewItem__SwapLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


void EventFortificationListViewItem__UpdateServantInfoAndSortInfo(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 userServantEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x20
  struct ServantEntity_o *v6; // x8
  ServantLimitMaster_o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  struct UserServantEntity_o *v10; // x8
  int32_t v11; // w21
  int64_t v12; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4DFEB7D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEB7D = 1;
  }
  userServantEntity = (__int64)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_20;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  userServantEntity = sub_1CE66A4(&this->fields.servantEntity, ServantEntity);
  if ( !this->fields.servantEntity )
    goto LABEL_20;
  this->fields.classId = this->fields.servantEntity->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v6 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_20;
  v7 = (ServantLimitMaster_o *)userServantEntity;
  v9 = *(_QWORD *)&v6->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v6->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  v10 = this->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_20;
  v11 = userServantEntity;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v10->fields.limitCount, 0);
  if ( !v7 )
    goto LABEL_20;
  userServantEntity = (__int64)ServantLimitMaster__GetEntity(v7, v11, userServantEntity, 0);
  if ( !userServantEntity )
    goto LABEL_20;
  this->fields.rarity = *(_DWORD *)(userServantEntity + 24);
  userServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)userServantEntity,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)userServantEntity,
                                 this->fields.classId,
                                 (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userServantEntity
    || (v12 = *(int *)(userServantEntity + 52),
        userServantEntity = (__int64)this->fields.userServantEntity,
        this->fields.priority = v12,
        this->fields.sortValue1B = v12,
        !userServantEntity)
    || (rarity = (unsigned int)this->fields.rarity,
        (userServantEntity = (__int64)UserServantEntity__get_BaseServantEntity(
                                        (UserServantEntity_o *)userServantEntity,
                                        0)) == 0)
    || (v14 = this->fields.userServantEntity) == 0 )
  {
LABEL_20:
    sub_1CE6958(userServantEntity, method);
  }
  this->fields.sortValue2 = ((__int64)*(int *)(userServantEntity + 208) << 16) | (rarity << 48) | v14->fields.lv;
}


bool EventFortificationListViewItem___CheckFortificationAppointment_b__104_0(
        EventFortificationListViewItem_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t userSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4DFEB7F & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFEB7F = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0 )
    sub_1CE6958(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v9, 0);
}


bool EventFortificationListViewItem___GetIsEventUpValShow_b__44_0(
        EventFortificationListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  struct UserServantEntity_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4DFEB7E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFEB7E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v8 = Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = this->fields.userServantEntity;
  if ( !v11 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v11->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1CE6958(Master_object, v6);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


int32_t EventFortificationListViewItem__get_AddPoint(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationDataLogic__CalculationGetPoint(this->fields.userServantEntity, this->fields.eventId, v2);
}


int32_t EventFortificationListViewItem__get_EventId(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


IconLabelInfo_o *EventFortificationListViewItem__get_IconInfo1(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *EventFortificationListViewItem__get_IconInfo2(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool EventFortificationListViewItem__get_IsAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAppointment;
}


bool EventFortificationListViewItem__get_IsBaseSvt(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4DFEB7A & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFEB7A = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v7, 0);
}


bool EventFortificationListViewItem__get_IsCanNotLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool EventFortificationListViewItem__get_IsCanNotSelect(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool EventFortificationListViewItem__get_IsCanNotSelectPush(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_1CE6958(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0);
}


bool EventFortificationListViewItem__get_IsChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool EventFortificationListViewItem__get_IsDispChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool EventFortificationListViewItem__get_IsDispLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool EventFortificationListViewItem__get_IsHeroineSvt(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool EventFortificationListViewItem__get_IsLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool EventFortificationListViewItem__get_IsNpc(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool EventFortificationListViewItem__get_IsParty(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool EventFortificationListViewItem__get_IsPush(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool EventFortificationListViewItem__get_IsSwapChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool EventFortificationListViewItem__get_IsSwapLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


System_String_o *EventFortificationListViewItem__get_MyDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myDetailName;
}


System_String_o *EventFortificationListViewItem__get_MyTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myTeamName;
}


int32_t EventFortificationListViewItem__get_MyWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myWorkType;
}


ServantEntity_o *EventFortificationListViewItem__get_ServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t EventFortificationListViewItem__get_SvtTypeDataSetInMaster(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtTypeSetInMaster;
}


System_String_o *EventFortificationListViewItem__get_TargetDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1CE6958(0, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0);
}


System_String_o *EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1CE6958(0, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0);
}


int32_t EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1CE6958(0, method);
  return EventFortificationWorkItem__get_WorkType(targetFortificationWorkItem, 0);
}


UserServantEntity_o *EventFortificationListViewItem__get_UserServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


bool EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  Il2CppClass **v15; // x0
  System_Func_object__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  EventFortificationSvtMaster_o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  bool v22; // w21
  Il2CppObject *v23; // x22
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w23
  __int64 FortificationIdx; // x0
  __int64 v27; // x1
  struct EventFortificationWorkItem_o *v28; // x8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4DFEB7C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_1CE6700(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1CE6700(&Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__);
    sub_1CE6700(&EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
    byte_4DFEB7C = 1;
  }
  eventFortificationSvtList = 0;
  memset(&v30, 0, sizeof(v30));
  v5 = sub_1CE694C(EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0) )
    return 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1CE6958(v9, v10);
    if ( !HIDWORD(v30.fields._current[1].monitor) )
    {
      if ( !v8 )
        sub_1CE6958(v9, v10);
      items = v8->fields._items;
      v13 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1CE6958(v9, v10);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          current,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v15[4] = (Il2CppClass *)current;
        sub_1CE66A4(v15 + 4, current);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v17 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v18,
                                                     (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1CE6958(Master_object, v7);
  v19 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    v22 = v20;
    if ( !v20 )
      break;
    v23 = v30.fields._current;
    if ( !v30.fields._current )
      sub_1CE6958(v20, v21);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1CE6958(0, v21);
    klass_high = HIDWORD(v30.fields._current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v28 = this->fields.targetFortificationWorkItem;
      if ( !v28 )
        sub_1CE6958(FortificationIdx, v27);
      if ( LODWORD(v23[1].monitor) == v28->fields.position )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return !v22 && SLODWORD(v19->fields._MasterName_k__BackingField) > 0;
}


void EventFortificationListViewItem__set_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void EventFortificationListViewItem___c__DisplayClass105_0___ctor(
        EventFortificationListViewItem___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationListViewItem___c__DisplayClass105_0___isNotSelect_b__0(
        EventFortificationListViewItem___c__DisplayClass105_0_o *this,
        EventFortificationSvtEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.svtId == this->fields.svtId;
}