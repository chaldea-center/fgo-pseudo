void BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597055F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TypeInfo);
    byte_597055F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData_____ctor__);
  this->fields.condBuffValueDataDict = (struct System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.condBuffValueDataDict,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    60,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


void BuffMaster__AddEffectIdToList(
        BuffMaster_o *this,
        System_Collections_Generic_List_int__o *effectIdList,
        int32_t effectId,
        const MethodInfo *method)
{
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_5970561 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    this = (BuffMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_5970561 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v7 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_2213CDC(this, effectIdList);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    }
    else
    {
      effectIdList->fields._size = size + 1;
      items->m_Items[size] = effectId;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t BuffMaster__GetBuffEffectId(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  BuffMaster___c_c *v7; // x0
  struct BuffMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__11_0; // x22
  Il2CppObject *v10; // x23
  struct BuffMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5970564 & 1) == 0 )
  {
    sub_2213A60(&Method_BuffMaster_GetEntityParam_int___);
    sub_2213A60(&System_Func_BuffEntity__int__TypeInfo);
    sub_2213A60(&Method_BuffMaster___c__GetBuffEffectId_b__11_0__);
    sub_2213A60(&BuffMaster___c_TypeInfo);
    byte_5970564 = 1;
  }
  v7 = BuffMaster___c_TypeInfo;
  if ( !*(&BuffMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BuffMaster___c_TypeInfo, *(_QWORD *)&buffId);
    v7 = BuffMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__11_0 = (System_Func_object__int__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&buffId);
      static_fields = BuffMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BuffEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__11_0, v10, Method_BuffMaster___c__GetBuffEffectId_b__11_0__, 0);
    v11 = BuffMaster___c_TypeInfo->static_fields;
    v11->__9__11_0 = (struct System_Func_BuffEntity__int__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__11_0, (int32_t)_9__11_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !this )
    sub_2213CDC(v7, *(_QWORD *)&buffId);
  return BuffMaster__GetEntityParam_int_(
           this,
           buffId,
           def,
           (System_Func_BuffEntity__T__o *)_9__11_0,
           (const MethodInfo_381B8C8 *)Method_BuffMaster_GetEntityParam_int___);
}


int32_t BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970563 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_5970563 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_2213CDC(v7, v8);
    return *(_DWORD *)((char *)&qword_48 + (_QWORD)entity);
  }
  return def;
}


int32_t BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970562 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_5970562 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_2213CDC(v7, v8);
    return *(int *)((char *)&dword_14 + (_QWORD)entity);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BuffMaster__GetEntityParam___Il2CppFullySharedGenericType_(
        BuffMaster_o *this,
        int32_t buffId,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        System_Func_BuffEntity__T__o *funcGetParam,
        const MethodInfo_381B970 *method)
{
  void *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x26
  const MethodInfo_381B970_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  MethodInfo *_2_System_Func_BuffEntity__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, void *, Il2CppObject **, char *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x20
  __int64 v19; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v21; // [xsp+10h] [xbp-20h] BYREF
  Il2CppObject *v22; // [xsp+18h] [xbp-18h] BYREF
  char *v23; // [xsp+20h] [xbp-10h]
  __int64 v24; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v21 = def.klass;
  if ( !rgctx_data )
  {
    this = (BuffMaster_o *)sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      this = (BuffMaster_o *)sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_0_T->_2.actualSize;
  entity = 0;
  if ( !v10 )
    goto LABEL_13;
  this = (BuffMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                           v10,
                           &entity,
                           buffId,
                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( monitor )
    {
      _2_System_Func_BuffEntity__T__Invoke = method->rgctx_data->_2_System_Func_BuffEntity__T__Invoke;
      methodPointer = _2_System_Func_BuffEntity__T__Invoke->methodPointer;
      invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, void *, Il2CppObject **, char *))_2_System_Func_BuffEntity__T__Invoke->invoker_method;
      v22 = entity;
      v23 = (char *)&v19 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      invoker_method(methodPointer, _2_System_Func_BuffEntity__T__Invoke, monitor, &v22, v23);
      result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                                 funcGetParam,
                                                                                 (char *)&v19
                                                                               - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                                 actualSize);
      return result;
    }
LABEL_13:
    sub_2213CDC(this, *(_QWORD *)&buffId);
  }
  if ( (method->rgctx_data->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v18 = &v21;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v19 - ((actualSize + 15) & 0x1FFFFFFF0LL), v18, actualSize);
  result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(funcGetParam, v18, actualSize);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t BuffMaster__GetEntityParam_int_(
        BuffMaster_o *this,
        int32_t buffId,
        int32_t def,
        System_Func_BuffEntity__T__o *funcGetParam,
        const MethodInfo_381B8C8 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( !method->rgctx_data )
  {
    this = (BuffMaster_o *)sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( !method->rgctx_data )
      this = (BuffMaster_o *)sub_224B964(method);
  }
  entity = 0;
  if ( !v8 )
    goto LABEL_9;
  this = (BuffMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                           v8,
                           &entity,
                           buffId,
                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( funcGetParam )
      return ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))funcGetParam->fields.invoke_impl)(
               funcGetParam->fields.method_code,
               entity,
               funcGetParam->fields.method);
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&buffId);
  }
  return def;
}


int32_t BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970566 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_5970566 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_2213CDC(0, v5);
  return BuffEntity__GetUnSubStateWhenContinueStatus((BuffEntity_o *)entity, v5);
}


bool BuffMaster__IsUnSubStateWhenAliveContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return ((unsigned int)BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) >> 1) & 1;
}


bool BuffMaster__IsUnSubStateWhenDeadContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool BuffMaster__TryGetCondBuffValueDataArray(
        BuffMaster_o *this,
        int32_t buffId,
        BuffEntity_CondBuffValueData_array **dataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *condBuffValueDataDict; // x0
  BuffEntity_CondBuffValueData_array *CondBuffValueArray; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970567 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryAdd__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryGetValue__);
    byte_5970567 = 1;
  }
  condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.condBuffValueDataDict;
  entity = 0;
  if ( !condBuffValueDataDict )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          condBuffValueDataDict,
          buffId,
          (Il2CppObject **)dataArray,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryGetValue__) )
  {
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            buffId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      return 0;
    condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)entity;
    if ( entity )
    {
      CondBuffValueArray = BuffEntity__GetCondBuffValueArray((BuffEntity_o *)entity, *(const MethodInfo **)&buffId);
      *dataArray = CondBuffValueArray;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)dataArray,
        (int32_t)CondBuffValueArray,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      if ( entity )
      {
        condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.condBuffValueDataDict;
        if ( condBuffValueDataDict )
        {
          System_Collections_Generic_Dictionary_int__object___TryAdd(
            condBuffValueDataDict,
            (int32_t)entity[1].klass,
            &(*dataArray)->obj,
            (const MethodInfo_3F9E004 *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryAdd__);
          return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*dataArray, 0);
        }
      }
    }
LABEL_13:
    sub_2213CDC(condBuffValueDataDict, *(_QWORD *)&buffId);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*dataArray, 0);
}


bool BuffMaster__TryGetDisplayCardBottomImageName(
        BuffMaster_o *this,
        System_String_o **name,
        int32_t buffId,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970565 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_2213A60(&StringLiteral_5487/*"DisplayCardBottomImageName"*/);
    byte_5970565 = 1;
  }
  entity = 0;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_2213CDC(v9, 0);
    Value_object = BasicHelper__GetValue_object_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&qword_60 + (_QWORD)entity),
                     (System_String_o *)StringLiteral_5487/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)Value_object, v10, v11, v12, v13, v14, v15);
  return !System_String__IsNullOrEmpty(*name, 0);
}


System_Int32_array *BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  BuffEntity_o *v18; // x21
  unsigned __int64 effectId; // x1
  _BOOL8 v20; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  const MethodInfo *v24; // x1
  __int64 CardEffectId; // x0
  __int64 v26; // x0
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  BuffMaster_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  BuffMaster_o *v33; // x0
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Int32_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-58h]

  if ( (byte_5970560 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970560 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
  v47 = Enumerator;
  while ( 1 )
  {
    if ( !v47 )
      sub_2213CDC(Enumerator, v7);
    klass = v47->klass;
    v9 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(v47, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v47,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v47->klass;
    v13 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(v47, System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v47,
            *(_QWORD *)(v15 + 8));
    v18 = (BuffEntity_o *)v16;
    if ( !v16 )
      sub_2213CDC(0, v17);
    effectId = *(unsigned int *)(v16 + 104);
    if ( (int)effectId >= 1 )
    {
      if ( !v3 )
        sub_2213CDC(v16, effectId);
      v20 = System_Collections_Generic_List_int___Contains(
              v3,
              effectId,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v20 )
      {
        items = v3->fields._items;
        effectId = (unsigned int)v18->fields.effectId;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_2213CDC(v20, effectId);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            effectId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v18, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v18, v24);
      if ( !v3 )
        sub_2213CDC(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v26 = BuffEntity__GetCardEffectId(v18, v24);
        v24 = (const MethodInfo *)(unsigned int)v26;
        v27 = v3->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v27 )
          sub_2213CDC(v26, (unsigned int)v26);
        v29 = v3->fields._size;
        if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v26,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = v29 + 1;
          v27->m_Items[v29] = v26;
        }
      }
    }
    v30 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v18, v24);
    BuffMaster__AddEffectIdToList(v30, v3, (int32_t)v30, v31);
    v33 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v18, -1, v32);
    BuffMaster__AddEffectIdToList(v33, v3, (int32_t)v33, v34);
  }
  v35 = v47->klass;
  v36 = *(unsigned __int16 *)&v47->klass->_2.rank;
  if ( *(_WORD *)&v47->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_39;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_39:
    v38 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                                             v47,
                                                             *(_QWORD *)(v38 + 8));
  if ( !v3 )
LABEL_49:
    sub_2213CDC(list, v4);
  v39 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  return 1;
}


void BuffMaster__set_StateEffectIdArray(BuffMaster_o *this, System_Int32_array *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BuffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970568 & 1) == 0 )
  {
    sub_2213A60(&BuffMaster___c_TypeInfo);
    byte_5970568 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BuffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffMaster___c_TypeInfo->static_fields->__9 = (struct BuffMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BuffMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BuffMaster___c___ctor(BuffMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BuffMaster___c___GetBuffEffectId_b__11_0(
        BuffMaster___c_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  if ( !buffEnt )
    sub_2213CDC(this, 0);
  return buffEnt->fields.effectId;
}