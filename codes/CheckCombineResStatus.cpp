void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  if ( (byte_4352B27 & 1) == 0 )
  {
    sub_B70694(&CheckCombineResStatus_TypeInfo);
    byte_4352B27 = 1;
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
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventCampaignMaster_o *v12; // x22
  Il2CppObject *current; // x28
  int64_t Time; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v18; // x1
  EventCampaignEntity_o *v19; // x23
  __int64 v20; // x1
  Il2CppClass *v21; // x27
  const char *namespaze; // x8
  __int64 v23; // x26
  int v24; // w22
  __int64 v25; // x23
  __int64 v26; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v30; // x0
  EventCampaignMaster_o *v31; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+30h] [xbp-80h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4352B26 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B26 = 1;
  }
  v8 = 1.0;
  entity = 0LL;
  memset(&v33, 0, sizeof(v33));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_B7076C(Instance, v10);
    }
    v12 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineEventList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v8 = 1.0;
    v33 = v32;
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v33,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
        if ( !v27 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v33,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v8;
        }
        current = v33.fields.current;
        if ( !v33.fields.current )
          sub_B7076C(v27, v28);
        if ( HIDWORD(v33.fields.current[1].klass) == type )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_B7076C(Time, v15);
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v12 )
              sub_B7076C(Time, v15);
            Data = EventCampaignMaster__getData(v12, (int32_t)current[1].klass, 0LL);
            v19 = Data;
            if ( !Data )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B7076C(Data, v18);
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
              sub_B7076C(Data, v20);
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              MasterData_WarQuestSelectionMaster,
                                              v19->fields.eventId,
                                              v19->fields.target,
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
        v21 = current[2].klass;
        if ( v21 && (namespaze = v21->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v31 = v12;
            v23 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v23 >= (unsigned int)namespaze )
              {
                v30 = sub_B70798(Data);
                sub_B70738(v30, 0LL);
              }
              v24 = *((_DWORD *)&v21->_1.byval_arg.data + v23);
              v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v35.fields.currentCryptoKey = v26;
              *(_QWORD *)&v35.fields.fakeValue = v25;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                v35,
                                                0LL);
              if ( (_DWORD)Data == v24 )
                break;
              LODWORD(namespaze) = v21->_1.namespaze;
              if ( (int)++v23 >= (int)namespaze )
                goto LABEL_39;
            }
            v8 = v8 * *(float *)&current[3].monitor;
LABEL_39:
            v12 = v31;
          }
        }
        else
        {
LABEL_37:
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
  int32_t klass; // w8
  void *Instance; // x0
  __int64 v7; // x1
  bool result; // w0

  if ( (byte_4352B20 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B20 = 1;
  }
  klass = (int32_t)this[1].klass;
  if ( klass > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.totalExp, lv, 0LL)) == 0LL )
    {
      sub_B7076C(Instance, v7);
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
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  int32_t v13; // w24
  int32_t monitor_high; // w25
  ServantLimitEntity_o *Entity; // x23
  CheckCombineResStatus_o *v16; // x8
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkBase; // w22
  int32_t atkMax; // w23
  CheckCombineResStatus_c *v21; // x0
  int32_t v22; // w24
  int32_t v23; // w23
  int32_t adjustHp; // w24
  BalanceConfig_c *v25; // x0
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4352B21 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CheckCombineResStatus_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B21 = 1;
  }
  if ( !baseData )
    goto LABEL_25;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v11;
  *(_QWORD *)&v27.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v12,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_25;
  monitor_high = HIDWORD(this[3].monitor);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_25;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v12, v13, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_B7076C(this, afterHp);
  v16 = this;
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v21 = CheckCombineResStatus_TypeInfo;
  v22 = v16->fields.increLv;
  if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v21 = CheckCombineResStatus_TypeInfo;
  }
  *afterHp = v22 * (hpMax - hpBase) / v21->static_fields->LOT_RATE + hpBase;
  *afterAtk = v22 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE + atkBase;
  v23 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  *afterHp = v23 + v25->static_fields->StatusUpAdjustHp * adjustHp;
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantExpMaster_o *v18; // x25
  int datalist; // w26
  float v20; // s0

  if ( (byte_4352B25 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B25 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_B7076C(Instance, v17);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4352B1E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B1E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v11);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0LL);
}


int32_t __fastcall CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t result; // w0
  const MethodInfo *v13; // x2
  int32_t maxLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4352B1F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B1F = 1;
  }
  this->fields.checkLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_15;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL);
  if ( !v9
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v8);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, maxLv, v13) )
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

  if ( (byte_4352B22 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4352B22 = 1;
  }
  v12 = 0LL;
  idList = 0LL;
  if ( !baseData )
    sub_B7076C(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &v12, increLv, limitCntSum, 1, 0LL);
  if ( v12 )
  {
    if ( !v12->max_length )
    {
      v11 = sub_B70798(v9);
      sub_B70738(v11, 0LL);
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
  System_String_o *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x19
  CheckCombineResStatus___c_c *v11; // x0
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v14; // x21
  struct CheckCombineResStatus___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4352B23 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_ServantSkillEntity___ctor__);
    sub_B70694(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___69172712);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_B70694(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__);
    sub_B70694(&CheckCombineResStatus___c_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4352B23 = 1;
  }
  if ( !baseData )
    goto LABEL_19;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    UseSvtEqSkillInfo,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___69172712);
  if ( !v10 )
    goto LABEL_19;
  if ( v10->fields._size >= 1 )
  {
    v11 = CheckCombineResStatus___c_TypeInfo;
    if ( (BYTE3(CheckCombineResStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v11 = CheckCombineResStatus___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v14,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v15 = CheckCombineResStatus___c_TypeInfo->static_fields;
      v15->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v15->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    if ( !v10->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (CheckCombineResStatus_o *)v10->fields._items->m_Items[0];
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_19:
    sub_B7076C(this, baseData);
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
  int datalist; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4352B24 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352B24 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v16 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v16, expType, Level, 0LL)) == 0LL) )
  {
    sub_B7076C(Instance, v15);
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
  Il2CppObject *v1; // x19
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0

  if ( (byte_434ED79 & 1) == 0 )
  {
    sub_B70694(&CheckCombineResStatus___c_TypeInfo);
    byte_434ED79 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckCombineResStatus___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}