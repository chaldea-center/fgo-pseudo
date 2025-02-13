void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
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

  if ( (byte_4BDC02B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4BDC02B = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1C22094(0LL, v4);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_2FD9A04 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 id; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v10; // w22
  AddSkillData_o *v11; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct System_Int32_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Int32_array *v18; // x19
  BattleUserServantData_o *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4BDC02F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDC02F = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1C22094(v6, id);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= max_length )
        sub_1C2209C(v6, id);
      v11 = classBoardAddPassiveSkills->m_Items[v10];
      if ( !v11 )
        goto LABEL_24;
      if ( !v4 )
        goto LABEL_24;
      id = (unsigned int)v11->fields.id;
      items = v4->fields._items;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v5 )
        goto LABEL_24;
      id = (unsigned int)v11->fields.lv;
      v15 = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !v15 )
        goto LABEL_24;
      v17 = v5->fields._size;
      if ( (unsigned int)v17 >= v15->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = v17 + 1;
        v15->m_Items[v17 + 1] = id;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v10 < max_length );
  }
  if ( !v4 )
    goto LABEL_24;
  v6 = System_Collections_Generic_List_int___ToArray(
         v4,
         (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  v18 = v6;
  v19 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v5,
                                     (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v19, v18, (System_Int32_array *)v19, v20);
}


SimpleSkillData_array *__fastcall BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0
  BattleUserServantData_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4BDC02D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4BDC02D = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_2FD9A04 *)Method_System_Linq_Enumerable_Repeat_int___);
  v5 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v4,
                                    (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v9; // x1
  unsigned __int64 v10; // x23
  int32_t v11; // w1
  int32_t v12; // w2
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v15; // 0:x0.8

  if ( (byte_4BDC02E & 1) == 0 )
  {
    sub_1C21E38(&SimpleSkillData___TypeInfo);
    byte_4BDC02E = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_1C21EE0(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
            sub_1C22094(v8, v9);
          if ( v10 >= v6->max_length )
LABEL_13:
            sub_1C2209C(v8, v9);
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
  System_Int32_array *result; // x0

  if ( (byte_4BDC02A & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDC02A = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
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

  if ( (byte_4BDC02C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    byte_4BDC02C = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v4->static_fields->SvtEquipMax);
    if ( !result )
      sub_1C22094(0LL, v5);
    if ( !result->max_length )
      sub_1C2209C(result, v5);
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
  __int64 skillId1; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v7; // x8
  __int64 size; // x10
  __int64 v9; // x10
  __int64 v10; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  __int64 v12; // x8
  __int64 v13; // x22
  AddSkillInfoData_o *v14; // x9
  struct System_Int32_array *v15; // x9
  _QWORD *v16; // x10
  __int64 v17; // x11

  if ( (byte_4BDC028 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDC028 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_27;
  skillId1 = (unsigned int)this->fields.skillId1;
  items = v3->fields._items;
  v7 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    v7 = Method_System_Collections_Generic_List_int__Add__;
    items = v3->fields._items;
  }
  else
  {
    v3->fields._size = size + 1;
    items->m_Items[size + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId2;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  v9 = v3->fields._size;
  if ( (unsigned int)v9 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    v7 = Method_System_Collections_Generic_List_int__Add__;
    items = v3->fields._items;
  }
  else
  {
    v3->fields._size = v9 + 1;
    items->m_Items[v9 + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId3;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  v10 = v3->fields._size;
  if ( (unsigned int)v10 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v10 + 1;
    items->m_Items[v10 + 1] = skillId1;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v12 = *(_QWORD *)&addSkills->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= (unsigned int)v12 )
          sub_1C2209C(v4, skillId1);
        v14 = addSkills->m_Items[v13];
        if ( !v14 )
          break;
        skillId1 = (unsigned int)v14->fields.skillId;
        v15 = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v15 )
          break;
        v17 = v3->fields._size;
        if ( (unsigned int)v17 >= v15->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            skillId1,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          v12 = *(_QWORD *)&addSkills->max_length;
        }
        else
        {
          v3->fields._size = v17 + 1;
          v15->m_Items[v17 + 1] = skillId1;
        }
        if ( (int)++v13 >= (int)v12 )
          return System_Collections_Generic_List_int___ToArray(
                   v3,
                   (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1C22094(v4, skillId1);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4BDC027 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDC027 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v8, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL);
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
  System_Collections_Generic_List_int__o *v4; // x19
  const MethodInfo *v5; // x1
  System_Int32_array *BattleSkillIdList; // x0
  __int64 v7; // x1
  int32_t size; // w8
  int v9; // w20
  struct System_Int32_array *items; // x9
  _QWORD *v11; // x10

  if ( (byte_4BDC029 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDC029 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v4,
    SkillLevelList,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v5);
  if ( !BattleSkillIdList || !v4 )
    goto LABEL_12;
  size = v4->fields._size;
  v9 = BattleSkillIdList->max_length - size;
  if ( v9 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v4,
             (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v4->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v4->fields._version;
  if ( !items )
LABEL_12:
    sub_1C22094(BattleSkillIdList, v7);
  while ( 1 )
  {
    if ( size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v4,
        1,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v4->fields._size = size + 1;
      items->m_Items[size + 1] = 1;
    }
    if ( !--v9 )
      return System_Collections_Generic_List_int___ToArray(
               v4,
               (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v4->fields._size;
    items = v4->fields._items;
    v11 = Method_System_Collections_Generic_List_int__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}