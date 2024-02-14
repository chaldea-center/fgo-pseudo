void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214279 & 1) == 0 )
  {
    sub_B0D8A4(&CheckCombineResStatus_TypeInfo, v1);
    byte_4214279 = 1;
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
  WebViewManager_o *Instance; // x0
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventCampaignMaster_o *v20; // x22
  Il2CppObject *current; // x28
  int64_t Time; // x0
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v25; // x23
  Il2CppClass *v26; // x27
  const char *namespaze; // x8
  __int64 v28; // x26
  int v29; // w22
  __int64 v30; // x23
  __int64 v31; // x24
  _BOOL8 v32; // x0
  __int64 v34; // x0
  EventCampaignMaster_o *v35; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-80h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4214278 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, baseSvt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4214278 = 1;
  }
  v17 = 1.0;
  entity = 0LL;
  memset(&v37, 0, sizeof(v37));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_B0D97C(Instance);
    }
    v20 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineEventList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v17 = 1.0;
    v37 = v36;
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v37,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
        if ( !v32 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v37,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v17;
        }
        current = v37.fields.current;
        if ( !v37.fields.current )
          sub_B0D97C(v32);
        if ( HIDWORD(v37.fields.current[1].klass) == type )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_B0D97C(Time);
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v20 )
              sub_B0D97C(Time);
            Data = EventCampaignMaster__getData(v20, (int32_t)current[1].klass, 0LL);
            v25 = Data;
            if ( !Data )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B0D97C(Data);
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__TryGetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              &entity,
                                              Data->fields.eventId,
                                              Data->fields.target,
                                              Data->fields.idx,
                                              0LL);
            if ( ((unsigned __int8)Data & 1) == 0 )
              break;
            if ( !entity )
              sub_B0D97C(Data);
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              MasterData_WarQuestSelectionMaster,
                                              v25->fields.eventId,
                                              v25->fields.target,
                                              0LL);
            if ( ((unsigned __int8)Data & 1) != 0 )
              break;
          }
        }
      }
      if ( type == 27 )
      {
        if ( UserServantEntity__IsExchangeSvt(baseSvt, 0LL) )
          goto LABEL_37;
      }
      else
      {
        v26 = current[2].klass;
        if ( v26 && (namespaze = v26->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v35 = v20;
            v28 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v28 >= (unsigned int)namespaze )
              {
                v34 = sub_B0D9A8(Data);
                sub_B0D948(v34, 0LL);
              }
              v29 = *((_DWORD *)&v26->_1.byval_arg.data + v28);
              v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v39.fields.currentCryptoKey = v31;
              *(_QWORD *)&v39.fields.fakeValue = v30;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v39,
                                                0LL);
              if ( (_DWORD)Data == v29 )
                break;
              LODWORD(namespaze) = v26->_1.namespaze;
              if ( (int)++v28 >= (int)namespaze )
                goto LABEL_39;
            }
            v17 = v17 * *(float *)&current[3].monitor;
LABEL_39:
            v20 = v35;
          }
        }
        else
        {
LABEL_37:
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
  int32_t klass; // w8
  void *Instance; // x0
  bool result; // w0

  if ( (byte_4214272 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4214272 = 1;
  }
  klass = (int32_t)this[1].klass;
  if ( klass > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.totalExp, lv, 0LL)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    if ( *((_DWORD *)Instance + 6) < this->fields.increLv )
    {
      result = 0;
      ++this->fields.maxLv;
      return result;
    }
    klass = *((_DWORD *)Instance + 5);
  }
  result = 1;
  this->fields.checkLv = klass;
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
  int32_t monitor_high; // w25
  ServantLimitEntity_o *Entity; // x23
  CheckCombineResStatus_o *v23; // x8
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkBase; // w22
  int32_t atkMax; // w23
  CheckCombineResStatus_c *v28; // x0
  int32_t v29; // w24
  int32_t v30; // w23
  int32_t adjustHp; // w24
  BalanceConfig_c *v32; // x0
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4214273 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, afterHp);
    sub_B0D8A4(&CheckCombineResStatus_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    this = (CheckCombineResStatus_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4214273 = 1;
  }
  if ( !baseData )
    goto LABEL_25;
  v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v18;
  *(_QWORD *)&v34.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v19,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_25;
  monitor_high = HIDWORD(this[3].monitor);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_25;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v19, v20, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, monitor_high, increLv, 0LL);
  if ( !this )
  {
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
    goto LABEL_24;
  }
  if ( !Entity )
LABEL_25:
    sub_B0D97C(this);
  v23 = this;
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v28 = CheckCombineResStatus_TypeInfo;
  v29 = v23->fields.increLv;
  if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v28 = CheckCombineResStatus_TypeInfo;
  }
  *afterHp = v29 * (hpMax - hpBase) / v28->static_fields->LOT_RATE + hpBase;
  *afterAtk = v29 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE + atkBase;
  v30 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  v32 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  *afterHp = v30 + v32->static_fields->StatusUpAdjustHp * adjustHp;
  atk = *afterAtk + BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * baseData->fields.adjustAtk;
LABEL_24:
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
  int datalist; // w26
  float v20; // s0

  if ( (byte_4214277 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4214277 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v18 = (ServantExpMaster_o *)Instance;
    if ( startLv >= 2 )
    {
      if ( !Instance )
        goto LABEL_15;
      Instance = (DataManager_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, startLv - 1, 0LL);
      if ( !Instance )
        goto LABEL_15;
      datalist = (int)Instance->fields.datalist;
    }
    else
    {
      if ( !Instance )
        goto LABEL_15;
      datalist = 0;
    }
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, expType, startLv, 0LL);
    *exp = targetExp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - targetExp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0

  if ( (byte_4214270 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4214270 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t result; // w0
  const MethodInfo *v15; // x2
  int32_t maxLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4214271 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, baseData);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4214271 = 1;
  }
  this->fields.checkLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_15;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  this->fields.totalExp = *((_DWORD *)Instance + 33);
  this->fields.increLv = baseData->fields.exp + getExp;
  this->fields.maxLv = baseData->fields.lv;
  result = UserServantEntity__getLevelMax(baseData, 0LL);
  maxLv = this->fields.maxLv;
  LODWORD(this[1].klass) = result;
  if ( maxLv == result )
  {
    this->fields.checkLv = result;
  }
  else
  {
    while ( !CheckCombineResStatus__checkIncrementLv(this, maxLv, v15) )
      maxLv = this->fields.maxLv;
    return this->fields.checkLv;
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
  __int64 v11; // x0
  System_String_array *v12; // [xsp+0h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214274 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_B0D8A4(&StringLiteral_1/*""*/, baseData);
    byte_4214274 = 1;
  }
  v12 = 0LL;
  idList = 0LL;
  if ( !baseData )
    sub_B0D97C(this);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &v12, increLv, limitCntSum, 1, 0LL);
  if ( v12 )
  {
    if ( !v12->max_length )
    {
      v11 = sub_B0D9A8(v9);
      sub_B0D948(v11, 0LL);
    }
    if ( v12->m_Items[0] )
      return v12->m_Items[0];
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
  __int64 v16; // x1
  System_String_o *v17; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  CheckCombineResStatus___c_c *v24; // x0
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v27; // x21
  struct CheckCombineResStatus___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4214275 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_ServantSkillEntity___ctor__, baseData);
    sub_B0D8A4(&System_Comparison_ServantSkillEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___67892632, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v14);
    sub_B0D8A4(&CheckCombineResStatus___c_TypeInfo, v15);
    this = (CheckCombineResStatus_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_4214275 = 1;
  }
  if ( !baseData )
    goto LABEL_19;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v21,
    UseSvtEqSkillInfo,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___67892632);
  if ( !v21 )
    goto LABEL_19;
  if ( v21->fields._size >= 1 )
  {
    v24 = CheckCombineResStatus___c_TypeInfo;
    if ( (BYTE3(CheckCombineResStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v24 = CheckCombineResStatus___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_ServantSkillEntity__TypeInfo,
                                                                             v22,
                                                                             v23);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v27,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v28 = CheckCombineResStatus___c_TypeInfo->static_fields;
      v28->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v28->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v21,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    if ( !v21->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (CheckCombineResStatus_o *)v21->fields._items->m_Items[0];
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_19:
    sub_B0D97C(this);
  }
  return v17;
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
  int datalist; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4214276 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, expVal);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4214276 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v16 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v16, expType, Level, 0LL)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  datalist = (int)Instance->fields.datalist;
  Entity = ServantExpMaster__GetEntity(v16, expType, Level - 1, 0LL);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *expVal = 1.0 - (float)((float)(datalist - targetExp) / (float)(datalist - exp));
  *lateExp = datalist - targetExp;
}


void __fastcall CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0

  if ( (byte_4211E05 & 1) == 0 )
  {
    sub_B0D8A4(&CheckCombineResStatus___c_TypeInfo, v1);
    byte_4211E05 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CheckCombineResStatus___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckCombineResStatus___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}