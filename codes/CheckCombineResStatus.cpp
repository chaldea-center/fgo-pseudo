void __fastcall CheckCombineResStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A51FE8 & 1) == 0 )
  {
    sub_1B863B8(&CheckCombineResStatus_TypeInfo, v1);
    byte_4A51FE8 = 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  float v20; // s8
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v24; // x23
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x29
  int64_t Time; // x0
  __int64 v29; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v32; // x1
  EventCampaignEntity_o *v33; // x24
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppClass *v36; // x24
  __int64 v37; // x25
  __int64 v38; // x26
  int32_t v39; // w1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A51FE6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, baseSvt);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A51FE6 = 1;
  }
  v20 = 1.0;
  entity = 0LL;
  memset(&v42, 0, sizeof(v42));
  if ( combineEventList && baseSvt && combineEventList->fields._size >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
      sub_1B86614(Instance, v22);
    }
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v20 = 1.0;
    v42 = v41;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
          if ( !v25 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v42,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
            return v20;
          }
          current = v42.fields._current;
          if ( !v42.fields._current )
            sub_1B86614(v25, v26);
          if ( HIDWORD(v42.fields._current[1].klass) == type )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0LL);
            klass = current[5].klass;
            if ( !klass )
              sub_1B86614(Time, v29);
            if ( Time <= (__int64)klass->_1.generic_class )
            {
              if ( !v24 )
                sub_1B86614(Time, v29);
              Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v24, (int32_t)current[1].klass, 0LL);
              v33 = Data;
              if ( !Data )
                break;
              if ( !MasterData_object )
                sub_1B86614(Data, v32);
              v34 = EventCampaignReleaseMaster__TryGetEntity(
                      (EventCampaignReleaseMaster_o *)MasterData_object,
                      &entity,
                      Data->fields.eventId,
                      Data->fields.target,
                      Data->fields.idx,
                      0LL);
              if ( !v34 )
                break;
              if ( !entity )
                sub_1B86614(v34, v35);
              if ( entity->fields.condType != 1
                || EventCampaignReleaseMaster__isRelease(
                     (EventCampaignReleaseMaster_o *)MasterData_object,
                     v33->fields.eventId,
                     v33->fields.target,
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
      v36 = current[2].klass;
      if ( v36 && v36->_1.namespaze )
      {
        v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v44.fields.currentCryptoKey = v38;
        *(_QWORD *)&v44.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v44, 0LL);
        if ( (System_Array__IndexOf_int_(
                (System_Int32_array *)v36,
                v39,
                (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
          continue;
      }
LABEL_31:
      if ( (((*(float *)&current[3].monitor <= v20) ^ isGetBiggest) & 1) != 0 )
        v20 = *(float *)&current[3].monitor;
    }
  }
  return v20;
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


System_ValueTuple_int__int__int__int__int__o *__fastcall CheckCombineResStatus__GetHpAtkFactorWithOverwrite(
        System_ValueTuple_int__int__int__int__int__o *retstr,
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t DispLimitCount; // w23
  int32_t LimitCountByDispLimit; // w23
  int32_t ServantLimitCountSealAfter; // w26
  Il2CppObject *v21; // x23
  int32_t klass_high; // w22
  int32_t totalExp; // w23
  int32_t increLv; // w24
  int32_t maxLv; // w21
  int32_t checkLv; // w25
  Il2CppObject *Master_object; // x0
  __int64 v28; // x8
  ServantLimitAddMaster_o *v29; // x20
  const MethodInfo_395F7E8 *v30; // x6
  System_ValueTuple_int__int__int__int__int__o *result; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A51FE7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, baseSvt);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    this = (CheckCombineResStatus_o *)sub_1B863B8(&Method_System_ValueTuple_int__int__int__int__int___ctor__, v13);
    byte_4A51FE7 = 1;
  }
  entity = 0LL;
  if ( !baseSvt )
    goto LABEL_24;
  v15 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v15;
  *(_QWORD *)&v33.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v33, 0LL);
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(baseSvt->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(baseSvt, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v17, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_24;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v16,
                                 LimitCountByDispLimit,
                                 0LL);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this )
    goto LABEL_24;
  v21 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v16,
          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !this )
    goto LABEL_24;
  this = (CheckCombineResStatus_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v16, v17, 0LL);
  if ( !v21 )
    goto LABEL_24;
  if ( !this )
    goto LABEL_24;
  klass_high = HIDWORD(v21[8].klass);
  totalExp = this->fields.totalExp;
  increLv = this->fields.increLv;
  checkLv = this->fields.checkLv;
  maxLv = this->fields.maxLv;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v28 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v29 = (ServantLimitAddMaster_o *)Master_object;
  *(_QWORD *)&v34.fields.currentCryptoKey = v28;
  this = (CheckCombineResStatus_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
  if ( !v29 )
    goto LABEL_24;
  if ( ServantLimitAddMaster__TryGetEntity(v29, &entity, (int32_t)this, ServantLimitCountSealAfter, 0LL) )
  {
    this = (CheckCombineResStatus_o *)entity;
    if ( entity )
    {
      this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(entity, klass_high, 0LL);
      if ( entity )
      {
        klass_high = (int)this;
        this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteHpBase(entity, totalExp, 0LL);
        if ( entity )
        {
          totalExp = (int)this;
          this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteAtkBase(entity, checkLv, 0LL);
          if ( entity )
          {
            checkLv = (int)this;
            this = (CheckCombineResStatus_o *)ServantLimitAddEntity__GetOverwriteHpMax(entity, increLv, 0LL);
            if ( entity )
            {
              increLv = (int)this;
              maxLv = ServantLimitAddEntity__GetOverwriteAtkMax(entity, maxLv, 0LL);
              goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1B86614(this, baseSvt);
  }
LABEL_23:
  v30 = (const MethodInfo_395F7E8 *)Method_System_ValueTuple_int__int__int__int__int___ctor__;
  *(_QWORD *)&retstr->fields.Item1 = 0LL;
  *(_QWORD *)&retstr->fields.Item3 = 0LL;
  retstr->fields.Item5 = 0;
  System_ValueTuple_int__int__int__int__int____ctor(retstr, klass_high, totalExp, checkLv, increLv, maxLv, v30);
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
  int32_t maxLv; // w8
  void *Instance; // x0
  __int64 v8; // x1
  bool result; // w0

  if ( (byte_4A51FE0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A51FE0 = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1B86614(Instance, v8);
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
  int32_t Item2; // w25
  int32_t Item1; // w27
  int32_t Item3; // w22
  int32_t Item4; // w26
  int32_t Item5; // w24
  void *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w23
  int32_t atk; // w0
  System_ValueTuple_int__int__int__int__int__o v20; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A51FE1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExpMaster___, afterHp);
    this = (CheckCombineResStatus_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A51FE1 = 1;
  }
  CheckCombineResStatus__GetHpAtkFactorWithOverwrite(&v20, this, baseData, (const MethodInfo *)afterAtk);
  Item1 = v20.fields.Item1;
  Item2 = v20.fields.Item2;
  Item3 = v20.fields.Item3;
  Item4 = v20.fields.Item4;
  Item5 = v20.fields.Item5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, Item1, increLv, 0LL);
  if ( !Instance )
  {
    if ( baseData )
    {
      *afterHp = baseData->fields.hp;
      atk = baseData->fields.atk;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B86614(Instance, v17);
  }
  if ( !baseData )
    goto LABEL_11;
  v18 = *((_DWORD *)Instance + 7);
  *afterHp = CombineUtility__CalculateHp(Item2, Item4, v18, baseData->fields.adjustHp, 0LL);
  atk = CombineUtility__CalculateAtk(Item3, Item5, v18, baseData->fields.adjustAtk, 0LL);
LABEL_10:
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
  __int64 v18; // x1
  ServantExpMaster_o *v19; // x25
  int m_CancellationTokenSource; // w26
  float v21; // s0

  if ( (byte_4A51FE5 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A51FE5 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v19 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v19, expType, startLv, 0LL);
    *exp = targetExp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - targetExp;
      v21 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_14;
    }
LABEL_15:
    sub_1B86614(Instance, v18);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4A51FDE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A51FDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v12);
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
  __int64 v11; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t result; // w0
  const MethodInfo *v16; // x2
  int32_t checkLv; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A51FDF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, baseData);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A51FDF = 1;
  }
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_14;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v18, 0LL);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1B86614(Instance, v11);
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
    while ( !CheckCombineResStatus__checkIncrementLv(this, checkLv, v16) )
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

  if ( (byte_4A51FE2 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_1B863B8(&StringLiteral_1/*""*/, baseData);
    byte_4A51FE2 = 1;
  }
  idList = 0LL;
  skillNameList = 0LL;
  if ( !baseData )
    sub_1B86614(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0LL);
  if ( skillNameList )
  {
    if ( !skillNameList->max_length )
      sub_1B8661C(v9, v10);
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
  System_Collections_Generic_List_object__o *v18; // x19
  CheckCombineResStatus___c_c *v19; // x0
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v21; // x21
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4A51FE3 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_ServantSkillEntity__TypeInfo, baseData);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76045920, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__, v11);
    sub_1B863B8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    sub_1B863B8(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__, v13);
    sub_1B863B8(&CheckCombineResStatus___c_TypeInfo, v14);
    this = (CheckCombineResStatus_o *)sub_1B863B8(&StringLiteral_1/*""*/, v15);
    byte_4A51FE3 = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v18,
    UseSvtEqSkillInfo,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___76045920);
  if ( !v18 )
    goto LABEL_15;
  if ( v18->fields._size >= 1 )
  {
    v19 = CheckCombineResStatus___c_TypeInfo;
    if ( !CheckCombineResStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo);
      v19 = CheckCombineResStatus___c_TypeInfo;
    }
    _9__11_0 = (System_Comparison_T__o *)v19->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = CheckCombineResStatus___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__11_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__11_0,
        v21,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0LL);
      static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v23, v24);
    }
    System_Collections_Generic_List_object___Sort_56615964(
      v18,
      _9__11_0,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v18,
                                        0,
                                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0LL);
LABEL_15:
    sub_1B86614(this, baseData);
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
  __int64 v16; // x1
  ServantExpMaster_o *v17; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_4A51FE4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExpMaster___, expVal);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A51FE4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (v17 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0LL),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v17, expType, Level, 0LL)) == 0LL) )
  {
    sub_1B86614(Instance, v16);
  }
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  Entity = ServantExpMaster__GetEntity(v17, expType, Level - 1, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A51FE9 & 1) == 0 )
  {
    sub_1B863B8(&CheckCombineResStatus___c_TypeInfo, v1);
    byte_4A51FE9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)CheckCombineResStatus___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}