void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19A8B & 1) == 0 )
  {
    sub_1BCA7E0(&CheckCombineResStatus_TypeInfo, v1, v2);
    byte_4B19A8B = 1;
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
        bool isGetBiggest,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  float v30; // s8
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v34; // x23
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x29
  int64_t Time; // x0
  __int64 v39; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v42; // x1
  EventCampaignEntity_o *v43; // x24
  _BOOL8 v44; // x0
  Il2CppClass *v45; // x24
  __int64 v46; // x25
  __int64 v47; // x26
  int32_t v48; // w1
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B19A8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, baseSvt, combineEventList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B19A8A = 1;
  }
  v30 = 1.0;
  entity = 0LL;
  memset(&v51, 0, sizeof(v51));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_1BCAA3C(Instance, v32);
    }
    v34 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v30 = 1.0;
    v51 = v50;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v51,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
          if ( !v35 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v51,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
            return v30;
          }
          current = v51.fields._current;
          if ( !v51.fields._current )
            sub_1BCAA3C(v35, v36);
          if ( HIDWORD(v51.fields._current[1].klass) == type )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
            Time = NetworkManager__getTime(0LL);
            klass = current[5].klass;
            if ( !klass )
              sub_1BCAA3C(Time, v39);
            if ( Time <= (__int64)klass->_1.generic_class )
            {
              if ( !v34 )
                sub_1BCAA3C(Time, v39);
              Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v34, (int32_t)current[1].klass, 0LL);
              v43 = Data;
              if ( !Data )
                break;
              if ( !MasterData_object )
                sub_1BCAA3C(Data, v42);
              v44 = EventCampaignReleaseMaster__TryGetEntity(
                      (EventCampaignReleaseMaster_o *)MasterData_object,
                      &entity,
                      Data->fields.eventId,
                      Data->fields.target,
                      Data->fields.idx,
                      0LL);
              if ( !v44 )
                break;
              if ( !entity )
                sub_1BCAA3C(v44, v42);
              if ( entity->fields.condType != 1
                || EventCampaignReleaseMaster__isRelease(
                     (EventCampaignReleaseMaster_o *)MasterData_object,
                     v43->fields.eventId,
                     v43->fields.target,
                     0LL) )
              {
                break;
              }
            }
          }
        }
        if ( type != 27 )
          break;
        if ( UserServantEntity__IsExchangeSvt(baseSvt, 0LL) )
          goto LABEL_31;
      }
      v45 = current[2].klass;
      if ( v45 && v45->_1.namespaze )
      {
        v47 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v46 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
        *(_QWORD *)&v53.fields.currentCryptoKey = v47;
        *(_QWORD *)&v53.fields.fakeValue = v46;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v45,
                v48,
                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
          continue;
      }
LABEL_31:
      if ( (((*(float *)&current[3].monitor <= v30) ^ isGetBiggest) & 1) != 0 )
        v30 = *(float *)&current[3].monitor;
    }
  }
  return v30;
}


float __fastcall CheckCombineResStatus__GetExpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  float v7; // s8
  CheckCombineResStatus_o *v8; // x0
  const MethodInfo *v9; // x5
  float result; // s0

  v7 = CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 2, 1, v4);
  result = CheckCombineResStatus__GetCombineEventCampaignValue(v8, baseSvt, combineEventList, 27, 1, v9);
  if ( v7 > result )
    return v7;
  return result;
}


float __fastcall CheckCombineResStatus__GetQpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 1, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CheckCombineResStatus__checkIncrementLv(
        CheckCombineResStatus_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t maxLv; // w8
  void *Instance; // x0
  __int64 v9; // x1
  bool result; // w0

  if ( (byte_4B19A84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B19A84 = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t v26; // w23
  int32_t v27; // w24
  int32_t v28; // w25
  ServantLimitEntity_o *Entity; // x23
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkMax; // w23
  int32_t atkBase; // w24
  CheckCombineResStatus_c *v34; // x8
  int m_CancellationTokenSource_high; // w25
  struct CheckCombineResStatus_StaticFields *static_fields; // x8
  BalanceConfig_c *v37; // x0
  int32_t v38; // w23
  int32_t adjustHp; // w24
  struct BalanceConfig_StaticFields *v40; // x8
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B19A85 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, afterHp, afterAtk);
    sub_1BCA7E0(&CheckCombineResStatus_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    this = (CheckCombineResStatus_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B19A85 = 1;
  }
  if ( !baseData )
    goto LABEL_22;
  v25 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, afterHp);
  *(_QWORD *)&v42.fields.currentCryptoKey = v25;
  *(_QWORD *)&v42.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v42, 0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v26,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_22;
  v28 = *((_DWORD *)&this[2].fields.UnityEngine_Behaviour_Fields + 1);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_22;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v26, v27, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v28, increLv, 0LL);
  if ( !this )
  {
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
    goto LABEL_21;
  }
  if ( !Entity )
LABEL_22:
    sub_1BCAA3C(this, afterHp);
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v34 = CheckCombineResStatus_TypeInfo;
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo, afterHp);
    v34 = CheckCombineResStatus_TypeInfo;
  }
  static_fields = v34->static_fields;
  *afterHp = m_CancellationTokenSource_high * (hpMax - hpBase) / static_fields->LOT_RATE + hpBase;
  *afterAtk = m_CancellationTokenSource_high * (atkMax - atkBase) / static_fields->LOT_RATE + atkBase;
  v37 = BalanceConfig_TypeInfo;
  v38 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, afterHp);
    v37 = BalanceConfig_TypeInfo;
  }
  v40 = v37->static_fields;
  *afterHp = v38 + v40->StatusUpAdjustHp * adjustHp;
  atk = *afterAtk + v40->StatusUpAdjustAtk * baseData->fields.adjustAtk;
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
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  ServantExpMaster_o *v20; // x25
  int m_CancellationTokenSource; // w26
  float v22; // s0

  if ( (byte_4B19A89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, exp, lateExp);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B19A89 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v20 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v20, expType, startLv, 0LL);
    *exp = targetExp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - targetExp;
      v22 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v19);
  }
  v22 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v22;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CheckCombineResStatus__getIncreLevel(
        CheckCombineResStatus_o *this,
        int32_t getExp,
        int32_t svtExpType,
        int32_t svtMaxLv,
        int32_t startLv,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4B19A82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp, *(_QWORD *)&svtExpType);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19A82 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t result; // w0
  const MethodInfo *v19; // x2
  int32_t checkLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B19A83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, baseData, *(_QWORD *)&getExp);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B19A83 = 1;
  }
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_14;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v15
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v14);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, checkLv, v19) )
      checkLv = this->fields.checkLv;
    return this->fields.increLv;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B19A86 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, baseData, *(_QWORD *)&increLv);
    byte_4B19A86 = 1;
  }
  idList = 0LL;
  skillNameList = 0LL;
  if ( !baseData )
    sub_1BCAA3C(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0LL);
  if ( skillNameList )
  {
    if ( !skillNameList->max_length )
      sub_1BCAA44(v9, v10);
    if ( skillNameList->m_Items[0] )
      return skillNameList->m_Items[0];
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CheckCombineResStatus__getSvtEqSkillByCombine(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t increLv,
        int32_t limitCntSum,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x19
  __int64 v30; // x2
  __int64 v31; // x3
  CheckCombineResStatus___c_c *v32; // x0
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v34; // x21
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B19A87 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ServantSkillEntity__TypeInfo, baseData, *(_QWORD *)&increLv);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76796440, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v18, v19);
    sub_1BCA7E0(&CheckCombineResStatus___c_TypeInfo, v20, v21);
    this = (CheckCombineResStatus_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B19A87 = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor_56235344(
    v29,
    UseSvtEqSkillInfo,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76796440);
  if ( !v29 )
    goto LABEL_15;
  if ( v29->fields._size >= 1 )
  {
    v32 = CheckCombineResStatus___c_TypeInfo;
    if ( !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo, baseData);
      v32 = CheckCombineResStatus___c_TypeInfo;
    }
    _9__11_0 = (System_Comparison_T__o *)v32->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, baseData);
        v32 = CheckCombineResStatus___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__11_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                             System_Comparison_ServantSkillEntity__TypeInfo,
                                             baseData,
                                             v30,
                                             v31);
      System_Comparison_object____ctor(
        _9__11_0,
        v34,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0LL);
      static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
        (int64_t)_9__11_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v29,
      _9__11_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v29,
                                        0,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_15:
    sub_1BCAA3C(this, baseData);
  }
  return v24;
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
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantExpMaster_o *v18; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4B19A88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, expVal, lateExp);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19A88 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v18 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, expType, Level, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v17);
  }
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  Entity = ServantExpMaster__GetEntity(v18, expType, Level - 1, 0LL);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *expVal = 1.0 - (float)((float)(m_CancellationTokenSource - targetExp) / (float)(m_CancellationTokenSource - exp));
  *lateExp = m_CancellationTokenSource - targetExp;
}


void __fastcall CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19A8C & 1) == 0 )
  {
    sub_1BCA7E0(&CheckCombineResStatus___c_TypeInfo, v1, v2);
    byte_4B19A8C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CheckCombineResStatus___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CheckCombineResStatus___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}