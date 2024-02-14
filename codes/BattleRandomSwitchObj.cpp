void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4215211 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_4215211 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_B0D8BC(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v3;
  sub_B0D840(
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
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 Data; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  WeightRate_int__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v36; // w2
  int32_t max_length; // w9
  __int64 v38; // x1
  __int64 v39; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v40; // x8
  __int64 v41; // x9
  ScriptActionAdvPrefabActorGoNextState_array *objs; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x24
  int32_t v44; // w0
  __int64 v45; // x1
  __int64 v46; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v47; // x8
  ScriptActionAdvPrefabActorGoNextState_array *v48; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21
  __int64 v50; // x0

  if ( (byte_4215210 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_GameObject___ctor__, method);
    sub_B0D8A4(&System_Action_GameObject__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Array_ForEach_GameObject___, v5);
    sub_B0D8A4(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v6);
    sub_B0D8A4(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v7);
    sub_B0D8A4(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v8);
    sub_B0D8A4(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v9);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v10);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v11);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v12);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v13);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v14);
    byte_4215210 = 1;
  }
  v15 = sub_B0D974(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, method, v2);
  BattleRandomSwitchObj___c__DisplayClass3_0___ctor((BattleRandomSwitchObj___c__DisplayClass3_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_20;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v25 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v23, v24);
  WeightRate_int____ctor(v25, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  v28 = sub_B0D974(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v26, v27);
  BattleRandomSwitchObj___c__DisplayClass3_1___ctor((BattleRandomSwitchObj___c__DisplayClass3_1_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_20;
  *(_QWORD *)(v28 + 24) = v15;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)v15, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v28 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v36 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v36 >= max_length )
      break;
    if ( v36 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v25 )
    {
      WeightRate_int___setWeight(
        v25,
        switchDataArray->m_Items[v36].fields.weight,
        v36,
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      v40 = this->fields.switchDataArray;
      if ( v40 )
      {
        v41 = *(int *)(v28 + 16);
        if ( (unsigned int)v41 >= v40->max_length )
          goto LABEL_21;
        objs = (ScriptActionAdvPrefabActorGoNextState_array *)v40->m_Items[v41].fields.objs;
        if ( objs )
        {
          v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_GameObject__TypeInfo,
                                                                                       v38,
                                                                                       v39);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v43,
            (Il2CppObject *)v28,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            (const MethodInfo_246EA3C *)Method_System_Action_GameObject___ctor__);
          System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
            objs,
            (System_Action_T__o *)v43,
            (const MethodInfo_1F699B8 *)Method_System_Array_ForEach_GameObject___);
          v36 = *(_DWORD *)(v28 + 16) + 1;
          *(_DWORD *)(v28 + 16) = v36;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v25 )
    goto LABEL_20;
  v44 = UnityEngine_Random__Range_34969060(0, v25->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v25, v44, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v15 + 24) = Data;
  v47 = this->fields.switchDataArray;
  if ( !v47 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v47->max_length )
  {
LABEL_21:
    v50 = sub_B0D9A8(Data);
    sub_B0D948(v50, 0LL);
  }
  v48 = (ScriptActionAdvPrefabActorGoNextState_array *)v47->m_Items[(int)Data].fields.objs;
  if ( !v48 )
LABEL_20:
    sub_B0D97C(Data);
  v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_GameObject__TypeInfo,
                                                                               v45,
                                                                               v46);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v49,
    (Il2CppObject *)v15,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_GameObject___ctor__);
  System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
    v48,
    (System_Action_T__o *)v49,
    (const MethodInfo_1F699B8 *)Method_System_Array_ForEach_GameObject___);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_0_o *)g;
  if ( !g )
LABEL_6:
    sub_B0D97C(this);
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
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_1_o *)g;
  if ( !g )
LABEL_7:
    sub_B0D97C(this);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}