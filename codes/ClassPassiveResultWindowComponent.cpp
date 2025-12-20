void ClassPassiveResultWindowComponent___ctor(ClassPassiveResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D309B4 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D309B4 = 1;
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4D309B0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__);
    sub_1C94098(&ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
    byte_4D309B0 = 1;
  }
  v5 = sub_1C942E4(ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D309B3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D309B3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v11 = UserServantEntity__getUserId(uesrSvtEnt, 0);
  lv = uesrSvtEnt->fields.lv;
  v13 = v11;
  LimitCount = UserServantEntity__getLimitCount(uesrSvtEnt, 0);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v9 )
LABEL_10:
    sub_1C942F0(Master_object, v5);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  System_Int32_array *monitor; // x20
  Il2CppObject *v8; // x21
  int32_t SvtId; // w22
  ServantLimitAddEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D309B2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4D309B2 = 1;
  }
  entity = 0;
  v11 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_19;
  v6 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  if ( !v6 )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v6,
                                                                  &entity,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  monitor = (System_Int32_array *)entity[10].monitor;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0);
  if ( !v8 )
    goto LABEL_19;
  if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v8, &v11, SvtId, (int32_t)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v11;
    if ( !v11 )
      goto LABEL_19;
    if ( ServantLimitAddEntity__HasKeyOverwriteClassPassive(v11, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v11;
      if ( v11 )
        return ServantLimitAddEntity__GetOverwriteClassPassive(v11, monitor, 0);
LABEL_19:
      sub_1C942F0(Master_object, v5);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *Master_object; // x22
  const MethodInfo *v24; // x2
  System_Collections_ICollection_o *ClassPassiveIds; // x23
  Il2CppClass *IsNullOrEmpty; // x0
  __int64 v27; // x1
  void *monitor; // x8
  __int64 v29; // x28
  __int64 v30; // x26
  unsigned __int64 v31; // x29
  int32_t v32; // w24
  System_Int32_array *v33; // x8
  System_String_array *v34; // x24
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x9
  ClassPassiveResultWindowComponent_o *SvtId; // x0
  const MethodInfo *v43; // x2
  BalanceConfig_c *v44; // x8
  int v45; // w23
  ServantPassiveSkillEntity_o *AddedSvtPassiveSkillEnt; // x0
  ServantPassiveSkillEntity_o *v47; // x21
  System_Int32_array *v48; // x23
  ClassPassiveResultWindowComponent___c_c *v49; // x0
  System_Predicate_int__o *_9__15_0; // x24
  Il2CppObject *v51; // x25
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  unsigned int v59; // w23
  System_Int32_array *v60; // x8
  System_String_array *v61; // x19
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppClass *v68; // x1
  Il2CppClass **v69; // x0
  SkillEntity_o *v70; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D309B1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Fill_int___);
    sub_1C94098(&Method_System_Array_Fill_string___);
    sub_1C94098(&Method_System_Array_FindIndex_int___);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&System_Predicate_int__TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__);
    sub_1C94098(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4D309B1 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  v70 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int32_array *)sub_1C94140(int___TypeInfo, (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  *skillIds = v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)skillIds, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_String_array *)sub_1C94140(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *skillNames = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)skillNames, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  System_Array__Fill_int_(*skillIds, 0, (const MethodInfo_32A2414 *)Method_System_Array_Fill_int___);
  System_Array__Fill_object_(
    (System_Object_array *)*skillNames,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_32A24A4 *)Method_System_Array_Fill_string___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  ClassPassiveIds = (System_Collections_ICollection_o *)ClassPassiveResultWindowComponent__GetClassPassiveIds(
                                                          (ClassPassiveResultWindowComponent_o *)Master_object,
                                                          uesrSvtEnt,
                                                          v24);
  IsNullOrEmpty = (Il2CppClass *)BasicHelper__IsNullOrEmpty(ClassPassiveIds, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassPassiveIds )
      goto LABEL_42;
    monitor = ClassPassiveIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v29 = 8;
      v30 = 32;
      while ( 1 )
      {
        v31 = v29 - 8;
        if ( v29 - 8 >= (unsigned __int64)(unsigned int)monitor )
          break;
        if ( !Master_object )
          goto LABEL_42;
        v32 = *((_DWORD *)&ClassPassiveIds->klass + v29);
        IsNullOrEmpty = (Il2CppClass *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &entity,
                                         v32,
                                         (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v33 = *skillIds;
          if ( !*skillIds )
            goto LABEL_42;
          if ( v31 >= LODWORD(v33->max_length) )
            break;
          *((_DWORD *)&v33->obj.klass + v29) = v32;
          IsNullOrEmpty = (Il2CppClass *)entity;
          if ( !entity )
            goto LABEL_42;
          v34 = *skillNames;
          IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)entity, 0);
          if ( !v34 )
            goto LABEL_42;
          if ( v31 >= LODWORD(v34->max_length) )
            break;
          *(Il2CppClass **)((char *)&v34->obj.klass + v30) = IsNullOrEmpty;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)((char *)v34 + v30),
            (int32_t)IsNullOrEmpty,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        LODWORD(monitor) = ClassPassiveIds[1].monitor;
        v41 = v29 - 7;
        ++v29;
        v30 += 8;
        if ( v41 >= (int)monitor )
          goto LABEL_21;
      }
LABEL_43:
      sub_1C942F8(IsNullOrEmpty);
    }
  }
LABEL_21:
  if ( !uesrSvtEnt )
    goto LABEL_42;
  SvtId = (ClassPassiveResultWindowComponent_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0);
  v44 = BalanceConfig_TypeInfo;
  v45 = (int)SvtId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( v45 != v44->static_fields->ServantIdMashu1 )
    return;
  AddedSvtPassiveSkillEnt = ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(SvtId, uesrSvtEnt, v43);
  if ( !AddedSvtPassiveSkillEnt )
    return;
  v47 = AddedSvtPassiveSkillEnt;
  v48 = *skillIds;
  v49 = ClassPassiveResultWindowComponent___c_TypeInfo;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v49 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__15_0 = v49->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__15_0 = (System_Predicate_int__o *)sub_1C942E4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__15_0,
      v51,
      Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__,
      0);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
      (int32_t)_9__15_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  IsNullOrEmpty = (Il2CppClass *)System_Array__FindIndex_int_(
                                   v48,
                                   (System_Predicate_T__o *)_9__15_0,
                                   (const MethodInfo_32A3624 *)Method_System_Array_FindIndex_int___);
  if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
    return;
  if ( !Master_object )
    goto LABEL_42;
  v59 = (unsigned int)IsNullOrEmpty;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)&v70,
          v47->fields.skillId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  IsNullOrEmpty = (Il2CppClass *)v70;
  if ( !v70 )
    goto LABEL_42;
  v60 = *skillIds;
  if ( !*skillIds )
    goto LABEL_42;
  if ( v59 >= LODWORD(v60->max_length) )
    goto LABEL_43;
  v60->m_Items[v59] = v70->fields.id;
  v61 = *skillNames;
  IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)IsNullOrEmpty, 0);
  if ( !v61 )
LABEL_42:
    sub_1C942F0(IsNullOrEmpty, v27);
  if ( v59 >= LODWORD(v61->max_length) )
    goto LABEL_43;
  v68 = IsNullOrEmpty;
  v69 = &v61->obj.klass + v59;
  v69[4] = v68;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v68, v62, v63, v64, v65, v66, v67);
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
  __int64 v14; // x1
  UISprite_o *windowBgSprite; // x24
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  struct UILabel_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *Empty; // x1
  UILabel_o *skillChangeInfoSubTitleBef; // x23
  const MethodInfo *v21; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *beforeSkillDatas; // x8
  int max_length; // w22
  unsigned int v24; // w9
  __int64 v25; // x23
  ClassPassiveResultWindowComponent_SkillData_o *v26; // x25
  UILabel_o *skillChangeInfoSubTitleAft; // x22
  const MethodInfo *v28; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *afterSkillDatas; // x8
  int v30; // w21
  unsigned int v31; // w9
  __int64 v32; // x22
  ClassPassiveResultWindowComponent_SkillData_o *v33; // x23
  System_String_array *v34; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v35; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *skillNames; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *skillIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D309AF & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_ClassPassiveResultWindowComponent_Open__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_20535/*"img_combine_arrow_sp"*/);
    sub_1C94098(&StringLiteral_3841/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/);
    sub_1C94098(&StringLiteral_20755/*"img_skillwindow_sp"*/);
    sub_1C94098(&StringLiteral_2897/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    sub_1C94098(&StringLiteral_1920/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/);
    byte_4D309AF = 1;
  }
  skillNames = 0;
  skillIds = 0;
  v34 = 0;
  v35 = 0;
  if ( this->fields.baseState )
    return;
  v11 = Method_ClassPassiveResultWindowComponent_Open__;
  if ( (*((_BYTE *)Method_ClassPassiveResultWindowComponent_Open__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C940B0(Method_ClassPassiveResultWindowComponent_Open__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C9407C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20755/*"img_skillwindow_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_20535/*"img_combine_arrow_sp"*/,
    0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_20535/*"img_combine_arrow_sp"*/,
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
    v17 = this->fields.skillChangeInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3841/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
    if ( !v17 )
      goto LABEL_59;
    Empty = (System_String_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)v17;
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleBef )
    goto LABEL_59;
  UILabel__set_text(skillChangeInfoSubTitleBef, (System_String_o *)gameObject, 0);
  ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, beforeUesrSvtEnt, &skillIds, &skillNames, v21);
  beforeSkillDatas = this->fields.beforeSkillDatas;
  if ( !beforeSkillDatas || !skillIds )
    goto LABEL_59;
  if ( SLODWORD(beforeSkillDatas->max_length) >= SLODWORD(skillIds->max_length) )
    max_length = skillIds->max_length;
  else
    max_length = beforeSkillDatas->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < LODWORD(beforeSkillDatas->max_length) )
    {
      v25 = (int)v24;
      v26 = beforeSkillDatas->m_Items[v24];
      if ( v26 && skillIds )
      {
        if ( v24 >= LODWORD(skillIds->max_length) )
          break;
        gameObject = (UnityEngine_GameObject_o *)v26->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, skillIds->m_Items[v24], 0);
          if ( skillNames )
          {
            if ( (unsigned int)v25 >= LODWORD(skillNames->max_length) )
              break;
            gameObject = (UnityEngine_GameObject_o *)v26->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, skillNames->m_Items[v25], 0);
              v24 = v25 + 1;
              if ( max_length == (_DWORD)v25 + 1 )
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
    sub_1C942F8(gameObject);
  }
LABEL_39:
  GameObjectExtensions__SetLocalPositionY(this->fields.skillChangeInfoAft, this->fields.skillChangeInfoAftPosY, 0);
  skillChangeInfoSubTitleAft = this->fields.skillChangeInfoSubTitleAft;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1920/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleAft
    || (UILabel__set_text(skillChangeInfoSubTitleAft, (System_String_o *)gameObject, 0),
        ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, afterUesrSvtEnt, &v35, &v34, v28),
        (afterSkillDatas = this->fields.afterSkillDatas) == 0)
    || !v35 )
  {
LABEL_59:
    sub_1C942F0(gameObject, v14);
  }
  if ( SLODWORD(afterSkillDatas->max_length) >= SLODWORD(v35->max_length) )
    v30 = v35->max_length;
  else
    v30 = afterSkillDatas->max_length;
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( v31 < LODWORD(afterSkillDatas->max_length) )
    {
      v32 = (int)v31;
      v33 = afterSkillDatas->m_Items[v31];
      if ( v33 && v35 )
      {
        if ( v31 >= LODWORD(v35->max_length) )
          goto LABEL_62;
        gameObject = (UnityEngine_GameObject_o *)v33->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v35->m_Items[v31], 0);
          if ( v34 )
          {
            if ( (unsigned int)v32 >= LODWORD(v34->max_length) )
              goto LABEL_62;
            gameObject = (UnityEngine_GameObject_o *)v33->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v34->m_Items[v32], 0);
              v31 = v32 + 1;
              if ( v30 == (_DWORD)v32 + 1 )
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ClassPassiveResultWindowComponent___c_c *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *afterSkillDatas; // x19
  System_Action_object__o *_9__12_1; // x20
  Il2CppObject *v17; // x21
  struct ClassPassiveResultWindowComponent___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D309AE & 1) == 0 )
  {
    sub_1C94098(&System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
    sub_1C94098(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__);
    sub_1C94098(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__);
    sub_1C94098(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4D309AE = 1;
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
    _9__12_0 = (System_Action_object__o *)sub_1C942E4(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_0,
      v6,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__,
      0);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    beforeSkillDatas,
    (System_Action_T__o *)_9__12_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
  v14 = ClassPassiveResultWindowComponent___c_TypeInfo;
  afterSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.afterSkillDatas;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v14 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__12_1 = (System_Action_object__o *)v14->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__12_1 = (System_Action_object__o *)sub_1C942E4(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_1,
      v17,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__,
      0);
    v18 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    v18->__9__12_1 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->__9__12_1, (int32_t)_9__12_1, v19, v20, v21, v22, v23, v24);
  }
  BasicHelper__ForEach_object_(
    afterSkillDatas,
    (System_Action_T__o *)_9__12_1,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D309B5 & 1) == 0 )
  {
    sub_1C94098(&ClassPassiveResultWindowComponent___c_TypeInfo);
    byte_4D309B5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ClassPassiveResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassPassiveResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct ClassPassiveResultWindowComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ClassPassiveResultWindowComponent___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
}


void ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_1(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
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