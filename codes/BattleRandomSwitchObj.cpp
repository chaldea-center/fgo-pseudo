void BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF1215 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleRandomSwitchObj_SwitchData___TypeInfo);
    byte_4CF1215 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1C7BB90(BattleRandomSwitchObj_SwitchData___TypeInfo, 2);
  this->fields.switchDataArray = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.switchDataArray, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Data; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  WeightRate_int__o *v12; // x21
  __int64 v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v21; // w2
  int32_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v23; // x8
  __int64 v24; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v26; // x24
  int32_t v27; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v28; // x8
  System_Object_array *v29; // x19
  System_Action_object__o *v30; // x21

  if ( (byte_4CF1214 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_GameObject__TypeInfo);
    sub_1C7BAE8(&Method_System_Array_ForEach_GameObject___);
    sub_1C7BAE8(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__);
    sub_1C7BAE8(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
    sub_1C7BAE8(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__);
    sub_1C7BAE8(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    byte_4CF1214 = 1;
  }
  v3 = sub_1C7BD34(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
  v13 = sub_1C7BD34(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 24) = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 24), v3, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v13 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v21 >= max_length )
      break;
    if ( v21 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v12 )
    {
      WeightRate_int___setWeight(
        v12,
        switchDataArray->m_Items[v21].fields.weight,
        v21,
        (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      v23 = this->fields.switchDataArray;
      if ( v23 )
      {
        v24 = *(int *)(v13 + 16);
        if ( (unsigned int)v24 >= LODWORD(v23->max_length) )
          goto LABEL_21;
        objs = (System_Object_array *)v23->m_Items[v24].fields.objs;
        if ( objs )
        {
          v26 = (System_Action_object__o *)sub_1C7BD34(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(
            v26,
            (Il2CppObject *)v13,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v26,
            (const MethodInfo_3274E90 *)Method_System_Array_ForEach_GameObject___);
          v21 = *(_DWORD *)(v13 + 16) + 1;
          *(_DWORD *)(v13 + 16) = v21;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v12 )
    goto LABEL_20;
  v27 = UnityEngine_Random__Range_71829860(0, v12->fields.totalweight, 0);
  Data = WeightRate_int___getData(v12, v27, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v3 + 24) = Data;
  v28 = this->fields.switchDataArray;
  if ( !v28 )
    goto LABEL_20;
  if ( (unsigned int)Data >= LODWORD(v28->max_length) )
LABEL_21:
    sub_1C7BD48(Data);
  v29 = (System_Object_array *)v28->m_Items[(int)Data].fields.objs;
  if ( !v29 )
LABEL_20:
    sub_1C7BD40(Data, v5);
  v30 = (System_Action_object__o *)sub_1C7BD34(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v3,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0);
  System_Array__ForEach_object_(
    v29,
    (System_Action_T__o *)v30,
    (const MethodInfo_3274E90 *)Method_System_Array_ForEach_GameObject___);
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
    sub_1C7BD48(this);
  if ( !g )
LABEL_6:
    sub_1C7BD40(this, g);
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
    sub_1C7BD48(this);
  if ( !g )
LABEL_7:
    sub_1C7BD40(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0);
}