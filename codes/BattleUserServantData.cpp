void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7DCF & 1) == 0 )
  {
    sub_B5D5C4(&UserServantEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7DCF = 1;
  }
  if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
  }
  UserServantEntity___ctor((UserServantEntity_o *)this, 0LL);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetAddPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *AddPassiveSkill; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_42E7DCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Repeat_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    byte_42E7DCA = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v12 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_B5D69C(0LL, v9);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 1,
                                                                 AddPassiveSkill->max_length,
                                                                 (const MethodInfo_1CAF8B8 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v13,
                        (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    addPassiveLvs = AddPassiveSkill;
  }
  return BattleUserServantData__MakeSimpleSkillArray(
           (BattleUserServantData_o *)AddPassiveSkill,
           v12,
           addPassiveLvs,
           v10);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetAppendPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleUserServantData__MakeSimpleSkillArray(
           this,
           this->fields.appendPassiveSkillIds,
           this->fields.appendPassiveSkillLvs,
           v2);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassBoardSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v15; // x19
  System_Collections_Generic_List_int__o *v16; // x20
  System_Int32_array *v17; // x0
  __int64 v18; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v21; // w22
  AddSkillData_o *v22; // x24
  System_Int32_array *v23; // x19
  BattleUserServantData_o *v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x0

  if ( (byte_42E7DCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E7DCE = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v16 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_16:
    sub_B5D69C(v17, v18);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
      {
        v26 = sub_B5D6C8(v17);
        sub_B5D668(v26, 0LL);
      }
      v22 = classBoardAddPassiveSkills->m_Items[v21];
      if ( !v22 )
        goto LABEL_16;
      if ( !v15 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v15,
        v22->fields.id,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v16 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v16,
        v22->fields.lv,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v21 < max_length );
  }
  if ( !v15 )
    goto LABEL_16;
  v17 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v16 )
    goto LABEL_16;
  v23 = v17;
  v24 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v16,
                                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v24, v23, (System_Int32_array *)v24, v25);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  BattleUserServantData_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42E7DCC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Repeat_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    byte_42E7DCC = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_1CAF8B8 *)Method_System_Linq_Enumerable_Repeat_int___);
  v10 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                     v9,
                                     (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return BattleUserServantData__MakeSimpleSkillArray(v10, classPassive, (System_Int32_array *)v10, v11);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetSelfSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *BattleSkillIdList; // x20
  BattleUserServantData_o *v4; // x0
  const MethodInfo *v5; // x3

  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, method);
  v4 = (BattleUserServantData_o *)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
                                    this,
                                    this->klass[1]._1.image);
  return BattleUserServantData__MakeSimpleSkillArray(v4, BattleSkillIdList, (System_Int32_array *)v4, v5);
}


SimpleSkillData_array *__fastcall BattleUserServantData__MakeSimpleSkillArray(
        BattleUserServantData_o *this,
        System_Int32_array *skillIds,
        System_Int32_array *skillLvs,
        const MethodInfo *method)
{
  SimpleSkillData_array *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x0
  unsigned __int64 v9; // x23
  int32_t v10; // w1
  int32_t v11; // w2
  __int64 v12; // x1
  __int64 v14; // x0
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v16; // 0:x0.8

  if ( (byte_42E7DCD & 1) == 0 )
  {
    sub_B5D5C4(&SimpleSkillData___TypeInfo, (_DWORD)skillIds, (_DWORD)skillLvs, method);
    byte_42E7DCD = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_B5D5DC(SimpleSkillData___TypeInfo, (unsigned int)v7);
      v6 = (SimpleSkillData_array *)v8;
      if ( (int)v7 >= 1 )
      {
        v9 = 0LL;
        do
        {
          if ( v9 >= skillIds->max_length || v9 >= skillLvs->max_length )
            goto LABEL_13;
          v10 = skillIds->m_Items[v9 + 1];
          v11 = skillLvs->m_Items[v9 + 1];
          v16 = (SimpleSkillData_o)&v15;
          v15 = 0LL;
          SimpleSkillData___ctor(v16, v10, v11, 0LL);
          if ( !v6 )
            sub_B5D69C(v8, v12);
          if ( v9 >= v6->max_length )
          {
LABEL_13:
            v14 = sub_B5D6C8(v8);
            sub_B5D668(v14, 0LL);
          }
          *(_QWORD *)&v6->m_Items[v9++].fields.lv = v15;
        }
        while ( (__int64)v9 < (int)v7 );
      }
    }
  }
  return v6;
}


System_Int32_array *__fastcall BattleUserServantData__getAddPassiveSkill(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *result; // x0

  if ( (byte_42E7DC9 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7DC9 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int64_array *result; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_42E7DCB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long___TypeInfo, v5, v6, v7);
    byte_42E7DCB = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
    if ( !result )
      sub_B5D69C(0LL, v10);
    if ( !result->max_length )
    {
      v11 = sub_B5D6C8(result);
      sub_B5D668(v11, 0LL);
    }
    result->m_Items[0] = this->fields.equipTargetId1;
  }
  return result;
}


System_Int32_array *__fastcall BattleUserServantData__getBattleSkillIdList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct AddSkillInfoData_array *addSkills; // x20
  int max_length; // w8
  __int64 v19; // x22
  AddSkillInfoData_o *v20; // x8
  __int64 v22; // x0

  if ( (byte_42E7DC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E7DC7 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v14 )
    goto LABEL_12;
  System_Collections_Generic_List_int___Add(
    v14,
    this->fields.skillId1,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v14,
    this->fields.skillId2,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v14,
    this->fields.skillId3,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    max_length = addSkills->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= max_length )
        {
          v22 = sub_B5D6C8(v15);
          sub_B5D668(v22, 0LL);
        }
        v20 = addSkills->m_Items[v19];
        if ( !v20 )
          break;
        System_Collections_Generic_List_int___Add(
          v14,
          v20->fields.skillId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        max_length = addSkills->max_length;
        if ( (int)++v19 >= max_length )
          return System_Collections_Generic_List_int___ToArray(
                   v14,
                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_12:
      sub_B5D69C(v15, v16);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleUserServantData__getBattleSvtId(BattleUserServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t result; // w0
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42E7DC6 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7DC6 = 1;
  }
  v6 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v9;
    *(_QWORD *)&v11.fields.fakeValue = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall BattleUserServantData__getClassPassive(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.classPassive;
}


System_Int32_array *__fastcall BattleUserServantData__getSkillLevelList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_T__o *SkillLevelList; // x21
  System_Collections_Generic_List_int__o *v18; // x20
  const MethodInfo *v19; // x1
  System_Int32_array *BattleSkillIdList; // x0
  __int64 v21; // x1
  int v22; // w19

  if ( (byte_42E7DC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    byte_42E7DC8 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v18 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v18,
    SkillLevelList,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v19);
  if ( !BattleSkillIdList || !v18 )
    sub_B5D69C(BattleSkillIdList, v21);
  v22 = BattleSkillIdList->max_length - v18->fields._size;
  if ( v22 >= 1 )
  {
    do
    {
      System_Collections_Generic_List_int___Add(
        v18,
        1,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      --v22;
    }
    while ( v22 );
  }
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}