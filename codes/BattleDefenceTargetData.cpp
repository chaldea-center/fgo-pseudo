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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  BattleBuffData_o *ShowServantParam; // x0
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int max_length; // w8
  unsigned int v26; // w23
  int v27; // w8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B18769 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, defenceTarget, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9, v10);
    byte_4B18769 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_24;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      do
      {
        if ( v26 >= max_length )
          sub_1BCAA44(ShowServantParam, v18);
        v18 = (int64_t)ActiveList->m_Items[v26];
        if ( !v18 )
          goto LABEL_24;
        v27 = *(_DWORD *)(v18 + 20) - 1;
        *(_DWORD *)(v18 + 20) = v27;
        if ( !v27 )
        {
          if ( !v16 )
            goto LABEL_24;
          items = v16->fields._items;
          v29 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v18,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v18;
            sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v18, v19, v20, v21, v22, v23, v24);
          }
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v26 < max_length );
    }
    if ( !v16 )
      goto LABEL_24;
    if ( v16->fields._size >= 1 )
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
      sub_1BCAA3C(ShowServantParam, v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  BattleBuffData_o *buffData; // x0
  __int64 v7; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18767 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDefenceTargetData_SaveData_TypeInfo, method, v2);
    byte_4B18767 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v5 = sub_1BCAA2C(BattleDefenceTargetData_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 || (*(_QWORD *)(v5 + 16) = *(_QWORD *)&this->fields.nowHp, (buffData = this->fields.buffData) == 0LL) )
    sub_1BCAA3C(buffData, v7);
  SaveData = BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v5 + 24) = SaveData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)SaveData, v9, v10, v11, v12, v13, v14);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1

  if ( (byte_4B18766 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_TypeInfo, *(_QWORD *)&nowHp, *(_QWORD *)&maxHp);
    byte_4B18766 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_1BCAA2C(
                                BattleBuffData_TypeInfo,
                                *(_QWORD *)&nowHp,
                                *(_QWORD *)&maxHp,
                                *(_QWORD *)&uiId);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buffData, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_1BCAA3C(0LL, v18);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1

  if ( (byte_4B18768 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_TypeInfo, saveData, method);
    byte_4B18768 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    *(_QWORD *)&this->fields.nowHp = *(_QWORD *)&saveData->fields.nowHp;
    if ( !buffData )
    {
      v8 = (BattleBuffData_o *)sub_1BCAA2C(BattleBuffData_TypeInfo, saveData, method, v3);
      BattleBuffData___ctor(v8, 0LL);
      *p_buffData = v8;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buffData, (int64_t)v8, v9, v10, v11, v12, v13, v14);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_1BCAA3C(0LL, v15);
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