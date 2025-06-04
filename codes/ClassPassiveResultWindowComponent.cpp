void __fastcall ClassPassiveResultWindowComponent___ctor(
        ClassPassiveResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B05E31 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B05E31 = 1;
  }
  this->fields.skillChangeInfoAftPosY = -70.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent__CloseToNext(
        ClassPassiveResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B05E2D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__, v5);
    sub_1BC3008(&ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo, v6);
    byte_4B05E2D = 1;
  }
  v7 = sub_1BC3254(ClassPassiveResultWindowComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ClassPassiveResultWindowComponent___c__DisplayClass14_0__CloseToNext_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


ServantPassiveSkillEntity_o *__fastcall ClassPassiveResultWindowComponent__GetAddedSvtPassiveSkillEnt(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x20
  int64_t UserId; // x21
  int32_t FriendShipRank; // w20
  Il2CppObject *v11; // x21
  int32_t SvtId; // w22
  int64_t v13; // x0
  int32_t lv; // w23
  int64_t v15; // x24
  int32_t LimitCount; // w25

  if ( (byte_4B05E30 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, uesrSvtEnt);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    byte_4B05E30 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_10;
  v8 = Master_object;
  UserId = UserServantEntity__getUserId(uesrSvtEnt, 0LL);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0LL);
  if ( !v8 )
    goto LABEL_10;
  Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                     v8,
                                                     UserId,
                                                     (int32_t)Master_object,
                                                     0LL);
  if ( !Master_object )
    goto LABEL_10;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Master_object, 0LL);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0LL);
  v13 = UserServantEntity__getUserId(uesrSvtEnt, 0LL);
  lv = uesrSvtEnt->fields.lv;
  v15 = v13;
  LimitCount = UserServantEntity__getLimitCount(uesrSvtEnt, 0LL);
  Master_object = (UserServantCollectionMaster_o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0LL);
  if ( !v11 )
LABEL_10:
    sub_1BC3264(Master_object, v7);
  return ServantPassiveSkillMaster__getUseEntity(
           (ServantPassiveSkillMaster_o *)v11,
           SvtId,
           8,
           v15,
           lv,
           LimitCount,
           (int32_t)Master_object,
           FriendShipRank,
           -1,
           1,
           0LL,
           0LL);
}


System_Int32_array *__fastcall ClassPassiveResultWindowComponent__GetClassPassiveIds(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  System_Int32_array *monitor; // x20
  Il2CppObject *v11; // x21
  int32_t SvtId; // w22
  ServantLimitAddEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B05E2F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, uesrSvtEnt);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    byte_4B05E2F = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !uesrSvtEnt )
    goto LABEL_19;
  v9 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(uesrSvtEnt, 0LL);
  if ( !v9 )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v9,
                                                                  &entity,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_19;
  monitor = (System_Int32_array *)entity[10].monitor;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  SvtId = UserServantEntity__getSvtId(uesrSvtEnt, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(uesrSvtEnt, 0, 0LL);
  if ( !v11 )
    goto LABEL_19;
  if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v11, &v14, SvtId, (int32_t)Master_object, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v14;
    if ( !v14 )
      goto LABEL_19;
    if ( ServantLimitAddEntity__HasKeyOverwriteClassPassive(v14, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v14;
      if ( v14 )
        return ServantLimitAddEntity__GetOverwriteClassPassive(v14, monitor, 0LL);
LABEL_19:
      sub_1BC3264(Master_object, v8);
    }
  }
  return monitor;
}


void __fastcall ClassPassiveResultWindowComponent__GetPassiveSkillInfo(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *uesrSvtEnt,
        System_Int32_array **skillIds,
        System_String_array **skillNames,
        const MethodInfo *method)
{
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
  BalanceConfig_c *v20; // x0
  System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *Master_object; // x22
  const MethodInfo *v28; // x2
  System_Collections_ICollection_o *ClassPassiveIds; // x23
  Il2CppClass *IsNullOrEmpty; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  void *monitor; // x8
  __int64 v34; // x28
  __int64 v35; // x26
  unsigned __int64 v36; // x29
  int32_t v37; // w24
  System_Int32_array *v38; // x8
  System_String_array *v39; // x24
  const MethodInfo *v40; // x3
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
  const MethodInfo *v54; // x3
  il2cpp_array_size_t v55; // w23
  System_Int32_array *v56; // x8
  System_String_array *v57; // x19
  const MethodInfo *v58; // x3
  Il2CppClass *v59; // x1
  Il2CppClass **v60; // x0
  SkillEntity_o *v61; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B05E2E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Fill_int___, uesrSvtEnt);
    sub_1BC3008(&Method_System_Array_Fill_string___, v8);
    sub_1BC3008(&Method_System_Array_FindIndex_int___, v9);
    sub_1BC3008(&BalanceConfig_TypeInfo, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_1BC3008(&int___TypeInfo, v14);
    sub_1BC3008(&System_Predicate_int__TypeInfo, v15);
    sub_1BC3008(&string___TypeInfo, v16);
    sub_1BC3008(&string_TypeInfo, v17);
    sub_1BC3008(&Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__, v18);
    sub_1BC3008(&ClassPassiveResultWindowComponent___c_TypeInfo, v19);
    byte_4B05E2E = 1;
  }
  v20 = BalanceConfig_TypeInfo;
  v61 = 0LL;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v20->static_fields->SvtPassiveSkillListMax);
  *skillIds = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)skillIds, (int32_t)v21, v22, v23);
  v24 = (System_String_array *)sub_1BC30B0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *skillNames = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)skillNames, (int32_t)v24, v25, v26);
  System_Array__Fill_int_(*skillIds, 0, (const MethodInfo_30FDBD4 *)Method_System_Array_Fill_int___);
  System_Array__Fill_object_(
    (System_Object_array *)*skillNames,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_30FDC64 *)Method_System_Array_Fill_string___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
  ClassPassiveIds = (System_Collections_ICollection_o *)ClassPassiveResultWindowComponent__GetClassPassiveIds(
                                                          (ClassPassiveResultWindowComponent_o *)Master_object,
                                                          uesrSvtEnt,
                                                          v28);
  IsNullOrEmpty = (Il2CppClass *)BasicHelper__IsNullOrEmpty(ClassPassiveIds, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassPassiveIds )
      goto LABEL_42;
    monitor = ClassPassiveIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v34 = 8LL;
      v35 = 32LL;
      while ( 1 )
      {
        v36 = v34 - 8;
        if ( v34 - 8 >= (unsigned __int64)(unsigned int)monitor )
          break;
        if ( !Master_object )
          goto LABEL_42;
        v37 = *((_DWORD *)&ClassPassiveIds->klass + v34);
        IsNullOrEmpty = (Il2CppClass *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &entity,
                                         v37,
                                         (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v38 = *skillIds;
          if ( !*skillIds )
            goto LABEL_42;
          if ( v36 >= v38->max_length )
            break;
          *((_DWORD *)&v38->obj.klass + v34) = v37;
          IsNullOrEmpty = (Il2CppClass *)entity;
          if ( !entity )
            goto LABEL_42;
          v39 = *skillNames;
          IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( !v39 )
            goto LABEL_42;
          if ( v36 >= v39->max_length )
            break;
          *(Il2CppClass **)((char *)&v39->obj.klass + v35) = IsNullOrEmpty;
          sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v39 + v35), (int32_t)IsNullOrEmpty, v32, v40);
        }
        LODWORD(monitor) = ClassPassiveIds[1].monitor;
        v41 = v34 - 7;
        ++v34;
        v35 += 8LL;
        if ( v41 >= (int)monitor )
          goto LABEL_21;
      }
LABEL_43:
      sub_1BC326C(IsNullOrEmpty, v31, v32);
    }
  }
LABEL_21:
  if ( !uesrSvtEnt )
    goto LABEL_42;
  SvtId = (ClassPassiveResultWindowComponent_o *)UserServantEntity__getSvtId(uesrSvtEnt, 0LL);
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
    _9__15_0 = (System_Predicate_int__o *)sub_1BC3254(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__15_0,
      v51,
      Method_ClassPassiveResultWindowComponent___c__GetPassiveSkillInfo_b__15_0__,
      0LL);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v53, v54);
  }
  IsNullOrEmpty = (Il2CppClass *)System_Array__FindIndex_int_(
                                   v48,
                                   (System_Predicate_T__o *)_9__15_0,
                                   (const MethodInfo_30FEDE4 *)Method_System_Array_FindIndex_int___);
  if ( ((unsigned int)IsNullOrEmpty & 0x80000000) != 0 )
    return;
  if ( !Master_object )
    goto LABEL_42;
  v55 = (unsigned int)IsNullOrEmpty;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)&v61,
          v47->fields.skillId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  IsNullOrEmpty = (Il2CppClass *)v61;
  if ( !v61 )
    goto LABEL_42;
  v56 = *skillIds;
  if ( !*skillIds )
    goto LABEL_42;
  if ( v55 >= v56->max_length )
    goto LABEL_43;
  v56->m_Items[v55 + 1] = v61->fields.id;
  v57 = *skillNames;
  IsNullOrEmpty = (Il2CppClass *)SkillEntity__getName((SkillEntity_o *)IsNullOrEmpty, 0LL);
  if ( !v57 )
LABEL_42:
    sub_1BC3264(IsNullOrEmpty, v31);
  if ( v55 >= v57->max_length )
    goto LABEL_43;
  v59 = IsNullOrEmpty;
  v60 = &v57->obj.klass + v55;
  v60[4] = v59;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v59, v32, v58);
}


void __fastcall ClassPassiveResultWindowComponent__Open(
        ClassPassiveResultWindowComponent_o *this,
        UserServantEntity_o *beforeUesrSvtEnt,
        UserServantEntity_o *afterUesrSvtEnt,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UISprite_o *windowBgSprite; // x24
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  struct UILabel_o *v25; // x24
  System_String_o *v26; // x0
  System_String_o *Empty; // x1
  UILabel_o *skillChangeInfoSubTitleBef; // x23
  const MethodInfo *v29; // x4
  __int64 v30; // x2
  struct ClassPassiveResultWindowComponent_SkillData_array *beforeSkillDatas; // x8
  signed int max_length; // w22
  il2cpp_array_size_t v33; // w9
  __int64 v34; // x23
  ClassPassiveResultWindowComponent_SkillData_o *v35; // x25
  UILabel_o *skillChangeInfoSubTitleAft; // x22
  const MethodInfo *v37; // x4
  struct ClassPassiveResultWindowComponent_SkillData_array *afterSkillDatas; // x8
  signed int v39; // w21
  il2cpp_array_size_t v40; // w9
  __int64 v41; // x22
  ClassPassiveResultWindowComponent_SkillData_o *v42; // x23
  System_String_array *v43; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v44; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *skillNames; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *skillIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B05E2C & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, beforeUesrSvtEnt);
    sub_1BC3008(&Method_ClassPassiveResultWindowComponent_Open__, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&string_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_20165/*"img_combine_arrow_sp"*/, v14);
    sub_1BC3008(&StringLiteral_3797/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/, v15);
    sub_1BC3008(&StringLiteral_20376/*"img_skillwindow_sp"*/, v16);
    sub_1BC3008(&StringLiteral_2879/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/, v17);
    sub_1BC3008(&StringLiteral_1915/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/, v18);
    byte_4B05E2C = 1;
  }
  skillNames = 0LL;
  skillIds = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( this->fields.baseState )
    return;
  v19 = Method_ClassPassiveResultWindowComponent_Open__;
  if ( (*((_BYTE *)Method_ClassPassiveResultWindowComponent_Open__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BC3020(Method_ClassPassiveResultWindowComponent_Open__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20376/*"img_skillwindow_sp"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_20165/*"img_combine_arrow_sp"*/,
    0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_20165/*"img_combine_arrow_sp"*/,
    0LL);
  gameObject = this->fields.skillChangeInfoBef;
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillChangeInfoAft;
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
  if ( svtCostumeEnt )
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0LL);
    v25 = this->fields.skillChangeInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COSTUME_CHANGE_CLASS_SKILL_TITLE"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v26, (Il2CppObject *)svtCostumeEnt->fields.name, 0LL);
    if ( !v25 )
      goto LABEL_59;
    Empty = (System_String_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)v25;
  }
  else
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillChangeInfoTitle;
    if ( !gameObject )
      goto LABEL_59;
    Empty = string_TypeInfo->static_fields->Empty;
  }
  UILabel__set_text((UILabel_o *)gameObject, Empty, 0LL);
  skillChangeInfoSubTitleBef = this->fields.skillChangeInfoSubTitleBef;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BEFORE_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleBef )
    goto LABEL_59;
  UILabel__set_text(skillChangeInfoSubTitleBef, (System_String_o *)gameObject, 0LL);
  ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, beforeUesrSvtEnt, &skillIds, &skillNames, v29);
  beforeSkillDatas = this->fields.beforeSkillDatas;
  if ( !beforeSkillDatas || !skillIds )
    goto LABEL_59;
  if ( (signed int)beforeSkillDatas->max_length >= (signed int)skillIds->max_length )
    max_length = skillIds->max_length;
  else
    max_length = beforeSkillDatas->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( v33 < beforeSkillDatas->max_length )
    {
      v34 = (int)v33;
      v35 = beforeSkillDatas->m_Items[v33];
      if ( v35 && skillIds )
      {
        if ( v33 >= skillIds->max_length )
          break;
        gameObject = (UnityEngine_GameObject_o *)v35->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, skillIds->m_Items[v33 + 1], 0LL);
          if ( skillNames )
          {
            if ( (unsigned int)v34 >= skillNames->max_length )
              break;
            gameObject = (UnityEngine_GameObject_o *)v35->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, skillNames->m_Items[v34], 0LL);
              v33 = v34 + 1;
              if ( max_length == (_DWORD)v34 + 1 )
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
    sub_1BC326C(gameObject, v22, v30);
  }
LABEL_39:
  GameObjectExtensions__SetLocalPositionY(this->fields.skillChangeInfoAft, this->fields.skillChangeInfoAftPosY, 0LL);
  skillChangeInfoSubTitleAft = this->fields.skillChangeInfoSubTitleAft;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1915/*"AFTER_CHANGE_CLASS_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleAft
    || (UILabel__set_text(skillChangeInfoSubTitleAft, (System_String_o *)gameObject, 0LL),
        ClassPassiveResultWindowComponent__GetPassiveSkillInfo(this, afterUesrSvtEnt, &v44, &v43, v37),
        (afterSkillDatas = this->fields.afterSkillDatas) == 0LL)
    || !v44 )
  {
LABEL_59:
    sub_1BC3264(gameObject, v22);
  }
  if ( (signed int)afterSkillDatas->max_length >= (signed int)v44->max_length )
    v39 = v44->max_length;
  else
    v39 = afterSkillDatas->max_length;
  if ( v39 >= 1 )
  {
    v40 = 0;
    while ( v40 < afterSkillDatas->max_length )
    {
      v41 = (int)v40;
      v42 = afterSkillDatas->m_Items[v40];
      if ( v42 && v44 )
      {
        if ( v40 >= v44->max_length )
          goto LABEL_62;
        gameObject = (UnityEngine_GameObject_o *)v42->fields.SkillIcon;
        if ( gameObject )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v44->m_Items[v40 + 1], 0LL);
          if ( v43 )
          {
            if ( (unsigned int)v41 >= v43->max_length )
              goto LABEL_62;
            gameObject = (UnityEngine_GameObject_o *)v42->fields.SkillNameLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v43->m_Items[v41], 0LL);
              v40 = v41 + 1;
              if ( v39 == (_DWORD)v41 + 1 )
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
  BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent__ValidateSerializedField(
        ClassPassiveResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassPassiveResultWindowComponent___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *beforeSkillDatas; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v10; // x22
  struct ClassPassiveResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ClassPassiveResultWindowComponent___c_c *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *afterSkillDatas; // x19
  System_Action_object__o *_9__12_1; // x20
  Il2CppObject *v17; // x21
  struct ClassPassiveResultWindowComponent___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B05E2B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___, v3);
    sub_1BC3008(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__, v4);
    sub_1BC3008(&Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__, v5);
    sub_1BC3008(&ClassPassiveResultWindowComponent___c_TypeInfo, v6);
    byte_4B05E2B = 1;
  }
  v7 = ClassPassiveResultWindowComponent___c_TypeInfo;
  beforeSkillDatas = (System_Collections_Generic_IEnumerable_T__o *)this->fields.beforeSkillDatas;
  if ( !ClassPassiveResultWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassPassiveResultWindowComponent___c_TypeInfo);
    v7 = ClassPassiveResultWindowComponent___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ClassPassiveResultWindowComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1BC3254(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_0,
      v10,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_0__,
      0LL);
    static_fields = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    beforeSkillDatas,
    (System_Action_T__o *)_9__12_0,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
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
    _9__12_1 = (System_Action_object__o *)sub_1BC3254(System_Action_ClassPassiveResultWindowComponent_SkillData__TypeInfo);
    System_Action_object____ctor(
      _9__12_1,
      v17,
      Method_ClassPassiveResultWindowComponent___c__ValidateSerializedField_b__12_1__,
      0LL);
    v18 = ClassPassiveResultWindowComponent___c_TypeInfo->static_fields;
    v18->__9__12_1 = (struct System_Action_ClassPassiveResultWindowComponent_SkillData__o *)_9__12_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v18->__9__12_1, (int32_t)_9__12_1, v19, v20);
  }
  BasicHelper__ForEach_object_(
    afterSkillDatas,
    (System_Action_T__o *)_9__12_1,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_ClassPassiveResultWindowComponent_SkillData___);
}


void __fastcall ClassPassiveResultWindowComponent_SkillData___ctor(
        ClassPassiveResultWindowComponent_SkillData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent_SkillData__ValidateSerializedField(
        ClassPassiveResultWindowComponent_SkillData_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassPassiveResultWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05E32 & 1) == 0 )
  {
    sub_1BC3008(&ClassPassiveResultWindowComponent___c_TypeInfo, v1);
    byte_4B05E32 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ClassPassiveResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassPassiveResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct ClassPassiveResultWindowComponent___c_o *)v2;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)ClassPassiveResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ClassPassiveResultWindowComponent___c___ctor(
        ClassPassiveResultWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassPassiveResultWindowComponent___c___GetPassiveSkillInfo_b__15_0(
        ClassPassiveResultWindowComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return n == 0;
}


void __fastcall ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_0(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent___c___ValidateSerializedField_b__12_1(
        ClassPassiveResultWindowComponent___c_o *this,
        ClassPassiveResultWindowComponent_SkillData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent___c__DisplayClass14_0___ctor(
        ClassPassiveResultWindowComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassPassiveResultWindowComponent___c__DisplayClass14_0___CloseToNext_b__0(
        ClassPassiveResultWindowComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}