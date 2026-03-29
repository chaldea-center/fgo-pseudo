void FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30D58 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
    byte_4D30D58 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    59,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *FunctionMaster__GetDispDataValsFromFunc(FunctionMaster_o *this, DataVals_o *vals, const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_4D30D5B & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1C93AD4(&Method_BasicHelper_IndexValue_DataVals___);
    byte_4D30D5B = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = (System_Object_array *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                     this,
                                                                     vals,
                                                                     method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_object_(
                           EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0,
                           (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_DataVals___);
  else
    return vals;
}


// local variable allocation has failed, the output may be wrong!
int32_t FunctionMaster__GetDispValFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        int32_t valsKey,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  DataVals_o *DispDataValsFromFunc; // x0
  DataVals_o *v8; // x21
  int32_t v9; // w20
  int32_t param[2]; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)param = 0;
  DispDataValsFromFunc = FunctionMaster__GetDispDataValsFromFunc(this, vals, *(const MethodInfo **)&valsKey);
  if ( !DispDataValsFromFunc )
    return 0;
  v8 = DispDataValsFromFunc;
  v9 = DataVals__GetParam(DispDataValsFromFunc, valsKey, 0, 0);
  if ( DataVals__TryGetParam(v8, 222, &param[1], 0) )
    v9 += CondParamAddType__GetAddValue(v8, param[1], classStatisticsInfos, 0);
  if ( DataVals__TryGetParam(v8, 226, param, 0) )
    v9 += CondParamAddType__GetRangeRateValue(v8, param[0], classStatisticsInfos, 0);
  return v9;
}


DataVals_array *FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
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

  if ( (byte_4D30D5C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_DataVals___);
    sub_1C93AD4(&BuffList_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30D5C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !vals )
    return 0;
  v6 = (SkillLvMaster_o *)Master_object;
  SetTypeDataValArray = 0;
  v8 = 1;
  do
  {
    funcEnt = vals->fields.funcEnt;
    if ( !funcEnt )
LABEL_24:
      sub_1C93D2C(funcEnt, v5);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v5);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0) )
      break;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0) )
    {
      Param = DataVals__GetParam(vals, 95, 0, 0);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(vals, 96, 0, 0);
      if ( !v6 )
        goto LABEL_24;
    }
    else
    {
      Param = DataVals__GetValue(vals, 0);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(vals, 0);
      if ( !v6 )
        goto LABEL_24;
    }
    Entity = SkillLvMaster__GetEntity(v6, Param, (int32_t)funcEnt, 0);
    if ( !Entity )
      break;
    SetTypeDataValArray = (System_Object_array *)SkillLvMaster__GetSetTypeDataValArray(v6, Entity, 0);
    v13 = BasicHelper__IndexValue_object_(
            SetTypeDataValArray,
            0,
            0,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v13 )
      break;
    vals = (DataVals_o *)v13;
  }
  while ( v8++ < 0xA );
  return (DataVals_array *)SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *FunctionMaster__GetFunctionEntitiesByIds(
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
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4D30D59 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_FunctionEntity__TypeInfo);
    byte_4D30D59 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( v19 )
    {
      if ( !v6 )
        sub_1C93D2C(v19, v20);
      v22 = System_Collections_Generic_List_int___Contains(
              v6,
              *(_DWORD *)(v19 + 16),
              (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( v22 )
      {
        if ( !v5 )
          sub_1C93D2C(v22, v23);
        items = v5->fields._items;
        v31 = Method_System_Collections_Generic_List_FunctionEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C93D2C(v22, v23);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v21,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v21;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), v21, v24, v25, v26, v27, v28, v29);
        }
        System_Collections_Generic_List_int___Remove(
          v6,
          *(_DWORD *)(v21 + 16),
          (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_31;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_31:
    v37 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v5;
}


DataVals_array *FunctionMaster__GetSetTypeDataValArray(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        DataVals_array *dataValArray,
        const MethodInfo *method)
{
  FunctionMaster_o *v6; // x21
  int max_length; // w9
  signed int v8; // w8
  __int64 v9; // x24
  Il2CppClass **v10; // x22
  DataVals_o **v11; // x22
  FunctionMaster_o *v12; // t1
  DataVals_o *v13; // x22
  int32_t funcIndex; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4D30D5A & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_4D30D5A = 1;
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
      DataVals__SetDependDataVals((DataVals_o *)this, v6, &funcIndex, 0);
      if ( (unsigned int)v9 >= LODWORD(dataValArray->max_length) )
        goto LABEL_14;
      if ( !funcIds )
        break;
      if ( (unsigned int)v9 >= LODWORD(funcIds->max_length) )
LABEL_14:
        sub_1C93D34(this);
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v9],
                                   (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_42407440(v13, (FunctionEntity_o *)this, funcIndex++, 0);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_1C93D2C(this, funcIds);
  }
  return dataValArray;
}