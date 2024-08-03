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
  System_Collections_Generic_List_object__o *v12; // x22
  BattleBuffData_o *ShowServantParam; // x0
  BattleBuffData_BuffData_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int max_length; // w8
  unsigned int v18; // w23
  int v19; // w8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FE8E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, defenceTarget);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_49FE8E0 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                         v10,
                                                         v11);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_24;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      do
      {
        if ( v18 >= max_length )
          sub_1B6432C(ShowServantParam, v14);
        v14 = ActiveList->m_Items[v18];
        if ( !v14 )
          goto LABEL_24;
        v19 = v14->fields.turn - 1;
        v14->fields.turn = v19;
        if ( !v19 )
        {
          if ( !v12 )
            goto LABEL_24;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v14,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v14;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v14, v15, v16);
          }
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v18 < max_length );
    }
    if ( !v12 )
      goto LABEL_24;
    if ( v12->fields._size >= 1 )
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
      sub_1B64324(ShowServantParam);
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
  __int64 v4; // x20
  BattleBuffData_o *buffData; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FE8DE & 1) == 0 )
  {
    sub_1B640C8(&BattleDefenceTargetData_SaveData_TypeInfo, method);
    byte_49FE8DE = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v4 = sub_1B64314(BattleDefenceTargetData_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 || (*(_QWORD *)(v4 + 16) = *(_QWORD *)&this->fields.nowHp, (buffData = this->fields.buffData) == 0LL) )
    sub_1B64324(buffData);
  SaveData = BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v4 + 24) = SaveData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)SaveData, v7, v8);
  *(_DWORD *)(v4 + 32) = this->fields.uiId;
  return (BattleDefenceTargetData_SaveData_o *)v4;
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FE8DD & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, *(_QWORD *)&nowHp);
    byte_49FE8DD = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, *(_QWORD *)&nowHp, *(_QWORD *)&maxHp);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v11, v12, v13);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_1B64324(0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE8DF & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, saveData);
    byte_49FE8DF = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    *(_QWORD *)&this->fields.nowHp = *(_QWORD *)&saveData->fields.nowHp;
    if ( !buffData )
    {
      v7 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, saveData, method);
      BattleBuffData___ctor(v7, 0LL);
      *p_buffData = v7;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v7, v8, v9);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_1B64324(0LL);
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