void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  if ( (byte_42AFC6C & 1) == 0 )
  {
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42AFC6C = 1;
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
  System_Int32_array *AddPassiveSkill; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v7; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_42AFC67 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AFC67 = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_B52A5C(0LL, v4);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_1B669E0 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_Collections_Generic_List_int__o *v4; // x19
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *v6; // x0
  __int64 v7; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v10; // w22
  AddSkillData_o *v11; // x24
  System_Int32_array *v12; // x19
  BattleUserServantData_o *v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x0

  if ( (byte_42AFC6B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AFC6B = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_16:
    sub_B52A5C(v6, v7);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= max_length )
      {
        v15 = sub_B52A88(v6);
        sub_B52A28(v15, 0LL);
      }
      v11 = classBoardAddPassiveSkills->m_Items[v10];
      if ( !v11 )
        goto LABEL_16;
      if ( !v4 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v4,
        v11->fields.id,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v5 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v5,
        v11->fields.lv,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v10 < max_length );
  }
  if ( !v4 )
    goto LABEL_16;
  v6 = System_Collections_Generic_List_int___ToArray(
         v4,
         (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_16;
  v12 = v6;
  v13 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v5,
                                     (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v13, v12, (System_Int32_array *)v13, v14);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0
  BattleUserServantData_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42AFC69 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AFC69 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_1B669E0 *)Method_System_Linq_Enumerable_Repeat_int___);
  v5 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v4,
                                    (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  return BattleUserServantData__MakeSimpleSkillArray(v5, classPassive, (System_Int32_array *)v5, v6);
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

  if ( (byte_42AFC6A & 1) == 0 )
  {
    sub_B52984(&SimpleSkillData___TypeInfo);
    byte_42AFC6A = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_B5299C(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
            sub_B52A5C(v8, v12);
          if ( v9 >= v6->max_length )
          {
LABEL_13:
            v14 = sub_B52A88(v8);
            sub_B52A28(v14, 0LL);
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
  System_Int32_array *result; // x0

  if ( (byte_42AFC66 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AFC66 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Int64_array *result; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x0

  if ( (byte_42AFC68 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42AFC68 = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v4->static_fields->SvtEquipMax);
    if ( !result )
      sub_B52A5C(0LL, v5);
    if ( !result->max_length )
    {
      v6 = sub_B52A88(result);
      sub_B52A28(v6, 0LL);
    }
    result->m_Items[0] = this->fields.equipTargetId1;
  }
  return result;
}


System_Int32_array *__fastcall BattleUserServantData__getBattleSkillIdList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct AddSkillInfoData_array *addSkills; // x20
  int max_length; // w8
  __int64 v8; // x22
  AddSkillInfoData_o *v9; // x8
  __int64 v11; // x0

  if ( (byte_42AFC64 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AFC64 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_12;
  System_Collections_Generic_List_int___Add(
    v3,
    this->fields.skillId1,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v3,
    this->fields.skillId2,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v3,
    this->fields.skillId3,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    max_length = addSkills->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
        {
          v11 = sub_B52A88(v4);
          sub_B52A28(v11, 0LL);
        }
        v9 = addSkills->m_Items[v8];
        if ( !v9 )
          break;
        System_Collections_Generic_List_int___Add(
          v3,
          v9->fields.skillId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = addSkills->max_length;
        if ( (int)++v8 >= max_length )
          return System_Collections_Generic_List_int___ToArray(
                   v3,
                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_12:
      sub_B52A5C(v4, v5);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42AFC63 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFC63 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL) == 1
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
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
  System_Collections_Generic_IEnumerable_T__o *SkillLevelList; // x21
  System_Collections_Generic_List_int__o *v4; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *BattleSkillIdList; // x0
  __int64 v7; // x1
  int v8; // w19

  if ( (byte_42AFC65 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AFC65 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v4,
    SkillLevelList,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v5);
  if ( !BattleSkillIdList || !v4 )
    sub_B52A5C(BattleSkillIdList, v7);
  v8 = BattleSkillIdList->max_length - v4->fields._size;
  if ( v8 >= 1 )
  {
    do
    {
      System_Collections_Generic_List_int___Add(
        v4,
        1,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      --v8;
    }
    while ( v8 );
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}