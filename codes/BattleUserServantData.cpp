void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  if ( (byte_40F9000 & 1) == 0 )
  {
    sub_B16FFC(&UserServantEntity_TypeInfo, method);
    byte_40F9000 = 1;
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

  if ( (byte_40F8FFB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_40F8FFB = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_B170D4();
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_19BDCB0 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v22; // w22
  AddSkillData_o *v23; // x24
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x19
  BattleUserServantData_o *v26; // x0
  const MethodInfo *v27; // x3

  if ( (byte_40F8FFF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_40F8FFF = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v6,
                                                    v7,
                                                    v8,
                                                    v9);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_16:
    sub_B170D4();
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v23 = classBoardAddPassiveSkills->m_Items[v22];
      if ( !v23 )
        goto LABEL_16;
      if ( !v11 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v11,
        v23->fields.id,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v16 )
        goto LABEL_16;
      System_Collections_Generic_List_int___Add(
        v16,
        v23->fields.lv,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  if ( !v11 )
    goto LABEL_16;
  v24 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v16 )
    goto LABEL_16;
  v25 = v24;
  v26 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v16,
                                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v26, v25, (System_Int32_array *)v26, v27);
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

  if ( (byte_40F8FFD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_40F8FFD = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_19BDCB0 *)Method_System_Linq_Enumerable_Repeat_int___);
  v6 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v5,
                                    (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned __int64 v11; // x23
  int32_t v12; // w1
  int32_t v13; // w2
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v16; // 0:x0.8

  if ( (byte_40F8FFE & 1) == 0 )
  {
    sub_B16FFC(&SimpleSkillData___TypeInfo, skillIds);
    byte_40F8FFE = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_B17014(SimpleSkillData___TypeInfo, (unsigned int)v7, skillLvs);
      v6 = (SimpleSkillData_array *)v8;
      if ( (int)v7 >= 1 )
      {
        v11 = 0LL;
        do
        {
          if ( v11 >= skillIds->max_length || v11 >= skillLvs->max_length )
            goto LABEL_13;
          v12 = skillIds->m_Items[v11 + 1];
          v13 = skillLvs->m_Items[v11 + 1];
          v16 = (SimpleSkillData_o)&v15;
          v15 = 0LL;
          SimpleSkillData___ctor(v16, v12, v13, 0LL);
          if ( !v6 )
            sub_B170D4();
          if ( v11 >= v6->max_length )
          {
LABEL_13:
            sub_B17100(v8, v9, v10);
            sub_B170A0();
          }
          *(_QWORD *)&v6->m_Items[v11++].fields.lv = v15;
        }
        while ( (__int64)v11 < (int)v7 );
      }
    }
  }
  return v6;
}


System_Int32_array *__fastcall BattleUserServantData__getAddPassiveSkill(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_40F8FFA & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F8FFA = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int64_array *result; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_40F8FFC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v4);
    byte_40F8FFC = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax, v2);
    if ( !result )
      sub_B170D4();
    if ( !result->max_length )
    {
      sub_B17100(result, v7, v8);
      sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct AddSkillInfoData_array *addSkills; // x20
  int max_length; // w8
  __int64 v15; // x22
  AddSkillInfoData_o *v16; // x8

  if ( (byte_40F8FF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F8FF8 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9 )
    goto LABEL_12;
  System_Collections_Generic_List_int___Add(
    v9,
    this->fields.skillId1,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v9,
    this->fields.skillId2,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v9,
    this->fields.skillId3,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    max_length = addSkills->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
        {
          sub_B17100(v10, v11, v12);
          sub_B170A0();
        }
        v16 = addSkills->m_Items[v15];
        if ( !v16 )
          break;
        System_Collections_Generic_List_int___Add(
          v9,
          v16->fields.skillId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = addSkills->max_length;
        if ( (int)++v15 >= max_length )
          return System_Collections_Generic_List_int___ToArray(
                   v9,
                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_12:
      sub_B170D4();
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_40F8FF7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8FF7 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) == 1
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_int__o *v12; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *BattleSkillIdList; // x0
  int v15; // w19

  if ( (byte_40F8FF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F8FF9 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v8,
                                                    v9,
                                                    v10,
                                                    v11);
  System_Collections_Generic_List_int____ctor_49346956(
    v12,
    SkillLevelList,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v13);
  if ( !BattleSkillIdList || !v12 )
    sub_B170D4();
  v15 = BattleSkillIdList->max_length - v12->fields._size;
  if ( v15 >= 1 )
  {
    do
    {
      System_Collections_Generic_List_int___Add(
        v12,
        1,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      --v15;
    }
    while ( v15 );
  }
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}