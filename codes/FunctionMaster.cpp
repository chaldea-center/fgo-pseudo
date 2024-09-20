void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
    byte_4A5B3B1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    55,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_4A5B3B4 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1B885B0(&Method_BasicHelper_IndexValue_DataVals___);
    byte_4A5B3B4 = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = (System_Object_array *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                     this,
                                                                     vals,
                                                                     method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_object_(
                           EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0LL,
                           (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_DataVals___);
  else
    return vals;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FunctionMaster__GetDispValFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        int32_t valsKey,
        const MethodInfo *method)
{
  DataVals_o *DispDataValsFromFunc; // x0

  DispDataValsFromFunc = FunctionMaster__GetDispDataValsFromFunc(this, vals, *(const MethodInfo **)&valsKey);
  if ( DispDataValsFromFunc )
    LODWORD(DispDataValsFromFunc) = DataVals__GetParam(DispDataValsFromFunc, valsKey, 0, 0LL);
  return (int)DispDataValsFromFunc;
}


DataVals_array *__fastcall FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x1
  SkillLvMaster_o *v6; // x19
  System_Object_array *SetTypeDataValArray; // x20
  unsigned int v8; // w25
  FunctionEntity_o *funcEnt; // x0
  int32_t AddStateBuffTypeFromFunction; // w22
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  Il2CppObject *v13; // x0

  if ( (byte_4A5B3B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_DataVals___);
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B3B5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !vals )
    return 0LL;
  v6 = (SkillLvMaster_o *)Master_object;
  SetTypeDataValArray = 0LL;
  v8 = 1;
  do
  {
    funcEnt = vals->fields.funcEnt;
    if ( !funcEnt )
LABEL_24:
      sub_1B8880C(funcEnt, v5);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v5);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(vals, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(vals, 93, 0, 0LL);
      if ( !v6 )
        goto LABEL_24;
    }
    else
    {
      Param = DataVals__GetValue(vals, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(vals, 0LL);
      if ( !v6 )
        goto LABEL_24;
    }
    Entity = SkillLvMaster__GetEntity(v6, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = (System_Object_array *)SkillLvMaster__GetSetTypeDataValArray(v6, Entity, 0LL);
    v13 = BasicHelper__IndexValue_object_(
            SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v13 )
      break;
    vals = (DataVals_o *)v13;
  }
  while ( v8++ < 0xA );
  return (DataVals_array *)SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  int32_t *v19; // x0
  __int64 v20; // x1
  int32_t *v21; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B3B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&FunctionEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_FunctionEntity__TypeInfo);
    byte_4A5B3B2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                       Enumerator,
                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( v19 )
    {
      methodPtr_low = LOBYTE(FunctionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) >= (unsigned int)methodPtr_low
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v6 )
          sub_1B8880C(v19, v20);
        v23 = System_Collections_Generic_List_int___Contains(
                v6,
                v19[4],
                (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v23 )
        {
          if ( !v5 )
            sub_1B8880C(v23, v24);
          items = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_FunctionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(v23, v24);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v21,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v21;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v21, v25, v26);
          }
          System_Collections_Generic_List_int___Remove(
            v6,
            v21[4],
            (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_33;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_33:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v5;
}


DataVals_array *__fastcall FunctionMaster__GetSetTypeDataValArray(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        DataVals_array *dataValArray,
        const MethodInfo *method)
{
  FunctionMaster_o *v6; // x21
  signed int max_length; // w9
  signed int v8; // w8
  __int64 v9; // x24
  Il2CppClass **v10; // x22
  DataVals_o **v11; // x22
  FunctionMaster_o *v12; // t1
  DataVals_o *v13; // x22
  int32_t funcIndex; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4A5B3B3 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_4A5B3B3 = 1;
  }
  funcIndex = 0;
  if ( !dataValArray )
    goto LABEL_15;
  max_length = dataValArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_14;
      v9 = v8;
      v10 = &dataValArray->obj.klass + v8;
      v12 = (FunctionMaster_o *)v10[4];
      v11 = (DataVals_o **)(v10 + 4);
      this = v12;
      if ( !v12 )
        break;
      DataVals__SetDependDataVals((DataVals_o *)this, v6, &funcIndex, 0LL);
      if ( (unsigned int)v9 >= dataValArray->max_length )
        goto LABEL_14;
      if ( !funcIds )
        break;
      if ( (unsigned int)v9 >= funcIds->max_length )
LABEL_14:
        sub_1B88814(this, funcIds);
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_38855916(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_1B8880C(this, funcIds);
  }
  return dataValArray;
}