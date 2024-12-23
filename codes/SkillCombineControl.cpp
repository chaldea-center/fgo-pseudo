void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A943 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineMenuControl_TypeInfo, method);
    byte_4B6A943 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *SkillIdList; // x19
  __int64 v7; // x8
  bool v8; // w22
  SkillCombineControl_o *v9; // x20
  unsigned __int64 v10; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v12; // w21
  int32_t v13; // w29

  if ( (byte_4B6A93E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, resData);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    this = (SkillCombineControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6A93E = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_17:
    sub_1BE4D28(this, resData);
  }
  v7 = *(_QWORD *)&SkillIdList->max_length;
  v8 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    v9 = this;
    v10 = 0LL;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v10 >= (unsigned int)v7 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_17;
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_1BE4D30(this, resData);
      v12 = SkillIdList->m_Items[v10 + 1];
      if ( v12 >= 1 )
      {
        v13 = *((_DWORD *)p_combineRootComponent + v10);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v12,
                                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v13 < this->fields.type )
          return !v8;
      }
      LODWORD(v7) = SkillIdList->max_length;
      v8 = (__int64)++v10 < (int)v7;
    }
    while ( (__int64)v10 < (int)v7 );
  }
  return !v8;
}


// local variable allocation has failed, the output may be wrong!
SetLevelUpData_o *__fastcall SkillCombineControl__CreateLeveUpData(
        SkillCombineControl_o *this,
        int32_t idx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  SkillCombineControl_o *v6; // x19
  __int64 v7; // x1
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
  struct SvtUseSkillData_array *skillDataList; // x8
  SvtUseSkillData_o *v19; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v22; // w24
  int32_t v23; // w23
  SkillEntity_o *Entity; // x25
  const MethodInfo *v25; // x2
  SkillCombineControl_o *v26; // x22
  __int64 v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  void *v34; // x1
  System_String_o *Name; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  int32_t m_CancellationTokenSource; // w1
  float v44; // s0
  float v45; // x23^4
  int v46; // w24
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  float CombineCampaignQpRate; // s0
  double v55; // d0
  int v56; // w8
  int64_t combineRootComponent; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_String_o *titleText; // x1
  __int64 v73; // [xsp+8h] [xbp-58h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v75; // 0:x0.8
  System_Nullable_float__o v76; // 0:x0.8
  System_Nullable_float__o v77; // 0:x0.8

  v6 = this;
  if ( (byte_4B6A940 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&int___TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Nullable_float__GetValueOrDefault__, v9);
    sub_1BE4ACC(&Method_System_Nullable_int__GetValueOrDefault__, v10);
    sub_1BE4ACC(&Method_System_Nullable_int___ctor__, v11);
    sub_1BE4ACC(&Method_System_Nullable_float___ctor__, v12);
    sub_1BE4ACC(&Method_System_Nullable_float__get_HasValue__, v13);
    sub_1BE4ACC(&Method_System_Nullable_int__get_HasValue__, v14);
    sub_1BE4ACC(&SetLevelUpData_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (SkillCombineControl_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v17);
    byte_4B6A940 = 1;
  }
  transformInfo = 0LL;
  skillDataList = v6->fields.skillDataList;
  if ( !skillDataList )
LABEL_32:
    sub_1BE4D28(this, *(_QWORD *)&idx);
  if ( skillDataList->max_length <= transformIndex )
    goto LABEL_33;
  v19 = skillDataList->m_Items[transformIndex];
  if ( !v19 )
    goto LABEL_32;
  svtUseSkillIdList = v19->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_32;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_33;
  svtSkillLvList = v19->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_32;
  if ( svtSkillLvList->max_length <= idx )
LABEL_33:
    sub_1BE4D30(this, *(_QWORD *)&idx);
  v22 = svtUseSkillIdList->m_Items[idx + 1];
  v23 = svtSkillLvList->m_Items[idx + 1];
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_32;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              v22,
                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (SkillCombineControl_o *)SkillCombineControl__GetCombineSkillEntity(v6, v23, v25);
  if ( !v6->fields.baseUserServantEntity )
    goto LABEL_32;
  v26 = this;
  UserServantEntity__GetTransformedServantInfo(v6->fields.baseUserServantEntity, &transformInfo, transformIndex, 0LL);
  v27 = sub_1BE4D18(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_32;
  *(_DWORD *)(v27 + 16) = v22;
  *(_DWORD *)(v27 + 20) = idx + 1;
  *(_DWORD *)(v27 + 24) = idx;
  v34 = StringLiteral_1/*""*/;
  *(_QWORD *)(v27 + 32) = StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v34, v28, v29, v30, v31, v32, v33);
  if ( !Entity )
    goto LABEL_32;
  Name = SkillEntity__getName(Entity, 0LL);
  *(_QWORD *)(v27 + 40) = Name;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 40), (int64_t)Name, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v27 + 64) = v23;
  *(_DWORD *)(v27 + 68) = v23 + 1;
  *(_DWORD *)(v27 + 72) = Entity->fields.maxLv;
  if ( v26
    && (m_CancellationTokenSource = (int32_t)v26->fields.m_CancellationTokenSource,
        v75 = (System_Nullable_int__o)&v73,
        v73 = 0LL,
        System_Nullable_int____ctor(
          v75,
          m_CancellationTokenSource,
          (const MethodInfo_370920C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v73) )
  {
    v44 = (float)SHIDWORD(v73);
    v76 = (System_Nullable_float__o)&v73;
    v73 = 0LL;
    System_Nullable_float____ctor(v76, v44, (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
    v45 = *((float *)&v73 + 1);
    v46 = (unsigned __int8)v73;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(v6, v47);
    if ( v46 )
    {
      v77 = (System_Nullable_float__o)&v73;
      v73 = 0LL;
      System_Nullable_float____ctor(
        v77,
        CombineCampaignQpRate * v45,
        (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
      v55 = *((float *)&v73 + 1);
      goto LABEL_21;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(v6, v42);
  }
  v55 = 0.0;
LABEL_21:
  if ( v55 == INFINITY )
    v56 = 0x80000000;
  else
    v56 = (int)v55;
  *(_DWORD *)(v27 + 76) = v56;
  *(_DWORD *)(v27 + 80) = v6->fields.userQP;
  if ( !v26 || (combineRootComponent = (int64_t)v26->fields.combineRootComponent) == 0 )
    combineRootComponent = sub_1BE4B74(int___TypeInfo, 0LL);
  *(_QWORD *)(v27 + 96) = combineRootComponent;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 96), combineRootComponent, v48, v49, v50, v51, v52, v53);
  if ( !v26 || (v64 = *(_QWORD *)&v26->fields.type) == 0 )
    v64 = sub_1BE4B74(int___TypeInfo, 0LL);
  *(_QWORD *)(v27 + 104) = v64;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 104), v64, v58, v59, v60, v61, v62, v63);
  if ( !transformInfo )
    goto LABEL_32;
  titleText = transformInfo->fields.titleText;
  *(_QWORD *)(v27 + 56) = titleText;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 56), (int64_t)titleText, v65, v66, v67, v68, v69, v70);
  return (SetLevelUpData_o *)v27;
}


float __fastcall SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v8; // s8
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A942 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    byte_4B6A942 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v8 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      combineEventList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._current )
        sub_1BE4D28(v9, v10);
      if ( HIDWORD(v12.fields._current[1].klass) == 8 )
      {
        v8 = *(float *)&v12.fields._current[3].monitor;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  Il2CppObject *v15; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B6A941 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_CombineSkillMaster___, *(_QWORD *)&skillLv);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B6A941 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v18, 0LL);
  if ( !v12
    || (v15 = DataMasterBase_object__object__int___GetEntity(
                v12,
                (int32_t)Master_object,
                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v15)
    || !Master_object )
  {
LABEL_12:
    sub_1BE4D28(Master_object, v10);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v15[7].klass, skillLv, 0LL);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B6A937 & 1) == 0 )
  {
    sub_1BE4ACC(&SvtUseSkillData_TypeInfo, *(_QWORD *)&transformIndex);
    byte_4B6A937 = 1;
  }
  v5 = sub_1BE4D18(SvtUseSkillData_TypeInfo);
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
        sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)baseUserServantEntity, v8, v9, v10, v11, v12, v13),
        (baseUserServantEntity = this->fields.baseUserServantEntity) == 0LL) )
  {
    sub_1BE4D28(baseUserServantEntity, v6);
  }
  v14 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.method)(
          baseUserServantEntity,
          baseUserServantEntity->klass[1]._1.image);
  *(_QWORD *)(v5 + 24) = v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 24), v14, v15, v16, v17, v18, v19, v20);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1BE4D28(this, method);
  if ( !lvUpDataList->max_length )
    sub_1BE4D30(this, method);
  return lvUpDataList->m_Items[0];
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v16; // w23
  UILabel_o *v17; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  int v20; // w8
  int v21; // w22
  int32_t v22; // w20
  UnityEngine_Component_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  int v27; // w21
  int32_t v28; // w20
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6A933 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_8913/*"MSG_PRESELECT_BASE_SVT"*/, v7);
    sub_1BE4ACC(&StringLiteral_8916/*"MSG_SKILL_SELECT"*/, v8);
    sub_1BE4ACC(&StringLiteral_9365/*"NEED_QP_INFO"*/, v9);
    byte_4B6A933 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_36;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  SkillCombineControl__SetHaveQpInfo(this, v13);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_36;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BE4D30(gameObject, v12);
      v17 = selectSkillHelpLabels->m_Items[v16];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8916/*"MSG_SKILL_SELECT"*/, 0LL);
      if ( !v17 )
        break;
      UILabel__set_text(v17, (System_String_o *)gameObject, 0LL);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_1BE4D28(gameObject, v12);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9365/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_36;
  UILabel__set_text(needQpLb, (System_String_o *)gameObject, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 308, 0LL);
  if ( !qpLb )
    goto LABEL_36;
  UILabel__set_text(qpLb, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.qpLb;
  if ( !gameObject )
    goto LABEL_36;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v29, 0LL);
  gameObject = this->fields.skillInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v20 = *((_DWORD *)gameObject + 6);
  v21 = v20 - 1;
  if ( v20 >= 1 )
  {
    v22 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v22,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      v23 = (UnityEngine_Component_o *)gameObject;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalPositionX(v24, (float)v22 * 230.0, 0LL);
      v25 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalPositionY(v25, 0.0, 0LL);
      v26 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalScale_34488912(v26, 1.0, 0LL);
      if ( v21 == v22 )
        goto LABEL_30;
      gameObject = this->fields.skillInfoList;
      ++v22;
    }
    while ( gameObject );
    goto LABEL_36;
  }
LABEL_30:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v27 = *((_DWORD *)gameObject + 6);
  if ( v27 >= 1 )
  {
    v28 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v28,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v27 == ++v28 )
        goto LABEL_37;
      gameObject = this->fields.itemInfoList;
    }
    while ( gameObject );
    goto LABEL_36;
  }
LABEL_37:
  gameObject = this->fields.skillSwitchButton;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = this->fields.servantName;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall SkillCombineControl__InitSvtSkillCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *helpBtn; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  MenuListControl_o *v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A932 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_17905/*"buttontxt_synthesis"*/, v8);
    byte_4B6A932 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v11);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v12);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17905/*"buttontxt_synthesis"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_28;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  this->fields.userQP = *((_DWORD *)helpBtn + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.charaGraph, 0LL, v15, v16, v17, v18, v19, v20);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_28:
    sub_1BE4D28(helpBtn, v9);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v29 && v29->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v29,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      if ( !v33.fields._current )
        sub_1BE4D28(v30, v31);
      if ( HIDWORD(v33.fields._current[1].klass) == 8 )
      {
        v32 = this->fields.menuListCtr;
        if ( !v32 )
          sub_1BE4D28(0LL, v31);
        MenuListControl__setBannerIcon(
          v32,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v33.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B6A93C & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_3875/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_4B6A93C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3875/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BE4D28(v4, v5);
  SetRarityDialogControl__SetSkillNpCombineInfo(exeCombineDlg, this->fields.lvUpDataList, v4, 0LL);
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
  __int64 v3; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  UnityEngine_GameObject_o *v8; // x1
  const MethodInfo *v9; // x3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4B6A93F & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (SkillCombineControl_o *)sub_1BE4ACC(&Method_SkillCombineControl_OnClickSwitchSkill__, v3);
    byte_4B6A93F = 1;
  }
  transformInfo = 0LL;
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  v2->fields.displayTransformIndex = (v2->fields.displayTransformIndex + 1) % v2->fields.transformTotal;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v6 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v13, 0LL);
  SkillCombineControl__SetCombineSkillList(v2, v8, v7, v9);
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
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    sub_1BE4D28(this, method);
  }
LABEL_11:
  v10 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BE4AE4(Method_SkillCombineControl_OnClickSwitchSkill__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38813936; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4B6A936 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SkillCombineControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6A936 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v24, 0LL);
  if ( !v12 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38813936 = CharaGraphManager__CreateTexturePrefab_38813936(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38813936;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38813936,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BE4D28(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41797436((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int128 v9; // q1
  int64_t v10; // x0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  int64_t preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  struct SvtUseSkillData_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  signed __int64 transformTotal; // x8
  unsigned __int64 v30; // x22
  __int64 v31; // x24
  struct SvtUseSkillData_array *skillDataList; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x23
  __int64 v40; // x20
  __int64 v41; // x21
  int32_t v42; // w0
  UnityEngine_GameObject_o *v43; // x1
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B6A935 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BE4ACC(&SvtUseSkillData___TypeInfo, v8);
    byte_4B6A935 = 1;
  }
  transformInfo = 0LL;
  if ( usrSvtEn )
  {
    v9 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v46 = v47;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v46, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.userId = v10;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)usrSvtEn,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    preSelectBaseLb = (int64_t)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    preSelectBaseLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    preSelectBaseLb = (int64_t)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    this->fields.displayTransformIndex = 0;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtEn, 1, 0LL);
    CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
    v21 = (struct SvtUseSkillData_array *)sub_1BE4B74(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v21;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.skillDataList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    LODWORD(transformTotal) = this->fields.transformTotal;
    if ( (int)transformTotal >= 1 )
    {
      v30 = 0LL;
      v31 = 32LL;
      while ( 1 )
      {
        skillDataList = this->fields.skillDataList;
        preSelectBaseLb = (int64_t)SkillCombineControl__GetSvtSkillData(this, v30, v28);
        if ( !skillDataList )
          break;
        v39 = preSelectBaseLb;
        if ( preSelectBaseLb )
        {
          preSelectBaseLb = sub_1BE4C08(preSelectBaseLb, skillDataList->obj.klass->_1.element_class);
          if ( !preSelectBaseLb )
          {
            v45 = sub_1BE4D4C(0LL);
            sub_1BE4BF4(v45, 0LL);
          }
        }
        if ( v30 >= skillDataList->max_length )
          sub_1BE4D30(preSelectBaseLb, v18);
        *(Il2CppClass **)((char *)&skillDataList->obj.klass + v31) = (Il2CppClass *)v39;
        sub_1BE4A70((PartyOrganizationUtility_o *)((char *)skillDataList + v31), v39, v33, v34, v35, v36, v37, v38);
        transformTotal = this->fields.transformTotal;
        ++v30;
        v31 += 8LL;
        if ( (__int64)v30 >= transformTotal )
          goto LABEL_16;
      }
LABEL_28:
      sub_1BE4D28(preSelectBaseLb, v18);
    }
LABEL_16:
    preSelectBaseLb = (int64_t)this->fields.skillSwitchButton;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, (int)transformTotal > 1, 0LL);
    preSelectBaseLb = (int64_t)this->fields.servantName;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    preSelectBaseLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, this->fields.transformTotal > 1, 0LL);
    if ( this->fields.transformTotal >= 2 )
    {
      preSelectBaseLb = (int64_t)*p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        goto LABEL_28;
      preSelectBaseLb = UserServantEntity__GetTransformedServantInfo(
                          (UserServantEntity_o *)preSelectBaseLb,
                          &transformInfo,
                          this->fields.displayTransformIndex,
                          0LL);
      if ( !transformInfo )
        goto LABEL_28;
      preSelectBaseLb = (int64_t)this->fields.servantName;
      if ( !preSelectBaseLb )
        goto LABEL_28;
      UILabel__set_text((UILabel_o *)preSelectBaseLb, transformInfo->fields.titleText, 0LL);
    }
    v41 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v41;
    *(_QWORD *)&v49.fields.fakeValue = v40;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v49, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v43, v42, v44);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SkillCombineControl_o *v8; // x29
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
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v22; // x8
  int64_t svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v25; // x21
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x2
  unsigned __int64 v34; // x24
  UnityEngine_Component_o *v35; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  struct System_Int32_array *v39; // x8
  int32_t v40; // w25
  struct SvtUseSkillData_array *v41; // x8
  __int64 v42; // x9
  SvtUseSkillData_o *v43; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v45; // w26
  Il2CppObject *Entity; // x0
  SkillEntity_o *v47; // x19
  int32_t IconId; // w28
  System_String_o *Name; // x0
  int maxLv; // w19
  System_String_o *v51; // x20
  unsigned __int64 v52; // x27
  SkillCombineControl_o *v53; // x21
  int32_t skillRecord; // w20
  int32_t v55; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v57; // w19
  __int64 v58; // x21
  __int64 v59; // x28
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x28
  const MethodInfo *v62; // x3
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v72; // x8
  SkillCombineControl_o **p_targetList; // [xsp+20h] [xbp-90h]
  __int64 v75; // [xsp+30h] [xbp-80h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+38h] [xbp-78h]
  int32_t skillMaxLv; // [xsp+44h] [xbp-6Ch]
  System_String_o *skillName; // [xsp+48h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  v8 = this;
  if ( (byte_4B6A938 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, targetGo);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&Method_SkillCombineControl_OnClickInfo__, v18);
    this = (SkillCombineControl_o *)sub_1BE4ACC(&StringLiteral_915/*"-"*/, v19);
    byte_4B6A938 = 1;
  }
  skillDataList = v8->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_43;
  displayTransformIndex = v8->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
LABEL_44:
    sub_1BE4D30(this, targetGo);
  v22 = skillDataList->m_Items[displayTransformIndex];
  if ( !v22 )
    goto LABEL_43;
  svtUseSkillIdList = (int64_t)v22->fields.svtUseSkillIdList;
  p_useSkillIdList = &v8->fields.useSkillIdList;
  v8->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v8->fields.useSkillIdList,
    svtUseSkillIdList,
    *(int64_t *)&svtId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v8->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_43;
  v25 = *(_QWORD *)&useSkillIdList->max_length;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v8->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v26;
  p_targetList = (SkillCombineControl_o **)&v8->fields.targetList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.targetList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  if ( (int)v25 >= 1 )
  {
    v34 = 0LL;
    v75 = (unsigned int)v25;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v8->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v34,
                                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v35 = (UnityEngine_Component_o *)this;
      if ( v8->fields.transformTotal >= 2 )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v34 * 234.0, 0LL);
        v37 = UnityEngine_Component__get_gameObject(v35, 0LL);
        GameObjectExtensions__SetLocalPositionY(v37, -16.0, 0LL);
        v38 = UnityEngine_Component__get_gameObject(v35, 0LL);
        GameObjectExtensions__SetLocalScale_34488912(v38, v8->fields.scaleOffset, 0LL);
      }
      v39 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v34 >= v39->max_length )
        goto LABEL_44;
      v40 = v39->m_Items[v34 + 1];
      if ( v40 <= 0 )
      {
        v52 = v34 + 1;
      }
      else
      {
        v41 = v8->fields.skillDataList;
        if ( !v41 )
          break;
        v42 = v8->fields.displayTransformIndex;
        if ( (unsigned int)v42 >= v41->max_length )
          goto LABEL_44;
        v43 = v41->m_Items[v42];
        if ( !v43 )
          break;
        svtSkillLvList = v43->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v34 >= svtSkillLvList->max_length )
          goto LABEL_44;
        v45 = svtSkillLvList->m_Items[v34 + 1];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   v40,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v47 = (SkillEntity_o *)Entity;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)Entity, 0LL);
          Name = SkillEntity__getName(v47, 0LL);
          maxLv = v47->fields.maxLv;
          v51 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v51 = (System_String_o *)StringLiteral_915/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v52 = v34 + 1;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v34 + 1,
                                          v40,
                                          0LL);
        skillName = v51;
        skillMaxLv = maxLv;
        if ( this )
        {
          v53 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v53->fields.charaGraphBase);
          v55 = (int)this;
        }
        else
        {
          v55 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v8->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v57 = IconId;
        v59 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v58 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v59;
        *(_QWORD *)&v79.fields.fakeValue = v58;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v79, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1BE4D18(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v8,
          Method_SkillCombineControl_OnClickInfo__,
          v62);
        if ( !v35 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v35,
          v34,
          v40,
          v45,
          skillMaxLv,
          skillName,
          v57,
          v55,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v69 = *(_QWORD *)&this->fields.m_CachedPtr;
        v70 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v69 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v69 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v35,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = v69 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v72 + 32) = v35;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)v35, v63, v64, v65, v66, v67, v68);
        }
      }
      v34 = v52;
      if ( v52 == v75 )
        goto LABEL_42;
    }
LABEL_43:
    sub_1BE4D28(this, targetGo);
  }
LABEL_42:
  SkillCombineControl__SetNeedItemInfo(v8, v8->fields.currentIdx, v33);
}


void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v8; // x19
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6A93B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B6A93B = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v9, 0LL);
      if ( v5 )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v5, v10, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BE4D28(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v11, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(v5, v12, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B6A934 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, method);
    byte_4B6A934 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63504416((int)this + 304, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BE4D28(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *selectSkillInfo; // x0
  __int64 v8; // x1
  struct UILabel_array *selectSkillHelpLabels; // x8
  int32_t transformTotal; // w21
  struct UILabel_array *v11; // x8
  int32_t v12; // w21
  struct System_Int32_array *useSkillIdList; // x8
  struct SetLevelUpData_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  struct SetLevelUpData_array *lvUpDataList; // x23
  unsigned __int64 v24; // x21
  __int64 v25; // x24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x22
  __int64 displayTransformIndex; // x8
  __int64 v34; // x0

  if ( (byte_4B6A939 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1BE4ACC(&SetLevelUpData___TypeInfo, v6);
    byte_4B6A939 = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList )
      goto LABEL_21;
    selectSkillInfo = (UILabel_o *)this->fields.selectSkillInfo;
    if ( !selectSkillInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, 1, 0LL);
    selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
    if ( !selectSkillHelpLabels )
      goto LABEL_21;
    if ( !selectSkillHelpLabels->max_length )
      goto LABEL_33;
    selectSkillInfo = selectSkillHelpLabels->m_Items[0];
    if ( !selectSkillInfo )
      goto LABEL_21;
    transformTotal = this->fields.transformTotal;
    selectSkillInfo = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)selectSkillInfo,
                                     0LL);
    if ( !selectSkillInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, transformTotal < 2, 0LL);
    v11 = this->fields.selectSkillHelpLabels;
    if ( !v11 )
      goto LABEL_21;
    if ( v11->max_length <= 1 )
      goto LABEL_33;
    selectSkillInfo = v11->m_Items[1];
    if ( !selectSkillInfo )
      goto LABEL_21;
    selectSkillInfo = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)selectSkillInfo,
                                     0LL);
    if ( !selectSkillInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, transformTotal > 1, 0LL);
    selectSkillInfo = (UILabel_o *)this->fields.targetList;
    if ( !selectSkillInfo )
      goto LABEL_21;
    v12 = 0;
    while ( v12 < SLODWORD(selectSkillInfo->fields.m_CancellationTokenSource) )
    {
      selectSkillInfo = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                       v12,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_21;
      if ( useSkillIdList->max_length <= idx )
        goto LABEL_33;
      if ( selectSkillInfo )
      {
        ServantSkillInfoIconComponent__SetDispSelectMskImg(
          (ServantSkillInfoIconComponent_o *)selectSkillInfo,
          useSkillIdList->m_Items[idx + 1] == selectSkillInfo->fields.mDepth,
          0LL);
        selectSkillInfo = (UILabel_o *)this->fields.targetList;
        ++v12;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_21;
    }
    v14 = (struct SetLevelUpData_array *)sub_1BE4B74(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    this->fields.lvUpDataList = v14;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.lvUpDataList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    lvUpDataList = this->fields.lvUpDataList;
    if ( this->fields.transformTotal >= 1 )
    {
      v24 = 0LL;
      v25 = 32LL;
      while ( 1 )
      {
        selectSkillInfo = (UILabel_o *)SkillCombineControl__CreateLeveUpData(this, idx, v24, v22);
        if ( !lvUpDataList )
          break;
        v32 = (int64_t)selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = (UILabel_o *)sub_1BE4C08(selectSkillInfo, lvUpDataList->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
            v34 = sub_1BE4D4C(0LL);
            sub_1BE4BF4(v34, 0LL);
          }
        }
        if ( v24 >= lvUpDataList->max_length )
          goto LABEL_33;
        *(Il2CppClass **)((char *)&lvUpDataList->obj.klass + v25) = (Il2CppClass *)v32;
        sub_1BE4A70((PartyOrganizationUtility_o *)((char *)lvUpDataList + v25), v32, v26, v27, v28, v29, v30, v31);
        lvUpDataList = this->fields.lvUpDataList;
        ++v24;
        v25 += 8LL;
        if ( (__int64)v24 >= this->fields.transformTotal )
          goto LABEL_29;
      }
LABEL_21:
      sub_1BE4D28(selectSkillInfo, v8);
    }
LABEL_29:
    if ( !lvUpDataList )
      goto LABEL_21;
    displayTransformIndex = this->fields.displayTransformIndex;
    if ( (unsigned int)displayTransformIndex >= lvUpDataList->max_length )
LABEL_33:
      sub_1BE4D30(selectSkillInfo, v8);
    SkillCombineControl__SetSvtSkillCombineData(this, lvUpDataList->m_Items[displayTransformIndex], v21);
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B6A93D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_7507/*"INFO_MSG_SKILLUP"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B6A93D = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v9.fields.r = 0.0;
  v9.fields.a = 1.0;
  v9.fields.g = 0.87891;
  v9.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v9, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7507/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1BE4D28(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v16; // w20
  UIWidget_o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v22; // x23
  int32_t *v23; // x29
  int32_t *v24; // x24
  signed __int64 v25; // x21
  char v26; // w26
  System_Collections_Generic_List_object__o *v27; // x22
  const MethodInfo *v28; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v31; // x22
  System_String_o *v32; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6A93A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, setLvUpData);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v6);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_5881/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_1BE4ACC(&StringLiteral_17905/*"buttontxt_synthesis"*/, v9);
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, v10);
    sub_1BE4ACC(&StringLiteral_12297/*"SHORT_ITEM_INFO_MSG"*/, v11);
    sub_1BE4ACC(&StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_1BE4ACC(&StringLiteral_17902/*"buttontxt_notsynthesis"*/, v13);
    sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v14);
    byte_4B6A93A = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_8;
  v16 = 0;
  while ( v16 < itemInfoList->fields._size )
  {
    itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemInfoList,
                                                                  v16,
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( itemInfoList )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)itemInfoList, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      ++v16;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_8;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
  if ( !itemInfoList )
    goto LABEL_8;
  itemInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)itemInfoList,
                                                                (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v33.fields.r = 0.0;
  v33.fields.a = 1.0;
  v33.fields.g = 0.87891;
  v33.fields.b = 0.98828;
  v17 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v33, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5881/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0LL);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v18 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17905/*"buttontxt_synthesis"*/, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
          itemInfoList,
          itemInfoList->klass->vtable._34_get_Count.methodPtr);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_63504416(
                                                                      (int)this + 308,
                                                                      (System_String_o *)StringLiteral_9359/*"N0"*/,
                                                                      0LL);
        if ( qpLb )
        {
          v32 = (System_String_o *)v18;
          UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0LL);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v22 = 0LL;
            v23 = &combineItemIds->m_Items[1];
            v24 = &combineItemNums->m_Items[1];
            v25 = combineItemIds->max_length - 1;
            v26 = 1;
            do
            {
              if ( (__int64)v22 <= v25 )
              {
                itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              itemInfoList,
                                                                              v22,
                                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v22 >= combineItemIds->max_length )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v22 >= combineItemNums->max_length )
                  goto LABEL_47;
                v27 = itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  (LimitCntUpItemComponent_o *)itemInfoList,
                  this->fields.userId,
                  v23[v22],
                  v24[v22],
                  0LL);
                if ( v22 >= combineItemIds->max_length || v22 >= combineItemNums->max_length )
LABEL_47:
                  sub_1BE4D30(itemInfoList, setLvUpData);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, v23[v22], v24[v22], 0LL);
                v26 &= LOBYTE(v27[2].fields._syncRoot) != 0;
              }
              ++v22;
            }
            while ( v22 != 5 );
            itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
            if ( itemInfoList )
            {
              v34.fields.r = 1.0;
              v34.fields.g = 1.0;
              v34.fields.b = 1.0;
              v34.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)itemInfoList, v34, 0LL);
              haveQpVal = this->fields.haveQpVal;
              spendQpVal = this->fields.spendQpVal;
              this->fields._IsExeCombine_k__BackingField = 1;
              v31 = v32;
              if ( haveQpVal < spendQpVal )
              {
                v35.fields.r = 1.0;
                v35.fields.g = 1.0;
                v35.fields.b = 1.0;
                v35.fields.a = 1.0;
                UIWidget__set_color(v17, v35, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/,
                                                                              0LL);
                if ( !this->fields.qpLb )
                  goto LABEL_8;
                v31 = (System_String_o *)itemInfoList;
                v36.fields.r = 1.0;
                v36.fields.g = 0.0;
                v36.fields.b = 0.0;
                v36.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v36, 0LL);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v26 & 1) == 0 )
              {
                v37.fields.r = 1.0;
                v37.fields.g = 1.0;
                v37.fields.b = 1.0;
                v37.fields.a = 1.0;
                UIWidget__set_color(v17, v37, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(this, v28);
              itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
              if ( itemInfoList )
              {
                UILabel__set_text((UILabel_o *)itemInfoList, v31, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_8:
    sub_1BE4D28(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  v38.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v38, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17902/*"buttontxt_notsynthesis"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
    itemInfoList,
    itemInfoList->klass->vtable._34_get_Count.methodPtr);
}