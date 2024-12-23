void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E18 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, method);
    byte_4B66E18 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    59,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_4B66E1B & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1BE4ACC(&Method_BasicHelper_IndexValue_DataVals___, vals);
    byte_4B66E1B = 1;
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
                           (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_DataVals___);
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v8; // x1
  SkillLvMaster_o *v9; // x19
  System_Object_array *SetTypeDataValArray; // x20
  unsigned int v11; // w25
  FunctionEntity_o *funcEnt; // x0
  int32_t AddStateBuffTypeFromFunction; // w22
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  Il2CppObject *v16; // x0

  v3 = vals;
  if ( (byte_4B66E1C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_DataVals___, vals);
    sub_1BE4ACC(&BuffList_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    byte_4B66E1C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v3 )
    return 0LL;
  v9 = (SkillLvMaster_o *)Master_object;
  SetTypeDataValArray = 0LL;
  v11 = 1;
  do
  {
    funcEnt = v3->fields.funcEnt;
    if ( !funcEnt )
LABEL_24:
      sub_1BE4D28(funcEnt, v8);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v8);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(v3, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v3, 93, 0, 0LL);
      if ( !v9 )
        goto LABEL_24;
    }
    else
    {
      Param = DataVals__GetValue(v3, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(v3, 0LL);
      if ( !v9 )
        goto LABEL_24;
    }
    Entity = SkillLvMaster__GetEntity(v9, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = (System_Object_array *)SkillLvMaster__GetSetTypeDataValArray(v9, Entity, 0LL);
    v16 = BasicHelper__IndexValue_object_(
            SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v16 )
      break;
    v3 = (DataVals_o *)v16;
  }
  while ( v11++ < 0xA );
  return (DataVals_array *)SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_Generic_List_int__o *v17; // x21
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int32_t *v30; // x0
  __int64 v31; // x1
  int64_t v32; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4B66E19 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, funcIds);
    sub_1BE4ACC(&FunctionEntity_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v15);
    byte_4B66E19 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                       Enumerator,
                       *(_QWORD *)(v29 + 8));
    v32 = (int64_t)v30;
    if ( v30 )
    {
      methodPtr_low = LOBYTE(FunctionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) >= (unsigned int)methodPtr_low
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v17 )
          sub_1BE4D28(v30, v31);
        v34 = System_Collections_Generic_List_int___Contains(
                v17,
                v30[4],
                (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v34 )
        {
          if ( !v16 )
            sub_1BE4D28(v34, v35);
          items = v16->fields._items;
          v43 = Method_System_Collections_Generic_List_FunctionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1BE4D28(v34, v35);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v32,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v32;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v45 + 4), v32, v36, v37, v38, v39, v40, v41);
          }
          System_Collections_Generic_List_int___Remove(
            v17,
            *(_DWORD *)(v32 + 16),
            (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_33;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_33:
    v49 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v16;
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
  if ( (byte_4B66E1A & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1BE4ACC(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 funcIds);
    byte_4B66E1A = 1;
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
        sub_1BE4D30(this, funcIds);
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_39769500(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_1BE4D28(this, funcIds);
  }
  return dataValArray;
}