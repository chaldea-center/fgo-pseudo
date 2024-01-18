void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4188533 & 1) == 0 )
  {
    sub_B2C35C(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_4188533 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_B2C374(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.switchDataArray,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 Data; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WeightRate_int__o *v23; // x21
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v32; // w2
  int32_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v34; // x8
  __int64 v35; // x9
  ScriptActionAdvPrefabActorGoNextState_array *objs; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x24
  int32_t v38; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v39; // x8
  ScriptActionAdvPrefabActorGoNextState_array *v40; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x21
  __int64 v42; // x0

  if ( (byte_4188532 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, method);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v3);
    sub_B2C35C(&Method_System_Array_ForEach_GameObject___, v4);
    sub_B2C35C(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v5);
    sub_B2C35C(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v6);
    sub_B2C35C(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v7);
    sub_B2C35C(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v8);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v9);
    sub_B2C35C(&Method_WeightRate_int__getData__, v10);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v11);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v12);
    sub_B2C35C(&WeightRate_int__TypeInfo, v13);
    byte_4188532 = 1;
  }
  v14 = sub_B2C42C(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  BattleRandomSwitchObj___c__DisplayClass3_0___ctor((BattleRandomSwitchObj___c__DisplayClass3_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v23 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v23, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  v24 = sub_B2C42C(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  BattleRandomSwitchObj___c__DisplayClass3_1___ctor((BattleRandomSwitchObj___c__DisplayClass3_1_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_20;
  *(_QWORD *)(v24 + 24) = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v14, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v24 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v32 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v32 >= max_length )
      break;
    if ( v32 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v23 )
    {
      WeightRate_int___setWeight(
        v23,
        switchDataArray->m_Items[v32].fields.weight,
        v32,
        (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      v34 = this->fields.switchDataArray;
      if ( v34 )
      {
        v35 = *(int *)(v24 + 16);
        if ( (unsigned int)v35 >= v34->max_length )
          goto LABEL_21;
        objs = (ScriptActionAdvPrefabActorGoNextState_array *)v34->m_Items[v35].fields.objs;
        if ( objs )
        {
          v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v37,
            (Il2CppObject *)v24,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
          System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
            objs,
            (System_Action_T__o *)v37,
            (const MethodInfo_1FFD3C4 *)Method_System_Array_ForEach_GameObject___);
          v32 = *(_DWORD *)(v24 + 16) + 1;
          *(_DWORD *)(v24 + 16) = v32;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v23 )
    goto LABEL_20;
  v38 = UnityEngine_Random__Range_35348680(0, v23->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v23, v38, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v14 + 24) = Data;
  v39 = this->fields.switchDataArray;
  if ( !v39 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v39->max_length )
  {
LABEL_21:
    v42 = sub_B2C460(Data);
    sub_B2C400(v42, 0LL);
  }
  v40 = (ScriptActionAdvPrefabActorGoNextState_array *)v39->m_Items[(int)Data].fields.objs;
  if ( !v40 )
LABEL_20:
    sub_B2C434(Data, v16);
  v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v41,
    (Il2CppObject *)v14,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
  System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
    v40,
    (System_Action_T__o *)v41,
    (const MethodInfo_1FFD3C4 *)Method_System_Array_ForEach_GameObject___);
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
  struct BattleRandomSwitchObj_o *_4__this; // x9
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x9
  __int64 hitIndex; // x8
  __int64 v6; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  switchDataArray = _4__this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_6;
  hitIndex = this->fields.hitIndex;
  if ( (unsigned int)hitIndex >= switchDataArray->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_0_o *)g;
  if ( !g )
LABEL_6:
    sub_B2C434(this, g);
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
  struct BattleRandomSwitchObj___c__DisplayClass3_0_o *CS___8__locals1; // x9
  struct BattleRandomSwitchObj_o *_4__this; // x9
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x9
  __int64 i; // x8
  __int64 v7; // x0

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
  {
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_1_o *)g;
  if ( !g )
LABEL_7:
    sub_B2C434(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}