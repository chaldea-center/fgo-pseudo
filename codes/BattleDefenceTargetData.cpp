void __fastcall BattleDefenceTargetData___ctor(BattleDefenceTargetData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDefenceTargetData__BuffTurnProgress(
        BattleDefenceTargetData_o *this,
        BattlePerformanceDefenceTarget_o *defenceTarget,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  BattleBuffData_o *ShowServantParam; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x1
  int max_length; // w8
  unsigned int v11; // w23
  int v12; // w8
  __int64 v13; // x0

  if ( (byte_4389BA6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4389BA6 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_21;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
        {
          v13 = sub_B776C8(ShowServantParam);
          sub_B77668(v13, 0LL);
        }
        v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)ActiveList->m_Items[v11];
        if ( !v9 )
          goto LABEL_21;
        v12 = v9->fields.missionConditionDetailId - 1;
        v9->fields.missionConditionDetailId = v12;
        if ( !v12 )
        {
          if ( !v7 )
            goto LABEL_21;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            v9,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v11 < max_length );
    }
    if ( !v7 )
      goto LABEL_21;
    if ( v7->fields._size >= 1 )
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
      sub_B7769C(ShowServantParam, v9);
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
  __int64 v3; // x20
  BattleBuffData_o *buffData; // x0
  __int64 v5; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4389BA4 & 1) == 0 )
  {
    sub_B775C4(&BattleDefenceTargetData_SaveData_TypeInfo);
    byte_4389BA4 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v3 = sub_B77694(BattleDefenceTargetData_SaveData_TypeInfo);
  BattleDefenceTargetData_SaveData___ctor((BattleDefenceTargetData_SaveData_o *)v3, 0LL);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = this->fields.nowHp,
        *(_DWORD *)(v3 + 20) = this->fields.maxHp,
        (buffData = this->fields.buffData) == 0LL) )
  {
    sub_B7769C(buffData, v5);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v3 + 24) = SaveData;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), SaveData, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v3 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v3;
}


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

  if ( (byte_4389BA3 & 1) == 0 )
  {
    sub_B775C4(&BattleBuffData_TypeInfo);
    byte_4389BA3 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_B77694(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_B77560(
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
      sub_B7769C(0LL, v18);
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
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1

  if ( (byte_4389BA5 & 1) == 0 )
  {
    sub_B775C4(&BattleBuffData_TypeInfo);
    byte_4389BA5 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    this->fields.nowHp = saveData->fields.nowHp;
    this->fields.maxHp = saveData->fields.maxHp;
    if ( !buffData )
    {
      v7 = (BattleBuffData_o *)sub_B77694(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0LL);
      *p_buffData = v7;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.buffData,
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_B7769C(0LL, v14);
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