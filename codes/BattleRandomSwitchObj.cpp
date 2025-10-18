void BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45B1C & 1) == 0 )
  {
    sub_1C37058(&BattleRandomSwitchObj_SwitchData___TypeInfo);
    byte_4C45B1C = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1C37100(BattleRandomSwitchObj_SwitchData___TypeInfo, 2);
  this->fields.switchDataArray = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.switchDataArray, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Data; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  WeightRate_int__o *v7; // x21
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v12; // w2
  int32_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v14; // x8
  __int64 v15; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v17; // x24
  int32_t v18; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v19; // x8
  System_Object_array *v20; // x19
  System_Action_object__o *v21; // x21

  if ( (byte_4C45B1B & 1) == 0 )
  {
    sub_1C37058(&System_Action_GameObject__TypeInfo);
    sub_1C37058(&Method_System_Array_ForEach_GameObject___);
    sub_1C37058(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__);
    sub_1C37058(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__);
    sub_1C37058(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
    sub_1C37058(&Method_WeightRate_int___ctor__);
    sub_1C37058(&Method_WeightRate_int__getData__);
    sub_1C37058(&Method_WeightRate_int__getTotalWeight__);
    sub_1C37058(&Method_WeightRate_int__setWeight__);
    sub_1C37058(&WeightRate_int__TypeInfo);
    byte_4C45B1B = 1;
  }
  v3 = sub_1C372A4(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  v7 = (WeightRate_int__o *)sub_1C372A4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v7, (const MethodInfo_3B94A3C *)Method_WeightRate_int___ctor__);
  v8 = sub_1C372A4(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_20;
  *(_QWORD *)(v8 + 24) = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 24), v3, v9, v10);
  *(_DWORD *)(v8 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v12 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v12 >= max_length )
      break;
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v7 )
    {
      WeightRate_int___setWeight(
        v7,
        switchDataArray->m_Items[v12].fields.weight,
        v12,
        (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
      v14 = this->fields.switchDataArray;
      if ( v14 )
      {
        v15 = *(int *)(v8 + 16);
        if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
          goto LABEL_21;
        objs = (System_Object_array *)v14->m_Items[v15].fields.objs;
        if ( objs )
        {
          v17 = (System_Action_object__o *)sub_1C372A4(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(
            v17,
            (Il2CppObject *)v8,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v17,
            (const MethodInfo_31EE968 *)Method_System_Array_ForEach_GameObject___);
          v12 = *(_DWORD *)(v8 + 16) + 1;
          *(_DWORD *)(v8 + 16) = v12;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v7 )
    goto LABEL_20;
  v18 = UnityEngine_Random__Range_71226972(0, v7->fields.totalweight, 0);
  Data = WeightRate_int___getData(v7, v18, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v3 + 24) = Data;
  v19 = this->fields.switchDataArray;
  if ( !v19 )
    goto LABEL_20;
  if ( (unsigned int)Data >= LODWORD(v19->max_length) )
LABEL_21:
    sub_1C372BC(Data);
  v20 = (System_Object_array *)v19->m_Items[(int)Data].fields.objs;
  if ( !v20 )
LABEL_20:
    sub_1C372B4(Data);
  v21 = (System_Action_object__o *)sub_1C372A4(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v3,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0);
  System_Array__ForEach_object_(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_31EE968 *)Method_System_Array_ForEach_GameObject___);
}


// attributes: thunk
void BattleRandomSwitchObj__Start(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  BattleRandomSwitchObj__Execution(this, method);
}


void BattleRandomSwitchObj___c__DisplayClass3_0___ctor(
        BattleRandomSwitchObj___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRandomSwitchObj___c__DisplayClass3_0___Execution_b__0(
        BattleRandomSwitchObj___c__DisplayClass3_0_o *this,
        UnityEngine_GameObject_o *g,
        const MethodInfo *method)
{
  struct BattleRandomSwitchObj_o *_4__this; // x8
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  __int64 hitIndex; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  switchDataArray = _4__this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_6;
  hitIndex = this->fields.hitIndex;
  if ( (unsigned int)hitIndex >= LODWORD(switchDataArray->max_length) )
    sub_1C372BC(this);
  if ( !g )
LABEL_6:
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[hitIndex].fields.hitValue, 0);
}


void BattleRandomSwitchObj___c__DisplayClass3_1___ctor(
        BattleRandomSwitchObj___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRandomSwitchObj___c__DisplayClass3_1___Execution_b__1(
        BattleRandomSwitchObj___c__DisplayClass3_1_o *this,
        UnityEngine_GameObject_o *g,
        const MethodInfo *method)
{
  struct BattleRandomSwitchObj___c__DisplayClass3_0_o *CS___8__locals1; // x8
  struct BattleRandomSwitchObj_o *_4__this; // x8
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  __int64 i; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_7;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  switchDataArray = _4__this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_7;
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(switchDataArray->max_length) )
    sub_1C372BC(this);
  if ( !g )
LABEL_7:
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0);
}