void FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
    byte_5970BE5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    59,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *FunctionMaster__GetDispDataValsFromFunc(FunctionMaster_o *this, DataVals_o *vals, const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_5970BE8 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_2213A60(&Method_BasicHelper_IndexValue_DataVals___);
    byte_5970BE8 = 1;
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
                           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_DataVals___);
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
  if ( DataVals__TryGetParam(v8, 223, &param[1], 0) )
    v9 += CondParamAddType__GetAddValue(v8, param[1], classStatisticsInfos, 0);
  if ( DataVals__TryGetParam(v8, 227, param, 0) )
    v9 += CondParamAddType__GetRangeRateValue(v8, param[0], classStatisticsInfos, 0);
  return v9;
}


DataVals_array *FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  DataVals_o *v3; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x1
  SkillLvMaster_o *v6; // x19
  System_Object_array *SetTypeDataValArray; // x20
  unsigned int v8; // w25
  FunctionEntity_o *funcEnt; // x0
  __int64 v10; // x1
  int32_t AddStateBuffTypeFromFunction; // w22
  __int64 v12; // x1
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  Il2CppObject *v15; // x0

  v3 = vals;
  if ( (byte_5970BE9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_DataVals___);
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970BE9 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, vals);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v3 )
    return 0;
  v6 = (SkillLvMaster_o *)Master_object;
  SetTypeDataValArray = 0;
  v8 = 1;
  do
  {
    funcEnt = v3->fields.funcEnt;
    if ( !funcEnt )
LABEL_24:
      sub_2213CDC(funcEnt, v5);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v5);
    if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v10);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0) )
      break;
    if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v12);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0) )
    {
      Param = DataVals__GetParam(v3, 96, 0, 0);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v3, 97, 0, 0);
      if ( !v6 )
        goto LABEL_24;
    }
    else
    {
      Param = DataVals__GetValue(v3, 0);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(v3, 0);
      if ( !v6 )
        goto LABEL_24;
    }
    Entity = SkillLvMaster__GetEntity(v6, Param, (int32_t)funcEnt, 0);
    if ( !Entity )
      break;
    SetTypeDataValArray = (System_Object_array *)SkillLvMaster__GetSetTypeDataValArray(v6, Entity, 0);
    v15 = BasicHelper__IndexValue_object_(
            SetTypeDataValArray,
            0,
            0,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v15 )
      break;
    v3 = (DataVals_o *)v15;
  }
  while ( v8++ < 0xA );
  return (DataVals_array *)SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__o *v42; // [xsp+18h] [xbp-48h]

  if ( (byte_5970BE6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_FunctionEntity__TypeInfo);
    byte_5970BE6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v10);
  for ( i = Enumerator; ; i = v42 )
  {
    klass = i->klass;
    v13 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v42 )
      sub_2213CDC(v16, v17);
    v18 = v42->klass;
    v19 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_224BC3C(v42, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v42,
            *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( v22 )
    {
      if ( !v6 )
        sub_2213CDC(v22, v23);
      v25 = System_Collections_Generic_List_int___Contains(
              v6,
              *(_DWORD *)(v22 + 16),
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( v25 )
      {
        if ( !v5
          || (items = v5->fields._items,
              v34 = Method_System_Collections_Generic_List_FunctionEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v25, v26);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v24, v27, v28, v29, v30, v31, v32);
        }
        System_Collections_Generic_List_int___Remove(
          v6,
          *(_DWORD *)(v24 + 16),
          (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
      }
    }
  }
  if ( v42 )
  {
    v37 = v42->klass;
    v38 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_36;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_36:
      v40 = sub_224BC3C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
  return (System_Collections_Generic_List_FunctionEntity__o *)v5;
}


DataVals_array *FunctionMaster__GetSetTypeDataValArray(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        DataVals_array *dataValArray,
        const MethodInfo *method)
{
  FunctionMaster_o *v6; // x21
  int max_length; // w8
  __int64 v8; // x23
  DataVals_o **m_Items; // x25
  DataVals_o *v10; // x22
  int32_t funcIndex; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_5970BE7 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_5970BE7 = 1;
  }
  funcIndex = 0;
  if ( !dataValArray )
    goto LABEL_14;
  max_length = dataValArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    m_Items = dataValArray->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        goto LABEL_15;
      this = (FunctionMaster_o *)m_Items[v8];
      if ( !this )
        break;
      DataVals__SetDependDataVals((DataVals_o *)this, v6, &funcIndex, 0);
      if ( (unsigned int)v8 >= LODWORD(dataValArray->max_length) )
        goto LABEL_15;
      if ( !funcIds )
        break;
      if ( (unsigned int)v8 >= LODWORD(funcIds->max_length) )
LABEL_15:
        sub_2213CE4(this);
      v10 = m_Items[v8];
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v8],
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v10 )
        break;
      DataVals__SetType_48682788(v10, (FunctionEntity_o *)this, funcIndex, 0);
      max_length = dataValArray->max_length;
      ++v8;
      ++funcIndex;
      if ( (int)v8 >= max_length )
        return dataValArray;
    }
LABEL_14:
    sub_2213CDC(this, funcIds);
  }
  return dataValArray;
}