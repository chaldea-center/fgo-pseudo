void ClassPassiveResultWindowComponent___ctor(ClassPassiveResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C46FB4 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C46FB4 = 1;
  }
  this->fields.skillChangeInfoAftPosY = -70.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassPassiveResultWindowComponent__CloseToNext(
        ClassPassiveResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4C46FB0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__);
    sub_1C37058(&ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
    byte_4C46FB0 = 1;
  }
  v5 = sub_1C372A4(ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v9, 0);
}


ServantPassiveSkillEntity_o *ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_object; // x0
  UserServantCollectionMaster_o *v5; // x20
  int64_t UserId; // x21
  int32_t FriendShipRank; // w20
  Il2CppObject *v8; // x21
  int32_t SvtId; // w22
  int64_t v10; // x0
  int32_t lv; // w23
  int64_t v12; // x24
  int32_t LimitCount; // w25

  if ( (byte_4C46FB3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C46FB3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_10;
  v5 = Master_object;
  UserId = UserServantEntity__getUserId(uesrSvtEnt, 0);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  if ( !v5 )
    goto LABEL_10;
  Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                     v5,
                                                     UserId,
                                                     (int32_t)Master_object,
                                                     0);
  if ( !Master_object )
    goto LABEL_10;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Master_object, 0);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v10 = UserServantEntity__getUserId(uesrSvtEnt, 0);
  lv = uesrSvtEnt->fields.lv;
  v12 = v10;
  LimitCount = UserServantEntity__getLimitCount(uesrSvtEnt, 0);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v8 )
LABEL_10:
    sub_1C372B4(Master_object);
  return ServantPassiveSkillMaster__getUseEntity(
           (ServantPassiveSkillMaster_o *)v8,
           SvtId,
           8,
           v12,
           lv,
           LimitCount,
           (int32_t)Master_object,
           FriendShipRank,
           -1,
           1,
           0,
           0);
}


System_Int32_array *ClassPassiveResultWindowComponent__GetClassPassiveIds(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  System_Int32_array *monitor; // x20
  Il2CppObject *v7; // x21
  int32_t SvtId; // w22
  ServantLimitAddEntity_o *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C46FB2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4C46FB2 = 1;
  }
  entity = 0;
  v10 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_19;
  v5 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  if ( !v5 )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v5,
                                                                  &entity,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  monitor = (System_Int32_array *)entity[10].monitor;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v7 )
    goto LABEL_19;
  if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v7, &v10, SvtId, (int32_t)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v10;
    if ( !v10 )
      goto LABEL_19;
    if ( ServantLimitAddEntity__HasKeyOverwriteClassPassive(v10, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v10;
      if ( v10 )
        return ServantLimitAddEntity__GetOverwriteClassPassive(v10, monitor, 0);
LABEL_19:
      sub_1C372B4(Master_object);
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
  System_Int32_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Master_object; // x22
  const MethodInfo *v16; // x2
  System_Collections_ICollection_o *ClassPassiveIds; // x23
  Il2CppClass *IsNullOrEmpty; // x0
  void *monitor; // x8
  __int64 v20; // x28
  __int64 v21; // x26
  unsigned __int64 v22; // x29
  int32_t v23; // w24
  System_Int32_array *v24; // x8
  System_String_array *v25; // x24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x9
  ClassPassiveResultWindowComponent_o *SvtId; // x0
  const MethodInfo *v30; // x2
  BalanceConfig_c *v31; // x8
  int v32; // w23
  ServantPassiveSkillEntity_o *AddedSvtPassiveSkillEnt; // x0
  ServantPassiveSkillEntity_o *v34; // x21
  System_Int32_array *v35; // x23
  ClassPassiveResultWindowComponent___c_c *v36; // x0
  System_Predicate_int__o *_9__15_0; // x24
  Il2CppObject *v38; // x25
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  unsigned int v42; // w23
  System_Int32_array *v43; // x8
  System_String_array *v44; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppClass *v47; // x1
  Il2CppClass **v48; // x0
  SkillEntity_o *v49; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C46FB1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Fill_int___);
    sub_1C37058(&Method_System_Array_Fill_string___);
    sub_1C37058(&Method_System_Array_FindIndex_int___);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__);
    sub_1C37058(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4C46FB1 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  v49 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int32_array *)sub_1C37100(int___TypeInfo, (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  *skillIds = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)skillIds, (int32_t)v9, v10, v11);
  v12 = (System_String_array *)sub_1C37100(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *skillNames = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)skillNames, (int32_t)v12, v13, v14);
  System_Array__Fill_int_(*skillIds, 0, (const MethodInfo_31EC604 *)Method_System_Array_Fill_int___);
  System_Array__Fill_object_(
    (System_Object_array *)*skillNames,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_31EC694 *)Method_System_Array_Fill_string___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  ClassPassiveIds = (System_Collections_ICollection_o *)ClassPassiveResultWindowComponent__GetClassPassiveIds(
                                                          (ClassPassiveResultWindowComponent_o *)Master_object,
                                                          uesrSvtEnt,
                                                          v16);
  IsNullOrEmpty = (Il2CppClass *)BasicHelper__IsNullOrEmpty(ClassPassiveIds, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassPassiveIds )
      goto LABEL_42;
    monitor = ClassPassiveIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v20 = 8;
      v21 = 32;
      while ( 1 )
      {
        v22 = v20 - 8;
        if ( v20 - 8 >= (unsigned __int64)(unsigned int)monitor )
          break;
        if ( !Master_object )
          goto LABEL_42;
        v23 = *((_DWORD *)&ClassPassiveIds->klass + v20);
        IsNullOrEmpty = (Il2CppClass *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &entity,
                                         v23,
                                         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v24 = *skillIds;
          if ( !*skillIds )
            goto LABEL_42;
          if ( v22 >= LODWORD(v24->max_length) )
            break;
          *((_DWORD *)&v24->obj.klass + v20) = v23;
          IsNullOrEmpty = (Il2CppClass *)entity;
          if ( !entity )
            goto LABEL_42;
          v25 = *skillNames;
          IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)entity, 0);
          if ( !v25 )
            goto LABEL_42;
          if ( v22 >= LODWORD(v25->max_length) )
            break;
          *(Il2CppClass **)((char *)&v25->obj.klass + v21) = IsNullOrEmpty;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v25 + v21), (int32_t)IsNullOrEmpty, v26, v27);
        }
        LODWORD(monitor) = ClassPassiveIds[1].monitor;
        v28 = v20 - 7;
        ++v20;
        v21 += 8;
        if ( v28 >= (int)monitor )
          goto LABEL_21;
      }
LABEL_43:
      sub_1C372BC(IsNullOrEmpty);
    }
  }
LABEL_21:
  if ( !uesrSvtEnt )
    goto LABEL_42;
  SvtId = (ClassPassiveResultWindowComponent_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v31 = BalanceConfig_TypeInfo;
  v32 = (int)SvtId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  if ( v32 != v31->static_fields->ServantIdMashu1 )
    return;
  AddedSvtPassiveSkillEnt = ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(SvtId, uesrSvtEnt, v30);
  if ( !AddedSvtPassiveSkillEnt )
    return;
  v34 = AddedSvtPassiveSkillEnt;
  v35 = *skillIds;
  v36 = ClassPassiveResultWindowComponent___c_TypeInfo;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v36 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__15_0 = v36->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__15_0 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__15_0,
      v38,
      Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__,
      0);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v40, v41);
  }
  IsNullOrEmpty = (Il2CppClass *)System_Array__FindIndex_int_(
                                   v35,
                                   (System_Predicate_T__o *)_9__15_0,
                                   (const MethodInfo_31ED814 *)Method_System_Array_FindIndex_int___);
  if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
    return;
  if ( !Master_object )
    goto LABEL_42;
  v42 = (unsigned int)IsNullOrEmpty;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)&v49,
          v34->fields.skillId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  IsNullOrEmpty = (Il2CppClass *)v49;
  if ( !v49 )
    goto LABEL_42;
  v43 = *skillIds;
  if ( !*skillIds )
    goto LABEL_42;
  if ( v42 >= LODWORD(v43->max_length) )
    goto LABEL_43;
  v43->m_Items[v42] = v49->fields.id;
  v44 = *skillNames;
  IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)IsNullOrEmpty, 0);
  if ( !v44 )
LABEL_42:
    sub_1C372B4(IsNullOrEmpty);
  if ( v42 >= LODWORD(v44->max_length) )
    goto LABEL_43;
  v47 = IsNullOrEmpty;
  v48 = &v44->obj.klass + v42;
  v48[4] = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v45, v46);
}


void ClassPassiveResultWindowComponent__Open(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *beforeUesrSvtEnt,
        UserServantEntity_o *afterUesrSvtEnt,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *windowBgSprite; // x24
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  struct UILabel_o *v16; // x24
  System_String_o *v17; // x0
  System_String_o *Empty; // x1
  UILabel_o *skillChangeInfoSubTitleBef; // x23
  const MethodInfo *v20; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *beforeSkillDatas; // x8
  int max_length; // w22
  unsigned int v23; // w9
  __int64 v24; // x23
  ClassPassiveResultWindowComponent_SkillData_o *v25; // x25
  UILabel_o *skillChangeInfoSubTitleAft; // x22
  const MethodInfo *v27; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *afterSkillDatas; // x8
  int v29; // w21
  unsigned int v30; // w9
  __int64 v31; // x22
  ClassPassiveResultWindowComponent_SkillData_o *v32; // x23
  System_String_array *v33; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v34; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *skillNames; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *skillIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C46FAF & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_ClassPassiveResultWindowComponent_Open__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_20362/*"img_combine_arrow_sp"*/);
    sub_1C37058(&StringLiteral_3836/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/);
    sub_1C37058(&StringLiteral_20578/*"img_skillwindow_sp"*/);
    sub_1C37058(&StringLiteral_2900/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    sub_1C37058(&StringLiteral_1926/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    byte_4C46FAF = 1;
  }
  skillNames = 0;
  skillIds = 0;
  v33 = 0;
  v34 = 0;
  if ( this->fields.baseState )
    return;
  v11 = Method_ClassPassiveResultWindowComponent_Open__;
  if ( (*((_BYTE *)Method_ClassPassiveResultWindowComponent_Open__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C37070(Method_ClassPassiveResultWindowComponent_Open__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20578/*"img_skillwindow_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_20362/*"img_combine_arrow_sp"*/,
    0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_20362/*"img_combine_arrow_sp"*/,
    0);
  gameObject = this->fields.skillChangeInfoBef;
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillChangeInfoAft;
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
  if ( svtCostumeEnt )
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0);
    v16 = this->fields.skillChangeInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
    if ( !v16 )
      goto LABEL_59;
    Empty = (System_String_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)v16;
  }
  else
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillChangeInfoTitle;
    if ( !gameObject )
      goto LABEL_59;
    Empty = string_TypeInfo->static_fields->Empty;
  }
  UILabel__set_text((UILabel_o *)gameObject, Empty, 0);
  skillChangeInfoSubTitleBef = this->fields.skillChangeInfoSubTitleBef;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleBef )
    goto LABEL_59;
  UILabel__set_text(skillChangeInfoSubTitleBef, (System_String_o *)gameObject, 0);
  ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, beforeUesrSvtEnt, &skillIds, &skillNames, v20);
  beforeSkillDatas = this->fields.beforeSkillDatas;
  if ( !beforeSkillDatas || !skillIds )
    goto LABEL_59;
  if ( SLODWORD(beforeSkillDatas->max_length) >= SLODWORD(skillIds->max_length) )
    max_length = skillIds->max_length;
  else
    max_length = beforeSkillDatas->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( v23 < LODWORD(beforeSkillDatas->max_length) )
    {
      v24 = (int)v23;
      v25 = beforeSkillDatas->m_Items[v23];
      if ( v25 && skillIds )
      {
        if ( v23 >= LODWORD(skillIds->max_length) )
          break;
        gameObject = (UnityEngine_GameObject_o *)v25->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, skillIds->m_Items[v23], 0);
          if ( skillNames )
          {
            if ( (unsigned int)v24 >= LODWORD(skillNames->max_length) )
              break;
            gameObject = (UnityEngine_GameObject_o *)v25->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, skillNames->m_Items[v24], 0);
              v23 = v24 + 1;
              if ( max_length == (_DWORD)v24 + 1 )
                goto LABEL_39;
              beforeSkillDatas = this->fields.beforeSkillDatas;
              if ( beforeSkillDatas )
                continue;
            }
          }
        }
      }
      goto LABEL_59;
    }
LABEL_62:
    sub_1C372BC(gameObject);
  }
LABEL_39:
  GameObjectExtensions__SetLocalPositionY(this->fields.skillChangeInfoAft, this->fields.skillChangeInfoAftPosY, 0);
  skillChangeInfoSubTitleAft = this->fields.skillChangeInfoSubTitleAft;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1926/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleAft
    || (UILabel__set_text(skillChangeInfoSubTitleAft, (System_String_o *)gameObject, 0),
        ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, afterUesrSvtEnt, &v34, &v33, v27),
        (afterSkillDatas = this->fields.afterSkillDatas) == 0)
    || !v34 )
  {
LABEL_59:
    sub_1C372B4(gameObject);
  }
  if ( SLODWORD(afterSkillDatas->max_length) >= SLODWORD(v34->max_length) )
    v29 = v34->max_length;
  else
    v29 = afterSkillDatas->max_length;
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( v30 < LODWORD(afterSkillDatas->max_length) )
    {
      v31 = (int)v30;
      v32 = afterSkillDatas->m_Items[v30];
      if ( v32 && v34 )
      {
        if ( v30 >= LODWORD(v34->max_length) )
          goto LABEL_62;
        gameObject = (UnityEngine_GameObject_o *)v32->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v34->m_Items[v30], 0);
          if ( v33 )
          {
            if ( (unsigned int)v31 >= LODWORD(v33->max_length) )
              goto LABEL_62;
            gameObject = (UnityEngine_GameObject_o *)v32->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v33->m_Items[v31], 0);
              v30 = v31 + 1;
              if ( v29 == (_DWORD)v31 + 1 )
                goto LABEL_60;
              afterSkillDatas = this->fields.afterSkillDatas;
              if ( afterSkillDatas )
                continue;
            }
          }
        }
      }
      goto LABEL_59;
    }
    goto LABEL_62;
  }
LABEL_60:
  BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0, 0);
}


void ClassPassiveResultWindowComponent__ValidateSerializedField(
        ClassPassiveResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ClassPassiveResultWindowComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *beforeSkillDatas; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v6; // x22
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ClassPassiveResultWindowComponent___c_c *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *afterSkillDatas; // x19
  System_Action_object__o *_9__12_1; // x20
  Il2CppObject *v13; // x21
  struct ClassPassiveResultWindowComponent___c_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C46FAE & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
    sub_1C37058(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__);
    sub_1C37058(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__);
    sub_1C37058(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4C46FAE = 1;
  }
  v3 = ClassPassiveResultWindowComponent___c_TypeInfo;
  beforeSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.beforeSkillDatas;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v3 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v3->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_0,
      v6,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__,
      0);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    beforeSkillDatas,
    (System_Action_T__o *)_9__12_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
  v10 = ClassPassiveResultWindowComponent___c_TypeInfo;
  afterSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.afterSkillDatas;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v10 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__12_1 = (System_Action_object__o *)v10->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__12_1 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_1,
      v13,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__,
      0);
    v14 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    v14->__9__12_1 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v14->__9__12_1, (int32_t)_9__12_1, v15, v16);
  }
  BasicHelper__ForEach_object_(
    afterSkillDatas,
    (System_Action_T__o *)_9__12_1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46FB5 & 1) == 0 )
  {
    sub_1C37058(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4C46FB5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassPassiveResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassPassiveResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct ClassPassiveResultWindowComponent___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ClassPassiveResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C372B4(this);
}


void ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_1(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
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