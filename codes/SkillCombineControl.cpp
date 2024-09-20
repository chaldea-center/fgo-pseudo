void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ED4A & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5ED4A = 1;
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
  System_Int32_array *SkillIdList; // x19
  __int64 v5; // x8
  bool v6; // w22
  SkillCombineControl_o *v7; // x20
  unsigned __int64 v8; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v10; // w21
  int32_t v11; // w29

  if ( (byte_4A5ED45 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED45 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_17:
    sub_1B8880C(this, resData);
  }
  v5 = *(_QWORD *)&SkillIdList->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v8 >= (unsigned int)v5 )
        goto LABEL_18;
      if ( !v7 )
        goto LABEL_17;
      if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_1B88814(this, resData);
      v10 = SkillIdList->m_Items[v8 + 1];
      if ( v10 >= 1 )
      {
        v11 = *((_DWORD *)p_combineRootComponent + v8);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10,
                                          (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v11 < this->fields.type )
          return !v6;
      }
      LODWORD(v5) = SkillIdList->max_length;
      v6 = (__int64)++v8 < (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return !v6;
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  System_String_o *Name; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  int32_t m_CancellationTokenSource; // w1
  float v25; // s0
  float v26; // x23^4
  int v27; // w24
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  float CombineCampaignQpRate; // s0
  double v32; // d0
  int v33; // w8
  __int64 combineRootComponent; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_String_o *titleText; // x1
  __int64 v42; // [xsp+8h] [xbp-58h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v44; // 0:x0.8
  System_Nullable_float__o v45; // 0:x0.8
  System_Nullable_float__o v46; // 0:x0.8

  v6 = this;
  if ( (byte_4A5ED47 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&SetLevelUpData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SkillCombineControl_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED47 = 1;
  }
  transformInfo = 0LL;
  skillDataList = v6->fields.skillDataList;
  if ( !skillDataList )
LABEL_32:
    sub_1B8880C(this, *(_QWORD *)&idx);
  if ( skillDataList->max_length <= transformIndex )
    goto LABEL_33;
  v8 = skillDataList->m_Items[transformIndex];
  if ( !v8 )
    goto LABEL_32;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_32;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_33;
  svtSkillLvList = v8->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_32;
  if ( svtSkillLvList->max_length <= idx )
LABEL_33:
    sub_1B88814(this, *(_QWORD *)&idx);
  v11 = svtUseSkillIdList->m_Items[idx + 1];
  v12 = svtSkillLvList->m_Items[idx + 1];
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_32;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              v11,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (SkillCombineControl_o *)SkillCombineControl__GetCombineSkillEntity(v6, v12, v14);
  if ( !v6->fields.baseUserServantEntity )
    goto LABEL_32;
  v15 = this;
  UserServantEntity__GetTransformedServantInfo(v6->fields.baseUserServantEntity, &transformInfo, transformIndex, 0LL);
  v16 = sub_1B887FC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_32;
  *(_DWORD *)(v16 + 16) = v11;
  *(_DWORD *)(v16 + 20) = idx + 1;
  *(_DWORD *)(v16 + 24) = idx;
  v19 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v16 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), v19, v17, v18);
  if ( !Entity )
    goto LABEL_32;
  Name = SkillEntity__getName(Entity, 0LL);
  *(_QWORD *)(v16 + 40) = Name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 40), (int32_t)Name, v21, v22);
  *(_DWORD *)(v16 + 64) = v12;
  *(_DWORD *)(v16 + 68) = v12 + 1;
  *(_DWORD *)(v16 + 72) = Entity->fields.maxLv;
  if ( v15
    && (m_CancellationTokenSource = (int32_t)v15->fields.m_CancellationTokenSource,
        v44 = (System_Nullable_int__o)&v42,
        v42 = 0LL,
        System_Nullable_int____ctor(
          v44,
          m_CancellationTokenSource,
          (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v42) )
  {
    v25 = (float)SHIDWORD(v42);
    v45 = (System_Nullable_float__o)&v42;
    v42 = 0LL;
    System_Nullable_float____ctor(v45, v25, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
    v26 = *((float *)&v42 + 1);
    v27 = (unsigned __int8)v42;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(v6, v28);
    if ( v27 )
    {
      v46 = (System_Nullable_float__o)&v42;
      v42 = 0LL;
      System_Nullable_float____ctor(
        v46,
        CombineCampaignQpRate * v26,
        (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
      v32 = *((float *)&v42 + 1);
      goto LABEL_21;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(v6, v23);
  }
  v32 = 0.0;
LABEL_21:
  if ( v32 == INFINITY )
    v33 = 0x80000000;
  else
    v33 = (int)v32;
  *(_DWORD *)(v16 + 76) = v33;
  *(_DWORD *)(v16 + 80) = v6->fields.userQP;
  if ( !v15 || (combineRootComponent = (__int64)v15->fields.combineRootComponent) == 0 )
    combineRootComponent = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 96) = combineRootComponent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 96), combineRootComponent, v29, v30);
  if ( !v15 || (v37 = *(_QWORD *)&v15->fields.type) == 0 )
    v37 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 104) = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 104), v37, v35, v36);
  if ( !transformInfo )
    goto LABEL_32;
  titleText = transformInfo->fields.titleText;
  *(_QWORD *)(v16 + 56) = titleText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 56), (int32_t)titleText, v38, v39);
  return (SetLevelUpData_o *)v16;
}


float __fastcall SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5ED49 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_4A5ED49 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v8.fields._current )
        sub_1B8880C(v5, v6);
      if ( HIDWORD(v8.fields._current[1].klass) == 8 )
      {
        v4 = *(float *)&v8.fields._current[3].monitor;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v4;
}


CombineSkillEntity_o *__fastcall SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  Il2CppObject *v11; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5ED48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5ED48 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !v8
    || (v11 = DataMasterBase_object__object__int___GetEntity(
                v8,
                (int32_t)Master_object,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v11)
    || !Master_object )
  {
LABEL_12:
    sub_1B8880C(Master_object, v6);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v11[7].klass, skillLv, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5ED3E & 1) == 0 )
  {
    sub_1B885B0(&SvtUseSkillData_TypeInfo);
    byte_4A5ED3E = 1;
  }
  v5 = sub_1B887FC(SvtUseSkillData_TypeInfo);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)baseUserServantEntity, v8, v9),
        (baseUserServantEntity = this->fields.baseUserServantEntity) == 0LL) )
  {
    sub_1B8880C(baseUserServantEntity, v6);
  }
  v10 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.method)(
          baseUserServantEntity,
          baseUserServantEntity->klass[1]._1.image);
  *(_QWORD *)(v5 + 24) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), v10, v11, v12);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1B8880C(this, method);
  if ( !lvUpDataList->max_length )
    sub_1B88814(this, method);
  return lvUpDataList->m_Items[0];
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v9; // w23
  UILabel_o *v10; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  int v13; // w8
  int v14; // w22
  int32_t v15; // w20
  UnityEngine_Component_o *v16; // x21
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  int v20; // w21
  int32_t v21; // w20
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5ED3A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1B885B0(&StringLiteral_8767/*"MSG_SKILL_SELECT"*/);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    byte_4A5ED3A = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  SkillCombineControl__SetHaveQpInfo(this, v6);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_36;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B88814(gameObject, v5);
      v10 = selectSkillHelpLabels->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MSG_SKILL_SELECT"*/, 0LL);
      if ( !v10 )
        break;
      UILabel__set_text(v10, (System_String_o *)gameObject, 0LL);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_1B8880C(gameObject, v5);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
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
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v22, 0LL);
  gameObject = this->fields.skillInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v13 = *((_DWORD *)gameObject + 6);
  v14 = v13 - 1;
  if ( v13 >= 1 )
  {
    v15 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v15,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      v16 = (UnityEngine_Component_o *)gameObject;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
      GameObjectExtensions__SetLocalPositionX(v17, (float)v15 * 230.0, 0LL);
      v18 = UnityEngine_Component__get_gameObject(v16, 0LL);
      GameObjectExtensions__SetLocalPositionY(v18, 0.0, 0LL);
      v19 = UnityEngine_Component__get_gameObject(v16, 0LL);
      GameObjectExtensions__SetLocalScale_33726240(v19, 1.0, 0LL);
      if ( v14 == v15 )
        goto LABEL_30;
      gameObject = this->fields.skillInfoList;
      ++v15;
    }
    while ( gameObject );
    goto LABEL_36;
  }
LABEL_30:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_36;
  v20 = *((_DWORD *)gameObject + 6);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v21,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v20 == ++v21 )
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
  void *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MenuListControl_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5ED39 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17676/*"buttontxt_synthesis"*/);
    byte_4A5ED39 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17676/*"buttontxt_synthesis"*/, 0LL);
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraph, 0, v9, v10);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_28:
    sub_1B8880C(helpBtn, v3);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v11, v12);
  v15 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v15 && v15->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      v15,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v16 )
        break;
      if ( !v19.fields._current )
        sub_1B8880C(v16, v17);
      if ( HIDWORD(v19.fields._current[1].klass) == 8 )
      {
        v18 = this->fields.menuListCtr;
        if ( !v18 )
          sub_1B8880C(0LL, v17);
        MenuListControl__setBannerIcon(
          v18,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v19.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5ED43 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3832/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_4A5ED43 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3832/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(exeCombineDlg, this->fields.lvUpDataList, v3, 0LL);
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
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_4A5ED46 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_1B885B0(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_4A5ED46 = 1;
  }
  transformInfo = 0LL;
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  v2->fields.displayTransformIndex = (v2->fields.displayTransformIndex + 1) % v2->fields.transformTotal;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v5;
  *(_QWORD *)&v12.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
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
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    sub_1B8880C(this, method);
  }
LABEL_11:
  v9 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_SkillCombineControl_OnClickSwitchSkill__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5ED3D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED3D = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v9 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v12,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37906428, v15, v16);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B8880C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  struct SvtUseSkillData_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  signed __int64 transformTotal; // x8
  unsigned __int64 v20; // x22
  __int64 v21; // x24
  struct SvtUseSkillData_array *skillDataList; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppClass *v25; // x23
  __int64 v26; // x20
  __int64 v27; // x21
  int32_t v28; // w0
  UnityEngine_GameObject_o *v29; // x1
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A5ED3C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SvtUseSkillData___TypeInfo);
    byte_4A5ED3C = 1;
  }
  transformInfo = 0LL;
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v32 = v33;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.userId = v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v10, v11);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    this->fields.displayTransformIndex = 0;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtEn, 1, 0LL);
    CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
    v15 = (struct SvtUseSkillData_array *)sub_1B88658(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillDataList, (int32_t)v15, v16, v17);
    LODWORD(transformTotal) = this->fields.transformTotal;
    if ( (int)transformTotal >= 1 )
    {
      v20 = 0LL;
      v21 = 32LL;
      while ( 1 )
      {
        skillDataList = this->fields.skillDataList;
        preSelectBaseLb = (UnityEngine_Component_o *)SkillCombineControl__GetSvtSkillData(this, v20, v18);
        if ( !skillDataList )
          break;
        v25 = (Il2CppClass *)preSelectBaseLb;
        if ( preSelectBaseLb )
        {
          preSelectBaseLb = (UnityEngine_Component_o *)sub_1B886EC(
                                                         preSelectBaseLb,
                                                         skillDataList->obj.klass->_1.element_class);
          if ( !preSelectBaseLb )
          {
            v31 = sub_1B88830(0LL);
            sub_1B886D8(v31, 0LL);
          }
        }
        if ( v20 >= skillDataList->max_length )
          sub_1B88814(preSelectBaseLb, v12);
        *(Il2CppClass **)((char *)&skillDataList->obj.klass + v21) = v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)skillDataList + v21), (int32_t)v25, v23, v24);
        transformTotal = this->fields.transformTotal;
        ++v20;
        v21 += 8LL;
        if ( (__int64)v20 >= transformTotal )
          goto LABEL_16;
      }
LABEL_28:
      sub_1B8880C(preSelectBaseLb, v12);
    }
LABEL_16:
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.skillSwitchButton;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, (int)transformTotal > 1, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.servantName;
    if ( !preSelectBaseLb )
      goto LABEL_28;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, this->fields.transformTotal > 1, 0LL);
    if ( this->fields.transformTotal >= 2 )
    {
      preSelectBaseLb = (UnityEngine_Component_o *)*p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        goto LABEL_28;
      preSelectBaseLb = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                     (UserServantEntity_o *)preSelectBaseLb,
                                                     &transformInfo,
                                                     this->fields.displayTransformIndex,
                                                     0LL);
      if ( !transformInfo )
        goto LABEL_28;
      preSelectBaseLb = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !preSelectBaseLb )
        goto LABEL_28;
      UILabel__set_text((UILabel_o *)preSelectBaseLb, transformInfo->fields.titleText, 0LL);
    }
    v27 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v27;
    *(_QWORD *)&v35.fields.fakeValue = v26;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v29, v28, v30);
  }
}


void __fastcall SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x29
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v7; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v10; // x21
  System_Collections_Generic_List_object__o *v11; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  unsigned __int64 v15; // x24
  UnityEngine_Component_o *v16; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct System_Int32_array *v20; // x8
  int32_t v21; // w25
  struct SvtUseSkillData_array *v22; // x8
  __int64 v23; // x9
  SvtUseSkillData_o *v24; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v26; // w26
  Il2CppObject *Entity; // x0
  SkillEntity_o *v28; // x19
  int32_t IconId; // w28
  System_String_o *Name; // x0
  int maxLv; // w19
  System_String_o *v32; // x20
  unsigned __int64 v33; // x27
  SkillCombineControl_o *v34; // x21
  int32_t skillRecord; // w20
  int32_t v36; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v38; // w19
  __int64 v39; // x21
  __int64 v40; // x28
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x28
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v49; // x8
  SkillCombineControl_o **p_targetList; // [xsp+20h] [xbp-90h]
  __int64 v52; // [xsp+30h] [xbp-80h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+38h] [xbp-78h]
  int32_t skillMaxLv; // [xsp+44h] [xbp-6Ch]
  System_String_o *skillName; // [xsp+48h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v4 = this;
  if ( (byte_4A5ED3F & 1) == 0 )
  {
    sub_1B885B0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_1B885B0(&StringLiteral_919/*"-"*/);
    byte_4A5ED3F = 1;
  }
  skillDataList = v4->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_43;
  displayTransformIndex = v4->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
LABEL_44:
    sub_1B88814(this, targetGo);
  v7 = skillDataList->m_Items[displayTransformIndex];
  if ( !v7 )
    goto LABEL_43;
  svtUseSkillIdList = v7->fields.svtUseSkillIdList;
  p_useSkillIdList = &v4->fields.useSkillIdList;
  v4->fields.useSkillIdList = svtUseSkillIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v4->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    svtId,
    (int32_t)method);
  useSkillIdList = v4->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_43;
  v10 = *(_QWORD *)&useSkillIdList->max_length;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v4->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v11;
  p_targetList = (SkillCombineControl_o **)&v4->fields.targetList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.targetList, (int32_t)v11, v12, v13);
  if ( (int)v10 >= 1 )
  {
    v15 = 0LL;
    v52 = (unsigned int)v10;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v4->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v15,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v16 = (UnityEngine_Component_o *)this;
      if ( v4->fields.transformTotal >= 2 )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v15 * 234.0, 0LL);
        v18 = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SetLocalPositionY(v18, -16.0, 0LL);
        v19 = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SetLocalScale_33726240(v19, v4->fields.scaleOffset, 0LL);
      }
      v20 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v15 >= v20->max_length )
        goto LABEL_44;
      v21 = v20->m_Items[v15 + 1];
      if ( v21 <= 0 )
      {
        v33 = v15 + 1;
      }
      else
      {
        v22 = v4->fields.skillDataList;
        if ( !v22 )
          break;
        v23 = v4->fields.displayTransformIndex;
        if ( (unsigned int)v23 >= v22->max_length )
          goto LABEL_44;
        v24 = v22->m_Items[v23];
        if ( !v24 )
          break;
        svtSkillLvList = v24->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v15 >= svtSkillLvList->max_length )
          goto LABEL_44;
        v26 = svtSkillLvList->m_Items[v15 + 1];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   v21,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v28 = (SkillEntity_o *)Entity;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)Entity, 0LL);
          Name = SkillEntity__getName(v28, 0LL);
          maxLv = v28->fields.maxLv;
          v32 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v32 = (System_String_o *)StringLiteral_919/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v33 = v15 + 1;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v15 + 1,
                                          v21,
                                          0LL);
        skillName = v32;
        skillMaxLv = maxLv;
        if ( this )
        {
          v34 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v34->fields.charaGraphBase);
          v36 = (int)this;
        }
        else
        {
          v36 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v4->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v38 = IconId;
        v40 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v56.fields.currentCryptoKey = v40;
        *(_QWORD *)&v56.fields.fakeValue = v39;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v56, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1B887FC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v4,
          Method_SkillCombineControl_OnClickInfo__,
          v43);
        if ( !v16 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v16,
          v15,
          v21,
          v26,
          skillMaxLv,
          skillName,
          v38,
          v36,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v46 = *(_QWORD *)&this->fields.m_CachedPtr;
        v47 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v46 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v49 + 32) = v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v16, v44, v45);
        }
      }
      v15 = v33;
      if ( v33 == v52 )
        goto LABEL_42;
    }
LABEL_43:
    sub_1B8880C(this, targetGo);
  }
LABEL_42:
  SkillCombineControl__SetNeedItemInfo(v4, v4->fields.currentIdx, v14);
}


void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5ED42 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5ED42 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0LL);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0LL);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0LL);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5ED3B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5ED3B = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 304, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UILabel_o *selectSkillInfo; // x0
  __int64 v6; // x1
  struct UILabel_array *selectSkillHelpLabels; // x8
  int32_t transformTotal; // w21
  struct UILabel_array *v9; // x8
  int32_t v10; // w21
  struct System_Int32_array *useSkillIdList; // x8
  struct SetLevelUpData_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct SetLevelUpData_array *lvUpDataList; // x23
  unsigned __int64 v18; // x21
  __int64 v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass *v22; // x22
  __int64 displayTransformIndex; // x8
  __int64 v24; // x0

  if ( (byte_4A5ED40 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&SetLevelUpData___TypeInfo);
    byte_4A5ED40 = 1;
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
    v9 = this->fields.selectSkillHelpLabels;
    if ( !v9 )
      goto LABEL_21;
    if ( v9->max_length <= 1 )
      goto LABEL_33;
    selectSkillInfo = v9->m_Items[1];
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
    v10 = 0;
    while ( v10 < SLODWORD(selectSkillInfo->fields.m_CancellationTokenSource) )
    {
      selectSkillInfo = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                       v10,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_21;
      if ( useSkillIdList->max_length <= idx )
        goto LABEL_33;
      if ( selectSkillInfo )
      {
        ServantSkillInfoIconComponent__setDispSelectMskImg(
          (ServantSkillInfoIconComponent_o *)selectSkillInfo,
          useSkillIdList->m_Items[idx + 1] == selectSkillInfo->fields.mWidth,
          0LL);
        selectSkillInfo = (UILabel_o *)this->fields.targetList;
        ++v10;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_21;
    }
    v12 = (struct SetLevelUpData_array *)sub_1B88658(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    this->fields.lvUpDataList = v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lvUpDataList, (int32_t)v12, v13, v14);
    lvUpDataList = this->fields.lvUpDataList;
    if ( this->fields.transformTotal >= 1 )
    {
      v18 = 0LL;
      v19 = 32LL;
      while ( 1 )
      {
        selectSkillInfo = (UILabel_o *)SkillCombineControl__CreateLeveUpData(this, idx, v18, v16);
        if ( !lvUpDataList )
          break;
        v22 = (Il2CppClass *)selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = (UILabel_o *)sub_1B886EC(selectSkillInfo, lvUpDataList->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
            v24 = sub_1B88830(0LL);
            sub_1B886D8(v24, 0LL);
          }
        }
        if ( v18 >= lvUpDataList->max_length )
          goto LABEL_33;
        *(Il2CppClass **)((char *)&lvUpDataList->obj.klass + v19) = v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)lvUpDataList + v19), (int32_t)v22, v20, v21);
        lvUpDataList = this->fields.lvUpDataList;
        ++v18;
        v19 += 8LL;
        if ( (__int64)v18 >= this->fields.transformTotal )
          goto LABEL_29;
      }
LABEL_21:
      sub_1B8880C(selectSkillInfo, v6);
    }
LABEL_29:
    if ( !lvUpDataList )
      goto LABEL_21;
    displayTransformIndex = this->fields.displayTransformIndex;
    if ( (unsigned int)displayTransformIndex >= lvUpDataList->max_length )
LABEL_33:
      sub_1B88814(selectSkillInfo, v6);
    SkillCombineControl__SetSvtSkillCombineData(this, lvUpDataList->m_Items[displayTransformIndex], v15);
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
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A5ED44 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7363/*"INFO_MSG_SKILLUP"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED44 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v6.fields.r = 0.0;
  v6.fields.a = 1.0;
  v6.fields.g = 0.87891;
  v6.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v6, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7363/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v6; // w20
  UIWidget_o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v12; // x23
  int32_t *v13; // x29
  int32_t *v14; // x24
  signed __int64 v15; // x21
  char v16; // w26
  System_Collections_Generic_List_object__o *v17; // x22
  const MethodInfo *v18; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v21; // x22
  System_String_o *v22; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5ED41 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_17676/*"buttontxt_synthesis"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_17673/*"buttontxt_notsynthesis"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5ED41 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_8;
  v6 = 0;
  while ( v6 < itemInfoList->fields._size )
  {
    itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemInfoList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( itemInfoList )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)itemInfoList, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      ++v6;
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
                                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v23.fields.r = 0.0;
  v23.fields.a = 1.0;
  v23.fields.g = 0.87891;
  v23.fields.b = 0.98828;
  v7 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v23, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/,
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
      UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
      if ( itemInfoList )
      {
        v28.fields.r = 1.0;
        v28.fields.g = 1.0;
        v28.fields.b = 1.0;
        v28.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)itemInfoList, v28, 0LL);
        itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
        if ( itemInfoList )
        {
          UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17673/*"buttontxt_notsynthesis"*/, 0LL);
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
  v8 = itemInfoList;
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17676/*"buttontxt_synthesis"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
    itemInfoList,
    itemInfoList->klass->vtable._34_get_Count.methodPtr);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = setLvUpData->fields.spendQp;
  itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_62512312(
                                                                (int)this + 308,
                                                                (System_String_o *)StringLiteral_9206/*"N0"*/,
                                                                0LL);
  if ( !qpLb )
    goto LABEL_8;
  v22 = (System_String_o *)v8;
  UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0LL);
  combineItemIds = setLvUpData->fields.combineItemIds;
  if ( !combineItemIds )
    goto LABEL_8;
  combineItemNums = setLvUpData->fields.combineItemNums;
  v12 = 0LL;
  v13 = &combineItemIds->m_Items[1];
  v14 = &combineItemNums->m_Items[1];
  v15 = combineItemIds->max_length - 1;
  v16 = 1;
  do
  {
    if ( (__int64)v12 <= v15 )
    {
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      if ( !itemInfoList )
        goto LABEL_8;
      itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemInfoList,
                                                                    v12,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v12 >= combineItemIds->max_length )
        goto LABEL_48;
      if ( !combineItemNums )
        goto LABEL_8;
      if ( v12 >= combineItemNums->max_length )
        goto LABEL_48;
      v17 = itemInfoList;
      if ( !itemInfoList )
        goto LABEL_8;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)itemInfoList,
        this->fields.userId,
        v13[v12],
        v14[v12],
        0LL);
      if ( v12 >= combineItemIds->max_length || v12 >= combineItemNums->max_length )
LABEL_48:
        sub_1B88814(itemInfoList, setLvUpData);
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, v13[v12], v14[v12], 0LL);
      v16 &= LOBYTE(v17[2].fields._syncRoot) != 0;
    }
    ++v12;
  }
  while ( v12 != 5 );
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v24.fields.r = 1.0;
  v24.fields.g = 1.0;
  v24.fields.b = 1.0;
  v24.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v24, 0LL);
  haveQpVal = this->fields.haveQpVal;
  spendQpVal = this->fields.spendQpVal;
  this->fields._IsExeCombine_k__BackingField = 1;
  v21 = v22;
  if ( haveQpVal >= spendQpVal )
    goto LABEL_36;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color(v7, v25, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/,
                                                                0LL);
  if ( !this->fields.qpLb )
LABEL_8:
    sub_1B8880C(itemInfoList, setLvUpData);
  v21 = (System_String_o *)itemInfoList;
  v26.fields.r = 1.0;
  v26.fields.g = 0.0;
  v26.fields.b = 0.0;
  v26.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v26, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_36:
  if ( (v16 & 1) == 0 )
  {
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(v7, v27, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  SkillCombineControl__SetExeBtnState(this, v18);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, v21, 0LL);
LABEL_47:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
}