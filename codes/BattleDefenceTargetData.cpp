void __fastcall BattleDefenceTargetData___ctor(BattleDefenceTargetData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDefenceTargetData__BuffTurnProgress(
        BattleDefenceTargetData_o *this,
        BattlePerformanceDefenceTarget_o *defenceTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  BattleBuffData_o *ShowServantParam; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  int max_length; // w8
  unsigned int v21; // w23
  int v22; // w8
  __int64 v23; // x0

  if ( (byte_42E7807 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)defenceTarget,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    byte_42E7807 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_21;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      do
      {
        if ( v21 >= max_length )
        {
          v23 = sub_B5D6C8(ShowServantParam);
          sub_B5D668(v23, 0LL);
        }
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)ActiveList->m_Items[v21];
        if ( !v19 )
          goto LABEL_21;
        v22 = v19->fields.missionConditionDetailId - 1;
        v19->fields.missionConditionDetailId = v22;
        if ( !v22 )
        {
          if ( !v17 )
            goto LABEL_21;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            v19,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v21 < max_length );
    }
    if ( !v17 )
      goto LABEL_21;
    if ( v17->fields._size >= 1 )
    {
      ShowServantParam = this->fields.buffData;
      if ( !ShowServantParam )
        goto LABEL_21;
      BattleBuffData__clearActiveBuff(ShowServantParam, 0LL);
    }
    ShowServantParam = this->fields.buffData;
    if ( !ShowServantParam
      || (ShowServantParam = (BattleBuffData_o *)BattleBuffData__getShowServantParam(ShowServantParam, 0LL),
          !defenceTarget) )
    {
LABEL_21:
      sub_B5D69C(ShowServantParam, v19);
    }
    BattlePerformanceDefenceTarget__UpdateBuffIcon(
      defenceTarget,
      (BattleBuffData_ShowBuffData_array *)ShowServantParam,
      0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  BattleBuffData_o *buffData; // x0
  __int64 v7; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7805 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDefenceTargetData_SaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7805 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v5 = sub_B5D694(BattleDefenceTargetData_SaveData_TypeInfo);
  BattleDefenceTargetData_SaveData___ctor((BattleDefenceTargetData_SaveData_o *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = this->fields.nowHp,
        *(_DWORD *)(v5 + 20) = this->fields.maxHp,
        (buffData = this->fields.buffData) == 0LL) )
  {
    sub_B5D69C(buffData, v7);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v5 + 24) = SaveData;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 24), SaveData, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v5 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v5;
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
  __int64 v18; // x1

  if ( (byte_42E7804 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, nowHp, maxHp, *(_QWORD *)&uiId);
    byte_42E7804 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_B5D694(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_B5D560(
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
      sub_B5D69C(0LL, v18);
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
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1

  if ( (byte_42E7806 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, (_DWORD)saveData, (_DWORD)method, v3);
    byte_42E7806 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    this->fields.nowHp = saveData->fields.nowHp;
    this->fields.maxHp = saveData->fields.maxHp;
    if ( !buffData )
    {
      v8 = (BattleBuffData_o *)sub_B5D694(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v8, 0LL);
      *p_buffData = v8;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.buffData,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_B5D69C(0LL, v15);
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