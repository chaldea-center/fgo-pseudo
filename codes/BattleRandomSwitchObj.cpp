void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A22119 & 1) == 0 )
  {
    sub_1B715CC(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_4A22119 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1B71674(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.switchDataArray, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 Data; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  WeightRate_int__o *v18; // x21
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v23; // w2
  il2cpp_array_size_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v25; // x8
  __int64 v26; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v28; // x24
  int32_t v29; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v30; // x8
  System_Object_array *v31; // x19
  System_Action_object__o *v32; // x21

  if ( (byte_4A22118 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_GameObject__TypeInfo, method);
    sub_1B715CC(&Method_System_Array_ForEach_GameObject___, v3);
    sub_1B715CC(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v4);
    sub_1B715CC(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v5);
    sub_1B715CC(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v6);
    sub_1B715CC(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v7);
    sub_1B715CC(&Method_WeightRate_int___ctor__, v8);
    sub_1B715CC(&Method_WeightRate_int__getData__, v9);
    sub_1B715CC(&Method_WeightRate_int__getTotalWeight__, v10);
    sub_1B715CC(&Method_WeightRate_int__setWeight__, v11);
    sub_1B715CC(&WeightRate_int__TypeInfo, v12);
    byte_4A22118 = 1;
  }
  v13 = sub_1B71818(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  v18 = (WeightRate_int__o *)sub_1B71818(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v18, (const MethodInfo_38AB4A0 *)Method_WeightRate_int___ctor__);
  v19 = sub_1B71818(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  *(_QWORD *)(v19 + 24) = v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v19 + 24), v13, v20, v21);
  *(_DWORD *)(v19 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v23 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v23 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_21;
    if ( v18 )
    {
      WeightRate_int___setWeight(
        v18,
        switchDataArray->m_Items[v23].fields.weight,
        v23,
        (const MethodInfo_38AA9BC *)Method_WeightRate_int__setWeight__);
      v25 = this->fields.switchDataArray;
      if ( v25 )
      {
        v26 = *(int *)(v19 + 16);
        if ( (unsigned int)v26 >= v25->max_length )
          goto LABEL_21;
        objs = (System_Object_array *)v25->m_Items[v26].fields.objs;
        if ( objs )
        {
          v28 = (System_Action_object__o *)sub_1B71818(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(
            v28,
            (Il2CppObject *)v19,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0LL);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v28,
            (const MethodInfo_2F557A0 *)Method_System_Array_ForEach_GameObject___);
          v23 = *(_DWORD *)(v19 + 16) + 1;
          *(_DWORD *)(v19 + 16) = v23;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v18 )
    goto LABEL_20;
  v29 = UnityEngine_Random__Range_69217592(0, v18->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v18, v29, (const MethodInfo_38AAE30 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v13 + 24) = Data;
  v30 = this->fields.switchDataArray;
  if ( !v30 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v30->max_length )
LABEL_21:
    sub_1B71830(Data, v15);
  v31 = (System_Object_array *)v30->m_Items[(int)Data].fields.objs;
  if ( !v31 )
LABEL_20:
    sub_1B71828(Data, v15);
  v32 = (System_Action_object__o *)sub_1B71818(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v13,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0LL);
  System_Array__ForEach_object_(
    v31,
    (System_Action_T__o *)v32,
    (const MethodInfo_2F557A0 *)Method_System_Array_ForEach_GameObject___);
}


// attributes: thunk
void __fastcall BattleRandomSwitchObj__Start(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  BattleRandomSwitchObj__Execution(this, method);
}


void __fastcall BattleRandomSwitchObj___c__DisplayClass3_0___ctor(
        BattleRandomSwitchObj___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj___c__DisplayClass3_0___Execution_b__0(
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
  if ( (unsigned int)hitIndex >= switchDataArray->max_length )
    sub_1B71830(this, g);
  if ( !g )
LABEL_6:
    sub_1B71828(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[hitIndex].fields.hitValue, 0LL);
}


void __fastcall BattleRandomSwitchObj___c__DisplayClass3_1___ctor(
        BattleRandomSwitchObj___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj___c__DisplayClass3_1___Execution_b__1(
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
  if ( (unsigned int)i >= switchDataArray->max_length )
    sub_1B71830(this, g);
  if ( !g )
LABEL_7:
    sub_1B71828(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}