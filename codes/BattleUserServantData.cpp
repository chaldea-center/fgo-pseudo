void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4214012 & 1) == 0 )
  {
    sub_B0D8A4(&UserServantEntity_TypeInfo, method);
    byte_4214012 = 1;
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
  __int64 v3; // x1
  System_Int32_array *AddPassiveSkill; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v7; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_421400D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_421400D = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_B0D97C(0LL);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_1B4EEF4 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    addPassiveLvs = AddPassiveSkill;
  }
  return BattleUserServantData__MakeSimpleSkillArray((BattleUserServantData_o *)AddPassiveSkill, v7, addPassiveLvs, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  System_Int32_array *v13; // x0
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v16; // w22
  AddSkillData_o *v17; // x24
  System_Int32_array *v18; // x19
  BattleUserServantData_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0

  if ( (byte_4214011 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4214011 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v6, v7);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_16:
    sub_B0D97C(v13);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= max_length )
      {
        v21 = sub_B0D9A8(v13);
        sub_B0D948(v21, 0LL);
      }
      v17 = classBoardAddPassiveSkills->m_Items[v16];
      if ( !v17 )
        goto LABEL_16;
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v9,
        v17->fields.id,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v12 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v12,
        v17->fields.lv,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v16 < max_length );
  }
  if ( !v9 )
    goto LABEL_16;
  v13 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v12 )
    goto LABEL_16;
  v18 = v13;
  v19 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v12,
                                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v19, v18, (System_Int32_array *)v19, v20);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  BattleUserServantData_o *v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_421400F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_421400F = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_1B4EEF4 *)Method_System_Linq_Enumerable_Repeat_int___);
  v6 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v5,
                                    (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  return BattleUserServantData__MakeSimpleSkillArray(v6, classPassive, (System_Int32_array *)v6, v7);
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
  __int64 v13; // x0
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v15; // 0:x0.8

  if ( (byte_4214010 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleSkillData___TypeInfo, skillIds);
    byte_4214010 = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_B0D8BC(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
          v15 = (SimpleSkillData_o)&v14;
          v14 = 0LL;
          SimpleSkillData___ctor(v15, v10, v11, 0LL);
          if ( !v6 )
            sub_B0D97C(v8);
          if ( v9 >= v6->max_length )
          {
LABEL_13:
            v13 = sub_B0D9A8(v8);
            sub_B0D948(v13, 0LL);
          }
          *(_QWORD *)&v6->m_Items[v9++].fields.lv = v14;
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
  System_Int32_array *result; // x0

  if ( (byte_421400C & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_421400C = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int64_array *result; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_421400E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v3);
    byte_421400E = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
    if ( !result )
      sub_B0D97C(0LL);
    if ( !result->max_length )
    {
      v6 = sub_B0D9A8(result);
      sub_B0D948(v6, 0LL);
    }
    result->m_Items[0] = this->fields.equipTargetId1;
  }
  return result;
}


System_Int32_array *__fastcall BattleUserServantData__getBattleSkillIdList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  struct AddSkillInfoData_array *addSkills; // x20
  int max_length; // w8
  __int64 v11; // x22
  AddSkillInfoData_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_421400A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_421400A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_12;
  System_Collections_Generic_List_int___Add(
    v7,
    this->fields.skillId1,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v7,
    this->fields.skillId2,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v7,
    this->fields.skillId3,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    max_length = addSkills->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
        {
          v14 = sub_B0D9A8(v8);
          sub_B0D948(v14, 0LL);
        }
        v12 = addSkills->m_Items[v11];
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          v12->fields.skillId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = addSkills->max_length;
        if ( (int)++v11 >= max_length )
          return System_Collections_Generic_List_int___ToArray(
                   v7,
                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_12:
      sub_B0D97C(v8);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleUserServantData__getBattleSvtId(BattleUserServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t result; // w0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4214009 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4214009 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *SkillLevelList; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *v10; // x20
  const MethodInfo *v11; // x1
  System_Int32_array *BattleSkillIdList; // x0
  int v13; // w19

  if ( (byte_421400B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_421400B = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor_50000796(
    v10,
    SkillLevelList,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v11);
  if ( !BattleSkillIdList || !v10 )
    sub_B0D97C(BattleSkillIdList);
  v13 = BattleSkillIdList->max_length - v10->fields._size;
  if ( v13 >= 1 )
  {
    do
    {
      System_Collections_Generic_List_int___Add(
        v10,
        1,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      --v13;
    }
    while ( v13 );
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}