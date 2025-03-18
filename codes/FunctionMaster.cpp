void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C221B3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, method);
    byte_4C221B3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    59,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_Object_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_4C221B6 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1C3B764(&Method_BasicHelper_IndexValue_DataVals___, vals);
    byte_4C221B6 = 1;
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
                           (const MethodInfo_2FDEADC *)Method_BasicHelper_IndexValue_DataVals___);
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
  if ( (byte_4C221B7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_IndexValue_DataVals___, vals);
    sub_1C3B764(&BuffList_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    byte_4C221B7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
      sub_1C3B9C0(funcEnt, v8);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v8);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(v3, 93, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v3, 94, 0, 0LL);
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
            (const MethodInfo_2FDEADC *)Method_BasicHelper_IndexValue_DataVals___);
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
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_int__o *v16; // x21
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int64_t v31; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4C221B4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__, funcIds);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v12);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v14);
    byte_4C221B4 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_FunctionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( v29 )
    {
      if ( !v16 )
        sub_1C3B9C0(v29, v30);
      v32 = System_Collections_Generic_List_int___Contains(
              v16,
              *(_DWORD *)(v29 + 16),
              (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( v32 )
      {
        if ( !v15 )
          sub_1C3B9C0(v32, v33);
        items = v15->fields._items;
        v41 = Method_System_Collections_Generic_List_FunctionEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1C3B9C0(v32, v33);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v31,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v31;
          sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), v31, v34, v35, v36, v37, v38, v39);
        }
        System_Collections_Generic_List_int___Remove(
          v16,
          *(_DWORD *)(v31 + 16),
          (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_31;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_31:
    v47 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v15;
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
  if ( (byte_4C221B5 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_1C3B764(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 funcIds);
    byte_4C221B5 = 1;
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
        sub_1C3B9C8(this, funcIds);
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_40294064(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_1C3B9C0(this, funcIds);
  }
  return dataValArray;
}