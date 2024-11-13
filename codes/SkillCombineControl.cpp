void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19EBA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19EBA = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *SkillIdList; // x19
  __int64 v9; // x8
  bool v10; // w22
  SkillCombineControl_o *v11; // x20
  unsigned __int64 v12; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v14; // w21
  int32_t v15; // w29

  if ( (byte_4B19EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, resData, method);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4, v5);
    this = (SkillCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19EB5 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_17:
    sub_1BCAA3C(this, resData);
  }
  v9 = *(_QWORD *)&SkillIdList->max_length;
  v10 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    v11 = this;
    v12 = 0LL;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v12 >= (unsigned int)v9 )
        goto LABEL_18;
      if ( !v11 )
        goto LABEL_17;
      if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_1BCAA44(this, resData);
      v14 = SkillIdList->m_Items[v12 + 1];
      if ( v14 >= 1 )
      {
        v15 = *((_DWORD *)p_combineRootComponent + v12);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v14,
                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v15 < this->fields.type )
          return !v10;
      }
      LODWORD(v9) = SkillIdList->max_length;
      v10 = (__int64)++v12 < (int)v9;
    }
    while ( (__int64)v12 < (int)v9 );
  }
  return !v10;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct SvtUseSkillData_array *skillDataList; // x8
  SvtUseSkillData_o *v30; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v33; // w24
  int32_t v34; // w23
  SkillEntity_o *Entity; // x25
  const MethodInfo *v36; // x2
  SkillCombineControl_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  void *v48; // x1
  System_String_o *Name; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x1
  int32_t m_CancellationTokenSource; // w1
  float v58; // s0
  float v59; // x23^4
  int v60; // w24
  const MethodInfo *v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  float CombineCampaignQpRate; // s0
  double v69; // d0
  int v70; // w8
  int64_t combineRootComponent; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_String_o *titleText; // x1
  __int64 v87; // [xsp+8h] [xbp-58h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v89; // 0:x0.8
  System_Nullable_float__o v90; // 0:x0.8
  System_Nullable_float__o v91; // 0:x0.8

  v6 = this;
  if ( (byte_4B19EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx, *(_QWORD *)&transformIndex);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v13, v14);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v21, v22);
    sub_1BCA7E0(&SetLevelUpData_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    this = (SkillCombineControl_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B19EB7 = 1;
  }
  transformInfo = 0LL;
  skillDataList = v6->fields.skillDataList;
  if ( !skillDataList )
LABEL_32:
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  if ( skillDataList->max_length <= transformIndex )
    goto LABEL_33;
  v30 = skillDataList->m_Items[transformIndex];
  if ( !v30 )
    goto LABEL_32;
  svtUseSkillIdList = v30->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_32;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_33;
  svtSkillLvList = v30->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_32;
  if ( svtSkillLvList->max_length <= idx )
LABEL_33:
    sub_1BCAA44(this, *(_QWORD *)&idx);
  v33 = svtUseSkillIdList->m_Items[idx + 1];
  v34 = svtSkillLvList->m_Items[idx + 1];
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_32;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              v33,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (SkillCombineControl_o *)SkillCombineControl__GetCombineSkillEntity(v6, v34, v36);
  if ( !v6->fields.baseUserServantEntity )
    goto LABEL_32;
  v37 = this;
  UserServantEntity__GetTransformedServantInfo(v6->fields.baseUserServantEntity, &transformInfo, transformIndex, 0LL);
  v41 = sub_1BCAA2C(SetLevelUpData_TypeInfo, v38, v39, v40);
  SetLevelUpData___ctor((SetLevelUpData_o *)v41, 0LL);
  if ( !v41 )
    goto LABEL_32;
  *(_DWORD *)(v41 + 16) = v33;
  *(_DWORD *)(v41 + 20) = idx + 1;
  *(_DWORD *)(v41 + 24) = idx;
  v48 = StringLiteral_1/*""*/;
  *(_QWORD *)(v41 + 32) = StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 32), (int64_t)v48, v42, v43, v44, v45, v46, v47);
  if ( !Entity )
    goto LABEL_32;
  Name = SkillEntity__getName(Entity, 0LL);
  *(_QWORD *)(v41 + 40) = Name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 40), (int64_t)Name, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)(v41 + 64) = v34;
  *(_DWORD *)(v41 + 68) = v34 + 1;
  *(_DWORD *)(v41 + 72) = Entity->fields.maxLv;
  if ( v37
    && (m_CancellationTokenSource = (int32_t)v37->fields.m_CancellationTokenSource,
        v89 = (System_Nullable_int__o)&v87,
        v87 = 0LL,
        System_Nullable_int____ctor(
          v89,
          m_CancellationTokenSource,
          (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v87) )
  {
    v58 = (float)SHIDWORD(v87);
    v90 = (System_Nullable_float__o)&v87;
    v87 = 0LL;
    System_Nullable_float____ctor(v90, v58, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v59 = *((float *)&v87 + 1);
    v60 = (unsigned __int8)v87;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(v6, v61);
    if ( v60 )
    {
      v91 = (System_Nullable_float__o)&v87;
      v87 = 0LL;
      System_Nullable_float____ctor(
        v91,
        CombineCampaignQpRate * v59,
        (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
      v69 = *((float *)&v87 + 1);
      goto LABEL_21;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(v6, v56);
  }
  v69 = 0.0;
LABEL_21:
  if ( v69 == INFINITY )
    v70 = 0x80000000;
  else
    v70 = (int)v69;
  *(_DWORD *)(v41 + 76) = v70;
  *(_DWORD *)(v41 + 80) = v6->fields.userQP;
  if ( !v37 || (combineRootComponent = (int64_t)v37->fields.combineRootComponent) == 0 )
    combineRootComponent = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v41 + 96) = combineRootComponent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 96), combineRootComponent, v62, v63, v64, v65, v66, v67);
  if ( !v37 || (v78 = *(_QWORD *)&v37->fields.type) == 0 )
    v78 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v41 + 104) = v78;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 104), v78, v72, v73, v74, v75, v76, v77);
  if ( !transformInfo )
    goto LABEL_32;
  titleText = transformInfo->fields.titleText;
  *(_QWORD *)(v41 + 56) = titleText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 56), (int64_t)titleText, v79, v80, v81, v82, v83, v84);
  return (SetLevelUpData_o *)v41;
}


float __fastcall SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v13; // s8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19EB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v10, v11);
    byte_4B19EB9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v13 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v14 )
        break;
      if ( !v17.fields._current )
        sub_1BCAA3C(v14, v15);
      if ( HIDWORD(v17.fields._current[1].klass) == 8 )
      {
        v13 = *(float *)&v17.fields._current[3].monitor;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  Il2CppObject *v19; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B19EB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineSkillMaster___, *(_QWORD *)&skillLv, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B19EB8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillLv);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = v17;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  if ( !v16
    || (v19 = DataMasterBase_object__object__int___GetEntity(
                v16,
                (int32_t)Master_object,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v19)
    || !Master_object )
  {
LABEL_12:
    sub_1BCAA3C(Master_object, v14);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v19[7].klass, skillLv, 0LL);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x19
  __int64 v7; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19EAE & 1) == 0 )
  {
    sub_1BCA7E0(&SvtUseSkillData_TypeInfo, *(_QWORD *)&transformIndex, method);
    byte_4B19EAE = 1;
  }
  v6 = sub_1BCAA2C(SvtUseSkillData_TypeInfo, *(_QWORD *)&transformIndex, method, v3);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v6, 0LL);
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
        !v6)
    || (*(_QWORD *)(v6 + 16) = baseUserServantEntity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v6 + 16),
          (int64_t)baseUserServantEntity,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (baseUserServantEntity = this->fields.baseUserServantEntity) == 0LL) )
  {
    sub_1BCAA3C(baseUserServantEntity, v7);
  }
  v15 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.method)(
          baseUserServantEntity,
          baseUserServantEntity->klass[1]._1.image);
  *(_QWORD *)(v6 + 24) = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 24), v15, v16, v17, v18, v19, v20, v21);
  return (SvtUseSkillData_o *)v6;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1BCAA3C(this, method);
  if ( !lvUpDataList->max_length )
    sub_1BCAA44(this, method);
  return lvUpDataList->m_Items[0];
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v24; // w23
  UILabel_o *v25; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  int v28; // w8
  int v29; // w22
  int32_t v30; // w20
  UnityEngine_Component_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  int v35; // w21
  int32_t v36; // w20
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19EAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8896/*"MSG_SKILL_SELECT"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v16, v17);
    byte_4B19EAA = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  SkillCombineControl__SetHaveQpInfo(this, v21);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_36;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        sub_1BCAA44(gameObject, v20);
      v25 = selectSkillHelpLabels->m_Items[v24];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MSG_SKILL_SELECT"*/, 0LL);
      if ( !v25 )
        break;
      UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_1BCAA3C(gameObject, v20);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
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
  v37.fields.r = 1.0;
  v37.fields.g = 1.0;
  v37.fields.b = 1.0;
  v37.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v37, 0LL);
  gameObject = this->fields.skillInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v28 = *((_DWORD *)gameObject + 6);
  v29 = v28 - 1;
  if ( v28 >= 1 )
  {
    v30 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v30,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      v31 = (UnityEngine_Component_o *)gameObject;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
      GameObjectExtensions__SetLocalPositionX(v32, (float)v30 * 230.0, 0LL);
      v33 = UnityEngine_Component__get_gameObject(v31, 0LL);
      GameObjectExtensions__SetLocalPositionY(v33, 0.0, 0LL);
      v34 = UnityEngine_Component__get_gameObject(v31, 0LL);
      GameObjectExtensions__SetLocalScale_34333164(v34, 1.0, 0LL);
      if ( v29 == v30 )
        goto LABEL_30;
      gameObject = this->fields.skillInfoList;
      ++v30;
    }
    while ( gameObject );
    goto LABEL_36;
  }
LABEL_30:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v35 = *((_DWORD *)gameObject + 6);
  if ( v35 >= 1 )
  {
    v36 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v36,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v35 == ++v36 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  void *helpBtn; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v37; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  MenuListControl_o *v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19EA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17855/*"buttontxt_synthesis"*/, v14, v15);
    byte_4B19EA9 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v18);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v19);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17855/*"buttontxt_synthesis"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraph, 0LL, v23, v24, v25, v26, v27, v28);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(helpBtn, v16);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v37 && v37->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      v37,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v41,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v38 )
        break;
      if ( !v41.fields._current )
        sub_1BCAA3C(v38, v39);
      if ( HIDWORD(v41.fields._current[1].klass) == 8 )
      {
        v40 = this->fields.menuListCtr;
        if ( !v40 )
          sub_1BCAA3C(0LL, v39);
        MenuListControl__setBannerIcon(
          v40,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v41.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3865/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v4, v5);
    byte_4B19EB3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3865/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetSkillNpCombineInfo(exeCombineDlg, this->fields.lvUpDataList, v6, 0LL);
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
  __int64 v2; // x2
  SkillCombineControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w0
  UnityEngine_GameObject_o *v10; // x1
  const MethodInfo *v11; // x3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v3 = this;
  if ( (byte_4B19EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    this = (SkillCombineControl_o *)sub_1BCA7E0(&Method_SkillCombineControl_OnClickSwitchSkill__, v4, v5);
    byte_4B19EB6 = 1;
  }
  transformInfo = 0LL;
  baseUserServantEntity = v3->fields.baseUserServantEntity;
  v3->fields.displayTransformIndex = (v3->fields.displayTransformIndex + 1) % v3->fields.transformTotal;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  SkillCombineControl__SetCombineSkillList(v3, v10, v9, v11);
  if ( v3->fields.transformTotal >= 2 )
  {
    this = (SkillCombineControl_o *)v3->fields.baseUserServantEntity;
    if ( this )
    {
      this = (SkillCombineControl_o *)UserServantEntity__GetTransformedServantInfo(
                                        (UserServantEntity_o *)this,
                                        &transformInfo,
                                        v3->fields.displayTransformIndex,
                                        0LL);
      if ( transformInfo )
      {
        this = (SkillCombineControl_o *)v3->fields.servantName;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, transformInfo->fields.titleText, 0LL);
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
LABEL_11:
  v12 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_SkillCombineControl_OnClickSwitchSkill__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v18; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v20; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_4B19EAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (SkillCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19EAD = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v29.fields.currentCryptoKey = v15;
  *(_QWORD *)&v29.fields.fakeValue = v14;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  if ( !v16 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v20 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)this, usrSvtData, v20, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int128 v11; // q1
  int64_t v12; // x0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  int64_t preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  struct SvtUseSkillData_array *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  signed __int64 transformTotal; // x8
  unsigned __int64 v32; // x22
  __int64 v33; // x24
  struct SvtUseSkillData_array *skillDataList; // x25
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x23
  __int64 v42; // x20
  __int64 v43; // x21
  int32_t v44; // w0
  UnityEngine_GameObject_o *v45; // x1
  const MethodInfo *v46; // x3
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B19EAC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn, *(_QWORD *)&idx);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&SvtUseSkillData___TypeInfo, v9, v10);
    byte_4B19EAC = 1;
  }
  transformInfo = 0LL;
  if ( usrSvtEn )
  {
    v11 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrSvtEn);
    v48 = v49;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.userId = v12;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)usrSvtEn,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
    v23 = (struct SvtUseSkillData_array *)sub_1BCA888(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v23;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillDataList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    LODWORD(transformTotal) = this->fields.transformTotal;
    if ( (int)transformTotal >= 1 )
    {
      v32 = 0LL;
      v33 = 32LL;
      while ( 1 )
      {
        skillDataList = this->fields.skillDataList;
        preSelectBaseLb = (int64_t)SkillCombineControl__GetSvtSkillData(this, v32, v30);
        if ( !skillDataList )
          break;
        v41 = preSelectBaseLb;
        if ( preSelectBaseLb )
        {
          preSelectBaseLb = sub_1BCA91C(preSelectBaseLb, skillDataList->obj.klass->_1.element_class);
          if ( !preSelectBaseLb )
          {
            v47 = sub_1BCAA60(0LL);
            sub_1BCA908(v47, 0LL);
          }
        }
        if ( v32 >= skillDataList->max_length )
          sub_1BCAA44(preSelectBaseLb, v20);
        *(Il2CppClass **)((char *)&skillDataList->obj.klass + v33) = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)skillDataList + v33), v41, v35, v36, v37, v38, v39, v40);
        transformTotal = this->fields.transformTotal;
        ++v32;
        v33 += 8LL;
        if ( (__int64)v32 >= transformTotal )
          goto LABEL_16;
      }
LABEL_28:
      sub_1BCAA3C(preSelectBaseLb, v20);
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
    v43 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    *(_QWORD *)&v51.fields.currentCryptoKey = v43;
    *(_QWORD *)&v51.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v45, v44, v46);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v33; // x8
  int64_t svtUseSkillIdList; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v38; // x21
  System_Collections_Generic_List_object__o *v39; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  unsigned __int64 v47; // x24
  UnityEngine_Component_o *v48; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  struct System_Int32_array *v52; // x8
  int32_t v53; // w25
  struct SvtUseSkillData_array *v54; // x8
  __int64 v55; // x9
  SvtUseSkillData_o *v56; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v58; // w26
  Il2CppObject *Entity; // x0
  SkillEntity_o *v60; // x19
  int32_t IconId; // w28
  System_String_o *Name; // x0
  int maxLv; // w19
  System_String_o *v64; // x20
  unsigned __int64 v65; // x27
  SkillCombineControl_o *v66; // x21
  int32_t skillRecord; // w20
  int32_t v68; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v70; // w19
  __int64 v71; // x21
  __int64 v72; // x28
  int32_t baseSvtId; // w21
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x28
  const MethodInfo *v78; // x3
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v88; // x8
  SkillCombineControl_o **p_targetList; // [xsp+20h] [xbp-90h]
  __int64 v91; // [xsp+30h] [xbp-80h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+38h] [xbp-78h]
  int32_t skillMaxLv; // [xsp+44h] [xbp-6Ch]
  System_String_o *skillName; // [xsp+48h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  v8 = this;
  if ( (byte_4B19EAF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, targetGo, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SkillCombineControl_OnClickInfo__, v27, v28);
    this = (SkillCombineControl_o *)sub_1BCA7E0(&StringLiteral_915/*"-"*/, v29, v30);
    byte_4B19EAF = 1;
  }
  skillDataList = v8->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_43;
  displayTransformIndex = v8->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
LABEL_44:
    sub_1BCAA44(this, targetGo);
  v33 = skillDataList->m_Items[displayTransformIndex];
  if ( !v33 )
    goto LABEL_43;
  svtUseSkillIdList = (int64_t)v33->fields.svtUseSkillIdList;
  p_useSkillIdList = &v8->fields.useSkillIdList;
  v8->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_1BCA784(
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
  v38 = *(_QWORD *)&useSkillIdList->max_length;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                       targetGo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v8->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v39;
  p_targetList = (SkillCombineControl_o **)&v8->fields.targetList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.targetList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  if ( (int)v38 >= 1 )
  {
    v47 = 0LL;
    v91 = (unsigned int)v38;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v8->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v47,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v48 = (UnityEngine_Component_o *)this;
      if ( v8->fields.transformTotal >= 2 )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v47 * 234.0, 0LL);
        v50 = UnityEngine_Component__get_gameObject(v48, 0LL);
        GameObjectExtensions__SetLocalPositionY(v50, -16.0, 0LL);
        v51 = UnityEngine_Component__get_gameObject(v48, 0LL);
        GameObjectExtensions__SetLocalScale_34333164(v51, v8->fields.scaleOffset, 0LL);
      }
      v52 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v47 >= v52->max_length )
        goto LABEL_44;
      v53 = v52->m_Items[v47 + 1];
      if ( v53 <= 0 )
      {
        v65 = v47 + 1;
      }
      else
      {
        v54 = v8->fields.skillDataList;
        if ( !v54 )
          break;
        v55 = v8->fields.displayTransformIndex;
        if ( (unsigned int)v55 >= v54->max_length )
          goto LABEL_44;
        v56 = v54->m_Items[v55];
        if ( !v56 )
          break;
        svtSkillLvList = v56->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v47 >= svtSkillLvList->max_length )
          goto LABEL_44;
        v58 = svtSkillLvList->m_Items[v47 + 1];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   v53,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v60 = (SkillEntity_o *)Entity;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)Entity, 0LL);
          Name = SkillEntity__getName(v60, 0LL);
          maxLv = v60->fields.maxLv;
          v64 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v64 = (System_String_o *)StringLiteral_915/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v65 = v47 + 1;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v47 + 1,
                                          v53,
                                          0LL);
        skillName = v64;
        skillMaxLv = maxLv;
        if ( this )
        {
          v66 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v66->fields.charaGraphBase);
          v68 = (int)this;
        }
        else
        {
          v68 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v8->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v70 = IconId;
        v72 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, targetGo);
        *(_QWORD *)&v95.fields.currentCryptoKey = v72;
        *(_QWORD *)&v95.fields.fakeValue = v71;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v95, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                      ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                      v74,
                                                                      v75,
                                                                      v76);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v8,
          Method_SkillCombineControl_OnClickInfo__,
          v78);
        if ( !v48 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v48,
          v47,
          v53,
          v58,
          skillMaxLv,
          skillName,
          v70,
          v68,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v85 = *(_QWORD *)&this->fields.m_CachedPtr;
        v86 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v85 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v85 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v48,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = v85 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v88 + 32) = v48;
          sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 32), (int64_t)v48, v79, v80, v81, v82, v83, v84);
        }
      }
      v47 = v65;
      if ( v65 == v91 )
        goto LABEL_42;
    }
LABEL_43:
    sub_1BCAA3C(this, targetGo);
  }
LABEL_42:
  SkillCombineControl__SetNeedItemInfo(v8, v8->fields.currentIdx, v46);
}


void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19EB2 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v11, 0LL);
      if ( v7 )
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v7, v12, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v13, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(v7, v14, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19EAB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19EAB = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 304, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *selectSkillInfo; // x0
  __int64 v10; // x1
  struct UILabel_array *selectSkillHelpLabels; // x8
  int32_t transformTotal; // w21
  struct UILabel_array *v13; // x8
  int32_t v14; // w21
  struct System_Int32_array *useSkillIdList; // x8
  struct SetLevelUpData_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  struct SetLevelUpData_array *lvUpDataList; // x23
  unsigned __int64 v26; // x21
  __int64 v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x22
  __int64 displayTransformIndex; // x8
  __int64 v36; // x0

  if ( (byte_4B19EB0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__,
      *(_QWORD *)&idx,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5, v6);
    sub_1BCA7E0(&SetLevelUpData___TypeInfo, v7, v8);
    byte_4B19EB0 = 1;
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
    v13 = this->fields.selectSkillHelpLabels;
    if ( !v13 )
      goto LABEL_21;
    if ( v13->max_length <= 1 )
      goto LABEL_33;
    selectSkillInfo = v13->m_Items[1];
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
    v14 = 0;
    while ( v14 < SLODWORD(selectSkillInfo->fields.m_CancellationTokenSource) )
    {
      selectSkillInfo = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                       v14,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
        ++v14;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_21;
    }
    v16 = (struct SetLevelUpData_array *)sub_1BCA888(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    this->fields.lvUpDataList = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lvUpDataList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    lvUpDataList = this->fields.lvUpDataList;
    if ( this->fields.transformTotal >= 1 )
    {
      v26 = 0LL;
      v27 = 32LL;
      while ( 1 )
      {
        selectSkillInfo = (UILabel_o *)SkillCombineControl__CreateLeveUpData(this, idx, v26, v24);
        if ( !lvUpDataList )
          break;
        v34 = (int64_t)selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = (UILabel_o *)sub_1BCA91C(selectSkillInfo, lvUpDataList->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
            v36 = sub_1BCAA60(0LL);
            sub_1BCA908(v36, 0LL);
          }
        }
        if ( v26 >= lvUpDataList->max_length )
          goto LABEL_33;
        *(Il2CppClass **)((char *)&lvUpDataList->obj.klass + v27) = (Il2CppClass *)v34;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)lvUpDataList + v27), v34, v28, v29, v30, v31, v32, v33);
        lvUpDataList = this->fields.lvUpDataList;
        ++v26;
        v27 += 8LL;
        if ( (__int64)v26 >= this->fields.transformTotal )
          goto LABEL_29;
      }
LABEL_21:
      sub_1BCAA3C(selectSkillInfo, v10);
    }
LABEL_29:
    if ( !lvUpDataList )
      goto LABEL_21;
    displayTransformIndex = this->fields.displayTransformIndex;
    if ( (unsigned int)displayTransformIndex >= lvUpDataList->max_length )
LABEL_33:
      sub_1BCAA44(selectSkillInfo, v10);
    SkillCombineControl__SetSvtSkillCombineData(this, lvUpDataList->m_Items[displayTransformIndex], v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  __int64 v12; // x1
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_7488/*"INFO_MSG_SKILLUP"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B19EB4 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v13.fields.r = 0.0;
  v13.fields.a = 1.0;
  v13.fields.g = 0.87891;
  v13.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v13, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7488/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v26; // w20
  UIWidget_o *v27; // x20
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v33; // x23
  int32_t *v34; // x29
  int32_t *v35; // x24
  signed __int64 v36; // x21
  char v37; // w26
  System_Collections_Generic_List_object__o *v38; // x22
  const MethodInfo *v39; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x1
  System_String_o *v45; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, setLvUpData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17855/*"buttontxt_synthesis"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17852/*"buttontxt_notsynthesis"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v23, v24);
    byte_4B19EB1 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_8;
  v26 = 0;
  while ( v26 < itemInfoList->fields._size )
  {
    itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemInfoList,
                                                                  v26,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( itemInfoList )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)itemInfoList, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      ++v26;
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
                                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v46.fields.r = 0.0;
  v46.fields.a = 1.0;
  v46.fields.g = 0.87891;
  v46.fields.b = 0.98828;
  v27 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v46, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0LL);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv >= setLvUpData->fields.maxLv )
  {
    this->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
    if ( itemInfoList )
    {
      UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
      if ( itemInfoList )
      {
        v51.fields.r = 1.0;
        v51.fields.g = 1.0;
        v51.fields.b = 1.0;
        v51.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)itemInfoList, v51, 0LL);
        itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
        if ( itemInfoList )
        {
          UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17852/*"buttontxt_notsynthesis"*/, 0LL);
          itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
          if ( itemInfoList )
          {
            ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
              itemInfoList,
              itemInfoList->klass->vtable._34_get_Count.methodPtr);
            goto LABEL_47;
          }
        }
      }
    }
    goto LABEL_8;
  }
  v29 = itemInfoList;
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17855/*"buttontxt_synthesis"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
    itemInfoList,
    itemInfoList->klass->vtable._34_get_Count.methodPtr);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = setLvUpData->fields.spendQp;
  itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_63206828(
                                                                (int)this + 308,
                                                                (System_String_o *)StringLiteral_9337/*"N0"*/,
                                                                0LL);
  if ( !qpLb )
    goto LABEL_8;
  v45 = (System_String_o *)v29;
  UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0LL);
  combineItemIds = setLvUpData->fields.combineItemIds;
  if ( !combineItemIds )
    goto LABEL_8;
  combineItemNums = setLvUpData->fields.combineItemNums;
  v33 = 0LL;
  v34 = &combineItemIds->m_Items[1];
  v35 = &combineItemNums->m_Items[1];
  v36 = combineItemIds->max_length - 1;
  v37 = 1;
  do
  {
    if ( (__int64)v33 <= v36 )
    {
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      if ( !itemInfoList )
        goto LABEL_8;
      itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemInfoList,
                                                                    v33,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v33 >= combineItemIds->max_length )
        goto LABEL_48;
      if ( !combineItemNums )
        goto LABEL_8;
      if ( v33 >= combineItemNums->max_length )
        goto LABEL_48;
      v38 = itemInfoList;
      if ( !itemInfoList )
        goto LABEL_8;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)itemInfoList,
        this->fields.userId,
        v34[v33],
        v35[v33],
        0LL);
      if ( v33 >= combineItemIds->max_length || v33 >= combineItemNums->max_length )
LABEL_48:
        sub_1BCAA44(itemInfoList, setLvUpData);
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, v34[v33], v35[v33], 0LL);
      v37 &= LOBYTE(v38[2].fields._syncRoot) != 0;
    }
    ++v33;
  }
  while ( v33 != 5 );
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v47, 0LL);
  haveQpVal = this->fields.haveQpVal;
  spendQpVal = this->fields.spendQpVal;
  this->fields._IsExeCombine_k__BackingField = 1;
  v42 = v45;
  if ( haveQpVal >= spendQpVal )
    goto LABEL_36;
  v48.fields.r = 1.0;
  v48.fields.g = 1.0;
  v48.fields.b = 1.0;
  v48.fields.a = 1.0;
  UIWidget__set_color(v27, v48, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/,
                                                                0LL);
  if ( !this->fields.qpLb )
LABEL_8:
    sub_1BCAA3C(itemInfoList, setLvUpData);
  v42 = (System_String_o *)itemInfoList;
  v49.fields.r = 1.0;
  v49.fields.g = 0.0;
  v49.fields.b = 0.0;
  v49.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v49, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_36:
  if ( (v37 & 1) == 0 )
  {
    v50.fields.r = 1.0;
    v50.fields.g = 1.0;
    v50.fields.b = 1.0;
    v50.fields.a = 1.0;
    UIWidget__set_color(v27, v50, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  SkillCombineControl__SetExeBtnState(this, v39);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, v42, 0LL);
LABEL_47:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
}