void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFB51 & 1) == 0 )
  {
    sub_1B640C8(&CheckCombineResStatus_TypeInfo, v1);
    byte_49FFB51 = 1;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  float v17; // s8
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  Il2CppObject *current; // x28
  int64_t Time; // x0
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v26; // x1
  EventCampaignEntity_o *v27; // x23
  Il2CppClass *v28; // x29
  const char *namespaze; // x8
  __int64 v30; // x27
  int v31; // w21
  __int64 v32; // x23
  __int64 v33; // x24
  Il2CppObject *v35; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FFB50 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, baseSvt);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FFB50 = 1;
  }
  v17 = 1.0;
  entity = 0LL;
  memset(&v37, 0, sizeof(v37));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    v20 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v17 = 1.0;
    v37 = v36;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v37,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
        if ( !v21 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v37,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v17;
        }
        current = v37.fields._current;
        if ( !v37.fields._current )
          sub_1B64324(v21);
        if ( HIDWORD(v37.fields._current[1].klass) == type )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_1B64324(Time);
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v20 )
              sub_1B64324(Time);
            Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v20, (int32_t)current[1].klass, 0LL);
            v27 = Data;
            if ( !Data )
              break;
            if ( !MasterData_object )
              sub_1B64324(Data);
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
              sub_1B64324(Data);
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              (EventCampaignReleaseMaster_o *)MasterData_object,
                                              v27->fields.eventId,
                                              v27->fields.target,
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
        v28 = current[2].klass;
        if ( v28 && (namespaze = v28->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v30 = 0LL;
            v35 = MasterData_object;
            while ( 1 )
            {
              if ( (unsigned int)v30 >= (unsigned int)namespaze )
                sub_1B6432C(Data, v26);
              v31 = *((_DWORD *)&v28->_1.byval_arg.data + v30);
              v33 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v32 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v39.fields.currentCryptoKey = v33;
              *(_QWORD *)&v39.fields.fakeValue = v32;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v39,
                                                0LL);
              if ( (_DWORD)Data == v31 )
                break;
              LODWORD(namespaze) = v28->_1.namespaze;
              if ( (int)++v30 >= (int)namespaze )
                goto LABEL_38;
            }
            v17 = v17 * *(float *)&current[3].monitor;
LABEL_38:
            MasterData_object = v35;
          }
        }
        else
        {
LABEL_36:
          v17 = v17 * *(float *)&current[3].monitor;
        }
      }
    }
  }
  return v17;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CheckCombineResStatus__checkIncrementLv(
        CheckCombineResStatus_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t maxLv; // w8
  void *Instance; // x0
  bool result; // w0

  if ( (byte_49FFB4A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFB4A = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1B64324(Instance);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t v21; // w25
  ServantLimitEntity_o *Entity; // x23
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkMax; // w23
  int32_t atkBase; // w24
  CheckCombineResStatus_c *v27; // x8
  int m_CancellationTokenSource_high; // w25
  struct CheckCombineResStatus_StaticFields *static_fields; // x8
  BalanceConfig_c *v30; // x0
  int32_t v31; // w23
  int32_t adjustHp; // w24
  struct BalanceConfig_StaticFields *v33; // x8
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49FFB4B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, afterHp);
    sub_1B640C8(&CheckCombineResStatus_TypeInfo, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    this = (CheckCombineResStatus_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FFB4B = 1;
  }
  if ( !baseData )
    goto LABEL_22;
  v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v18;
  *(_QWORD *)&v35.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v19,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_22;
  v21 = *((_DWORD *)&this[2].fields.UnityEngine_Behaviour_Fields + 1);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_22;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v19, v20, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !this )
    goto LABEL_22;
  this = (CheckCombineResStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v21, increLv, 0LL);
  if ( !this )
  {
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
    goto LABEL_21;
  }
  if ( !Entity )
LABEL_22:
    sub_1B64324(this);
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v27 = CheckCombineResStatus_TypeInfo;
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v27 = CheckCombineResStatus_TypeInfo;
  }
  static_fields = v27->static_fields;
  *afterHp = m_CancellationTokenSource_high * (hpMax - hpBase) / static_fields->LOT_RATE + hpBase;
  *afterAtk = m_CancellationTokenSource_high * (atkMax - atkBase) / static_fields->LOT_RATE + atkBase;
  v30 = BalanceConfig_TypeInfo;
  v31 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v33 = v30->static_fields;
  *afterHp = v31 + v33->StatusUpAdjustHp * adjustHp;
  atk = *afterAtk + v33->StatusUpAdjustAtk * baseData->fields.adjustAtk;
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
  DataManager_o *Instance; // x0
  ServantExpMaster_o *v18; // x25
  int m_CancellationTokenSource; // w26
  float v20; // s0

  if ( (byte_49FFB4F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FFB4F = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1B64324(Instance);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v20;
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FFB48 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FFB48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0LL);
}


int32_t __fastcall CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t result; // w0
  const MethodInfo *v15; // x2
  int32_t checkLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FFB49 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, baseData);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFB49 = 1;
  }
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_14;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1B64324(Instance);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, checkLv, v15) )
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

  if ( (byte_49FFB4C & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_1B640C8(&StringLiteral_1/*""*/, baseData);
    byte_49FFB4C = 1;
  }
  idList = 0LL;
  skillNameList = 0LL;
  if ( !baseData )
    sub_1B64324(this);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0LL);
  if ( skillNameList )
  {
    if ( !skillNameList->max_length )
      sub_1B6432C(v9, v10);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  CheckCombineResStatus___c_c *v23; // x0
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v25; // x21
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FFB4D & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ServantSkillEntity__TypeInfo, baseData);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___75666128, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    sub_1B640C8(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v13);
    sub_1B640C8(&CheckCombineResStatus___c_TypeInfo, v14);
    this = (CheckCombineResStatus_o *)sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49FFB4D = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor_55234504(
    v20,
    UseSvtEqSkillInfo,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___75666128);
  if ( !v20 )
    goto LABEL_15;
  if ( v20->fields._size >= 1 )
  {
    v23 = CheckCombineResStatus___c_TypeInfo;
    if ( !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v23 = CheckCombineResStatus___c_TypeInfo;
    }
    _9__11_0 = (System_Comparison_T__o *)v23->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = CheckCombineResStatus___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__11_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantSkillEntity__TypeInfo, v21, v22);
      System_Comparison_object____ctor(
        _9__11_0,
        v25,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0LL);
      static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v27, v28);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      v20,
      _9__11_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v20,
                                        0,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_15:
    sub_1B64324(this);
  }
  return v16;
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
  DataManager_o *Instance; // x0
  ServantExpMaster_o *v16; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_49FFB4E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, expVal);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FFB4E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v16 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v16, expType, Level, 0LL)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFB52 & 1) == 0 )
  {
    sub_1B640C8(&CheckCombineResStatus___c_TypeInfo, v1);
    byte_49FFB52 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CheckCombineResStatus___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CheckCombineResStatus___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}