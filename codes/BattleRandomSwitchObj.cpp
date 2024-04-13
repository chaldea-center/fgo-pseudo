void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BattleRandomSwitchObj_SwitchData_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E961D & 1) == 0 )
  {
    sub_B5D5C4(&BattleRandomSwitchObj_SwitchData___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E961D = 1;
  }
  v5 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_B5D5DC(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchDataArray,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x20
  __int64 Data; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WeightRate_int__o *v47; // x21
  __int64 v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v56; // w2
  int32_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v58; // x8
  __int64 v59; // x9
  ScriptActionAdvPrefabActorGoNextState_array *objs; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x24
  int32_t v62; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v63; // x8
  ScriptActionAdvPrefabActorGoNextState_array *v64; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v65; // x21
  __int64 v66; // x0

  if ( (byte_42E961C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Array_ForEach_GameObject___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v11, v12, v13);
    sub_B5D5C4(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v17, v18, v19);
    sub_B5D5C4(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v26, v27, v28);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v29, v30, v31);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v32, v33, v34);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v35, v36, v37);
    byte_42E961C = 1;
  }
  v38 = sub_B5D694(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  BattleRandomSwitchObj___c__DisplayClass3_0___ctor((BattleRandomSwitchObj___c__DisplayClass3_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_20;
  *(_QWORD *)(v38 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  v47 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v47, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  v48 = sub_B5D694(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  BattleRandomSwitchObj___c__DisplayClass3_1___ctor((BattleRandomSwitchObj___c__DisplayClass3_1_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_20;
  *(_QWORD *)(v48 + 24) = v38;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 24), (System_Int32_array **)v38, v49, v50, v51, v52, v53, v54);
  *(_DWORD *)(v48 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v56 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v56 >= max_length )
      break;
    if ( v56 >= (unsigned int)max_length )
      goto LABEL_21;
    if ( v47 )
    {
      WeightRate_int___setWeight(
        v47,
        switchDataArray->m_Items[v56].fields.weight,
        v56,
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      v58 = this->fields.switchDataArray;
      if ( v58 )
      {
        v59 = *(int *)(v48 + 16);
        if ( (unsigned int)v59 >= v58->max_length )
          goto LABEL_21;
        objs = (ScriptActionAdvPrefabActorGoNextState_array *)v58->m_Items[v59].fields.objs;
        if ( objs )
        {
          v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v61,
            (Il2CppObject *)v48,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
          System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
            objs,
            (System_Action_T__o *)v61,
            (const MethodInfo_1FC1604 *)Method_System_Array_ForEach_GameObject___);
          v56 = *(_DWORD *)(v48 + 16) + 1;
          *(_DWORD *)(v48 + 16) = v56;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v47 )
    goto LABEL_20;
  v62 = UnityEngine_Random__Range_35654020(0, v47->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v47, v62, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v38 + 24) = Data;
  v63 = this->fields.switchDataArray;
  if ( !v63 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v63->max_length )
  {
LABEL_21:
    v66 = sub_B5D6C8(Data);
    sub_B5D668(v66, 0LL);
  }
  v64 = (ScriptActionAdvPrefabActorGoNextState_array *)v63->m_Items[(int)Data].fields.objs;
  if ( !v64 )
LABEL_20:
    sub_B5D69C(Data, v40);
  v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v65,
    (Il2CppObject *)v38,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
  System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
    v64,
    (System_Action_T__o *)v65,
    (const MethodInfo_1FC1604 *)Method_System_Array_ForEach_GameObject___);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_0_o *)g;
  if ( !g )
LABEL_6:
    sub_B5D69C(this, g);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  this = (BattleRandomSwitchObj___c__DisplayClass3_1_o *)g;
  if ( !g )
LABEL_7:
    sub_B5D69C(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}