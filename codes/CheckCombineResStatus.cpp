void CheckCombineResStatus___cctor(const MethodInfo *method)
{
  if ( (byte_4C46EE3 & 1) == 0 )
  {
    sub_1C37058(&CheckCombineResStatus_TypeInfo);
    byte_4C46EE3 = 1;
  }
  CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE = 1000;
}


void CheckCombineResStatus___ctor(CheckCombineResStatus_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float CheckCombineResStatus__GetCombineEventCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        int32_t type,
        bool isGetBiggest,
        const MethodInfo *method)
{
  float v10; // s8
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v13; // x23
  _BOOL8 v14; // x0
  Il2CppObject *current; // x29
  int64_t Time; // x0
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v19; // x24
  _BOOL8 v20; // x0
  System_Int32_array *v21; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t v24; // w1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C46EE1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EE1 = 1;
  }
  v10 = 1.0;
  entity = 0;
  memset(&v27, 0, sizeof(v27));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
      sub_1C372B4(Instance);
    }
    v13 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v10 = 1.0;
    v27 = v26;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v27,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
          if ( !v14 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v27,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
            return v10;
          }
          current = v27.fields._current;
          if ( !v27.fields._current )
            sub_1C372B4(v14);
          if ( HIDWORD(v27.fields._current[1].klass) == type )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0);
            klass = current[5].klass;
            if ( !klass )
              sub_1C372B4(Time);
            if ( Time <= (__int64)klass->_1.generic_class )
            {
              if ( !v13 )
                sub_1C372B4(Time);
              Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v13, (int32_t)current[1].klass, 0);
              v19 = Data;
              if ( !Data )
                break;
              if ( !MasterData_object )
                sub_1C372B4(Data);
              v20 = EventCampaignReleaseMaster__TryGetEntity(
                      (EventCampaignReleaseMaster_o *)MasterData_object,
                      &entity,
                      Data->fields.eventId,
                      Data->fields.target,
                      Data->fields.idx,
                      0);
              if ( !v20 )
                break;
              if ( !entity )
                sub_1C372B4(v20);
              if ( entity->fields.condType != 1
                || EventCampaignReleaseMaster__isRelease(
                     (EventCampaignReleaseMaster_o *)MasterData_object,
                     v19->fields.eventId,
                     v19->fields.target,
                     0) )
              {
                break;
              }
            }
          }
        }
        if ( type != 27 )
          break;
        if ( UserServantEntity__IsExchangeSvt(baseSvt, 0) )
          goto LABEL_31;
      }
      v21 = (System_Int32_array *)current[2].klass;
      if ( v21 && v21->max_length )
      {
        v23 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v23;
        *(_QWORD *)&v29.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v29, 0);
        if ( System_Array__IndexOf_int_(v21, v24, (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___) < 0 )
          continue;
      }
LABEL_31:
      if ( (((*(float *)&current[3].monitor <= v10) ^ isGetBiggest) & 1) != 0 )
        v10 = *(float *)&current[3].monitor;
    }
  }
  return v10;
}


float CheckCombineResStatus__GetExpCampaignValue(
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


System_ValueTuple_int__int__int__int__int__o *CheckCombineResStatus__GetHpAtkFactorWithOverwrite(
        System_ValueTuple_int__int__int__int__int__o *__return_ptr retstr,
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t DispLimitCount; // w23
  int32_t LimitCountByDispLimit; // w23
  int32_t ServantLimitCountSealAfter; // w26
  Il2CppObject *v13; // x23
  int32_t klass_high; // w22
  int32_t totalExp; // w23
  int32_t increLv; // w24
  int32_t maxLv; // w21
  int32_t checkLv; // w25
  Il2CppObject *Master_object; // x0
  __int64 v20; // x8
  ServantLimitAddMaster_o *v21; // x20
  const MethodInfo_3B1B2BC *v22; // x6
  System_ValueTuple_int__int__int__int__int__o *result; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C46EE2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_1C37058(&Method_System_ValueTuple_int__int__int__int__int___ctor__);
    byte_4C46EE2 = 1;
  }
  entity = 0;
  if ( !baseSvt )
    goto LABEL_24;
  v7 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v7;
  *(_QWORD *)&v25.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(baseSvt->fields.limitCount, 0);
  DispLimitCount = UserServantEntity__getDispLimitCount(baseSvt, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_24;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v8,
                                 LimitCountByDispLimit,
                                 0);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this )
    goto LABEL_24;
  v13 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v8,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !this )
    goto LABEL_24;
  this = (CheckCombineResStatus_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v8, v9, 0);
  if ( !v13 )
    goto LABEL_24;
  if ( !this )
    goto LABEL_24;
  klass_high = HIDWORD(v13[8].klass);
  totalExp = this->fields.totalExp;
  increLv = this->fields.increLv;
  checkLv = this->fields.checkLv;
  maxLv = this->fields.maxLv;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v20 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v26.fields.fakeValue = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_object;
  *(_QWORD *)&v26.fields.currentCryptoKey = v20;
  this = (CheckCombineResStatus_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v26, 0);
  if ( !v21 )
    goto LABEL_24;
  if ( ServantLimitAddMaster__TryGetEntity(v21, &entity, (int32_t)this, ServantLimitCountSealAfter, 0) )
  {
    this = (CheckCombineResStatus_o *)entity;
    if ( entity )
    {
      this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(entity, klass_high, 0);
      if ( entity )
      {
        klass_high = (int)this;
        this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteHpBase(entity, totalExp, 0);
        if ( entity )
        {
          totalExp = (int)this;
          this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteAtkBase(entity, checkLv, 0);
          if ( entity )
          {
            checkLv = (int)this;
            this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteHpMax(entity, increLv, 0);
            if ( entity )
            {
              increLv = (int)this;
              maxLv = ServantLimitAddEntity__GetOverwriteAtkMax(entity, maxLv, 0);
              goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C372B4(this);
  }
LABEL_23:
  v22 = (const MethodInfo_3B1B2BC *)Method_System_ValueTuple_int__int__int__int__int___ctor__;
  *(_QWORD *)&retstr->fields.Item1 = 0;
  *(_QWORD *)&retstr->fields.Item3 = 0;
  retstr->fields.Item5 = 0;
  System_ValueTuple_int__int__int__int__int____ctor(retstr, klass_high, totalExp, checkLv, increLv, maxLv, v22);
  return result;
}


float CheckCombineResStatus__GetQpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 1, 0, v4);
}


float CheckCombineResStatus__GetSvtEquipExpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 17, 1, v4);
}


float CheckCombineResStatus__GetSvtEquipQpCampaignValue(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        System_Collections_Generic_List_EventInfoData__o *combineEventList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return CheckCombineResStatus__GetCombineEventCampaignValue(this, baseSvt, combineEventList, 16, 0, v4);
}


bool CheckCombineResStatus__checkIncrementLv(CheckCombineResStatus_o *this, int32_t lv, const MethodInfo *method)
{
  int32_t maxLv; // w8
  void *Instance; // x0
  bool result; // w0

  if ( (byte_4C46EDB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EDB = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_1C372B4(Instance);
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


void CheckCombineResStatus__getCombineResStatus(
        CheckCombineResStatus_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *baseData,
        int32_t increLv,
        const MethodInfo *method)
{
  int32_t Item2; // w25
  int32_t Item1; // w27
  int32_t Item3; // w22
  int32_t Item4; // w26
  int32_t Item5; // w24
  void *Instance; // x0
  int32_t v16; // w23
  int32_t atk; // w0
  int32_t v18; // w22
  int32_t v19; // w21
  System_ValueTuple_int__int__int__int__int__o v20; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C46EDC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    this = (CheckCombineResStatus_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EDC = 1;
  }
  CheckCombineResStatus__GetHpAtkFactorWithOverwrite(&v20, this, baseData, (const MethodInfo *)afterAtk);
  Item1 = v20.fields.Item1;
  Item2 = v20.fields.Item2;
  Item3 = v20.fields.Item3;
  Item4 = v20.fields.Item4;
  Item5 = v20.fields.Item5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, Item1, increLv, 0);
  if ( Instance )
  {
    if ( !baseData )
      goto LABEL_13;
    v16 = *((_DWORD *)Instance + 7);
    *afterHp = CombineUtility__CalculateHp(Item2, Item4, v16, baseData->fields.adjustHp, 0);
    atk = CombineUtility__CalculateAtk(Item3, Item5, v16, baseData->fields.adjustAtk, 0);
  }
  else
  {
    if ( !baseData )
      goto LABEL_13;
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
  }
  *afterAtk = atk;
  v18 = *afterHp;
  Instance = UserServantEntity__get_GrandInfo(baseData, 0);
  if ( !Instance
    || (*afterHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Instance, 0) + v18,
        v19 = *afterAtk,
        (Instance = UserServantEntity__get_GrandInfo(baseData, 0)) == 0) )
  {
LABEL_13:
    sub_1C372B4(Instance);
  }
  *afterAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Instance, 0) + v19;
}


void CheckCombineResStatus__getExpInfo(
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
  ServantExpMaster_o *v17; // x25
  int m_CancellationTokenSource; // w26
  float v19; // s0

  if ( (byte_4C46EE0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EE0 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v17 = (ServantExpMaster_o *)Instance;
    if ( startLv >= 2 )
    {
      if ( !Instance )
        goto LABEL_15;
      Instance = (DataManager_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, startLv - 1, 0);
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v17, expType, startLv, 0);
    *exp = targetExp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - targetExp;
      v19 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_14;
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
  v19 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v19;
}


int32_t CheckCombineResStatus__getIncreLevel(
        CheckCombineResStatus_o *this,
        int32_t getExp,
        int32_t svtExpType,
        int32_t svtMaxLv,
        int32_t startLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46ED9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46ED9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0);
}


int32_t CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t result; // w0
  const MethodInfo *v12; // x2
  int32_t checkLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C46EDA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EDA = 1;
  }
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_14;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_14:
    sub_1C372B4(Instance);
  }
  this->fields.expType = HIDWORD(Instance[8].klass);
  this->fields.totalExp = baseData->fields.exp + getExp;
  this->fields.checkLv = baseData->fields.lv;
  result = UserServantEntity__getLevelMax(baseData, 0);
  checkLv = this->fields.checkLv;
  this->fields.maxLv = result;
  if ( checkLv == result )
  {
    this->fields.increLv = result;
  }
  else
  {
    while ( !CheckCombineResStatus__checkIncrementLv(this, checkLv, v12) )
      checkLv = this->fields.checkLv;
    return this->fields.increLv;
  }
  return result;
}


System_String_o *CheckCombineResStatus__getOpenSkillNameByCombine(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t increLv,
        int32_t limitCntSum,
        const MethodInfo *method)
{
  System_String_o *v8; // x21
  __int64 v9; // x0
  System_String_array *skillNameList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C46EDD & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46EDD = 1;
  }
  idList = 0;
  skillNameList = 0;
  if ( !baseData )
    sub_1C372B4(this);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0);
  if ( skillNameList )
  {
    if ( !LODWORD(skillNameList->max_length) )
      sub_1C372BC(v9);
    if ( skillNameList->m_Items[0] )
      return skillNameList->m_Items[0];
  }
  return v8;
}


System_String_o *CheckCombineResStatus__getSvtEqSkillByCombine(
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
  const MethodInfo *v16; // x3

  if ( (byte_4C46EDE & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___78065424);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1C37058(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__);
    sub_1C37058(&CheckCombineResStatus___c_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46EDE = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v10,
    UseSvtEqSkillInfo,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___78065424);
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
      _9__11_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__11_0,
        v13,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0);
      static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v15, v16);
    }
    System_Collections_Generic_List_object___Sort_58346216(
      v10,
      _9__11_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v10,
                                        0,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0);
LABEL_15:
    sub_1C372B4(this);
  }
  return v8;
}


void CheckCombineResStatus__setSvtExp(
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
  ServantExpMaster_o *v15; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4C46EDF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46EDF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (v15 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v15, expType, Level, 0)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  Entity = ServantExpMaster__GetEntity(v15, expType, Level - 1, 0);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *expVal = 1.0 - (float)((float)(m_CancellationTokenSource - targetExp) / (float)(m_CancellationTokenSource - exp));
  *lateExp = m_CancellationTokenSource - targetExp;
}


void CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46EE4 & 1) == 0 )
  {
    sub_1C37058(&CheckCombineResStatus___c_TypeInfo);
    byte_4C46EE4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CheckCombineResStatus___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CheckCombineResStatus___c___ctor(CheckCombineResStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CheckCombineResStatus___c___getSvtEqSkillByCombine_b__11_0(
        CheckCombineResStatus___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}