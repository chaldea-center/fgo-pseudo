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
  System_Collections_Generic_List_object__o *v7; // x22
  BattleBuffData_o *ShowServantParam; // x0
  BattleBuffData_BuffData_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int max_length; // w8
  unsigned int v13; // w23
  int v14; // w8
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5D688 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D688 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_24;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= max_length )
          sub_1B88814(ShowServantParam, v9);
        v9 = ActiveList->m_Items[v13];
        if ( !v9 )
          goto LABEL_24;
        v14 = v9->fields.turn - 1;
        v9->fields.turn = v14;
        if ( !v14 )
        {
          if ( !v7 )
            goto LABEL_24;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v9, v10, v11);
          }
        }
        max_length = ActiveList->max_length;
      }
      while ( (int)++v13 < max_length );
    }
    if ( !v7 )
      goto LABEL_24;
    if ( v7->fields._size >= 1 )
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
      sub_1B8880C(ShowServantParam, v9);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D686 & 1) == 0 )
  {
    sub_1B885B0(&BattleDefenceTargetData_SaveData_TypeInfo);
    byte_4A5D686 = 1;
  }
  if ( this->fields.maxHp < 1 || this->fields.uiId < 1 )
    return 0LL;
  v3 = sub_1B887FC(BattleDefenceTargetData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 || (*(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.nowHp, (buffData = this->fields.buffData) == 0LL) )
    sub_1B8880C(buffData, v5);
  SaveData = BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v3 + 24) = SaveData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)SaveData, v7, v8);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1

  if ( (byte_4A5D685 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    byte_4A5D685 = 1;
  }
  p_buffData = &this->fields.buffData;
  buffData = this->fields.buffData;
  this->fields.nowHp = nowHp;
  this->fields.maxHp = maxHp;
  if ( !buffData )
  {
    v11 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v11, 0LL);
    *p_buffData = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v11, v12, v13);
    buffData = *p_buffData;
    if ( !*p_buffData )
      sub_1B8880C(0LL, v14);
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
  __int64 v10; // x1

  if ( (byte_4A5D687 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    byte_4A5D687 = 1;
  }
  if ( saveData )
  {
    p_buffData = &this->fields.buffData;
    buffData = this->fields.buffData;
    *(_QWORD *)&this->fields.nowHp = *(_QWORD *)&saveData->fields.nowHp;
    if ( !buffData )
    {
      v7 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0LL);
      *p_buffData = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v7, v8, v9);
      buffData = *p_buffData;
      if ( !*p_buffData )
        sub_1B8880C(0LL, v10);
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