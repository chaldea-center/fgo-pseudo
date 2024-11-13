void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleRandomSwitchObj_SwitchData_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B188AF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRandomSwitchObj_SwitchData___TypeInfo, method, v2);
    byte_4B188AF = 1;
  }
  v4 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1BCA888(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchDataArray, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRandomSwitchObj__Execution(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x20
  __int64 Data; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  WeightRate_int__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v49; // w2
  il2cpp_array_size_t max_length; // w9
  __int64 v51; // x2
  __int64 v52; // x3
  struct BattleRandomSwitchObj_SwitchData_array *v53; // x8
  __int64 v54; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v56; // x24
  int32_t v57; // w0
  __int64 v58; // x2
  __int64 v59; // x3
  struct BattleRandomSwitchObj_SwitchData_array *v60; // x8
  System_Object_array *v61; // x19
  System_Action_object__o *v62; // x21

  if ( (byte_4B188AE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Array_ForEach_GameObject___, v5, v6);
    sub_1BCA7E0(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v7, v8);
    sub_1BCA7E0(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v11, v12);
    sub_1BCA7E0(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v17, v18);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v19, v20);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v21, v22);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v23, v24);
    byte_4B188AE = 1;
  }
  v25 = sub_1BCAA2C(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_20;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  v37 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v34, v35, v36);
  WeightRate_int____ctor(v37, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  v41 = sub_1BCAA2C(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v38, v39, v40);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_20;
  *(_QWORD *)(v41 + 24) = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), v25, v42, v43, v44, v45, v46, v47);
  *(_DWORD *)(v41 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v49 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v49 >= (int)max_length )
      break;
    if ( v49 >= max_length )
      goto LABEL_21;
    if ( v37 )
    {
      WeightRate_int___setWeight(
        v37,
        switchDataArray->m_Items[v49].fields.weight,
        v49,
        (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
      v53 = this->fields.switchDataArray;
      if ( v53 )
      {
        v54 = *(int *)(v41 + 16);
        if ( (unsigned int)v54 >= v53->max_length )
          goto LABEL_21;
        objs = (System_Object_array *)v53->m_Items[v54].fields.objs;
        if ( objs )
        {
          v56 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v27, v51, v52);
          System_Action_object____ctor(
            v56,
            (Il2CppObject *)v41,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0LL);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v56,
            (const MethodInfo_300E630 *)Method_System_Array_ForEach_GameObject___);
          v49 = *(_DWORD *)(v41 + 16) + 1;
          *(_DWORD *)(v41 + 16) = v49;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v37 )
    goto LABEL_20;
  v57 = UnityEngine_Random__Range_70113984(0, v37->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v37, v57, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v25 + 24) = Data;
  v60 = this->fields.switchDataArray;
  if ( !v60 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v60->max_length )
LABEL_21:
    sub_1BCAA44(Data, v27);
  v61 = (System_Object_array *)v60->m_Items[(int)Data].fields.objs;
  if ( !v61 )
LABEL_20:
    sub_1BCAA3C(Data, v27);
  v62 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v27, v58, v59);
  System_Action_object____ctor(
    v62,
    (Il2CppObject *)v25,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0LL);
  System_Array__ForEach_object_(
    v61,
    (System_Action_T__o *)v62,
    (const MethodInfo_300E630 *)Method_System_Array_ForEach_GameObject___);
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
    sub_1BCAA44(this, g);
  if ( !g )
LABEL_6:
    sub_1BCAA3C(this, g);
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
    sub_1BCAA44(this, g);
  if ( !g )
LABEL_7:
    sub_1BCAA3C(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}