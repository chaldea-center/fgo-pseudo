void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E93A & 1) == 0 )
  {
    sub_1B885B0(&CheckCombineResStatus_TypeInfo);
    byte_4A5E93A = 1;
  }
  CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall CheckCombineResStatus___ctor(CheckCombineResStatus_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall CheckCombineResStatus__GetCombineEventCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        int32_t type,
        const MethodInfo *method)
{
  float v8; // s8
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x28
  int64_t Time; // x0
  __int64 v17; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v20; // x1
  EventCampaignEntity_o *v21; // x23
  Il2CppClass *v22; // x29
  const char *namespaze; // x8
  __int64 v24; // x27
  int v25; // w21
  __int64 v26; // x23
  __int64 v27; // x24
  Il2CppObject *v29; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5E939 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E939 = 1;
  }
  v8 = 1.0;
  entity = 0LL;
  memset(&v31, 0, sizeof(v31));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_1B8880C(Instance, v10);
    }
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v8 = 1.0;
    v31 = v30;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
        if ( !v13 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v8;
        }
        current = v31.fields._current;
        if ( !v31.fields._current )
          sub_1B8880C(v13, v14);
        if ( HIDWORD(v31.fields._current[1].klass) == type )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_1B8880C(Time, v17);
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v12 )
              sub_1B8880C(Time, v17);
            Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v12, (int32_t)current[1].klass, 0LL);
            v21 = Data;
            if ( !Data )
              break;
            if ( !MasterData_object )
              sub_1B8880C(Data, v20);
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__TryGetEntity(
                                              (EventCampaignReleaseMaster_o *)MasterData_object,
                                              &entity,
                                              Data->fields.eventId,
                                              Data->fields.target,
                                              Data->fields.idx,
                                              0LL);
            if ( ((unsigned __int8)Data & 1) == 0 )
              break;
            if ( !entity )
              sub_1B8880C(Data, v20);
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              (EventCampaignReleaseMaster_o *)MasterData_object,
                                              v21->fields.eventId,
                                              v21->fields.target,
                                              0LL);
            if ( ((unsigned __int8)Data & 1) != 0 )
              break;
          }
        }
      }
      if ( type == 27 )
      {
        if ( UserServantEntity__IsExchangeSvt(baseSvt, 0LL) )
          goto LABEL_36;
      }
      else
      {
        v22 = current[2].klass;
        if ( v22 && (namespaze = v22->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v24 = 0LL;
            v29 = MasterData_object;
            while ( 1 )
            {
              if ( (unsigned int)v24 >= (unsigned int)namespaze )
                sub_1B88814(Data, v20);
              v25 = *((_DWORD *)&v22->_1.byval_arg.data + v24);
              v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v33.fields.currentCryptoKey = v27;
              *(_QWORD *)&v33.fields.fakeValue = v26;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v33,
                                                0LL);
              if ( (_DWORD)Data == v25 )
                break;
              LODWORD(namespaze) = v22->_1.namespaze;
              if ( (int)++v24 >= (int)namespaze )
                goto LABEL_38;
            }
            v8 = v8 * *(float *)&current[3].monitor;
LABEL_38:
            MasterData_object = v29;
          }
        }
        else
        {
LABEL_36:
          v8 = v8 * *(float *)&current[3].monitor;
        }
      }
    }
  }
  return v8;
}


float __fastcall CheckCombineResStatus__GetExpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float v7; // s8
  CheckCombineResStatus_o *v8; // x0
  const MethodInfo *v9; // x4

  v7 = CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 2, v4);
  return v7 * CheckCombineResStatus__GetCombineEventCampaignValue(v8, baseSvt, combineEventList, 27, v9);
}


float __fastcall CheckCombineResStatus__GetQpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 1, v4);
}


bool __fastcall CheckCombineResStatus__checkIncrementLv(
        CheckCombineResStatus_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  int32_t maxLv; // w8
  void *Instance; // x0
  __int64 v7; // x1
  bool result; // w0

  if ( (byte_4A5E933 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E933 = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1B8880C(Instance, v7);
    }
    if ( *((_DWORD *)Instance + 6) < this->fields.totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    maxLv = *((_DWORD *)Instance + 5);
  }
  result = 1;
  this->fields.increLv = maxLv;
  return result;
}


void __fastcall CheckCombineResStatus__getCombineResStatus(
        CheckCombineResStatus_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *baseData,
        int32_t increLv,
        const MethodInfo *method)
{
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  int32_t v13; // w24
  int32_t v14; // w25
  ServantLimitEntity_o *Entity; // x23
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkMax; // w23
  int32_t atkBase; // w24
  CheckCombineResStatus_c *v20; // x8
  int m_CancellationTokenSource_high; // w25
  struct CheckCombineResStatus_StaticFields *static_fields; // x8
  BalanceConfig_c *v23; // x0
  int32_t v24; // w23
  int32_t adjustHp; // w24
  struct BalanceConfig_StaticFields *v26; // x8
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5E934 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CheckCombineResStatus_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E934 = 1;
  }
  if ( !baseData )
    goto LABEL_22;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v11;
  *(_QWORD *)&v28.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v12,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_22;
  v14 = *((_DWORD *)&this[2].fields.UnityEngine_Behaviour_Fields + 1);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_22;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v12, v13, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v14, increLv, 0LL);
  if ( !this )
  {
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
    goto LABEL_21;
  }
  if ( !Entity )
LABEL_22:
    sub_1B8880C(this, afterHp);
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v20 = CheckCombineResStatus_TypeInfo;
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v20 = CheckCombineResStatus_TypeInfo;
  }
  static_fields = v20->static_fields;
  *afterHp = m_CancellationTokenSource_high * (hpMax - hpBase) / static_fields->LOT_RATE + hpBase;
  *afterAtk = m_CancellationTokenSource_high * (atkMax - atkBase) / static_fields->LOT_RATE + atkBase;
  v23 = BalanceConfig_TypeInfo;
  v24 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  v26 = v23->static_fields;
  *afterHp = v24 + v26->StatusUpAdjustHp * adjustHp;
  atk = *afterAtk + v26->StatusUpAdjustAtk * baseData->fields.adjustAtk;
LABEL_21:
  *afterAtk = atk;
}


void __fastcall CheckCombineResStatus__getExpInfo(
        CheckCombineResStatus_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        int32_t targetExp,
        int32_t startLv,
        int32_t maxLv,
        int32_t expType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantExpMaster_o *v18; // x25
  int m_CancellationTokenSource; // w26
  float v20; // s0

  if ( (byte_4A5E938 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E938 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v18 = (ServantExpMaster_o *)Instance;
    if ( startLv >= 2 )
    {
      if ( !Instance )
        goto LABEL_15;
      Instance = (DataManager_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, startLv - 1, 0LL);
      if ( !Instance )
        goto LABEL_15;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
    }
    else
    {
      if ( !Instance )
        goto LABEL_15;
      m_CancellationTokenSource = 0;
    }
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, expType, startLv, 0LL);
    *exp = targetExp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - targetExp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_14;
    }
LABEL_15:
    sub_1B8880C(Instance, v17);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v20;
}


int32_t __fastcall CheckCombineResStatus__getIncreLevel(
        CheckCombineResStatus_o *this,
        int32_t getExp,
        int32_t svtExpType,
        int32_t svtMaxLv,
        int32_t startLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4A5E931 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E931 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v11);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0LL);
}


int32_t __fastcall CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t result; // w0
  const MethodInfo *v13; // x2
  int32_t checkLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5E932 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E932 = 1;
  }
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_14;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(Instance, v8);
  }
  this->fields.expType = HIDWORD(Instance[8].klass);
  this->fields.totalExp = baseData->fields.exp + getExp;
  this->fields.checkLv = baseData->fields.lv;
  result = UserServantEntity__getLevelMax(baseData, 0LL);
  checkLv = this->fields.checkLv;
  this->fields.maxLv = result;
  if ( checkLv == result )
  {
    this->fields.increLv = result;
  }
  else
  {
    while ( !CheckCombineResStatus__checkIncrementLv(this, checkLv, v13) )
      checkLv = this->fields.checkLv;
    return this->fields.increLv;
  }
  return result;
}


System_String_o *__fastcall CheckCombineResStatus__getOpenSkillNameByCombine(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t increLv,
        int32_t limitCntSum,
        const MethodInfo *method)
{
  System_String_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array *skillNameList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5E935 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E935 = 1;
  }
  idList = 0LL;
  skillNameList = 0LL;
  if ( !baseData )
    sub_1B8880C(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0LL);
  if ( skillNameList )
  {
    if ( !skillNameList->max_length )
      sub_1B88814(v9, v10);
    if ( skillNameList->m_Items[0] )
      return skillNameList->m_Items[0];
  }
  return v8;
}


System_String_o *__fastcall CheckCombineResStatus__getSvtEqSkillByCombine(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t increLv,
        int32_t limitCntSum,
        const MethodInfo *method)
{
  System_String_o *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  CheckCombineResStatus___c_c *v11; // x0
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5E936 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76045496);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__);
    sub_1B885B0(&CheckCombineResStatus___c_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E936 = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v10,
    UseSvtEqSkillInfo,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76045496);
  if ( !v10 )
    goto LABEL_15;
  if ( v10->fields._size >= 1 )
  {
    v11 = CheckCombineResStatus___c_TypeInfo;
    if ( !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v11 = CheckCombineResStatus___c_TypeInfo;
    }
    _9__11_0 = (System_Comparison_T__o *)v11->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CheckCombineResStatus___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__11_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__11_0,
        v13,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0LL);
      static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v15, v16);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v10,
      _9__11_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v10,
                                        0,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_15:
    sub_1B8880C(this, baseData);
  }
  return v8;
}


void __fastcall CheckCombineResStatus__setSvtExp(
        CheckCombineResStatus_o *this,
        float *expVal,
        int32_t *lateExp,
        int32_t targetExp,
        int32_t startLv,
        int32_t maxLv,
        int32_t expType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ServantExpMaster_o *v16; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4A5E937 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E937 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v16 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v16, expType, Level, 0LL)) == 0LL) )
  {
    sub_1B8880C(Instance, v15);
  }
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  Entity = ServantExpMaster__GetEntity(v16, expType, Level - 1, 0LL);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *expVal = 1.0 - (float)((float)(m_CancellationTokenSource - targetExp) / (float)(m_CancellationTokenSource - exp));
  *lateExp = m_CancellationTokenSource - targetExp;
}


void __fastcall CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E93B & 1) == 0 )
  {
    sub_1B885B0(&CheckCombineResStatus___c_TypeInfo);
    byte_4A5E93B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CheckCombineResStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CheckCombineResStatus___c___ctor(CheckCombineResStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CheckCombineResStatus___c___getSvtEqSkillByCombine_b__11_0(
        CheckCombineResStatus___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}