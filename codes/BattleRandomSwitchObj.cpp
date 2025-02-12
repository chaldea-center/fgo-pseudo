void __fastcall BattleRandomSwitchObj___ctor(BattleRandomSwitchObj_o *this, const MethodInfo *method)
{
  struct BattleRandomSwitchObj_SwitchData_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB6E39 & 1) == 0 )
  {
    sub_1C13D24(&BattleRandomSwitchObj_SwitchData___TypeInfo, method);
    byte_4BB6E39 = 1;
  }
  v3 = (struct BattleRandomSwitchObj_SwitchData_array *)sub_1C13DCC(BattleRandomSwitchObj_SwitchData___TypeInfo, 2LL);
  this->fields.switchDataArray = v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.switchDataArray, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  int64_t v13; // x20
  __int64 Data; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  WeightRate_int__o *v22; // x21
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct BattleRandomSwitchObj_SwitchData_array *switchDataArray; // x8
  int32_t v31; // w2
  il2cpp_array_size_t max_length; // w9
  struct BattleRandomSwitchObj_SwitchData_array *v33; // x8
  __int64 v34; // x9
  System_Object_array *objs; // x23
  System_Action_object__o *v36; // x24
  int32_t v37; // w0
  struct BattleRandomSwitchObj_SwitchData_array *v38; // x8
  System_Object_array *v39; // x19
  System_Action_object__o *v40; // x21

  if ( (byte_4BB6E38 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_GameObject__TypeInfo, method);
    sub_1C13D24(&Method_System_Array_ForEach_GameObject___, v3);
    sub_1C13D24(&Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__, v4);
    sub_1C13D24(&BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo, v5);
    sub_1C13D24(&Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__, v6);
    sub_1C13D24(&BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo, v7);
    sub_1C13D24(&Method_WeightRate_int___ctor__, v8);
    sub_1C13D24(&Method_WeightRate_int__getData__, v9);
    sub_1C13D24(&Method_WeightRate_int__getTotalWeight__, v10);
    sub_1C13D24(&Method_WeightRate_int__setWeight__, v11);
    sub_1C13D24(&WeightRate_int__TypeInfo, v12);
    byte_4BB6E38 = 1;
  }
  v13 = sub_1C13F70(BattleRandomSwitchObj___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = (WeightRate_int__o *)sub_1C13F70(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v22, (const MethodInfo_3A0FE84 *)Method_WeightRate_int___ctor__);
  v23 = sub_1C13F70(BattleRandomSwitchObj___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_20;
  *(_QWORD *)(v23 + 24) = v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 24), v13, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v23 + 16) = 0;
  switchDataArray = this->fields.switchDataArray;
  if ( !switchDataArray )
    goto LABEL_20;
  v31 = 0;
  while ( 1 )
  {
    max_length = switchDataArray->max_length;
    if ( v31 >= (int)max_length )
      break;
    if ( v31 >= max_length )
      goto LABEL_21;
    if ( v22 )
    {
      WeightRate_int___setWeight(
        v22,
        switchDataArray->m_Items[v31].fields.weight,
        v31,
        (const MethodInfo_3A0F3A0 *)Method_WeightRate_int__setWeight__);
      v33 = this->fields.switchDataArray;
      if ( v33 )
      {
        v34 = *(int *)(v23 + 16);
        if ( (unsigned int)v34 >= v33->max_length )
          goto LABEL_21;
        objs = (System_Object_array *)v33->m_Items[v34].fields.objs;
        if ( objs )
        {
          v36 = (System_Action_object__o *)sub_1C13F70(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(
            v36,
            (Il2CppObject *)v23,
            Method_BattleRandomSwitchObj___c__DisplayClass3_1__Execution_b__1__,
            0LL);
          System_Array__ForEach_object_(
            objs,
            (System_Action_T__o *)v36,
            (const MethodInfo_308BE24 *)Method_System_Array_ForEach_GameObject___);
          v31 = *(_DWORD *)(v23 + 16) + 1;
          *(_DWORD *)(v23 + 16) = v31;
          switchDataArray = this->fields.switchDataArray;
          if ( switchDataArray )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !v22 )
    goto LABEL_20;
  v37 = UnityEngine_Random__Range_70681728(0, v22->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v22, v37, (const MethodInfo_3A0F814 *)Method_WeightRate_int__getData__);
  *(_DWORD *)(v13 + 24) = Data;
  v38 = this->fields.switchDataArray;
  if ( !v38 )
    goto LABEL_20;
  if ( (unsigned int)Data >= v38->max_length )
LABEL_21:
    sub_1C13F88(Data, v15);
  v39 = (System_Object_array *)v38->m_Items[(int)Data].fields.objs;
  if ( !v39 )
LABEL_20:
    sub_1C13F80(Data, v15);
  v40 = (System_Action_object__o *)sub_1C13F70(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v40,
    (Il2CppObject *)v13,
    Method_BattleRandomSwitchObj___c__DisplayClass3_0__Execution_b__0__,
    0LL);
  System_Array__ForEach_object_(
    v39,
    (System_Action_T__o *)v40,
    (const MethodInfo_308BE24 *)Method_System_Array_ForEach_GameObject___);
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
    sub_1C13F88(this, g);
  if ( !g )
LABEL_6:
    sub_1C13F80(this, g);
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
    sub_1C13F88(this, g);
  if ( !g )
LABEL_7:
    sub_1C13F80(this, g);
  UnityEngine_GameObject__SetActive(g, switchDataArray->m_Items[i].fields.initValue, 0LL);
}