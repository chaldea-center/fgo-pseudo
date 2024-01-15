void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FAF29 & 1) == 0 )
  {
    sub_B16FFC(&CheckCombineResStatus_TypeInfo, v1);
    byte_40FAF29 = 1;
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
  WebViewManager_o *v20; // x0
  EventCampaignMaster_o *v21; // x22
  Il2CppObject *current; // x28
  int64_t Time; // x0
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  EventCampaignEntity_o *v28; // x23
  Il2CppClass *v29; // x27
  const char *namespaze; // x8
  __int64 v31; // x26
  int v32; // w22
  __int64 v33; // x23
  __int64 v34; // x24
  EventCampaignMaster_o *v36; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+30h] [xbp-80h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FAF28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, baseSvt);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FAF28 = 1;
  }
  v17 = 1.0;
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_B170D4();
    }
    v21 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v20,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v17 = 1.0;
    v38 = v37;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v38,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v38,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v17;
        }
        current = v38.fields.current;
        if ( !v38.fields.current )
          sub_B170D4();
        if ( HIDWORD(v38.fields.current[1].klass) == type )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_B170D4();
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v21 )
              sub_B170D4();
            Data = EventCampaignMaster__getData(v21, (int32_t)current[1].klass, 0LL);
            v28 = Data;
            if ( !Data )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B170D4();
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
              sub_B170D4();
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              MasterData_WarQuestSelectionMaster,
                                              v28->fields.eventId,
                                              v28->fields.target,
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
        v29 = current[2].klass;
        if ( v29 && (namespaze = v29->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v36 = v21;
            v31 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v31 >= (unsigned int)namespaze )
              {
                sub_B17100(Data, v26, v27);
                sub_B170A0();
              }
              v32 = *((_DWORD *)&v29->_1.byval_arg.data + v31);
              v34 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v33 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v40.fields.currentCryptoKey = v34;
              *(_QWORD *)&v40.fields.fakeValue = v33;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                v40,
                                                0LL);
              if ( (_DWORD)Data == v32 )
                break;
              LODWORD(namespaze) = v29->_1.namespaze;
              if ( (int)++v31 >= (int)namespaze )
                goto LABEL_39;
            }
            v17 = v17 * *(float *)&current[3].monitor;
LABEL_39:
            v21 = v36;
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
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpEntity_o *Entity; // x0
  bool result; // w0

  if ( (byte_40FAF22 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FAF22 = 1;
  }
  klass = (int32_t)this[1].klass;
  if ( klass > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.totalExp, lv, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    if ( Entity->fields.exp < this->fields.increLv )
    {
      result = 0;
      ++this->fields.maxLv;
      return result;
    }
    klass = Entity->fields.lv;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t klass_high; // w25
  WebViewManager_o *v25; // x0
  ServantLimitMaster_o *v26; // x0
  ServantLimitEntity_o *v27; // x23
  WebViewManager_o *v28; // x0
  ServantExpMaster_o *v29; // x0
  ServantExpEntity_o *v30; // x0
  ServantExpEntity_o *v31; // x8
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkBase; // w22
  int32_t atkMax; // w23
  CheckCombineResStatus_c *v36; // x0
  int32_t curve; // w24
  int32_t v38; // w23
  int32_t adjustHp; // w24
  BalanceConfig_c *v40; // x0
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40FAF23 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, afterHp);
    sub_B16FFC(&CheckCombineResStatus_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FAF23 = 1;
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
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseData->fields.limitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v19,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_25;
  klass_high = HIDWORD(Entity[1].klass);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_25;
  v26 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v25,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v26 )
    goto LABEL_25;
  v27 = ServantLimitMaster__GetEntity(v26, v19, v20, 0LL);
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_25;
  v29 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v28,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !v29 )
    goto LABEL_25;
  v30 = ServantExpMaster__GetEntity(v29, klass_high, increLv, 0LL);
  if ( !v30 )
  {
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
    goto LABEL_24;
  }
  if ( !v27 )
LABEL_25:
    sub_B170D4();
  v31 = v30;
  hpBase = v27->fields.hpBase;
  hpMax = v27->fields.hpMax;
  atkBase = v27->fields.atkBase;
  atkMax = v27->fields.atkMax;
  v36 = CheckCombineResStatus_TypeInfo;
  curve = v31->fields.curve;
  if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v36 = CheckCombineResStatus_TypeInfo;
  }
  *afterHp = curve * (hpMax - hpBase) / v36->static_fields->LOT_RATE + hpBase;
  *afterAtk = curve * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE + atkBase;
  v38 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  v40 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  *afterHp = v38 + v40->static_fields->StatusUpAdjustHp * adjustHp;
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
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpMaster_o *v19; // x25
  int32_t v20; // w26
  float v21; // s0
  ServantExpEntity_o *Entity; // x0
  ServantExpEntity_o *v23; // x0

  if ( (byte_40FAF27 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FAF27 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v19 = MasterData_WarQuestSelectionMaster;
    if ( startLv >= 2 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_15;
      Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, expType, startLv - 1, 0LL);
      if ( !Entity )
        goto LABEL_15;
      v20 = Entity->fields.exp;
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_15;
      v20 = 0;
    }
    v23 = ServantExpMaster__GetEntity(v19, expType, startLv, 0LL);
    *exp = targetExp - v20;
    if ( v23 )
    {
      *lateExp = v23->fields.exp - targetExp;
      v21 = (float)*exp / (float)(v23->fields.exp - v20);
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  v21 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v21;
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
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FAF20 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FAF20 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantExpMaster__getLevel(MasterData_WarQuestSelectionMaster, getExp, svtExpType, svtMaxLv, startLv, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  WarEntity_o *Entity; // x0
  int32_t result; // w0
  const MethodInfo *v18; // x2
  int32_t maxLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FAF21 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, baseData);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FAF21 = 1;
  }
  this->fields.checkLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_15;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v14 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v12
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v12,
                   v15,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  this->fields.totalExp = HIDWORD(Entity[1].klass);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, maxLv, v18) )
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_array *v13; // [xsp+0h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAF24 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, baseData);
    byte_40FAF24 = 1;
  }
  v13 = 0LL;
  idList = 0LL;
  if ( !baseData )
    sub_B170D4();
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &v13, increLv, limitCntSum, 1, 0LL);
  if ( v13 )
  {
    if ( !v13->max_length )
    {
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
    if ( v13->m_Items[0] )
      return v13->m_Items[0];
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
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CheckCombineResStatus___c_c *v28; // x0
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v31; // x21
  struct CheckCombineResStatus___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  ServantSkillEntity_o *v39; // x0

  if ( (byte_40FAF25 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ServantSkillEntity___ctor__, baseData);
    sub_B16FFC(&System_Comparison_ServantSkillEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___66744824, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v13);
    sub_B16FFC(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v14);
    sub_B16FFC(&CheckCombineResStatus___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40FAF25 = 1;
  }
  if ( !baseData )
    goto LABEL_19;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                                          v19,
                                                                          v20,
                                                                          v21,
                                                                          v22);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v23,
    UseSvtEqSkillInfo,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___66744824);
  if ( !v23 )
    goto LABEL_19;
  if ( v23->fields._size >= 1 )
  {
    v28 = CheckCombineResStatus___c_TypeInfo;
    if ( (BYTE3(CheckCombineResStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v28 = CheckCombineResStatus___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_ServantSkillEntity__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v31,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v32 = CheckCombineResStatus___c_TypeInfo->static_fields;
      v32->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v32->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    if ( !v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v39 = (ServantSkillEntity_o *)v23->fields._items->m_Items[0];
    if ( v39 )
      return ServantSkillEntity__getSkillName(v39, 0LL);
LABEL_19:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpMaster_o *v17; // x25
  int32_t Level; // w23
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w24
  ServantExpEntity_o *v21; // x0
  int32_t v22; // w8

  if ( (byte_40FAF26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, expVal);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FAF26 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v17 = MasterData_WarQuestSelectionMaster,
        Level = ServantExpMaster__getLevel(MasterData_WarQuestSelectionMaster, targetExp, expType, maxLv, startLv, 0LL),
        (Entity = ServantExpMaster__GetEntity(v17, expType, Level, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  exp = Entity->fields.exp;
  v21 = ServantExpMaster__GetEntity(v17, expType, Level - 1, 0LL);
  if ( v21 )
    v22 = v21->fields.exp;
  else
    v22 = 0;
  *expVal = 1.0 - (float)((float)(exp - targetExp) / (float)(exp - v22));
  *lateExp = exp - targetExp;
}


void __fastcall CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70C0 & 1) == 0 )
  {
    sub_B16FFC(&CheckCombineResStatus___c_TypeInfo, v1);
    byte_40F70C0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CheckCombineResStatus___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CheckCombineResStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}