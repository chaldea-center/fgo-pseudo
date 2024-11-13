void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16445 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, method, v2);
    byte_4B16445 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    55,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_4B16448 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1BCA7E0(&Method_BasicHelper_IndexValue_DataVals___, vals, method);
    byte_4B16448 = 1;
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
                           (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_DataVals___);
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
  DataVals_o *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  const MethodInfo *v11; // x1
  SkillLvMaster_o *v12; // x19
  System_Object_array *SetTypeDataValArray; // x20
  unsigned int v14; // w25
  FunctionEntity_o *funcEnt; // x0
  __int64 v16; // x1
  int32_t AddStateBuffTypeFromFunction; // w22
  __int64 v18; // x1
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  Il2CppObject *v21; // x0

  v3 = vals;
  if ( (byte_4B16449 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_DataVals___, vals, method);
    sub_1BCA7E0(&BuffList_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    byte_4B16449 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, vals);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v3 )
    return 0LL;
  v12 = (SkillLvMaster_o *)Master_object;
  SetTypeDataValArray = 0LL;
  v14 = 1;
  do
  {
    funcEnt = v3->fields.funcEnt;
    if ( !funcEnt )
LABEL_24:
      sub_1BCAA3C(funcEnt, v11);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v11);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v16);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v18);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(v3, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v3, 93, 0, 0LL);
      if ( !v12 )
        goto LABEL_24;
    }
    else
    {
      Param = DataVals__GetValue(v3, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(v3, 0LL);
      if ( !v12 )
        goto LABEL_24;
    }
    Entity = SkillLvMaster__GetEntity(v12, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = (System_Object_array *)SkillLvMaster__GetSetTypeDataValArray(v12, Entity, 0LL);
    v21 = BasicHelper__IndexValue_object_(
            SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v21 )
      break;
    v3 = (DataVals_o *)v21;
  }
  while ( v14++ < 0xA );
  return (DataVals_array *)SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x21
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  int32_t *v45; // x0
  __int64 v46; // x1
  int64_t v47; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0

  if ( (byte_4B16446 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, funcIds, method);
    sub_1BCA7E0(&FunctionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v26, v27);
    byte_4B16446 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FunctionEntity__TypeInfo,
                                                       funcIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor_56116492(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v33);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                       Enumerator,
                       *(_QWORD *)(v44 + 8));
    v47 = (int64_t)v45;
    if ( v45 )
    {
      methodPtr_low = LOBYTE(FunctionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) >= (unsigned int)methodPtr_low
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * methodPtr_low - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v32 )
          sub_1BCAA3C(v45, v46);
        v49 = System_Collections_Generic_List_int___Contains(
                v32,
                v45[4],
                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v49 )
        {
          if ( !v28 )
            sub_1BCAA3C(v49, v50);
          items = v28->fields._items;
          v58 = Method_System_Collections_Generic_List_FunctionEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1BCAA3C(v49, v50);
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)v47,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v60[4] = (Il2CppClass *)v47;
            sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), v47, v51, v52, v53, v54, v55, v56);
          }
          System_Collections_Generic_List_int___Remove(
            v32,
            *(_DWORD *)(v47 + 16),
            (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_33;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_33:
    v64 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(Enumerator, *(_QWORD *)(v64 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v28;
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
  if ( (byte_4B16447 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1BCA7E0(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 funcIds,
                                 dataValArray);
    byte_4B16447 = 1;
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
        sub_1BCAA44(this, funcIds);
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_39572912(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_1BCAA3C(this, funcIds);
  }
  return dataValArray;
}