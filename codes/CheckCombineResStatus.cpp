void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E972F & 1) == 0 )
  {
    sub_B5D5C4(&CheckCombineResStatus_TypeInfo, v1, v2, v3);
    byte_42E972F = 1;
  }
  CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall CheckCombineResStatus___ctor(CheckCombineResStatus_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CheckCombineResStatus__GetCombineEventCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        int32_t type,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  float v35; // s8
  WebViewManager_o *Instance; // x0
  __int64 v37; // x1
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventCampaignMaster_o *v39; // x22
  Il2CppObject *current; // x28
  int64_t Time; // x0
  __int64 v42; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v45; // x1
  EventCampaignEntity_o *v46; // x23
  __int64 v47; // x1
  Il2CppClass *v48; // x27
  const char *namespaze; // x8
  __int64 v50; // x26
  int v51; // w22
  __int64 v52; // x23
  __int64 v53; // x24
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v57; // x0
  EventCampaignMaster_o *v58; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+30h] [xbp-80h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_42E972E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventCampaignMaster___,
      (_DWORD)baseSvt,
      (_DWORD)combineEventList,
      *(_QWORD *)&type);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E972E = 1;
  }
  v35 = 1.0;
  entity = 0LL;
  memset(&v60, 0, sizeof(v60));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Instance, v37);
    }
    v39 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v59,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v35 = 1.0;
    v60 = v59;
    while ( 1 )
    {
      while ( 1 )
      {
        v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v60,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
        if ( !v54 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v60,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
          return v35;
        }
        current = v60.fields.current;
        if ( !v60.fields.current )
          sub_B5D69C(v54, v55);
        if ( HIDWORD(v60.fields.current[1].klass) == type )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          klass = current[5].klass;
          if ( !klass )
            sub_B5D69C(Time, v42);
          if ( Time <= (__int64)klass->_1.generic_class )
          {
            if ( !v39 )
              sub_B5D69C(Time, v42);
            Data = EventCampaignMaster__getData(v39, (int32_t)current[1].klass, 0LL);
            v46 = Data;
            if ( !Data )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B5D69C(Data, v45);
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
              sub_B5D69C(Data, v47);
            if ( entity->fields.condType != 1 )
              break;
            Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                              MasterData_WarQuestSelectionMaster,
                                              v46->fields.eventId,
                                              v46->fields.target,
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
        v48 = current[2].klass;
        if ( v48 && (namespaze = v48->_1.namespaze) != 0LL )
        {
          if ( (int)namespaze >= 1 )
          {
            v58 = v39;
            v50 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v50 >= (unsigned int)namespaze )
              {
                v57 = sub_B5D6C8(Data);
                sub_B5D668(v57, 0LL);
              }
              v51 = *((_DWORD *)&v48->_1.byval_arg.data + v50);
              v53 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
              v52 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v62.fields.currentCryptoKey = v53;
              *(_QWORD *)&v62.fields.fakeValue = v52;
              Data = (EventCampaignEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v62,
                                                0LL);
              if ( (_DWORD)Data == v51 )
                break;
              LODWORD(namespaze) = v48->_1.namespaze;
              if ( (int)++v50 >= (int)namespaze )
                goto LABEL_39;
            }
            v35 = v35 * *(float *)&current[3].monitor;
LABEL_39:
            v39 = v58;
          }
        }
        else
        {
LABEL_37:
          v35 = v35 * *(float *)&current[3].monitor;
        }
      }
    }
  }
  return v35;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t klass; // w8
  void *Instance; // x0
  __int64 v11; // x1
  bool result; // w0

  if ( (byte_42E9728 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E9728 = 1;
  }
  klass = (int32_t)this[1].klass;
  if ( klass > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.totalExp, lv, 0LL)) == 0LL )
    {
      sub_B5D69C(Instance, v11);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x23
  __int64 v32; // x24
  int32_t v33; // w23
  int32_t v34; // w24
  int32_t monitor_high; // w25
  ServantLimitEntity_o *Entity; // x23
  CheckCombineResStatus_o *v37; // x8
  int32_t hpBase; // w26
  int32_t hpMax; // w27
  int32_t atkBase; // w22
  int32_t atkMax; // w23
  CheckCombineResStatus_c *v42; // x0
  int32_t v43; // w24
  int32_t v44; // w23
  int32_t adjustHp; // w24
  BalanceConfig_c *v46; // x0
  int atk; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42E9729 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)afterHp, (_DWORD)afterAtk, baseData);
    sub_B5D5C4(&CheckCombineResStatus_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    this = (CheckCombineResStatus_o *)sub_B5D5C4(
                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                        v28,
                                        v29,
                                        v30);
    byte_42E9729 = 1;
  }
  if ( !baseData )
    goto LABEL_25;
  v32 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v32;
  *(_QWORD *)&v48.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseData->fields.limitCount, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v33,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_25;
  monitor_high = HIDWORD(this[3].monitor);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_25;
  Entity = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v33, v34, 0LL);
  this = (CheckCombineResStatus_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_25;
  this = (CheckCombineResStatus_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_B5D69C(this, afterHp);
  v37 = this;
  hpBase = Entity->fields.hpBase;
  hpMax = Entity->fields.hpMax;
  atkBase = Entity->fields.atkBase;
  atkMax = Entity->fields.atkMax;
  v42 = CheckCombineResStatus_TypeInfo;
  v43 = v37->fields.increLv;
  if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
    v42 = CheckCombineResStatus_TypeInfo;
  }
  *afterHp = v43 * (hpMax - hpBase) / v42->static_fields->LOT_RATE + hpBase;
  *afterAtk = v43 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE + atkBase;
  v44 = *afterHp;
  adjustHp = baseData->fields.adjustHp;
  v46 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  *afterHp = v44 + v46->static_fields->StatusUpAdjustHp * adjustHp;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  ServantExpMaster_o *v21; // x25
  int datalist; // w26
  float v23; // s0

  if ( (byte_42E972D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E972D = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v21 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v21, expType, startLv, 0LL);
    *exp = targetExp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - targetExp;
      v23 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(Instance, v20);
  }
  v23 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v23;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1

  if ( (byte_42E9726 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, getExp, svtExpType, *(_QWORD *)&svtMaxLv);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9726 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0LL);
}


int32_t __fastcall CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  void *Instance; // x0
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t result; // w0
  const MethodInfo *v22; // x2
  int32_t maxLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42E9727 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)baseData, getExp, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E9727 = 1;
  }
  this->fields.checkLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_15;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v20 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
  if ( !v18
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v18,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v17);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, maxLv, v22) )
      maxLv = this->fields.maxLv;
    return this->fields.checkLv;
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
  __int64 v11; // x0
  System_String_array *v12; // [xsp+0h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E972A & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)baseData, increLv, *(_QWORD *)&limitCntSum);
    byte_42E972A = 1;
  }
  v12 = 0LL;
  idList = 0LL;
  if ( !baseData )
    sub_B5D69C(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &v12, increLv, limitCntSum, 1, 0LL);
  if ( v12 )
  {
    if ( !v12->max_length )
    {
      v11 = sub_B5D6C8(v9);
      sub_B5D668(v11, 0LL);
    }
    if ( v12->m_Items[0] )
      return v12->m_Items[0];
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_String_o *v35; // x22
  System_Collections_Generic_IEnumerable_T__o *UseSvtEqSkillInfo; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v37; // x19
  CheckCombineResStatus___c_c *v38; // x0
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v41; // x21
  struct CheckCombineResStatus___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E972B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_ServantSkillEntity___ctor__,
      (_DWORD)baseData,
      increLv,
      *(_QWORD *)&limitCntSum);
    sub_B5D5C4(&System_Comparison_ServantSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___68747928, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v26, v27, v28);
    sub_B5D5C4(&CheckCombineResStatus___c_TypeInfo, v29, v30, v31);
    this = (CheckCombineResStatus_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42E972B = 1;
  }
  if ( !baseData )
    goto LABEL_19;
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v37 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v37,
    UseSvtEqSkillInfo,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___68747928);
  if ( !v37 )
    goto LABEL_19;
  if ( v37->fields._size >= 1 )
  {
    v38 = CheckCombineResStatus___c_TypeInfo;
    if ( (BYTE3(CheckCombineResStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v38 = CheckCombineResStatus___c_TypeInfo;
    }
    static_fields = v38->static_fields;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__11_0,
        v41,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v42 = CheckCombineResStatus___c_TypeInfo->static_fields;
      v42->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v42->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
      (System_Comparison_T__o *)_9__11_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    if ( !v37->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (CheckCombineResStatus_o *)v37->fields._items->m_Items[0];
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_19:
    sub_B5D69C(this, baseData);
  }
  return v35;
}


// local variable allocation has failed, the output may be wrong!
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  ServantExpMaster_o *v19; // x25
  int32_t Level; // w23
  int datalist; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_42E972C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantExpMaster___,
      (_DWORD)expVal,
      (_DWORD)lateExp,
      *(_QWORD *)&targetExp);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E972C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v19 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v19, expType, Level, 0LL)) == 0LL) )
  {
    sub_B5D69C(Instance, v18);
  }
  datalist = (int)Instance->fields.datalist;
  Entity = ServantExpMaster__GetEntity(v19, expType, Level - 1, 0LL);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *expVal = 1.0 - (float)((float)(datalist - targetExp) / (float)(datalist - exp));
  *lateExp = datalist - targetExp;
}


void __fastcall CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E5E & 1) == 0 )
  {
    sub_B5D5C4(&CheckCombineResStatus___c_TypeInfo, v1, v2, v3);
    byte_42E5E5E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckCombineResStatus___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}