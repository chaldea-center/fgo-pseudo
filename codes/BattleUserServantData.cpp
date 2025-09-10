void BattleUserServantData___ctor(BattleUserServantData_o *this, const MethodInfo *method)
{
  UserServantEntity___ctor((UserServantEntity_o *)this, 0);
}


SimpleSkillData_array *BattleUserServantData__GetAddPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *AddPassiveSkill; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v7; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4C26D66 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C26D66 = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v7 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1C2D6EC(0, v4);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_30FEC1C *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v8,
                        (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    addPassiveLvs = AddPassiveSkill;
  }
  return BattleUserServantData__MakeSimpleSkillArray((BattleUserServantData_o *)AddPassiveSkill, v7, addPassiveLvs, v5);
}


SimpleSkillData_array *BattleUserServantData__GetAppendPassiveSkillArray(
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


SimpleSkillData_array *BattleUserServantData__GetClassBoardSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *v6; // x0
  __int64 id; // x1
  __int64 v8; // x2
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v11; // w22
  AddSkillData_o *v12; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  System_Int32_array *v19; // x19
  BattleUserServantData_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4C26D6A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C26D6A = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0) )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1C2D6EC(v6, id);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= max_length )
        sub_1C2D6F4(v6, id, v8);
      v12 = classBoardAddPassiveSkills->m_Items[v11];
      if ( !v12 )
        goto LABEL_24;
      if ( !v4 )
        goto LABEL_24;
      id = (unsigned int)v12->fields.id;
      items = v4->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      if ( !v5 )
        goto LABEL_24;
      id = (unsigned int)v12->fields.lv;
      v16 = v5->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !v16 )
        goto LABEL_24;
      v18 = v5->fields._size;
      if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = v18 + 1;
        v16->m_Items[v18] = id;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v11 < max_length );
  }
  if ( !v4 )
    goto LABEL_24;
  v6 = System_Collections_Generic_List_int___ToArray(
         v4,
         (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  v19 = v6;
  v20 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v5,
                                     (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v20, v19, (System_Int32_array *)v20, v21);
}


SimpleSkillData_array *BattleUserServantData__GetClassPassiveSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *classPassive; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0
  BattleUserServantData_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C26D68 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C26D68 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_30FEC1C *)Method_System_Linq_Enumerable_Repeat_int___);
  v5 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v4,
                                    (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  return BattleUserServantData__MakeSimpleSkillArray(v5, classPassive, (System_Int32_array *)v5, v6);
}


SimpleSkillData_array *BattleUserServantData__GetSelfSkillArray(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *BattleSkillIdList; // x20
  BattleUserServantData_o *v4; // x0
  const MethodInfo *v5; // x3

  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, method);
  v4 = (BattleUserServantData_o *)((__int64 (__fastcall *)(BattleUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                                    this,
                                    this->klass->vtable._6_getSkillLevelList.method);
  return BattleUserServantData__MakeSimpleSkillArray(v4, BattleSkillIdList, (System_Int32_array *)v4, v5);
}


bool BattleUserServantData__IsGrand(BattleUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.grandSvt == 1;
}


bool BattleUserServantData__IsUseGrandBoard(BattleUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.useGrandBoard == 2;
}


SimpleSkillData_array *BattleUserServantData__MakeSimpleSkillArray(
        BattleUserServantData_o *this,
        System_Int32_array *skillIds,
        System_Int32_array *skillLvs,
        const MethodInfo *method)
{
  __int64 v6; // x21
  il2cpp_array_size_t max_length; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned __int64 v11; // x23
  int32_t v12; // w1
  int32_t v13; // w2
  SimpleSkillData_o v14; // x0
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C26D69 & 1) == 0 )
  {
    sub_1C2D490(&SimpleSkillData___TypeInfo);
    byte_4C26D69 = 1;
  }
  v6 = 0;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      max_length = skillIds->max_length;
      v8 = sub_1C2D538(SimpleSkillData___TypeInfo, (unsigned int)max_length);
      v6 = v8;
      if ( (int)max_length >= 1 )
      {
        v11 = 0;
        do
        {
          if ( v11 >= LODWORD(skillIds->max_length) || v11 >= LODWORD(skillLvs->max_length) )
            goto LABEL_13;
          v12 = skillIds->m_Items[v11];
          v13 = skillLvs->m_Items[v11];
          v14 = (SimpleSkillData_o)&v16;
          v16 = 0;
          SimpleSkillData___ctor(v14, v12, v13, 0);
          if ( !v6 )
            sub_1C2D6EC(v8, v9);
          if ( v11 >= *(unsigned int *)(v6 + 24) )
LABEL_13:
            sub_1C2D6F4(v8, v9, v10);
          *(_QWORD *)(v6 + 32 + 8 * v11++) = v16;
        }
        while ( (unsigned int)max_length != v11 );
      }
    }
  }
  return (SimpleSkillData_array *)v6;
}


bool BattleUserServantData__ValidUseGrandBoard(BattleUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.useGrandBoard > 0;
}


System_Int32_array *BattleUserServantData__getAddPassiveSkill(BattleUserServantData_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4C26D65 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C26D65 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  return result;
}


System_Int64_array *BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Int64_array *result; // x0
  int32_t grandSvt; // w20
  BalanceConfig_c *v5; // x0
  __int64 v6; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int max_length; // w8

  if ( (byte_4C26D67 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C26D67 = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    grandSvt = this->fields.grandSvt;
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    v6 = 48;
    if ( grandSvt == 1 )
      v6 = 52;
    result = (System_Int64_array *)sub_1C2D538(
                                     long___TypeInfo,
                                     *(unsigned int *)((char *)&v5->static_fields->CriticalRateToAddByQuickFirstBonus
                                                     + v6));
    if ( !result )
      sub_1C2D6EC(0, v7);
    max_length = result->max_length;
    if ( !max_length )
      goto LABEL_15;
    result->m_Items[0] = this->fields.equipTargetId1;
    if ( grandSvt != 1 )
      return result;
    if ( max_length <= 1 || (result->m_Items[1] = this->fields.equipTargetId2, max_length == 2) )
LABEL_15:
      sub_1C2D6F4(result, v7, v8);
    result->m_Items[2] = this->fields.equipTargetId3;
  }
  return result;
}


System_Int32_array *BattleUserServantData__getBattleSkillIdList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 skillId1; // x1
  __int64 v6; // x2
  struct System_Int32_array *items; // x9
  _QWORD *v8; // x8
  __int64 size; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v14; // x22
  AddSkillInfoData_o *v15; // x9
  struct System_Int32_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_4C26D63 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C26D63 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_27;
  skillId1 = (unsigned int)this->fields.skillId1;
  items = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    v8 = Method_System_Collections_Generic_List_int__Add__;
    items = v3->fields._items;
  }
  else
  {
    v3->fields._size = size + 1;
    items->m_Items[size] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId2;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  v10 = v3->fields._size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    v8 = Method_System_Collections_Generic_List_int__Add__;
    items = v3->fields._items;
  }
  else
  {
    v3->fields._size = v10 + 1;
    items->m_Items[v10] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId3;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_27;
  v11 = v3->fields._size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      skillId1,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v11 + 1;
    items->m_Items[v11] = skillId1;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    max_length = addSkills->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= (unsigned int)max_length )
          sub_1C2D6F4(v4, skillId1, v6);
        v15 = addSkills->m_Items[v14];
        if ( !v15 )
          break;
        skillId1 = (unsigned int)v15->fields.skillId;
        v16 = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v16 )
          break;
        v18 = v3->fields._size;
        if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            skillId1,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          max_length = addSkills->max_length;
        }
        else
        {
          v3->fields._size = v18 + 1;
          v16->m_Items[v18] = skillId1;
        }
        if ( (int)++v14 >= (int)max_length )
          return System_Collections_Generic_List_int___ToArray(
                   v3,
                   (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1C2D6EC(v4, skillId1);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t BattleUserServantData__getBattleSvtId(BattleUserServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t result; // w0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C26D62 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C26D62 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
  }
  return result;
}


System_Int32_array *BattleUserServantData__getClassPassive(BattleUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.classPassive;
}


System_Int32_array *BattleUserServantData__getSkillLevelList(BattleUserServantData_o *this, const MethodInfo *method)
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

  if ( (byte_4C26D64 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C26D64 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58115124(
    v4,
    SkillLevelList,
    (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v5);
  if ( !BattleSkillIdList || !v4 )
    goto LABEL_12;
  size = v4->fields._size;
  v9 = LODWORD(BattleSkillIdList->max_length) - size;
  if ( v9 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v4,
             (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v4->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v4->fields._version;
  if ( !items )
LABEL_12:
    sub_1C2D6EC(BattleSkillIdList, v7);
  while ( 1 )
  {
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v4,
        1,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v4->fields._size = size + 1;
      items->m_Items[size] = 1;
    }
    if ( !--v9 )
      return System_Collections_Generic_List_int___ToArray(
               v4,
               (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v4->fields._size;
    items = v4->fields._items;
    v11 = Method_System_Collections_Generic_List_int__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}