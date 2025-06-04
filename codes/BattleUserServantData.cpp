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

  if ( (byte_4B01AC8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_4B01AC8 = 1;
  }
  AddPassiveSkill = BattleUserServantData__getAddPassiveSkill(this, method);
  addPassiveLvs = this->fields.addPassiveLvs;
  v8 = AddPassiveSkill;
  if ( !addPassiveLvs )
  {
    if ( !AddPassiveSkill )
      sub_1BC3264(0LL, v5);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                1,
                                                                AddPassiveSkill->max_length,
                                                                (const MethodInfo_302E014 *)Method_System_Linq_Enumerable_Repeat_int___);
    AddPassiveSkill = System_Linq_Enumerable__ToArray_int_(
                        v9,
                        (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v11; // x2
  struct AddSkillData_array *classBoardAddPassiveSkills; // x21
  int max_length; // w8
  unsigned int v14; // w22
  AddSkillData_o *v15; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  System_Int32_array *v22; // x19
  BattleUserServantData_o *v23; // x0
  const MethodInfo *v24; // x3

  if ( (byte_4B01ACC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B01ACC = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills, 0LL) )
    return 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  if ( !classBoardAddPassiveSkills )
LABEL_24:
    sub_1BC3264(v9, id);
  max_length = classBoardAddPassiveSkills->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= max_length )
        sub_1BC326C(v9, id, v11);
      v15 = classBoardAddPassiveSkills->m_Items[v14];
      if ( !v15 )
        goto LABEL_24;
      if ( !v7 )
        goto LABEL_24;
      id = (unsigned int)v15->fields.id;
      items = v7->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          id,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v8 )
        goto LABEL_24;
      id = (unsigned int)v15->fields.lv;
      v19 = v8->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v8->fields._version;
      if ( !v19 )
        goto LABEL_24;
      v21 = v8->fields._size;
      if ( (unsigned int)v21 >= v19->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          id,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = v21 + 1;
        v19->m_Items[v21 + 1] = id;
      }
      max_length = classBoardAddPassiveSkills->max_length;
    }
    while ( (int)++v14 < max_length );
  }
  if ( !v7 )
    goto LABEL_24;
  v9 = System_Collections_Generic_List_int___ToArray(
         v7,
         (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_24;
  v22 = v9;
  v23 = (BattleUserServantData_o *)System_Collections_Generic_List_int___ToArray(
                                     v8,
                                     (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleUserServantData__MakeSimpleSkillArray(v23, v22, (System_Int32_array *)v23, v24);
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

  if ( (byte_4B01ACA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    byte_4B01ACA = 1;
  }
  classPassive = this->fields.classPassive;
  if ( !classPassive )
    return 0LL;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                              1,
                                                              classPassive->max_length,
                                                              (const MethodInfo_302E014 *)Method_System_Linq_Enumerable_Repeat_int___);
  v6 = (BattleUserServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                    v5,
                                    (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
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


bool __fastcall BattleUserServantData__IsGrand(BattleUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.grandSvt == 1;
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

  if ( (byte_4B01ACB & 1) == 0 )
  {
    sub_1BC3008(&SimpleSkillData___TypeInfo, skillIds);
    byte_4B01ACB = 1;
  }
  v6 = 0LL;
  if ( skillIds )
  {
    if ( skillLvs )
    {
      v7 = *(_QWORD *)&skillIds->max_length;
      v8 = sub_1BC30B0(SimpleSkillData___TypeInfo, (unsigned int)v7);
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
            sub_1BC3264(v8, v9);
          if ( v11 >= v6->max_length )
LABEL_13:
            sub_1BC326C(v8, v9, v10);
          *(_QWORD *)&v6->m_Items[v11++].fields.lv = v15;
        }
        while ( (unsigned int)v7 != v11 );
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

  if ( (byte_4B01AC7 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    byte_4B01AC7 = 1;
  }
  result = this->fields.addPassive;
  if ( !result )
  {
    result = this->fields.passiveSkill;
    if ( !result )
      return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  }
  return result;
}


System_Int64_array *__fastcall BattleUserServantData__getBattleEquipTargetList(
        BattleUserServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int64_array *result; // x0
  int32_t grandSvt; // w20
  BalanceConfig_c *v6; // x0
  __int64 v7; // x9
  __int64 v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B01AC9 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&long___TypeInfo, v3);
    byte_4B01AC9 = 1;
  }
  result = this->fields.equipTargetIds;
  if ( !result )
  {
    grandSvt = this->fields.grandSvt;
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = 48LL;
    if ( grandSvt == 1 )
      v7 = 52LL;
    result = (System_Int64_array *)sub_1BC30B0(
                                     long___TypeInfo,
                                     *(unsigned int *)((char *)&v6->static_fields->CriticalRateToAddByQuickFirstBonus
                                                     + v7));
    if ( !result )
      sub_1BC3264(0LL, v8);
    max_length = result->max_length;
    if ( !max_length )
      goto LABEL_15;
    result->m_Items[0] = this->fields.equipTargetId1;
    if ( grandSvt != 1 )
      return result;
    if ( max_length <= 1 || (result->m_Items[1] = this->fields.equipTargetId2, max_length == 2) )
LABEL_15:
      sub_1BC326C(result, v8, v9);
    result->m_Items[2] = this->fields.equipTargetId3;
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
  __int64 v9; // x2
  struct System_Int32_array *items; // x9
  _QWORD *v11; // x8
  __int64 size; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  struct AddSkillInfoData_array *addSkills; // x20
  __int64 v16; // x8
  __int64 v17; // x22
  AddSkillInfoData_o *v18; // x9
  struct System_Int32_array *v19; // x9
  _QWORD *v20; // x10
  __int64 v21; // x11

  if ( (byte_4B01AC5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B01AC5 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    goto LABEL_27;
  skillId1 = (unsigned int)this->fields.skillId1;
  items = v6->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    v11 = Method_System_Collections_Generic_List_int__Add__;
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
  v13 = v6->fields._size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    v11 = Method_System_Collections_Generic_List_int__Add__;
    items = v6->fields._items;
  }
  else
  {
    v6->fields._size = v13 + 1;
    items->m_Items[v13 + 1] = skillId1;
  }
  skillId1 = (unsigned int)this->fields.skillId3;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_27;
  v14 = v6->fields._size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      skillId1,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v14 + 1;
    items->m_Items[v14 + 1] = skillId1;
  }
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v16 = *(_QWORD *)&addSkills->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= (unsigned int)v16 )
          sub_1BC326C(v7, skillId1, v9);
        v18 = addSkills->m_Items[v17];
        if ( !v18 )
          break;
        skillId1 = (unsigned int)v18->fields.skillId;
        v19 = v6->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !v19 )
          break;
        v21 = v6->fields._size;
        if ( (unsigned int)v21 >= v19->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            skillId1,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          v16 = *(_QWORD *)&addSkills->max_length;
        }
        else
        {
          v6->fields._size = v21 + 1;
          v19->m_Items[v21 + 1] = skillId1;
        }
        if ( (int)++v17 >= (int)v16 )
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_27:
      sub_1BC3264(v7, skillId1);
    }
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B01AC4 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B01AC4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL) == 1
    || (result = this->fields.overwriteSvtId, result <= 0) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL);
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

  if ( (byte_4B01AC6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor___76760816, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4B01AC6 = 1;
  }
  SkillLevelList = (System_Collections_Generic_IEnumerable_T__o *)UserServantEntity__getSkillLevelList(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57161456(
    v8,
    SkillLevelList,
    (const MethodInfo_36836F0 *)Method_System_Collections_Generic_List_int___ctor___76760816);
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(this, v9);
  if ( !BattleSkillIdList || !v8 )
    goto LABEL_12;
  size = v8->fields._size;
  v13 = BattleSkillIdList->max_length - size;
  if ( v13 < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  items = v8->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !items )
LABEL_12:
    sub_1BC3264(BattleSkillIdList, v11);
  while ( 1 )
  {
    if ( size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        1,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size + 1] = 1;
    }
    if ( !--v13 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    size = v8->fields._size;
    items = v8->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_12;
  }
}