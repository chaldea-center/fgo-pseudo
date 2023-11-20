void __fastcall BattleDefenceTargetData___ctor(BattleDefenceTargetData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDefenceTargetData__BuffTurnProgress(
        BattleDefenceTargetData_o *this,
        BattlePerformanceDefenceTarget_o *defenceTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  __int64 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x1
  __int64 v17; // x2
  int max_length; // w8
  unsigned int v19; // w23
  int v20; // w8
  BattleBuffData_o *v21; // x0
  BattleBuffData_o *v22; // x0
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0

  if ( (byte_40F8CB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, defenceTarget);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_40F8CB4 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                    v10,
                                                                                                    v11,
                                                                                                    v12,
                                                                                                    v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_21;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      do
      {
        if ( v19 >= max_length )
        {
          sub_B17100(v15, v16, v17);
          sub_B170A0();
        }
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)ActiveList->m_Items[v19];
        if ( !v16 )
          goto LABEL_21;
        v20 = v16->fields.missionConditionDetailId - 1;
        v16->fields.missionConditionDetailId = v20;
        if ( !v20 )
        {
          if ( !v14 )
            goto LABEL_21;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            v16,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v19 < max_length );
    }
    if ( !v14 )
      goto LABEL_21;
    if ( v14->fields._size >= 1 )
    {
      v21 = this->fields.buffData;
      if ( !v21 )
        goto LABEL_21;
      BattleBuffData__clearActiveBuff(v21, 0LL);
    }
    v22 = this->fields.buffData;
    if ( !v22 || (ShowServantParam = BattleBuffData__getShowServantParam(v22, 0LL), !defenceTarget) )
LABEL_21:
      sub_B170D4();
    BattlePerformanceDefenceTarget__UpdateBuffIcon(defenceTarget, ShowServantParam, 0LL);
  }
}


void __fastcall BattleDefenceTargetData__DamageResult(
        BattleDefenceTargetData_o *this,
        int32_t damage,
        const MethodInfo *method)
{
  this->fields.nowHp = (this->fields.nowHp - damage) & ~((this->fields.nowHp - damage) >> 31);
}


BattleDefenceTargetData_SaveData_o *__fastcall BattleDefenceTargetData__GetSaveData(
        BattleDefenceTargetData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  BattleBuffData_o *buffData; // x0
  System_Int32_array **SaveData; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8CB2 & 1) == 0 )
  {
    sub_B16FFC(&BattleDefenceTargetData_SaveData_TypeInfo, method);
    byte_40F8CB2 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v6 = sub_B170CC(BattleDefenceTargetData_SaveData_TypeInfo, method, v2, v3, v4);
  BattleDefenceTargetData_SaveData___ctor((BattleDefenceTargetData_SaveData_o *)v6, 0LL);
  if ( !v6
    || (*(_DWORD *)(v6 + 16) = this->fields.nowHp,
        *(_DWORD *)(v6 + 20) = this->fields.maxHp,
        (buffData = this->fields.buffData) == 0LL) )
  {
    sub_B170D4();
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v6 + 24) = SaveData;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 24), SaveData, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDefenceTargetData__Initialize(
        BattleDefenceTargetData_o *this,
        int32_t nowHp,
        int32_t maxHp,
        int32_t uiId,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8CB1 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, *(_QWORD *)&nowHp);
    byte_40F8CB1 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_B170CC(
                                BattleBuffData_TypeInfo,
                                *(_QWORD *)&nowHp,
                                *(_QWORD *)&maxHp,
                                *(_QWORD *)&uiId,
                                method);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.buffData,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_B170D4();
  }
  BattleBuffData__Initialize(buffData, 0LL);
  this->fields.uiId = uiId;
}


void __fastcall BattleDefenceTargetData__RecoverDefenceTarget(
        BattleDefenceTargetData_o *this,
        int32_t recoverValue,
        const MethodInfo *method)
{
  int maxHp; // w8

  maxHp = this->fields.nowHp + recoverValue;
  if ( this->fields.maxHp < maxHp )
    maxHp = this->fields.maxHp;
  this->fields.nowHp = maxHp;
}


void __fastcall BattleDefenceTargetData__SetSaveData(
        BattleDefenceTargetData_o *this,
        BattleDefenceTargetData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8CB3 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, saveData);
    byte_40F8CB3 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    this->fields.nowHp = saveData->fields.nowHp;
    this->fields.maxHp = saveData->fields.maxHp;
    if ( !buffData )
    {
      v9 = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, saveData, method, v3, v4);
      BattleBuffData___ctor(v9, 0LL);
      *p_buffData = v9;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.buffData,
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_B170D4();
    }
    BattleBuffData__setSaveData(buffData, saveData->fields.buffDataSave, 0LL);
    this->fields.uiId = saveData->fields.uiId;
  }
}


void __fastcall BattleDefenceTargetData_SaveData___ctor(
        BattleDefenceTargetData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}