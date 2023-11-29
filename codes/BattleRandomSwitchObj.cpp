void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA8C6 & 1) == 0 )
  {
    sub_B16FFC(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_40FA8C6 = 1;
  }
  v4 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_B17014(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL, v2);
  this->fields.switchDataArray = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchDataArray,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WeightRate_int__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 Data; // x0
  __int64 v41; // x1
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  __int64 v43; // x2
  int max_length; // w9
  __int64 v45; // x3
  __int64 v46; // x4
  struct BattleRandomSwitchObj_SwitchData_array *v47; // x8
  __int64 v48; // x9
  ScriptActionAdvPrefabActorGoNextState_array *objs; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x24
  int32_t v51; // w0
  __int64 v52; // x3
  __int64 v53; // x4
  struct BattleRandomSwitchObj_SwitchData_array *v54; // x8
  ScriptActionAdvPrefabActorGoNextState_array *v55; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x21

  if ( (byte_40FA8C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, method);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v6);
    sub_B16FFC(&Method_System_Array_ForEach_GameObject___, v7);
    sub_B16FFC(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v8);
    sub_B16FFC(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v9);
    sub_B16FFC(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v10);
    sub_B16FFC(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v11);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v12);
    sub_B16FFC(&Method_WeightRate_int__getData__, v13);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v14);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v15);
    sub_B16FFC(&WeightRate_int__TypeInfo, v16);
    byte_40FA8C5 = 1;
  }
  v17 = sub_B170CC(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, method, v2, v3, v4);
  BattleRandomSwitchObj___c__DisplayClass3_0___ctor((BattleRandomSwitchObj___c__DisplayClass3_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_20;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  v28 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v24, v25, v26, v27);
  WeightRate_int____ctor(v28, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  v33 = sub_B170CC(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v29, v30, v31, v32);
  BattleRandomSwitchObj___c__DisplayClass3_1___ctor((BattleRandomSwitchObj___c__DisplayClass3_1_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_20;
  *(_QWORD *)(v33 + 24) = v17;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)v17, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v33 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v43 = 0LL;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( (int)v43 >= max_length )
      break;
    if ( (unsigned int)v43 >= max_length )
      goto LABEL_21;
    if ( v28 )
    {
      WeightRate_int___setWeight(
        v28,
        switchDataArray->m_Items[(int)v43].fields.weight,
        v43,
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      v47 = this->fields.switchDataArray;
      if ( v47 )
      {
        v48 = *(int *)(v33 + 16);
        if ( (unsigned int)v48 >= v47->max_length )
          goto LABEL_21;
        objs = (ScriptActionAdvPrefabActorGoNextState_array *)v47->m_Items[v48].fields.objs;
        if ( objs )
        {
          v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_GameObject__TypeInfo,
                                                                                       v41,
                                                                                       v43,
                                                                                       v45,
                                                                                       v46);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v50,
            (Il2CppObject *)v33,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
          System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
            objs,
            (System_Action_T__o *)v50,
            (const MethodInfo_20453F8 *)Method_System_Array_ForEach_GameObject___);
          v43 = (unsigned int)(*(_DWORD *)(v33 + 16) + 1);
          *(_DWORD *)(v33 + 16) = v43;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v28 )
    goto LABEL_20;
  v51 = UnityEngine_Random__Range_34843248(0, v28->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v28, v51, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v17 + 24) = Data;
  v54 = this->fields.switchDataArray;
  if ( !v54 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v54->max_length )
  {
LABEL_21:
    sub_B17100(Data, v41, v43);
    sub_B170A0();
  }
  v55 = (ScriptActionAdvPrefabActorGoNextState_array *)v54->m_Items[(int)Data].fields.objs;
  if ( !v55 )
LABEL_20:
    sub_B170D4();
  v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_GameObject__TypeInfo,
                                                                               v41,
                                                                               v43,
                                                                               v52,
                                                                               v53);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v56,
    (Il2CppObject *)v17,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
  System_Array__ForEach_ScriptActionAdvPrefabActorGoNextState_(
    v55,
    (System_Action_T__o *)v56,
    (const MethodInfo_20453F8 *)Method_System_Array_ForEach_GameObject___);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  switchDataArray = _4__this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_6;
  hitIndex = this->fields.hitIndex;
  if ( (unsigned int)hitIndex >= switchDataArray->max_length )
  {
    sub_B17100(this, g, method);
    sub_B170A0();
  }
  if ( !g )
LABEL_6:
    sub_B170D4();
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
    sub_B17100(this, g, method);
    sub_B170A0();
  }
  if ( !g )
LABEL_7:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}