void __fastcall BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
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

  if ( (byte_49FBF1F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_49FBF1F = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1B64324(0LL);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_2E63B7C *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 lv; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v17; // w22
  AddSkillData_o *v18; // x24
  int32_t id; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  System_Int32_array *v26; // x19
  BattleUserServantData_o *v27; // x0
  const MethodInfo *v28; // x3

  if ( (byte_49FBF23 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49FBF23 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v6, v7);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1B64324(v13);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= max_length )
        sub_1B6432C(v13, lv);
      v18 = classBoardAddPassiveSkills->m_Items[v17];
      if ( !v18 )
        goto LABEL_24;
      if ( !v9 )
        goto LABEL_24;
      id = v18->fields.id;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          id,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v12 )
        goto LABEL_24;
      lv = (unsigned int)v18->fields.lv;
      v23 = v12->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !v23 )
        goto LABEL_24;
      v25 = v12->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          lv,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = v25 + 1;
        v23->m_Items[v25 + 1] = lv;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v17 < max_length );
  }
  if ( !v9 )
    goto LABEL_24;
  v13 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v12 )
    goto LABEL_24;
  v26 = v13;
  v27 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v12,
                                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v27, v26, (System_Int32_array *)v27, v28);
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

  if ( (byte_49FBF21 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_49FBF21 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_2E63B7C *)Method_System_Linq_Enumerable_Repeat_int___);
  v6 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v5,
                                    (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  unsigned __int64 v10; // x23
  int32_t v11; // w1
  int32_t v12; // w2
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  SimpleSkillData_o v15; // 0:x0.8

  if ( (byte_49FBF22 & 1) == 0 )
  {
    sub_1B640C8(&SimpleSkillData___TypeInfo, skillIds);
    byte_49FBF22 = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_1B64170(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
            sub_1B64324(v8);
          if ( v10 >= v6->max_length )
LABEL_13:
            sub_1B6432C(v8, v9);
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

  if ( (byte_49FBF1E & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FBF1E = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
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
  __int64 v6; // x1

  if ( (byte_49FBF20 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&long___TypeInfo, v3);
    byte_49FBF20 = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    result = (System_Int64_array *)sub_1B64170(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
    if ( !result )
      sub_1B64324(0LL);
    if ( !result->max_length )
      sub_1B6432C(result, v6);
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
  int32_t skillId1; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v11; // x8
  __int64 size; // x10
  int32_t skillId2; // w1
  __int64 v14; // x10
  __int64 skillId3; // x1
  __int64 v16; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  __int64 v18; // x8
  __int64 v19; // x22
  AddSkillInfoData_o *v20; // x9
  struct System_Int32_array *v21; // x9
  _QWORD *v22; // x10
  __int64 v23; // x11

  if ( (byte_49FBF1C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FBF1C = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_27;
  skillId1 = this->fields.skillId1;
  items = v7->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      skillId1,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    v11 = Method_System_Collections_Generic_List_int__Add__;
    items = v7->fields._items;
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size + 1] = skillId1;
  }
  skillId2 = this->fields.skillId2;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_27;
  v14 = v7->fields._size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      skillId2,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    v11 = Method_System_Collections_Generic_List_int__Add__;
    items = v7->fields._items;
  }
  else
  {
    v7->fields._size = v14 + 1;
    items->m_Items[v14 + 1] = skillId2;
  }
  skillId3 = (unsigned int)this->fields.skillId3;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_27;
  v16 = v7->fields._size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      skillId3,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v16 + 1;
    items->m_Items[v16 + 1] = skillId3;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v18 = *(_QWORD *)&addSkills->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)v18 )
          sub_1B6432C(v8, skillId3);
        v20 = addSkills->m_Items[v19];
        if ( !v20 )
          break;
        skillId3 = (unsigned int)v20->fields.skillId;
        v21 = v7->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v21 )
          break;
        v23 = v7->fields._size;
        if ( (unsigned int)v23 >= v21->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            skillId3,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          v18 = *(_QWORD *)&addSkills->max_length;
        }
        else
        {
          v7->fields._size = v23 + 1;
          v21->m_Items[v23 + 1] = skillId3;
        }
        if ( (int)++v19 >= (int)v18 )
          return System_Collections_Generic_List_int___ToArray(
                   v7,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1B64324(v8);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49FBF1B & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FBF1B = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL);
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
  System_Collections_Generic_List_int__o *v10; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *BattleSkillIdList; // x0
  int32_t size; // w8
  int v14; // w20
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10

  if ( (byte_49FBF1D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FBF1D = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor_55113648(
    v10,
    SkillLevelList,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v11);
  if ( !BattleSkillIdList || !v10 )
    goto LABEL_12;
  size = v10->fields._size;
  v14 = BattleSkillIdList->max_length - size;
  if ( v14 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v10,
             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v10->fields._items;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++v10->fields._version;
  if ( !items )
LABEL_12:
    sub_1B64324(BattleSkillIdList);
  while ( 1 )
  {
    if ( size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        1,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = 1;
    }
    if ( !--v14 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v10->fields._size;
    items = v10->fields._items;
    v16 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}