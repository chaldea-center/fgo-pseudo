void BattleDefenceTargetData___ctor(BattleDefenceTargetData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDefenceTargetData__BuffTurnProgress(
        BattleDefenceTargetData_o *this,
        BattlePerformanceDefenceTarget_o *defenceTarget,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  BattleBuffData_o *ShowServantParam; // x0
  BattleBuffData_BuffData_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int max_length; // w8
  unsigned int v17; // w23
  int v18; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4CF1098 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4CF1098 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_24;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      do
      {
        if ( v17 >= max_length )
          sub_1C7BD48(ShowServantParam);
        v9 = ActiveList->m_Items[v17];
        if ( !v9 )
          goto LABEL_24;
        v18 = v9->fields.turn - 1;
        v9->fields.turn = v18;
        if ( !v18 )
        {
          if ( !v7 )
            goto LABEL_24;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v9,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v9;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
          }
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v17 < max_length );
    }
    if ( !v7 )
      goto LABEL_24;
    if ( v7->fields._size >= 1 )
    {
      ShowServantParam = this->fields.buffData;
      if ( !ShowServantParam )
        goto LABEL_24;
      BattleBuffData__clearActiveBuff(ShowServantParam, 0);
    }
    ShowServantParam = this->fields.buffData;
    if ( !ShowServantParam
      || (ShowServantParam = (BattleBuffData_o *)BattleBuffData__getShowServantParam(ShowServantParam, 0), !defenceTarget) )
    {
LABEL_24:
      sub_1C7BD40(ShowServantParam, v9);
    }
    BattlePerformanceDefenceTarget__UpdateBuffIcon(
      defenceTarget,
      (BattleBuffData_ShowBuffData_array *)ShowServantParam,
      0);
  }
}


void BattleDefenceTargetData__DamageResult(BattleDefenceTargetData_o *this, int32_t damage, const MethodInfo *method)
{
  this->fields.nowHp = (this->fields.nowHp - damage) & ~((this->fields.nowHp - damage) >> 31);
}


BattleDefenceTargetData_SaveData_o *BattleDefenceTargetData__GetSaveData(
        BattleDefenceTargetData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  BattleBuffData_o *buffData; // x0
  __int64 v5; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF1096 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDefenceTargetData_SaveData_TypeInfo);
    byte_4CF1096 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0;
  v3 = sub_1C7BD34(BattleDefenceTargetData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 || (*(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.nowHp, (buffData = this->fields.buffData) == 0) )
    sub_1C7BD40(buffData, v5);
  SaveData = BattleBuffData__getSaveData(buffData, 0);
  *(_QWORD *)(v3 + 24) = SaveData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)SaveData, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v3 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v3;
}


void BattleDefenceTargetData__Initialize(
        BattleDefenceTargetData_o *this,
        int32_t nowHp,
        int32_t maxHp,
        int32_t uiId,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x1

  if ( (byte_4CF1095 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleBuffData_TypeInfo);
    byte_4CF1095 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_1C7BD34(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v11, 0);
    *p_buffData = v11;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.buffData, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_1C7BD40(0, v18);
  }
  BattleBuffData__Initialize(buffData, 0);
  this->fields.uiId = uiId;
}


void BattleDefenceTargetData__RecoverDefenceTarget(
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


void BattleDefenceTargetData__SetSaveData(
        BattleDefenceTargetData_o *this,
        BattleDefenceTargetData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_o **p_buffData; // x21
  BattleBuffData_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1

  if ( (byte_4CF1097 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleBuffData_TypeInfo);
    byte_4CF1097 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    *(_QWORD *)&this->fields.nowHp = *(_QWORD *)&saveData->fields.nowHp;
    if ( !buffData )
    {
      v7 = (BattleBuffData_o *)sub_1C7BD34(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0);
      *p_buffData = v7;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.buffData, (int32_t)v7, v8, v9, v10, v11, v12, v13);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_1C7BD40(0, v14);
    }
    BattleBuffData__setSaveData(buffData, saveData->fields.buffDataSave, 0);
    this->fields.uiId = saveData->fields.uiId;
  }
}


void BattleDefenceTargetData_SaveData___ctor(BattleDefenceTargetData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}