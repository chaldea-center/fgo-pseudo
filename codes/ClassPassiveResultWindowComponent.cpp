void ClassPassiveResultWindowComponent___ctor(ClassPassiveResultWindowComponent_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_5974B9E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5974B9E = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.skillChangeInfoAftPosY = -70.0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassPassiveResultWindowComponent__CloseToNext(
        ClassPassiveResultWindowComponent_o *this,
        System_Action_o *callback,
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
  System_Action_o *v14; // x20

  if ( (byte_5974B9A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__);
    sub_2213A60(&ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
    byte_5974B9A = 1;
  }
  v5 = sub_2213CCC(ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


ServantPassiveSkillEntity_o *ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v5; // x1
  UserServantCollectionMaster_o *v6; // x20
  int64_t UserId; // x21
  int32_t FriendShipRank; // w20
  Il2CppObject *v9; // x21
  int32_t SvtId; // w22
  int64_t v11; // x0
  int32_t lv; // w23
  int64_t v13; // x24
  int32_t LimitCount; // w25

  if ( (byte_5974B9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974B9D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, uesrSvtEnt);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_10;
  v6 = Master_object;
  UserId = UserServantEntity__getUserId(uesrSvtEnt, 0);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  if ( !v6 )
    goto LABEL_10;
  Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                     v6,
                                                     UserId,
                                                     (int32_t)Master_object,
                                                     0);
  if ( !Master_object )
    goto LABEL_10;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Master_object, 0);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v11 = UserServantEntity__getUserId(uesrSvtEnt, 0);
  lv = uesrSvtEnt->fields.lv;
  v13 = v11;
  LimitCount = UserServantEntity__getLimitCount(uesrSvtEnt, 0);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v9 )
LABEL_10:
    sub_2213CDC(Master_object, v5);
  return ServantPassiveSkillMaster__getUseEntity(
           (ServantPassiveSkillMaster_o *)v9,
           SvtId,
           8,
           v13,
           lv,
           LimitCount,
           (int32_t)Master_object,
           FriendShipRank,
           -1,
           1,
           0,
           0,
           0);
}


System_Int32_array *ClassPassiveResultWindowComponent__GetClassPassiveIds(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  int v4; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  System_Int32_array *monitor; // x20
  Il2CppObject *v9; // x21
  int32_t SvtId; // w22
  ServantLimitAddEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5974B9C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_5974B9C = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v12 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, uesrSvtEnt);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_19;
  v7 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  if ( !v7 )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v7,
                                                                  &entity,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  monitor = (System_Int32_array *)entity[10].monitor;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v9 )
    goto LABEL_19;
  if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v9, &v12, SvtId, (int32_t)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
    if ( !v12 )
      goto LABEL_19;
    if ( ServantLimitAddEntity__HasKeyOverwriteClassPassive(v12, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
      if ( v12 )
        return ServantLimitAddEntity__GetOverwriteClassPassive(v12, monitor, 0);
LABEL_19:
      sub_2213CDC(Master_object, v6);
    }
  }
  return monitor;
}


void ClassPassiveResultWindowComponent__GetPassiveSkillInfo(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        System_Int32_array **skillIds,
        System_String_array **skillNames,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  int v9; // w8
  System_Int32_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  Il2CppObject *Master_object; // x22
  const MethodInfo *v26; // x2
  System_Collections_ICollection_o *ClassPassiveIds; // x23
  SkillEntity_o *IsNullOrEmpty; // x0
  __int64 v29; // x1
  void *monitor; // x8
  __int64 v31; // x28
  __int64 v32; // x27
  unsigned __int64 v33; // x29
  int32_t v34; // w24
  System_Int32_array *v35; // x8
  System_String_array *v36; // x24
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x9
  ClassPassiveResultWindowComponent_o *SvtId; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  BalanceConfig_c *v47; // x8
  int v48; // w23
  ServantPassiveSkillEntity_o *AddedSvtPassiveSkillEnt; // x0
  __int64 v50; // x1
  ServantPassiveSkillEntity_o *v51; // x21
  System_Int32_array *v52; // x23
  ClassPassiveResultWindowComponent___c_c *v53; // x0
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__15_0; // x24
  Il2CppObject *v56; // x25
  struct ClassPassiveResultWindowComponent___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  unsigned int v64; // w23
  System_Int32_array *v65; // x8
  System_String_array *v66; // x19
  SkillEntity_o *v67; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5974B9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Fill_int___);
    sub_2213A60(&Method_System_Array_Fill_string___);
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__);
    sub_2213A60(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_5974B9B = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  v9 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  v67 = 0;
  entity = 0;
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, uesrSvtEnt);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  *skillIds = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillIds, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_String_array *)sub_2213B20(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *skillNames = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillNames, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  System_Array__Fill_int_(*skillIds, 0, (const MethodInfo_39A89EC *)Method_System_Array_Fill_int___);
  System_Array__Fill_object_(
    (System_Object_array *)*skillNames,
    **(Il2CppObject ***)(qword_5984390 + 184),
    (const MethodInfo_39A8AE8 *)Method_System_Array_Fill_string___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  ClassPassiveIds = (System_Collections_ICollection_o *)ClassPassiveResultWindowComponent__GetClassPassiveIds(
                                                          (ClassPassiveResultWindowComponent_o *)Master_object,
                                                          uesrSvtEnt,
                                                          v26);
  IsNullOrEmpty = (SkillEntity_o *)BasicHelper__IsNullOrEmpty(ClassPassiveIds, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassPassiveIds )
      goto LABEL_41;
    monitor = ClassPassiveIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v31 = 8;
      v32 = 32;
      while ( 1 )
      {
        v33 = v31 - 8;
        if ( v31 - 8 >= (unsigned __int64)(unsigned int)monitor )
          break;
        if ( !Master_object )
          goto LABEL_41;
        v34 = *((_DWORD *)&ClassPassiveIds->klass + v31);
        IsNullOrEmpty = (SkillEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           v34,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v35 = *skillIds;
          if ( !*skillIds )
            goto LABEL_41;
          if ( v33 >= LODWORD(v35->max_length) )
            break;
          IsNullOrEmpty = (SkillEntity_o *)entity;
          *((_DWORD *)&v35->obj.klass + v31) = v34;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v36 = *skillNames;
          IsNullOrEmpty = (SkillEntity_o *)SkillEntity__getName(IsNullOrEmpty, 0);
          if ( !v36 )
            goto LABEL_41;
          if ( v33 >= LODWORD(v36->max_length) )
            break;
          *(Il2CppClass **)((char *)&v36->obj.klass + v32) = (Il2CppClass *)IsNullOrEmpty;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v36 + v32),
            (int32_t)IsNullOrEmpty,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
        }
        LODWORD(monitor) = ClassPassiveIds[1].monitor;
        v43 = v31 - 7;
        ++v31;
        v32 += 8;
        if ( v43 >= (int)monitor )
          goto LABEL_21;
      }
LABEL_42:
      sub_2213CE4(IsNullOrEmpty);
    }
  }
LABEL_21:
  if ( !uesrSvtEnt )
LABEL_41:
    sub_2213CDC(IsNullOrEmpty, v29);
  SvtId = (ClassPassiveResultWindowComponent_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v47 = BalanceConfig_TypeInfo;
  v48 = (int)SvtId;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v45);
    v47 = BalanceConfig_TypeInfo;
  }
  if ( v48 == v47->static_fields->ServantIdMashu1 )
  {
    AddedSvtPassiveSkillEnt = ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(SvtId, uesrSvtEnt, v46);
    if ( AddedSvtPassiveSkillEnt )
    {
      v51 = AddedSvtPassiveSkillEnt;
      v52 = *skillIds;
      v53 = ClassPassiveResultWindowComponent___c_TypeInfo;
      if ( !*(&ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo, v50);
        v53 = ClassPassiveResultWindowComponent___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      if ( !_9__15_0 )
      {
        if ( !*(&v53->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v53, v50);
          static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          _9__15_0,
          v56,
          Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__,
          0);
        v57 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
        v57->__9__15_0 = _9__15_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v57->__9__15_0,
          (int32_t)_9__15_0,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      IsNullOrEmpty = (SkillEntity_o *)System_Array__FindIndex_int_(
                                         v52,
                                         (System_Predicate_T__o *)_9__15_0,
                                         (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___);
      if ( ((unsigned int)IsNullOrEmpty & 0x80000000) == 0 )
      {
        if ( Master_object )
        {
          v64 = (unsigned int)IsNullOrEmpty;
          if ( !DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  (Il2CppObject **)&v67,
                  v51->fields.skillId,
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
            return;
          IsNullOrEmpty = v67;
          if ( v67 )
          {
            v65 = *skillIds;
            if ( *skillIds )
            {
              if ( v64 >= LODWORD(v65->max_length) )
                goto LABEL_42;
              v66 = *skillNames;
              v65->m_Items[v64] = v67->fields.id;
              IsNullOrEmpty = (SkillEntity_o *)SkillEntity__getName(IsNullOrEmpty, 0);
              if ( v66 )
              {
                sub_1FFE2C4(v66, v64, IsNullOrEmpty);
                return;
              }
            }
          }
        }
        goto LABEL_41;
      }
    }
  }
}


void ClassPassiveResultWindowComponent__Open(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *beforeUesrSvtEnt,
        UserServantEntity_o *afterUesrSvtEnt,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  int32_t baseState; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UISprite_o *windowBgSprite; // x24
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  __int64 v19; // x1
  struct UILabel_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  __int64 v23; // x1
  UILabel_o *skillChangeInfoSubTitleBef; // x23
  const MethodInfo *v25; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *beforeSkillDatas; // x8
  int max_length; // w8
  int v28; // w9
  int v29; // w10
  __int64 v30; // x22
  int v31; // w23
  struct ClassPassiveResultWindowComponent_SkillData_array *v32; // x8
  ClassPassiveResultWindowComponent_SkillData_o *v33; // x25
  __int64 v34; // x1
  UILabel_o *skillChangeInfoSubTitleAft; // x22
  const MethodInfo *v36; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *afterSkillDatas; // x8
  int v38; // w8
  int v39; // w9
  int v40; // w10
  __int64 v41; // x21
  int v42; // w22
  struct ClassPassiveResultWindowComponent_SkillData_array *v43; // x8
  ClassPassiveResultWindowComponent_SkillData_o *v44; // x23
  System_String_array *v45; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v46; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *skillNames; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *skillIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5974B99 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_ClassPassiveResultWindowComponent_Open__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_21345/*"img_combine_arrow_sp"*/);
    sub_2213A60(&StringLiteral_3980/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_21572/*"img_skillwindow_sp"*/);
    sub_2213A60(&StringLiteral_3016/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    sub_2213A60(&StringLiteral_2007/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    byte_5974B99 = 1;
  }
  baseState = this->fields.baseState;
  skillNames = 0;
  skillIds = 0;
  v45 = 0;
  v46 = 0;
  if ( !baseState )
  {
    v12 = Method_ClassPassiveResultWindowComponent_Open__;
    if ( (*((_BYTE *)Method_ClassPassiveResultWindowComponent_Open__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_ClassPassiveResultWindowComponent_Open__);
    v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    windowBgSprite = this->fields.windowBgSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
    AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_21572/*"img_skillwindow_sp"*/, 0);
    AtlasManager__SetDownloadCommonSprite(
      this->fields.skillChangeInfoArrowSprite1,
      (System_String_o *)StringLiteral_21345/*"img_combine_arrow_sp"*/,
      0);
    AtlasManager__SetDownloadCommonSprite(
      this->fields.skillChangeInfoArrowSprite2,
      (System_String_o *)StringLiteral_21345/*"img_combine_arrow_sp"*/,
      0);
    gameObject = this->fields.skillChangeInfoBef;
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = this->fields.skillChangeInfoAft;
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
    if ( svtCostumeEnt )
    {
      BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0);
      v20 = this->fields.skillChangeInfoTitle;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3980/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/, 0);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
      if ( !v20 )
        goto LABEL_64;
      v22 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)v20;
    }
    else
    {
      BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillChangeInfoTitle;
      if ( !gameObject )
        goto LABEL_64;
      v22 = **(System_String_o ***)(qword_5984390 + 184);
    }
    UILabel__set_text((UILabel_o *)gameObject, v22, 0);
    skillChangeInfoSubTitleBef = this->fields.skillChangeInfoSubTitleBef;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3016/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
    if ( !skillChangeInfoSubTitleBef )
      goto LABEL_64;
    UILabel__set_text(skillChangeInfoSubTitleBef, (System_String_o *)gameObject, 0);
    ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, beforeUesrSvtEnt, &skillIds, &skillNames, v25);
    beforeSkillDatas = this->fields.beforeSkillDatas;
    if ( !beforeSkillDatas || !skillIds )
      goto LABEL_64;
    max_length = beforeSkillDatas->max_length;
    v28 = skillIds->max_length;
    if ( max_length >= v28 )
      v29 = skillIds->max_length;
    else
      v29 = max_length;
    if ( v29 >= 1 )
    {
      v30 = 0;
      if ( v28 >= (__int64)max_length )
        v31 = max_length;
      else
        v31 = skillIds->max_length;
      while ( 1 )
      {
        v32 = this->fields.beforeSkillDatas;
        if ( !v32 )
          break;
        if ( (unsigned int)v30 >= LODWORD(v32->max_length) )
          goto LABEL_65;
        v33 = v32->m_Items[v30];
        if ( !v33 || !skillIds )
          break;
        if ( (unsigned int)v30 >= LODWORD(skillIds->max_length) )
          goto LABEL_65;
        gameObject = (UnityEngine_GameObject_o *)v33->fields.SkillIcon;
        if ( !gameObject )
          break;
        SkillIconComponent__Set((SkillIconComponent_o *)gameObject, skillIds->m_Items[v30], 0);
        if ( !skillNames )
          break;
        if ( (unsigned int)v30 >= LODWORD(skillNames->max_length) )
LABEL_65:
          sub_2213CE4(gameObject);
        gameObject = (UnityEngine_GameObject_o *)v33->fields.SkillNameLabel;
        if ( !gameObject )
          break;
        UILabel__set_text((UILabel_o *)gameObject, skillNames->m_Items[v30++], 0);
        if ( v31 == (_DWORD)v30 )
          goto LABEL_40;
      }
LABEL_64:
      sub_2213CDC(gameObject, v15);
    }
LABEL_40:
    GameObjectExtensions__SetLocalPositionY(this->fields.skillChangeInfoAft, this->fields.skillChangeInfoAftPosY, 0);
    skillChangeInfoSubTitleAft = this->fields.skillChangeInfoSubTitleAft;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
    if ( !skillChangeInfoSubTitleAft )
      goto LABEL_64;
    UILabel__set_text(skillChangeInfoSubTitleAft, (System_String_o *)gameObject, 0);
    ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, afterUesrSvtEnt, &v46, &v45, v36);
    afterSkillDatas = this->fields.afterSkillDatas;
    if ( !afterSkillDatas || !v46 )
      goto LABEL_64;
    v38 = afterSkillDatas->max_length;
    v39 = v46->max_length;
    if ( v38 >= v39 )
      v40 = v46->max_length;
    else
      v40 = v38;
    if ( v40 >= 1 )
    {
      v41 = 0;
      if ( v39 >= (__int64)v38 )
        v42 = v38;
      else
        v42 = v46->max_length;
      do
      {
        v43 = this->fields.afterSkillDatas;
        if ( !v43 )
          goto LABEL_64;
        if ( (unsigned int)v41 >= LODWORD(v43->max_length) )
          goto LABEL_65;
        v44 = v43->m_Items[v41];
        if ( !v44 || !v46 )
          goto LABEL_64;
        if ( (unsigned int)v41 >= LODWORD(v46->max_length) )
          goto LABEL_65;
        gameObject = (UnityEngine_GameObject_o *)v44->fields.SkillIcon;
        if ( !gameObject )
          goto LABEL_64;
        SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v46->m_Items[v41], 0);
        if ( !v45 )
          goto LABEL_64;
        if ( (unsigned int)v41 >= LODWORD(v45->max_length) )
          goto LABEL_65;
        gameObject = (UnityEngine_GameObject_o *)v44->fields.SkillNameLabel;
        if ( !gameObject )
          goto LABEL_64;
        UILabel__set_text((UILabel_o *)gameObject, v45->m_Items[v41++], 0);
      }
      while ( v42 != (_DWORD)v41 );
    }
    BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0, 0);
  }
}


void ClassPassiveResultWindowComponent__ValidateSerializedField(
        ClassPassiveResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ClassPassiveResultWindowComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *beforeSkillDatas; // x20
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v7; // x22
  struct ClassPassiveResultWindowComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  ClassPassiveResultWindowComponent___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *afterSkillDatas; // x19
  struct ClassPassiveResultWindowComponent___c_StaticFields *v18; // x8
  System_Action_object__o *_9__12_1; // x20
  Il2CppObject *v20; // x21
  struct ClassPassiveResultWindowComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5974B98 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
    sub_2213A60(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__);
    sub_2213A60(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__);
    sub_2213A60(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_5974B98 = 1;
  }
  v3 = ClassPassiveResultWindowComponent___c_TypeInfo;
  beforeSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.beforeSkillDatas;
  if ( !*(&ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo, method);
    v3 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__12_0 = (System_Action_object__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_0,
      v7,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__,
      0);
    v8 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__12_0, (int32_t)_9__12_0, v9, v10, v11, v12, v13, v14);
  }
  BasicHelper__ForEach_object_(
    beforeSkillDatas,
    (System_Action_T__o *)_9__12_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
  v16 = ClassPassiveResultWindowComponent___c_TypeInfo;
  afterSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.afterSkillDatas;
  if ( !*(&ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo, v15);
    v16 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__12_1 = (System_Action_object__o *)v18->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      v18 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__12_1 = (System_Action_object__o *)sub_2213CCC(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_1,
      v20,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__,
      0);
    v21 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    v21->__9__12_1 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__12_1, (int32_t)_9__12_1, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    afterSkillDatas,
    (System_Action_T__o *)_9__12_1,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
}


void ClassPassiveResultWindowComponent_SkillData___ctor(
        ClassPassiveResultWindowComponent_SkillData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassPassiveResultWindowComponent_SkillData__ValidateSerializedField(
        ClassPassiveResultWindowComponent_SkillData_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassPassiveResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974B9F & 1) == 0 )
  {
    sub_2213A60(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_5974B9F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassPassiveResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassPassiveResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct ClassPassiveResultWindowComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassPassiveResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassPassiveResultWindowComponent___c___ctor(
        ClassPassiveResultWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassPassiveResultWindowComponent___c___GetPassiveSkillInfo_b__15_0(
        ClassPassiveResultWindowComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return n == 0;
}


void ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_0(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
}


void ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_1(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
}


void ClassPassiveResultWindowComponent___c__DisplayClass14_0___ctor(
        ClassPassiveResultWindowComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassPassiveResultWindowComponent___c__DisplayClass14_0___CloseToNext_b__0(
        ClassPassiveResultWindowComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}