void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEB18 & 1) == 0 )
  {
    sub_1B640C8(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_49FEB18 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1B64170(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchDataArray, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 Data; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  WeightRate_int__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v28; // w2
  il2cpp_array_size_t max_length; // w9
  __int64 v30; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v31; // x8
  __int64 v32; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v34; // x24
  int32_t v35; // w0
  __int64 v36; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v37; // x8
  System_Object_array *v38; // x19
  System_Action_object__o *v39; // x21

  if ( (byte_49FEB17 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_System_Array_ForEach_GameObject___, v4);
    sub_1B640C8(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v5);
    sub_1B640C8(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v6);
    sub_1B640C8(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v7);
    sub_1B640C8(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v8);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v9);
    sub_1B640C8(&Method_WeightRate_int__getData__, v10);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v11);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v12);
    sub_1B640C8(&WeightRate_int__TypeInfo, v13);
    byte_49FEB17 = 1;
  }
  v14 = sub_1B64314(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  v20 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v18, v19);
  WeightRate_int____ctor(v20, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  v23 = sub_1B64314(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v21, v22);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_20;
  *(_QWORD *)(v23 + 24) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 24), v14, v24, v25);
  *(_DWORD *)(v23 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v28 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v28 >= (int)max_length )
      break;
    if ( v28 >= max_length )
      goto LABEL_21;
    if ( v20 )
    {
      WeightRate_int___setWeight(
        v20,
        switchDataArray->m_Items[v28].fields.weight,
        v28,
        (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      v31 = this->fields.switchDataArray;
      if ( v31 )
      {
        v32 = *(int *)(v23 + 16);
        if ( (unsigned int)v32 >= v31->max_length )
          goto LABEL_21;
        objs = (System_Object_array *)v31->m_Items[v32].fields.objs;
        if ( objs )
        {
          v34 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v26, v30);
          System_Action_object____ctor(
            v34,
            (Il2CppObject *)v23,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0LL);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v34,
            (const MethodInfo_2F31AF8 *)Method_System_Array_ForEach_GameObject___);
          v28 = *(_DWORD *)(v23 + 16) + 1;
          *(_DWORD *)(v23 + 16) = v28;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v20 )
    goto LABEL_20;
  v35 = UnityEngine_Random__Range_69087476(0, v20->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v20, v35, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v14 + 24) = Data;
  v37 = this->fields.switchDataArray;
  if ( !v37 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v37->max_length )
LABEL_21:
    sub_1B6432C(Data, v26);
  v38 = (System_Object_array *)v37->m_Items[(int)Data].fields.objs;
  if ( !v38 )
LABEL_20:
    sub_1B64324(Data);
  v39 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v26, v36);
  System_Action_object____ctor(
    v39,
    (Il2CppObject *)v14,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0LL);
  System_Array__ForEach_object_(
    v38,
    (System_Action_T__o *)v39,
    (const MethodInfo_2F31AF8 *)Method_System_Array_ForEach_GameObject___);
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
    sub_1B6432C(this, g);
  if ( !g )
LABEL_6:
    sub_1B64324(this);
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
    sub_1B6432C(this, g);
  if ( !g )
LABEL_7:
    sub_1B64324(this);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}