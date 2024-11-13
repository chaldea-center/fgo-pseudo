void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  UserServantEntity___ctor((UserServantEntity_o *)this, 0LL);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetAddPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *AddPassiveSkill; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4B15CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Repeat_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v4, v5);
    byte_4B15CE6 = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v10 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1BCAA3C(0LL, v7);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 1,
                                                                 AddPassiveSkill->max_length,
                                                                 (const MethodInfo_2F3BEBC *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v11,
                        (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    addPassiveLvs = AddPassiveSkill;
  }
  return BattleUserServantData__MakeSimpleSkillArray((BattleUserServantData_o *)AddPassiveSkill, v10, addPassiveLvs, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_int__o *v18; // x20
  System_Int32_array *v19; // x0
  __int64 id; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v23; // w22
  AddSkillData_o *v24; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  System_Int32_array *v31; // x19
  BattleUserServantData_o *v32; // x0
  const MethodInfo *v33; // x3

  if ( (byte_4B15CEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    byte_4B15CEA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1BCAA3C(v19, id);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    do
    {
      if ( v23 >= max_length )
        sub_1BCAA44(v19, id);
      v24 = classBoardAddPassiveSkills->m_Items[v23];
      if ( !v24 )
        goto LABEL_24;
      if ( !v14 )
        goto LABEL_24;
      id = (unsigned int)v24->fields.id;
      items = v14->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v18 )
        goto LABEL_24;
      id = (unsigned int)v24->fields.lv;
      v28 = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++v18->fields._version;
      if ( !v28 )
        goto LABEL_24;
      v30 = v18->fields._size;
      if ( (unsigned int)v30 >= v28->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v18,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = v30 + 1;
        v28->m_Items[v30 + 1] = id;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v23 < max_length );
  }
  if ( !v14 )
    goto LABEL_24;
  v19 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v18 )
    goto LABEL_24;
  v31 = v19;
  v32 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v18,
                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v32, v31, (System_Int32_array *)v32, v33);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  BattleUserServantData_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B15CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Repeat_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v4, v5);
    byte_4B15CE8 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_2F3BEBC *)Method_System_Linq_Enumerable_Repeat_int___);
  v8 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v7,
                                    (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return BattleUserServantData__MakeSimpleSkillArray(v8, classPassive, (System_Int32_array *)v8, v9);
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
  unsigned __int64 v10; // x23
  int32_t v11; // w1
  int32_t v12; // w2
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v15; // 0:x0.8

  if ( (byte_4B15CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleSkillData___TypeInfo, skillIds, skillLvs);
    byte_4B15CE9 = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_1BCA888(SimpleSkillData___TypeInfo, (unsigned int)v7);
      v6 = (SimpleSkillData_array *)v8;
      if ( (int)v7 >= 1 )
      {
        v10 = 0LL;
        do
        {
          if ( v10 >= skillIds->max_length || v10 >= skillLvs->max_length )
            goto LABEL_13;
          v11 = skillIds->m_Items[v10 + 1];
          v12 = skillLvs->m_Items[v10 + 1];
          v15 = (SimpleSkillData_o)&v14;
          v14 = 0LL;
          SimpleSkillData___ctor(v15, v11, v12, 0LL);
          if ( !v6 )
            sub_1BCAA3C(v8, v9);
          if ( v10 >= v6->max_length )
LABEL_13:
            sub_1BCAA44(v8, v9);
          *(_QWORD *)&v6->m_Items[v10++].fields.lv = v14;
        }
        while ( (unsigned int)v7 != v10 );
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

  if ( (byte_4B15CE5 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B15CE5 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int64_array *result; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B15CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&long___TypeInfo, v4, v5);
    byte_4B15CE7 = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v7 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
    if ( !result )
      sub_1BCAA3C(0LL, v8);
    if ( !result->max_length )
      sub_1BCAA44(result, v8);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  __int64 skillId1; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x8
  __int64 size; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  __int64 v20; // x8
  __int64 v21; // x22
  AddSkillInfoData_o *v22; // x9
  struct System_Int32_array *v23; // x9
  _QWORD *v24; // x10
  __int64 v25; // x11

  if ( (byte_4B15CE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B15CE3 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v11 )
    goto LABEL_27;
  skillId1 = (unsigned int)this->fields.skillId1;
  items = v11->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      skillId1,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    v15 = Method_System_Collections_Generic_List_int__Add__;
    items = v11->fields._items;
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId2;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_27;
  v17 = v11->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      skillId1,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    v15 = Method_System_Collections_Generic_List_int__Add__;
    items = v11->fields._items;
  }
  else
  {
    v11->fields._size = v17 + 1;
    items->m_Items[v17 + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId3;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_27;
  v18 = v11->fields._size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      skillId1,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = v18 + 1;
    items->m_Items[v18 + 1] = skillId1;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v20 = *(_QWORD *)&addSkills->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= (unsigned int)v20 )
          sub_1BCAA44(v12, skillId1);
        v22 = addSkills->m_Items[v21];
        if ( !v22 )
          break;
        skillId1 = (unsigned int)v22->fields.skillId;
        v23 = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v23 )
          break;
        v25 = v11->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            skillId1,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          v20 = *(_QWORD *)&addSkills->max_length;
        }
        else
        {
          v11->fields._size = v25 + 1;
          v23->m_Items[v25 + 1] = skillId1;
        }
        if ( (int)++v21 >= (int)v20 )
          return System_Collections_Generic_List_int___ToArray(
                   v11,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1BCAA3C(v12, skillId1);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleUserServantData__getBattleSvtId(BattleUserServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x1
  int32_t result; // w0
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B15CE2 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B15CE2 = 1;
  }
  v5 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    *(_QWORD *)&v11.fields.currentCryptoKey = v9;
    *(_QWORD *)&v11.fields.fakeValue = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *SkillLevelList; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x19
  const MethodInfo *v17; // x1
  System_Int32_array *BattleSkillIdList; // x0
  __int64 v19; // x1
  int32_t size; // w8
  int v21; // w20
  struct System_Int32_array *items; // x9
  _QWORD *v23; // x10

  if ( (byte_4B15CE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B15CE4 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor_56116492(
    v16,
    SkillLevelList,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v17);
  if ( !BattleSkillIdList || !v16 )
    goto LABEL_12;
  size = v16->fields._size;
  v21 = BattleSkillIdList->max_length - size;
  if ( v21 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v16,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v16->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_12:
    sub_1BCAA3C(BattleSkillIdList, v19);
  while ( 1 )
  {
    if ( size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        1,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size + 1] = 1;
    }
    if ( !--v21 )
      return System_Collections_Generic_List_int___ToArray(
               v16,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v16->fields._size;
    items = v16->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}