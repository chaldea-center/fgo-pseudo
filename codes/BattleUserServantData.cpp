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
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Int32_array *addPassiveLvs; // x2
  System_Int32_array *v8; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4BB41C7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_4BB41C7 = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v8 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1C13F80(0LL, v5);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_2FB8F54 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v9,
                        (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
    addPassiveLvs = AddPassiveSkill;
  }
  return BattleUserServantData__MakeSimpleSkillArray((BattleUserServantData_o *)AddPassiveSkill, v8, addPassiveLvs, v6);
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
  System_Collections_Generic_List_int__o *v7; // x19
  System_Collections_Generic_List_int__o *v8; // x20
  System_Int32_array *v9; // x0
  __int64 id; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v13; // w22
  AddSkillData_o *v14; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Int32_array *v21; // x19
  BattleUserServantData_o *v22; // x0
  const MethodInfo *v23; // x3

  if ( (byte_4BB41CB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BB41CB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1C13F80(v9, id);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= max_length )
        sub_1C13F88(v9, id);
      v14 = classBoardAddPassiveSkills->m_Items[v13];
      if ( !v14 )
        goto LABEL_24;
      if ( !v7 )
        goto LABEL_24;
      id = (unsigned int)v14->fields.id;
      items = v7->fields._items;
      v16 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          id,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v8 )
        goto LABEL_24;
      id = (unsigned int)v14->fields.lv;
      v18 = v8->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v8->fields._version;
      if ( !v18 )
        goto LABEL_24;
      v20 = v8->fields._size;
      if ( (unsigned int)v20 >= v18->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          id,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = v20 + 1;
        v18->m_Items[v20 + 1] = id;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v13 < max_length );
  }
  if ( !v7 )
    goto LABEL_24;
  v9 = System_Collections_Generic_List_int___ToArray(
         v7,
         (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_24;
  v21 = v9;
  v22 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v8,
                                     (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v22, v21, (System_Int32_array *)v22, v23);
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

  if ( (byte_4BB41C9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_4BB41C9 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_2FB8F54 *)Method_System_Linq_Enumerable_Repeat_int___);
  v6 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v5,
                                    (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4BB41CA & 1) == 0 )
  {
    sub_1C13D24(&SimpleSkillData___TypeInfo, skillIds);
    byte_4BB41CA = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_1C13DCC(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
            sub_1C13F80(v8, v9);
          if ( v10 >= v6->max_length )
LABEL_13:
            sub_1C13F88(v8, v9);
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

  if ( (byte_4BB41C6 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    byte_4BB41C6 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
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

  if ( (byte_4BB41C8 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&long___TypeInfo, v3);
    byte_4BB41C8 = 1;
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
    result = (System_Int64_array *)sub_1C13DCC(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
    if ( !result )
      sub_1C13F80(0LL, v6);
    if ( !result->max_length )
      sub_1C13F88(result, v6);
    result->m_Items[0] = this->fields.equipTargetId1;
  }
  return result;
}


System_Int32_array *__fastcall BattleUserServantData__getBattleSkillIdList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  __int64 skillId1; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v10; // x8
  __int64 size; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  __int64 v15; // x8
  __int64 v16; // x22
  AddSkillInfoData_o *v17; // x9
  struct System_Int32_array *v18; // x9
  _QWORD *v19; // x10
  __int64 v20; // x11

  if ( (byte_4BB41C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BB41C4 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    goto LABEL_27;
  skillId1 = (unsigned int)this->fields.skillId1;
  items = v6->fields._items;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    v10 = Method_System_Collections_Generic_List_int__Add__;
    items = v6->fields._items;
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId2;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_27;
  v12 = v6->fields._size;
  if ( (unsigned int)v12 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    v10 = Method_System_Collections_Generic_List_int__Add__;
    items = v6->fields._items;
  }
  else
  {
    v6->fields._size = v12 + 1;
    items->m_Items[v12 + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId3;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_27;
  v13 = v6->fields._size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v13 + 1;
    items->m_Items[v13 + 1] = skillId1;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v15 = *(_QWORD *)&addSkills->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v15 )
          sub_1C13F88(v7, skillId1);
        v17 = addSkills->m_Items[v16];
        if ( !v17 )
          break;
        skillId1 = (unsigned int)v17->fields.skillId;
        v18 = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !v18 )
          break;
        v20 = v6->fields._size;
        if ( (unsigned int)v20 >= v18->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            skillId1,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          v15 = *(_QWORD *)&addSkills->max_length;
        }
        else
        {
          v6->fields._size = v20 + 1;
          v18->m_Items[v20 + 1] = skillId1;
        }
        if ( (int)++v16 >= (int)v15 )
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1C13F80(v7, skillId1);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4BB41C3 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB41C3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v8, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v9, 0LL);
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
  System_Collections_Generic_List_int__o *v8; // x19
  const MethodInfo *v9; // x1
  System_Int32_array *BattleSkillIdList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  int v13; // w20
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10

  if ( (byte_4BB41C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4BB41C5 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56687228(
    v8,
    SkillLevelList,
    (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v9);
  if ( !BattleSkillIdList || !v8 )
    goto LABEL_12;
  size = v8->fields._size;
  v13 = BattleSkillIdList->max_length - size;
  if ( v13 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v8->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !items )
LABEL_12:
    sub_1C13F80(BattleSkillIdList, v11);
  while ( 1 )
  {
    if ( size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        1,
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size + 1] = 1;
    }
    if ( !--v13 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v8->fields._size;
    items = v8->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}