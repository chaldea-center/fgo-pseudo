void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B447E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B447E9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B447E8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId);
    byte_4B447E8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_3031F74 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePrimaryKey(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ClassBoardCommandSpellEntity__CreatePK(this->fields.id, this->fields.commandSpellId, this->fields.lv, v2);
}


System_String_o *__fastcall ClassBoardCommandSpellEntity__GetDetail(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.detail;
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
        ClassBoardCommandSpellEntity_o *this,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *funcIds; // x23
  DataVals_array *SetTypeDataValArray; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  FunctionMaster_o *v16; // x22
  unsigned __int64 v17; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4B447E5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_FunctionMaster___, classStatisticsInfos);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B447E5 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
                          this,
                          (const MethodInfo *)classStatisticsInfos);
  v12 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( (int)funcIds->max_length >= 1 )
  {
    v16 = (FunctionMaster_o *)Master_object;
    v17 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v17 >= SetTypeDataValArray->max_length )
        sub_1BDBADC(Master_object, v14, v15);
      if ( !v16 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v16,
                                        SetTypeDataValArray->m_Items[v17],
                                        3,
                                        classStatisticsInfos,
                                        0LL);
      if ( !v12 )
        break;
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      v14 = (unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          (int32_t)Master_object,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v17 >= (int)funcIds->max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BDBAD4(Master_object, v14);
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *v9; // x19
  const MethodInfo *v10; // x1
  DataVals_array *SetTypeDataValArray; // x20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  unsigned int v17; // w22
  int32_t GrandEffectId; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B447E7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    byte_4B447E7 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BDBADC(Master_object, v13, v14);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v17];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0LL);
      if ( (_DWORD)Master_object )
      {
        if ( !v16 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v16,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v9 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v9,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( !entity )
            break;
          GrandEffectId = ConstantMaster__GetGrandEffectId(HIDWORD(entity[1].klass), v13);
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v9,
                                            GrandEffectId,
                                            (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v17 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                 (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_1BDBAD4(Master_object, v13);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall ClassBoardCommandSpellEntity__GetName(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0
  __int64 v9; // x1

  if ( (byte_4B447E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B447E6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1BDBAD4(DataValsList, v9);
  return FunctionMaster__GetSetTypeDataValArray(v6, funcIds, DataValsList, 0LL);
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *v9; // x8
  DataVals_array *v10; // x19
  __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_4B447E4 & 1) == 0 )
  {
    sub_1BDB878(&DataVals___TypeInfo, method);
    sub_1BDB878(&DataVals_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B447E4 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_1BDB920(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v18 )
      {
        v6 = sub_1BDB9B4(v18, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v21 = sub_1BDBAF8(v6);
          sub_1BDB9A0(v21, 0LL);
        }
      }
      if ( !v10->max_length )
LABEL_20:
        sub_1BDBADC(v6, v7, v8);
      v10->m_Items[0] = v18;
      sub_1BDB81C((CGThumbnailListItem_o *)v10->m_Items, (int32_t)v18, v8, v19);
      return v10;
    }
LABEL_13:
    sub_1BDBAD4(v6, v7);
  }
  v6 = sub_1BDB920(DataVals___TypeInfo, svals->max_length);
  v9 = this->fields.svals;
  if ( !v9 )
    goto LABEL_13;
  v10 = (DataVals_array *)v6;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      return v10;
    if ( v14 >= max_length )
      goto LABEL_20;
    v15 = (System_String_o *)*((_QWORD *)&v9->obj.klass + v11);
    v16 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_1BDB9B4(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_1BDB81C((CGThumbnailListItem_o *)((char *)v10 + v12), (int32_t)v16, v8, v17);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
}