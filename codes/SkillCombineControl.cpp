void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_Int32_array *SkillIdList; // x19
  __int64 v5; // x8
  SkillCombineControl_o *v6; // x20
  unsigned __int64 v7; // x22
  int32_t *p_type; // x23
  int32_t v9; // w21
  int32_t v10; // w28
  __int64 v12; // x0

  if ( (byte_438C04D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C04D = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B7769C(this, resData);
  }
  v5 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v5 < 1 )
    return 1;
  v6 = this;
  v7 = 0LL;
  p_type = &this->fields.type;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      goto LABEL_19;
    if ( !v6 )
      goto LABEL_18;
    if ( v7 >= LODWORD(v6->fields.combineRootComponent) )
    {
LABEL_19:
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
    }
    v9 = SkillIdList->m_Items[v7 + 1];
    if ( v9 >= 1 )
    {
      v10 = p_type[v7];
      this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v9,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_18;
      if ( v10 < SLODWORD(this->fields.baseUserServantEntity) )
        return 0;
    }
    LODWORD(v5) = SkillIdList->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
SetLevelUpData_o *__fastcall SkillCombineControl__CreateLeveUpData(
        SkillCombineControl_o *this,
        int32_t idx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  SkillCombineControl_o *v6; // x19
  struct SvtUseSkillData_array *skillDataList; // x8
  SvtUseSkillData_o *v8; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v11; // w24
  int32_t v12; // w23
  SkillEntity_o *Entity; // x25
  const MethodInfo *v14; // x2
  SkillCombineControl_o *v15; // x22
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_Int32_array **Name; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  int32_t combineRootComponent; // w1
  float v33; // s0
  float v34; // w23
  __int64 v35; // x24
  const MethodInfo *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  float CombineCampaignQpRate; // s0
  double v44; // d0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **baseUserServantEntity; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **titleText; // x1
  __int64 v75; // x0
  __int64 v76; // [xsp+8h] [xbp-48h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v78; // 0:x0.8
  System_Nullable_float__o v79; // 0:x0.8
  System_Nullable_float__o v80; // 0:x0.8

  v6 = this;
  if ( (byte_438C04F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_System_Nullable_int__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_float__get_HasValue__);
    sub_B775C4(&SetLevelUpData_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SkillCombineControl_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C04F = 1;
  }
  transformInfo = 0LL;
  skillDataList = v6->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_32;
  if ( skillDataList->max_length <= transformIndex )
    goto LABEL_33;
  v8 = skillDataList->m_Items[transformIndex];
  if ( !v8 || (svtUseSkillIdList = v8->fields.svtUseSkillIdList) == 0LL )
LABEL_32:
    sub_B7769C(this, *(_QWORD *)&idx);
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_33;
  svtSkillLvList = v8->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_32;
  if ( svtSkillLvList->max_length <= idx )
  {
LABEL_33:
    v75 = sub_B776C8(this);
    sub_B77668(v75, 0LL);
  }
  v11 = svtUseSkillIdList->m_Items[idx + 1];
  v12 = svtSkillLvList->m_Items[idx + 1];
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_32;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v11,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (SkillCombineControl_o *)SkillCombineControl__GetCombineSkillEntity(v6, v12, v14);
  if ( !v6->fields.baseUserServantEntity )
    goto LABEL_32;
  v15 = this;
  UserServantEntity__GetTransformedServantInfo(v6->fields.baseUserServantEntity, &transformInfo, transformIndex, 0LL);
  v16 = sub_B77694(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_32;
  *(_DWORD *)(v16 + 20) = idx + 1;
  *(_DWORD *)(v16 + 24) = idx;
  *(_DWORD *)(v16 + 16) = v11;
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)(v16 + 32) = StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 32), v23, v17, v18, v19, v20, v21, v22);
  if ( !Entity )
    goto LABEL_32;
  Name = (System_Int32_array **)SkillEntity__getName(Entity, *(const MethodInfo **)&idx);
  *(_QWORD *)(v16 + 40) = Name;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 40), Name, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v16 + 64) = v12;
  *(_DWORD *)(v16 + 68) = v12 + 1;
  *(_DWORD *)(v16 + 72) = Entity->fields.maxLv;
  if ( v15
    && (combineRootComponent = (int32_t)v15->fields.combineRootComponent,
        v78 = (System_Nullable_int__o)&v76,
        v76 = 0LL,
        System_Nullable_int____ctor(
          v78,
          combineRootComponent,
          (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__),
        (v76 & 0xFF00000000LL) != 0) )
  {
    v33 = (float)(int)v76;
    v79 = (System_Nullable_float__o)&v76;
    v76 = 0LL;
    System_Nullable_float____ctor(v79, v33, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
    v34 = *(float *)&v76;
    v35 = v76 & 0xFF00000000LL;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(v6, v36);
    if ( v35 )
    {
      v80 = (System_Nullable_float__o)&v76;
      v76 = 0LL;
      System_Nullable_float____ctor(
        v80,
        CombineCampaignQpRate * v34,
        (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
      v44 = *(float *)&v76;
      goto LABEL_21;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(v6, v31);
  }
  v44 = 0.0;
LABEL_21:
  if ( v44 == INFINITY )
    v44 = -v44;
  *(_DWORD *)(v16 + 76) = (int)v44;
  *(_DWORD *)(v16 + 80) = v6->fields.userQP;
  if ( !v15 )
  {
    v52 = (System_Int32_array **)sub_B775DC(int___TypeInfo, 0LL);
    *(_QWORD *)(v16 + 96) = v52;
    sub_B77560((BattleServantConfConponent_o *)(v16 + 96), v52, v53, v54, v55, v56, v57, v58);
LABEL_29:
    baseUserServantEntity = (System_Int32_array **)sub_B775DC(int___TypeInfo, 0LL);
    goto LABEL_30;
  }
  v45 = *(System_Int32_array ***)&v15->fields.type;
  if ( v45 )
  {
    *(_QWORD *)(v16 + 96) = v45;
    sub_B77560((BattleServantConfConponent_o *)(v16 + 96), v45, v37, v38, v39, v40, v41, v42);
  }
  else
  {
    v59 = (System_Int32_array **)sub_B775DC(int___TypeInfo, 0LL);
    *(_QWORD *)(v16 + 96) = v59;
    sub_B77560((BattleServantConfConponent_o *)(v16 + 96), v59, v60, v61, v62, v63, v64, v65);
  }
  baseUserServantEntity = (System_Int32_array **)v15->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_29;
LABEL_30:
  *(_QWORD *)(v16 + 104) = baseUserServantEntity;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 104), baseUserServantEntity, v46, v47, v48, v49, v50, v51);
  if ( !transformInfo )
    goto LABEL_32;
  titleText = (System_Int32_array **)transformInfo->fields.titleText;
  *(_QWORD *)(v16 + 56) = titleText;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 56), titleText, v67, v68, v69, v70, v71, v72);
  return (SetLevelUpData_o *)v16;
}


float __fastcall SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C051 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_438C051 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      combineEventList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v9.fields.current )
        sub_B7769C(v5, v6);
      if ( HIDWORD(v9.fields.current[1].klass) == 8 )
      {
        v4 = *(float *)&v9.fields.current[3].monitor;
        v7 = 13;
        goto LABEL_11;
      }
    }
    v4 = 0.0;
    v7 = 7;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    if ( v7 != 13 )
      return 1.0;
  }
  return v4;
}


CombineSkillEntity_o *__fastcall SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  WarEntity_o *v11; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_438C050 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438C050 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                  v14,
                                                                  0LL);
  if ( !v8
    || (v11 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v8,
                (int32_t)Master_WarQuestSelectionMaster,
                (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v11)
    || !Master_WarQuestSelectionMaster )
  {
LABEL_14:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
  CombineSkillMaster__TryGetEntity(
    (CombineSkillMaster_o *)Master_WarQuestSelectionMaster,
    &entity,
    (int32_t)v11->fields.coordinates,
    skillLv,
    0LL);
  return entity;
}


SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_438C046 & 1) == 0 )
  {
    sub_B775C4(&SvtUseSkillData_TypeInfo);
    byte_438C046 = 1;
  }
  v5 = sub_B77694(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity
    || (baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedSkillIdList(
                                                         baseUserServantEntity,
                                                         transformIndex,
                                                         -1,
                                                         -1,
                                                         1,
                                                         -1,
                                                         0LL),
        !v5)
    || (*(_QWORD *)(v5 + 16) = baseUserServantEntity,
        sub_B77560(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)baseUserServantEntity,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (baseUserServantEntity = this->fields.baseUserServantEntity) == 0LL) )
  {
    sub_B7769C(baseUserServantEntity, v6);
  }
  v14 = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.method)(
                                 baseUserServantEntity,
                                 baseUserServantEntity->klass[1]._1.image);
  *(_QWORD *)(v5 + 24) = v14;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), v14, v15, v16, v17, v18, v19, v20);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8
  __int64 v4; // x0

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_B7769C(this, method);
  if ( !lvUpDataList->max_length )
  {
    v4 = sub_B776C8(this);
    sub_B77668(v4, 0LL);
  }
  return lvUpDataList->m_Items[0];
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v9; // w23
  UILabel_o *v10; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v13; // x20
  int v14; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x20
  int size; // w21
  int v20; // w22
  int v21; // w23
  __int64 v22; // x8
  UnityEngine_Component_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v28; // w20
  unsigned int v29; // w21
  __int64 v30; // x0

  if ( (byte_438C042 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9003/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_B775C4(&StringLiteral_9005/*"MSG_SKILL_SELECT"*/);
    sub_B775C4(&StringLiteral_9440/*"NEED_QP_INFO"*/);
    byte_438C042 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9003/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_43;
  UILabel__set_text(preSelectBaseLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  SkillCombineControl__SetHaveQpInfo(this, v6);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_43;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v30 = sub_B776C8(gameObject);
        sub_B77668(v30, 0LL);
      }
      v10 = selectSkillHelpLabels->m_Items[v9];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9005/*"MSG_SKILL_SELECT"*/, 0LL);
      if ( !v10 )
        break;
      UILabel__set_text(v10, gameObject, 0LL);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_20;
    }
LABEL_43:
    sub_B7769C(gameObject, v5);
  }
LABEL_20:
  needQpLb = this->fields.needQpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_43;
  UILabel__set_text(needQpLb, gameObject, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 268, 0LL);
  if ( !qpLb )
    goto LABEL_43;
  UILabel__set_text(qpLb, gameObject, 0LL);
  v13 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !v13 )
    goto LABEL_43;
  UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_43;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v20 = 1;
    do
    {
      v21 = v20 - 1;
      if ( skillInfoList->fields._size <= (unsigned int)(v20 - 1) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v22 = (__int64)skillInfoList->fields._items + 8 * v21;
      v23 = *(UnityEngine_Component_o **)(v22 + 32);
      if ( !v23 )
        break;
      ServantSkillInfoIconComponent__Clear(*(ServantSkillInfoIconComponent_o **)(v22 + 32), 0LL);
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalPositionX(v24, (float)v21 * 230.0, 0LL);
      v25 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalPositionY(v25, 0.0, 0LL);
      v26 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalScale_32809816(v26, 1.0, 0LL);
      if ( v20 >= size )
        goto LABEL_35;
      skillInfoList = this->fields.skillInfoList;
      ++v20;
    }
    while ( skillInfoList );
    goto LABEL_43;
  }
LABEL_35:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_43;
  v28 = itemInfoList->fields._size;
  if ( v28 >= 1 )
  {
    v29 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v29];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v29 >= v28 )
        goto LABEL_44;
      itemInfoList = this->fields.itemInfoList;
    }
    while ( itemInfoList );
    goto LABEL_43;
  }
LABEL_44:
  gameObject = (System_String_o *)this->fields.skillSwitchButton;
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (System_String_o *)this->fields.servantName;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall SkillCombineControl__InitSvtSkillCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  MenuListControl_o *v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C041 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17492/*"buttontxt_synthesis"*/);
    byte_438C041 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17492/*"buttontxt_synthesis"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_30;
  this->fields.userQP = *((_DWORD *)helpBtn + 24);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B7769C(helpBtn, v3);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v23 && v23->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      v23,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v24 )
        break;
      if ( !v27.fields.current )
        sub_B7769C(v24, v25);
      if ( HIDWORD(v27.fields.current[1].klass) == 8 )
      {
        v26 = this->fields.menuListCtr;
        if ( !v26 )
          sub_B7769C(0LL, v25);
        MenuListControl__setBannerIcon(
          v26,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v27.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438C04B & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3461/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_438C04B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3461/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B7769C(v3, v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(this->fields.exeCombineDlg, this->fields.lvUpDataList, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__OnClickInfo(
        SkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  this->fields.currentIdx = idx;
  SkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


void __fastcall SkillCombineControl__OnClickSwitchSkill(SkillCombineControl_o *this, const MethodInfo *method)
{
  SkillCombineControl_o *v2; // x19
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_438C04E & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_B775C4(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_438C04E = 1;
  }
  transformInfo = 0LL;
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  v2->fields.displayTransformIndex = (v2->fields.displayTransformIndex + 1) % v2->fields.transformTotal;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v5;
  *(_QWORD *)&v12.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v12, 0LL);
  SkillCombineControl__SetCombineSkillList(v2, v7, v6, v8);
  if ( v2->fields.transformTotal >= 2 )
  {
    this = (SkillCombineControl_o *)v2->fields.baseUserServantEntity;
    if ( this )
    {
      this = (SkillCombineControl_o *)UserServantEntity__GetTransformedServantInfo(
                                        (UserServantEntity_o *)this,
                                        &transformInfo,
                                        v2->fields.displayTransformIndex,
                                        0LL);
      if ( transformInfo )
      {
        this = (SkillCombineControl_o *)v2->fields.servantName;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, transformInfo->fields.titleText, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_15:
    sub_B7769C(this, method);
  }
LABEL_12:
  v9 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B775CC(Method_SkillCombineControl_OnClickSwitchSkill__);
  v10 = (System_Reflection_MethodBase_o *)sub_B775A8(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_31047328; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_438C045 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C045 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
  if ( !v9 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_31047328 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31047328(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v12,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_31047328;
    sub_B77560(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_31047328,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B7769C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_36683416((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  unsigned int TransformCount; // w0
  struct SvtUseSkillData_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  signed __int64 transformTotal; // x8
  unsigned __int64 v28; // x22
  __int64 v29; // x24
  struct SvtUseSkillData_array *skillDataList; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x23
  __int64 v38; // x20
  __int64 v39; // x21
  int32_t v40; // w0
  UnityEngine_GameObject_o *v41; // x1
  const MethodInfo *v42; // x3
  __int64 v43; // x0
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-60h]
  TransformServantInfo_o *transformInfo; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_438C044 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SvtUseSkillData___TypeInfo);
    byte_438C044 = 1;
  }
  transformInfo = 0LL;
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v45 = v46;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v45, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.userId = v8;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_30;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    this->fields.displayTransformIndex = 0;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtEn, 1, 0LL);
    this->fields.transformTotal = TransformCount;
    v19 = (struct SvtUseSkillData_array *)sub_B775DC(SvtUseSkillData___TypeInfo, TransformCount);
    this->fields.skillDataList = v19;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.skillDataList,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    LODWORD(transformTotal) = this->fields.transformTotal;
    if ( (int)transformTotal >= 1 )
    {
      v28 = 0LL;
      v29 = 32LL;
      while ( 1 )
      {
        skillDataList = this->fields.skillDataList;
        preSelectBaseLb = (UnityEngine_Component_o *)SkillCombineControl__GetSvtSkillData(this, v28, v26);
        if ( !skillDataList )
          break;
        v37 = (System_Int32_array **)preSelectBaseLb;
        if ( preSelectBaseLb )
        {
          preSelectBaseLb = (UnityEngine_Component_o *)sub_B77684(
                                                         preSelectBaseLb,
                                                         skillDataList->obj.klass->_1.element_class);
          if ( !preSelectBaseLb )
          {
            v44 = sub_B776BC(0LL);
            sub_B77668(v44, 0LL);
          }
        }
        if ( v28 >= skillDataList->max_length )
        {
          v43 = sub_B776C8(preSelectBaseLb);
          sub_B77668(v43, 0LL);
        }
        *(Il2CppClass **)((char *)&skillDataList->obj.klass + v29) = (Il2CppClass *)v37;
        sub_B77560((BattleServantConfConponent_o *)((char *)skillDataList + v29), v37, v31, v32, v33, v34, v35, v36);
        transformTotal = this->fields.transformTotal;
        ++v28;
        v29 += 8LL;
        if ( (__int64)v28 >= transformTotal )
          goto LABEL_17;
      }
LABEL_30:
      sub_B7769C(preSelectBaseLb, v16);
    }
LABEL_17:
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.skillSwitchButton;
    if ( !preSelectBaseLb )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, (int)transformTotal > 1, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.servantName;
    if ( !preSelectBaseLb )
      goto LABEL_30;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, this->fields.transformTotal > 1, 0LL);
    if ( this->fields.transformTotal >= 2 )
    {
      preSelectBaseLb = (UnityEngine_Component_o *)*p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        goto LABEL_30;
      preSelectBaseLb = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                     (UserServantEntity_o *)preSelectBaseLb,
                                                     &transformInfo,
                                                     this->fields.displayTransformIndex,
                                                     0LL);
      if ( !transformInfo )
        goto LABEL_30;
      preSelectBaseLb = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !preSelectBaseLb )
        goto LABEL_30;
      UILabel__set_text((UILabel_o *)preSelectBaseLb, transformInfo->fields.titleText, 0LL);
    }
    v39 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v48.fields.currentCryptoKey = v39;
    *(_QWORD *)&v48.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v48, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v41, v40, v42);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillCombineControl_o *v8; // x28
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v11; // x8
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v14; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  const MethodInfo_2D1653C **v23; // x27
  unsigned __int64 v24; // x23
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  __int64 v26; // x8
  UnityEngine_Component_o *v27; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  struct System_Int32_array *v31; // x8
  int32_t v32; // w25
  struct SvtUseSkillData_array *v33; // x8
  __int64 v34; // x9
  SvtUseSkillData_o *v35; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v37; // w20
  SkillEntity_o *Entity; // x0
  const MethodInfo *v39; // x1
  SkillEntity_o *v40; // x19
  int32_t IconId; // w26
  const MethodInfo *v42; // x1
  System_String_o *Name; // x0
  int32_t maxLv; // w22
  System_String_o *v45; // x19
  SkillCombineControl_o *v46; // x21
  int32_t skillRecord; // w19
  struct UserServantEntity_o *baseUserServantEntity; // x8
  const MethodInfo_2D1653C **v49; // x20
  Il2CppObject *v50; // x26
  __int64 v51; // x27
  __int64 v52; // x28
  int32_t baseSvtId; // w27
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x28
  __int64 v55; // x0
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-98h]
  signed __int64 v58; // [xsp+38h] [xbp-88h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-80h]
  System_String_o *skillName; // [xsp+50h] [xbp-70h]
  int32_t v61; // [xsp+58h] [xbp-68h]
  int32_t v62; // [xsp+5Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v8 = this;
  if ( (byte_438C047 & 1) == 0 )
  {
    sub_B775C4(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_B775C4(&StringLiteral_762/*"-"*/);
    byte_438C047 = 1;
  }
  skillDataList = v8->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_43;
  displayTransformIndex = v8->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
  {
LABEL_44:
    v55 = sub_B776C8(this);
    sub_B77668(v55, 0LL);
  }
  v11 = skillDataList->m_Items[displayTransformIndex];
  if ( !v11 )
    goto LABEL_43;
  svtUseSkillIdList = (System_Int32_array **)v11->fields.svtUseSkillIdList;
  p_useSkillIdList = &v8->fields.useSkillIdList;
  v8->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.useSkillIdList,
    svtUseSkillIdList,
    *(System_String_array ***)&svtId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v8->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_43;
  v14 = *(_QWORD *)&useSkillIdList->max_length;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v8->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v15;
  p_targetList = (SkillCombineControl_o **)&v8->fields.targetList;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.targetList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (int)v14 >= 1 )
  {
    v58 = (int)v14;
    v23 = (const MethodInfo_2D1653C **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v24 = 0LL;
    while ( 1 )
    {
      skillInfoList = v8->fields.skillInfoList;
      if ( !skillInfoList )
        break;
      if ( v24 >= (unsigned int)skillInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v26 = (__int64)skillInfoList->fields._items + 8 * v24;
      v27 = *(UnityEngine_Component_o **)(v26 + 32);
      if ( v8->fields.transformTotal >= 2 )
      {
        if ( !v27 )
          break;
        gameObject = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)(v26 + 32), 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v24 * 234.0, 0LL);
        v29 = UnityEngine_Component__get_gameObject(v27, 0LL);
        GameObjectExtensions__SetLocalPositionY(v29, -16.0, 0LL);
        v30 = UnityEngine_Component__get_gameObject(v27, 0LL);
        GameObjectExtensions__SetLocalScale_32809816(v30, v8->fields.scaleOffset, 0LL);
      }
      v31 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v24 >= v31->max_length )
        goto LABEL_44;
      v32 = v31->m_Items[v24 + 1];
      if ( v32 <= 0 )
      {
        ++v24;
      }
      else
      {
        v33 = v8->fields.skillDataList;
        if ( !v33 )
          break;
        v34 = v8->fields.displayTransformIndex;
        if ( (unsigned int)v34 >= v33->max_length )
          goto LABEL_44;
        v35 = v33->m_Items[v34];
        if ( !v35 )
          break;
        svtSkillLvList = v35->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v24 >= svtSkillLvList->max_length )
          goto LABEL_44;
        v37 = svtSkillLvList->m_Items[v24 + 1];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(*v23);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    v32,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v40 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v39);
          Name = SkillEntity__getName(v40, v42);
          maxLv = v40->fields.maxLv;
          v45 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v45 = (System_String_o *)StringLiteral_762/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(*v23);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillName = v45;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v24 + 1,
                                          v32,
                                          0LL);
        v46 = this;
        v61 = IconId;
        v62 = v37;
        if ( this )
        {
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v46->fields.exeCombineDlg);
          LODWORD(v46) = (_DWORD)this;
        }
        else
        {
          skillRecord = 0;
        }
        baseUserServantEntity = v8->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v49 = v23;
        v50 = (Il2CppObject *)v8;
        v52 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v63.fields.currentCryptoKey = v52;
        *(_QWORD *)&v63.fields.fakeValue = v51;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v63, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B77694(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v50, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v27 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v27,
          v24,
          v32,
          v62,
          maxLv,
          skillName,
          v61,
          (int32_t)v46,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        ++v24;
        v23 = v49;
        v8 = (SkillCombineControl_o *)v50;
      }
      if ( (__int64)v24 >= v58 )
        goto LABEL_42;
    }
LABEL_43:
    sub_B7769C(this, targetGo);
  }
LABEL_42:
  SkillCombineControl__SetNeedItemInfo(v8, v8->fields.currentIdx, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0
  int v17; // s0
  int v21; // s0

  if ( (byte_438C04A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_438C04A = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v9, 0LL);
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( v4 )
      {
        UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v13, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7769C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v17, 0LL);
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_14;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v21, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_438C043 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438C043 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39547236((int)this + 264, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x19
  struct UILabel_array *selectSkillHelpLabels; // x8
  int transformTotal; // w21
  struct UILabel_array *v7; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v9; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  unsigned int *lvUpDataList; // x23
  unsigned __int64 v22; // x21
  __int64 v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  __int64 displayTransformIndex; // x8
  __int64 v32; // x0
  __int64 v33; // x0

  v4 = this;
  if ( (byte_438C048 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    this = (SkillCombineControl_o *)sub_B775C4(&SetLevelUpData___TypeInfo);
    byte_438C048 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_35;
    this = (SkillCombineControl_o *)v4->fields.selectSkillInfo;
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    selectSkillHelpLabels = v4->fields.selectSkillHelpLabels;
    if ( !selectSkillHelpLabels )
      goto LABEL_35;
    if ( !selectSkillHelpLabels->max_length )
      goto LABEL_36;
    this = (SkillCombineControl_o *)selectSkillHelpLabels->m_Items[0];
    if ( !this )
      goto LABEL_35;
    transformTotal = v4->fields.transformTotal;
    this = (SkillCombineControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, transformTotal < 2, 0LL);
    v7 = v4->fields.selectSkillHelpLabels;
    if ( !v7 )
      goto LABEL_35;
    if ( v7->max_length <= 1 )
      goto LABEL_36;
    this = (SkillCombineControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_35;
    this = (SkillCombineControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, transformTotal > 1, 0LL);
    targetList = v4->fields.targetList;
    if ( !targetList )
      goto LABEL_35;
    v9 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v9 >= size )
        break;
      if ( size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          goto LABEL_36;
        this = (SkillCombineControl_o *)targetList->fields._items->m_Items[v9];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.selectSkillHelpLabels),
            0LL);
          targetList = v4->fields.targetList;
          ++v9;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_35;
    }
    v12 = (System_Int32_array **)sub_B775DC(SetLevelUpData___TypeInfo, (unsigned int)v4->fields.transformTotal);
    v4->fields.lvUpDataList = (struct SetLevelUpData_array *)v12;
    sub_B77560((BattleServantConfConponent_o *)&v4->fields.lvUpDataList, v12, v13, v14, v15, v16, v17, v18);
    lvUpDataList = (unsigned int *)v4->fields.lvUpDataList;
    if ( v4->fields.transformTotal >= 1 )
    {
      v22 = 0LL;
      v23 = 8LL;
      while ( 1 )
      {
        this = (SkillCombineControl_o *)SkillCombineControl__CreateLeveUpData(v4, idx, v22, v20);
        if ( !lvUpDataList )
          break;
        v30 = (System_Int32_array **)this;
        if ( this )
        {
          this = (SkillCombineControl_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)lvUpDataList + 64LL));
          if ( !this )
          {
            v33 = sub_B776BC(0LL);
            sub_B77668(v33, 0LL);
          }
        }
        if ( v22 >= lvUpDataList[6] )
          goto LABEL_36;
        *(_QWORD *)&lvUpDataList[v23] = v30;
        sub_B77560((BattleServantConfConponent_o *)&lvUpDataList[v23], v30, v24, v25, v26, v27, v28, v29);
        lvUpDataList = (unsigned int *)v4->fields.lvUpDataList;
        ++v22;
        v23 += 2LL;
        if ( (__int64)v22 >= v4->fields.transformTotal )
          goto LABEL_31;
      }
LABEL_35:
      sub_B7769C(this, *(_QWORD *)&idx);
    }
LABEL_31:
    if ( !lvUpDataList )
      goto LABEL_35;
    displayTransformIndex = v4->fields.displayTransformIndex;
    if ( (unsigned int)displayTransformIndex >= lvUpDataList[6] )
    {
LABEL_36:
      v32 = sub_B776C8(this);
      sub_B77668(v32, 0LL);
    }
    SkillCombineControl__SetSvtSkillCombineData(
      v4,
      *(SetLevelUpData_o **)&lvUpDataList[2 * displayTransformIndex + 8],
      v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x21
  float v8; // s4
  float v9; // s5
  float v10; // s6
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_438C04C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_7436/*"INFO_MSG_SKILLUP"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C04C = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v12.fields.g = 0.87891;
  v12.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v12.fields.r = 0.0;
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_Color___ctor_41410832(v12, v8, v9, v10, (const MethodInfo *)&v11);
  if ( !v7 )
    goto LABEL_13;
  UIWidget__set_color(v7, v11, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7436/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_13:
    sub_B7769C(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x19
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  __int64 v6; // x20
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v9; // x20
  float v10; // s4
  float v11; // s5
  float v12; // s6
  SkillCombineControl_o *v13; // x22
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x25
  struct System_Int32_array *combineItemNums; // x27
  unsigned __int64 v17; // x26
  __int64 v18; // x22
  char v19; // w23
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x21
  UIWidget_o *v24; // x21
  int v25; // s0
  const MethodInfo *v29; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v32; // x24
  System_String_o *v33; // x0
  UIWidget_o *v34; // x21
  int v35; // s0
  UIWidget_o *v39; // x20
  int v40; // s0
  __int64 v44; // x0
  System_String_o *v45; // [xsp+8h] [xbp-68h]
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_438C049 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B775C4(&StringLiteral_17492/*"buttontxt_synthesis"*/);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    sub_B775C4(&StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_17489/*"buttontxt_notsynthesis"*/);
    this = (SkillCombineControl_o *)sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438C049 = 1;
  }
  itemInfoList = v4->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_10;
  v6 = 0LL;
  while ( 1 )
  {
    size = itemInfoList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (SkillCombineControl_o *)itemInfoList->fields._items->m_Items[v6];
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      itemInfoList = v4->fields.itemInfoList;
      ++v6;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_10;
  }
  this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
  if ( !this )
    goto LABEL_10;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v47.fields.g = 0.87891;
  v47.fields.b = 0.98828;
  v9 = (UIWidget_o *)Component_WebViewObject;
  v47.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41410832(v47, v10, v11, v12, &methoda);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)&v48.fields.r = methoda.methodPointer;
  *(_QWORD *)&v48.fields.b = methoda.invoker_method;
  UIWidget__set_color(v9, v48, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
  if ( !setLvUpData )
    goto LABEL_10;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v13 = this;
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17492/*"buttontxt_synthesis"*/, 0LL);
      this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( this )
      {
        ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
          this,
          this->klass[2]._1.name);
        qpLb = v4->fields.qpLb;
        v4->fields.spendQpVal = setLvUpData->fields.spendQp;
        this = (SkillCombineControl_o *)System_Int32__ToString_39547236(
                                          (int)v4 + 268,
                                          (System_String_o *)StringLiteral_9434/*"N0"*/,
                                          0LL);
        if ( qpLb )
        {
          v45 = (System_String_o *)v13;
          UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v17 = 0LL;
            v18 = ((*(_QWORD *)&combineItemIds->max_length << 32) - 0x100000000LL) >> 32;
            v19 = 1;
            do
            {
              if ( (__int64)v17 <= v18 )
              {
                v20 = v4->fields.itemInfoList;
                if ( !v20 )
                  goto LABEL_10;
                if ( v17 >= (unsigned int)v20->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                if ( v17 >= combineItemIds->max_length )
                  goto LABEL_54;
                if ( !combineItemNums )
                  goto LABEL_10;
                if ( v17 >= combineItemNums->max_length )
                {
LABEL_54:
                  v44 = sub_B776C8(this);
                  sub_B77668(v44, 0LL);
                }
                v21 = (__int64)v20->fields._items + 8 * v17;
                v22 = *(_QWORD *)(v21 + 32);
                if ( !v22 )
                  goto LABEL_10;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  *(LimitCntUpItemComponent_o **)(v21 + 32),
                  v4->fields.userId,
                  combineItemIds->m_Items[v17 + 1],
                  combineItemNums->m_Items[v17 + 1],
                  0LL);
                v19 &= *(_BYTE *)(v22 + 104) != 0;
              }
            }
            while ( v17++ < 4 );
            v24 = (UIWidget_o *)v4->fields.qpLb;
            *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
            if ( v24 )
            {
              UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
              haveQpVal = v4->fields.haveQpVal;
              spendQpVal = v4->fields.spendQpVal;
              v4->fields._IsExeCombine_k__BackingField = 1;
              v32 = v45;
              if ( haveQpVal < spendQpVal )
              {
                white = UnityEngine_Color__get_white(0LL);
                UIWidget__set_color(v9, white, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/, 0LL);
                v34 = (UIWidget_o *)v4->fields.qpLb;
                v32 = v33;
                *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_red(0LL);
                if ( !v34 )
                  goto LABEL_10;
                UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
                v4->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v19 & 1) == 0 )
              {
                v50 = UnityEngine_Color__get_white(0LL);
                UIWidget__set_color(v9, v50, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                v4->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(v4, v29);
              this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
              if ( this )
              {
                UILabel__set_text((UILabel_o *)this, v32, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_10:
    sub_B7769C(this, setLvUpData);
  }
  v4->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(v4, (const MethodInfo *)setLvUpData);
  this = (SkillCombineControl_o *)v4->fields.qpLb;
  if ( !this )
    goto LABEL_10;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_980/*"0"*/, 0LL);
  v39 = (UIWidget_o *)v4->fields.qpLb;
  *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
  if ( !v39 )
    goto LABEL_10;
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
  this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_10;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17489/*"buttontxt_notsynthesis"*/, 0LL);
  this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_10;
  ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(this, this->klass[2]._1.name);
}