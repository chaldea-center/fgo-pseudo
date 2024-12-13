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
  System_Collections_Generic_List_object__o *v10; // x22
  BattleBuffData_o *ShowServantParam; // x0
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int max_length; // w8
  unsigned int v20; // w23
  int v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B39743 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, defenceTarget);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    sub_1BD3458(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_4B39743 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v10 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_24;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      do
      {
        if ( v20 >= max_length )
          sub_1BD36BC(ShowServantParam, v12);
        v12 = (int64_t)ActiveList->m_Items[v20];
        if ( !v12 )
          goto LABEL_24;
        v21 = *(_DWORD *)(v12 + 20) - 1;
        *(_DWORD *)(v12 + 20) = v21;
        if ( !v21 )
        {
          if ( !v10 )
            goto LABEL_24;
          items = v10->fields._items;
          v23 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v12,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v12;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 4), v12, v13, v14, v15, v16, v17, v18);
          }
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v20 < max_length );
    }
    if ( !v10 )
      goto LABEL_24;
    if ( v10->fields._size >= 1 )
    {
      ShowServantParam = this->fields.buffData;
      if ( !ShowServantParam )
        goto LABEL_24;
      BattleBuffData__clearActiveBuff(ShowServantParam, 0LL);
    }
    ShowServantParam = this->fields.buffData;
    if ( !ShowServantParam
      || (ShowServantParam = (BattleBuffData_o *)BattleBuffData__getShowServantParam(ShowServantParam, 0LL),
          !defenceTarget) )
    {
LABEL_24:
      sub_1BD36B4(ShowServantParam, v12);
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
  BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B39741 & 1) == 0 )
  {
    sub_1BD3458(&BattleDefenceTargetData_SaveData_TypeInfo, method);
    byte_4B39741 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v3 = sub_1BD36A4(BattleDefenceTargetData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 || (*(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.nowHp, (buffData = this->fields.buffData) == 0LL) )
    sub_1BD36B4(buffData, v5);
  SaveData = BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v3 + 24) = SaveData;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)SaveData, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v3 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v3;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1

  if ( (byte_4B39740 & 1) == 0 )
  {
    sub_1BD3458(&BattleBuffData_TypeInfo, *(_QWORD *)&nowHp);
    byte_4B39740 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_1BD36A4(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.buffData, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_1BD36B4(0LL, v18);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1

  if ( (byte_4B39742 & 1) == 0 )
  {
    sub_1BD3458(&BattleBuffData_TypeInfo, saveData);
    byte_4B39742 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    *(_QWORD *)&this->fields.nowHp = *(_QWORD *)&saveData->fields.nowHp;
    if ( !buffData )
    {
      v7 = (BattleBuffData_o *)sub_1BD36A4(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0LL);
      *p_buffData = v7;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.buffData, (int64_t)v7, v8, v9, v10, v11, v12, v13);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_1BD36B4(0LL, v14);
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