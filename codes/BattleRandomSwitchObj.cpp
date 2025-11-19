void BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB8EAF & 1) == 0 )
  {
    sub_1C6BA08(&BattleRandomSwitchObj_SwitchData___TypeInfo);
    byte_4CB8EAF = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1C6BAB0(BattleRandomSwitchObj_SwitchData___TypeInfo, 2);
  this->fields.switchDataArray = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.switchDataArray, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Data; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  WeightRate_int__o *v8; // x21
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v13; // w2
  int32_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v15; // x8
  __int64 v16; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v18; // x24
  int32_t v19; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v20; // x8
  System_Object_array *v21; // x19
  System_Action_object__o *v22; // x21

  if ( (byte_4CB8EAE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GameObject__TypeInfo);
    sub_1C6BA08(&Method_System_Array_ForEach_GameObject___);
    sub_1C6BA08(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__);
    sub_1C6BA08(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
    sub_1C6BA08(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__);
    sub_1C6BA08(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
    sub_1C6BA08(&Method_WeightRate_int___ctor__);
    sub_1C6BA08(&Method_WeightRate_int__getData__);
    sub_1C6BA08(&Method_WeightRate_int__getTotalWeight__);
    sub_1C6BA08(&Method_WeightRate_int__setWeight__);
    sub_1C6BA08(&WeightRate_int__TypeInfo);
    byte_4CB8EAE = 1;
  }
  v3 = sub_1C6BC54(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  v8 = (WeightRate_int__o *)sub_1C6BC54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_3BF8CB8 *)Method_WeightRate_int___ctor__);
  v9 = sub_1C6BC54(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_20;
  *(_QWORD *)(v9 + 24) = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), v3, v10, v11);
  *(_DWORD *)(v9 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v13 >= max_length )
      break;
    if ( v13 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v8 )
    {
      WeightRate_int___setWeight(
        v8,
        switchDataArray->m_Items[v13].fields.weight,
        v13,
        (const MethodInfo_3BF81D4 *)Method_WeightRate_int__setWeight__);
      v15 = this->fields.switchDataArray;
      if ( v15 )
      {
        v16 = *(int *)(v9 + 16);
        if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
          goto LABEL_21;
        objs = (System_Object_array *)v15->m_Items[v16].fields.objs;
        if ( objs )
        {
          v18 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(
            v18,
            (Il2CppObject *)v9,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v18,
            (const MethodInfo_3242E0C *)Method_System_Array_ForEach_GameObject___);
          v13 = *(_DWORD *)(v9 + 16) + 1;
          *(_DWORD *)(v9 + 16) = v13;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v8 )
    goto LABEL_20;
  v19 = UnityEngine_Random__Range_71619388(0, v8->fields.totalweight, 0);
  Data = WeightRate_int___getData(v8, v19, (const MethodInfo_3BF8648 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v3 + 24) = Data;
  v20 = this->fields.switchDataArray;
  if ( !v20 )
    goto LABEL_20;
  if ( (unsigned int)Data >= LODWORD(v20->max_length) )
LABEL_21:
    sub_1C6BC68(Data);
  v21 = (System_Object_array *)v20->m_Items[(int)Data].fields.objs;
  if ( !v21 )
LABEL_20:
    sub_1C6BC60(Data, v5);
  v22 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0);
  System_Array__ForEach_object_(
    v21,
    (System_Action_T__o *)v22,
    (const MethodInfo_3242E0C *)Method_System_Array_ForEach_GameObject___);
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
    sub_1C6BC68(this);
  if ( !g )
LABEL_6:
    sub_1C6BC60(this, g);
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
    sub_1C6BC68(this);
  if ( !g )
LABEL_7:
    sub_1C6BC60(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0);
}