void CheckCombineResStatus___cctor(const MethodInfo *method)
{
  if ( (byte_5974AC7 & 1) == 0 )
  {
    sub_2213A60(&CheckCombineResStatus_TypeInfo);
    byte_5974AC7 = 1;
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
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x29
  int64_t Time; // x0
  __int64 v19; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_o *Data; // x0
  __int64 v22; // x1
  EventCampaignEntity_o *v23; // x24
  _BOOL8 v24; // x0
  System_Int32_array *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-90h] BYREF
  EventCampaignReleaseEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_5974AC5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AC5 = 1;
  }
  v10 = 1.0;
  entity = 0;
  memset(&v31, 0, sizeof(v31));
  if ( combineEventList && combineEventList->fields._size >= 1 && baseSvt )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
      sub_2213CDC(Instance, v12);
    }
    v14 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)combineEventList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v31 = v30;
    v10 = 1.0;
    v30.fields._list = 0;
    *(_QWORD *)&v30.fields._index = &v31;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v31,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
          if ( !v15 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v31,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
            return v10;
          }
          current = v31.fields._current;
          if ( !v31.fields._current )
            sub_2213CDC(v15, v16);
          if ( HIDWORD(v31.fields._current[1].klass) == type )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
            Time = NetworkManager__getTime(0);
            klass = current[5].klass;
            if ( !klass )
              sub_2213CDC(Time, v19);
            if ( Time <= (__int64)klass->_1.generic_class )
            {
              if ( !v14 )
                sub_2213CDC(Time, v19);
              Data = EventCampaignMaster__getData((EventCampaignMaster_o *)v14, (int32_t)current[1].klass, 0);
              v23 = Data;
              if ( !Data )
                break;
              if ( !MasterData_object )
                sub_2213CDC(Data, v22);
              v24 = EventCampaignReleaseMaster__TryGetEntity(
                      (EventCampaignReleaseMaster_o *)MasterData_object,
                      &entity,
                      Data->fields.eventId,
                      Data->fields.target,
                      Data->fields.idx,
                      0);
              if ( !v24 )
                break;
              if ( !entity )
                sub_2213CDC(v24, v22);
              if ( entity->fields.condType != 1
                || EventCampaignReleaseMaster__isRelease(
                     (EventCampaignReleaseMaster_o *)MasterData_object,
                     v23->fields.eventId,
                     v23->fields.target,
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
      v25 = (System_Int32_array *)current[2].klass;
      if ( v25 && v25->max_length )
      {
        v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
        *(_QWORD *)&v33.fields.currentCryptoKey = v26;
        *(_QWORD *)&v33.fields.fakeValue = v27;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
        if ( System_Array__IndexOf_int_(v25, v28, (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) < 0 )
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
  __int64 v10; // x1
  int32_t DispLimitCount; // w23
  __int64 v12; // x1
  int32_t LimitCountByDispLimit; // w23
  int32_t ServantLimitCountSealAfter; // w26
  Il2CppObject *v15; // x23
  int32_t klass_high; // w22
  int32_t totalExp; // w23
  int32_t increLv; // w24
  int32_t maxLv; // w21
  int32_t checkLv; // w25
  Il2CppObject *Master_object; // x0
  __int64 v22; // x8
  ServantLimitAddMaster_o *v23; // x20
  const MethodInfo_3D1F2FC *v24; // x6
  System_ValueTuple_int__int__int__int__int__o *result; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5974AC6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_2213A60(&Method_System_ValueTuple_int__int__int__int__int___ctor__);
    byte_5974AC6 = 1;
  }
  entity = 0;
  if ( !baseSvt )
    goto LABEL_24;
  v6 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvt);
  *(_QWORD *)&v27.fields.currentCryptoKey = v6;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(baseSvt->fields.limitCount, 0);
  DispLimitCount = UserServantEntity__getDispLimitCount(baseSvt, 0, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v9, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_24;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v8,
                                 LimitCountByDispLimit,
                                 0);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this )
    goto LABEL_24;
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v8,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (CheckCombineResStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !this )
    goto LABEL_24;
  this = (CheckCombineResStatus_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, v8, v9, 0);
  if ( !v15 )
    goto LABEL_24;
  if ( !this )
    goto LABEL_24;
  klass_high = HIDWORD(v15[8].klass);
  totalExp = this->fields.totalExp;
  increLv = this->fields.increLv;
  checkLv = this->fields.checkLv;
  maxLv = this->fields.maxLv;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v28.fields.fakeValue = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v23 = (ServantLimitAddMaster_o *)Master_object;
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  this = (CheckCombineResStatus_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
  if ( !v23 )
    goto LABEL_24;
  if ( ServantLimitAddMaster__TryGetEntity(v23, &entity, (int32_t)this, ServantLimitCountSealAfter, 0) )
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
    sub_2213CDC(this, baseSvt);
  }
LABEL_23:
  *(_QWORD *)&retstr->fields.Item1 = 0;
  *(_QWORD *)&retstr->fields.Item3 = 0;
  v24 = (const MethodInfo_3D1F2FC *)Method_System_ValueTuple_int__int__int__int__int___ctor__;
  retstr->fields.Item5 = 0;
  System_ValueTuple_int__int__int__int__int____ctor(retstr, klass_high, totalExp, checkLv, increLv, maxLv, v24);
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
  __int64 v7; // x1

  if ( (byte_5974ABF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974ABF = 1;
  }
  maxLv = this->fields.maxLv;
  if ( maxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_2213CDC(Instance, v7);
    }
    if ( *((_DWORD *)Instance + 6) < this->fields.totalExp )
    {
      ++this->fields.checkLv;
      return 0;
    }
    maxLv = *((_DWORD *)Instance + 5);
  }
  this->fields.increLv = maxLv;
  return 1;
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
  int32_t Item3; // w23
  int32_t Item4; // w26
  int32_t Item5; // w24
  void *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w22
  int32_t atk; // w0
  int32_t v19; // w22
  int32_t v20; // w21
  System_ValueTuple_int__int__int__int__int__o v21; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_5974AC0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    this = (CheckCombineResStatus_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AC0 = 1;
  }
  CheckCombineResStatus__GetHpAtkFactorWithOverwrite(&v21, this, baseData, (const MethodInfo *)afterAtk);
  Item1 = v21.fields.Item1;
  Item2 = v21.fields.Item2;
  Item3 = v21.fields.Item3;
  Item4 = v21.fields.Item4;
  Item5 = v21.fields.Item5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, Item1, increLv, 0);
  if ( Instance )
  {
    if ( !baseData )
      goto LABEL_13;
    v17 = *((_DWORD *)Instance + 7);
    *afterHp = CombineUtility__CalculateHp(Item2, Item4, v17, baseData->fields.adjustHp, 0);
    atk = CombineUtility__CalculateAtk(Item3, Item5, v17, baseData->fields.adjustAtk, 0);
  }
  else
  {
    if ( !baseData )
      goto LABEL_13;
    *afterHp = baseData->fields.hp;
    atk = baseData->fields.atk;
  }
  *afterAtk = atk;
  v19 = *afterHp;
  Instance = UserServantEntity__get_GrandInfo(baseData, 0);
  if ( !Instance
    || (*afterHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Instance, 0) + v19,
        v20 = *afterAtk,
        (Instance = UserServantEntity__get_GrandInfo(baseData, 0)) == 0) )
  {
LABEL_13:
    sub_2213CDC(Instance, v16);
  }
  *afterAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Instance, 0) + v20;
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
  __int64 v17; // x1
  ServantExpMaster_o *v18; // x25
  int m_CancellationTokenSource; // w26
  float v20; // s0

  if ( (byte_5974AC4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AC4 = 1;
  }
  if ( startLv < maxLv )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___);
    v18 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, expType, startLv, 0);
    *exp = targetExp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - targetExp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(Instance, v17);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_14:
  *barExp = v20;
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
  __int64 v11; // x1

  if ( (byte_5974ABD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974ABD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v11);
  }
  return ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, getExp, svtExpType, svtMaxLv, startLv, 0);
}


int32_t CheckCombineResStatus__getIncrementLv(
        CheckCombineResStatus_o *this,
        UserServantEntity_o *baseData,
        int32_t getExp,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t lv; // w10
  int32_t v14; // w9
  int32_t result; // w0
  const MethodInfo *v16; // x2
  int32_t checkLv; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5974ABE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974ABE = 1;
  }
  v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.increLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseData )
    goto LABEL_13;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Instance, v9);
  }
  lv = baseData->fields.lv;
  v14 = baseData->fields.exp + getExp;
  this->fields.expType = HIDWORD(Instance[8].klass);
  this->fields.totalExp = v14;
  this->fields.checkLv = lv;
  result = UserServantEntity__getLevelMax(baseData, 0);
  checkLv = this->fields.checkLv;
  this->fields.maxLv = result;
  if ( checkLv == result )
  {
    this->fields.increLv = result;
  }
  else
  {
    while ( !CheckCombineResStatus__checkIncrementLv(this, this->fields.checkLv, v16) )
      ;
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
  System_String_o *v8; // x20
  __int64 v9; // x0
  System_String_array *skillNameList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5974AC1 & 1) == 0 )
  {
    this = (CheckCombineResStatus_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974AC1 = 1;
  }
  idList = 0;
  skillNameList = 0;
  if ( !baseData )
    sub_2213CDC(this, baseData);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UserServantEntity__getNextUseSkillInfo(baseData, &idList, &skillNameList, increLv, limitCntSum, 1, 0);
  if ( skillNameList )
  {
    if ( !LODWORD(skillNameList->max_length) )
      sub_2213CE4(v9);
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
  struct CheckCombineResStatus___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x20
  Il2CppObject *v14; // x21
  struct CheckCombineResStatus___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5974AC2 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor___91663256);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_2213A60(&Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__);
    sub_2213A60(&CheckCombineResStatus___c_TypeInfo);
    this = (CheckCombineResStatus_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974AC2 = 1;
  }
  if ( !baseData )
    goto LABEL_15;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  UseSvtEqSkillInfo = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getUseSvtEqSkillInfo(
                                                                       baseData,
                                                                       increLv,
                                                                       limitCntSum,
                                                                       0);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v10,
    UseSvtEqSkillInfo,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor___91663256);
  if ( !v10 )
    goto LABEL_15;
  if ( v10->fields._size >= 1 )
  {
    v11 = CheckCombineResStatus___c_TypeInfo;
    if ( !*(&CheckCombineResStatus___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus___c_TypeInfo, baseData);
      v11 = CheckCombineResStatus___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, baseData);
        static_fields = CheckCombineResStatus___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__11_0,
        v14,
        Method_CheckCombineResStatus___c__getSvtEqSkillByCombine_b__11_0__,
        0);
      v15 = CheckCombineResStatus___c_TypeInfo->static_fields;
      v15->__9__11_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__11_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__11_0, (int32_t)_9__11_0, v16, v17, v18, v19, v20, v21);
    }
    System_Collections_Generic_List_object___Sort_71849708(
      v10,
      _9__11_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    this = (CheckCombineResStatus_o *)System_Collections_Generic_List_object___get_Item(
                                        v10,
                                        0,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantSkillEntity__get_Item__);
    if ( this )
      return ServantSkillEntity__getSkillName((ServantSkillEntity_o *)this, 0);
LABEL_15:
    sub_2213CDC(this, baseData);
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
  __int64 v15; // x1
  ServantExpMaster_o *v16; // x25
  int32_t Level; // w23
  int m_CancellationTokenSource; // w24
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8

  if ( (byte_5974AC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AC3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (v16 = (ServantExpMaster_o *)Instance,
        Level = ServantExpMaster__getLevel((ServantExpMaster_o *)Instance, targetExp, expType, maxLv, startLv, 0),
        (Instance = (DataManager_o *)ServantExpMaster__GetEntity(v16, expType, Level, 0)) == 0) )
  {
    sub_2213CDC(Instance, v15);
  }
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  Entity = ServantExpMaster__GetEntity(v16, expType, Level - 1, 0);
  if ( Entity )
    exp = Entity->fields.exp;
  else
    exp = 0;
  *lateExp = m_CancellationTokenSource - targetExp;
  *expVal = 1.0 - (float)((float)(m_CancellationTokenSource - targetExp) / (float)(m_CancellationTokenSource - exp));
}


void CheckCombineResStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974AC8 & 1) == 0 )
  {
    sub_2213A60(&CheckCombineResStatus___c_TypeInfo);
    byte_5974AC8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CheckCombineResStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckCombineResStatus___c_TypeInfo->static_fields->__9 = (struct CheckCombineResStatus___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CheckCombineResStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}