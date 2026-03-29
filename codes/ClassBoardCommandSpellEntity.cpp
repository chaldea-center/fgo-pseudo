void ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30761 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30761 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4D30760 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D30760 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ClassBoardCommandSpellEntity__CreatePrimaryKey(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ClassBoardCommandSpellEntity__CreatePK(this->fields.id, this->fields.commandSpellId, this->fields.lv, v2);
}


System_Int32_array *ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
        ClassBoardCommandSpellEntity_o *this,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  struct System_Int32_array *funcIds; // x23
  DataVals_array *SetTypeDataValArray; // x21
  System_Collections_Generic_List_int__o *v7; // x20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  FunctionMaster_o *v10; // x22
  unsigned __int64 v11; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4D3075D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3075D = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
                          this,
                          (const MethodInfo *)classStatisticsInfos);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( SLODWORD(funcIds->max_length) >= 1 )
  {
    v10 = (FunctionMaster_o *)Master_object;
    v11 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v11 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C93D34(Master_object);
      if ( !v10 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v10,
                                        SetTypeDataValArray->m_Items[v11],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v9 = (unsigned int)Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          (int32_t)Master_object,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v11 >= SLODWORD(funcIds->max_length) )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(Master_object, v9);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  DataVals_array *SetTypeDataValArray; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  unsigned int v10; // w22
  int32_t GrandEffectId; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3075F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D3075F = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C93D34(Master_object);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v10];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0);
      if ( (_DWORD)Master_object )
      {
        if ( !v9 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v9,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_34632C0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v3 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( !entity )
            break;
          GrandEffectId = ConstantMaster__GetGrandEffectId(HIDWORD(entity[1].klass), 0);
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            GrandEffectId,
                                            (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v10 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                 (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_1C93D2C(Master_object, v7);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


DataVals_array *ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x0
  __int64 v8; // x1

  if ( (byte_4D3075E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D3075E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C93D2C(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcIds, DataValsList, 0);
}


DataVals_array *ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  __int64 v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  DataVals_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v28; // x0

  if ( (byte_4D3075C & 1) == 0 )
  {
    sub_1C93AD4(&DataVals___TypeInfo);
    sub_1C93AD4(&DataVals_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3075C = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_1C93B7C(DataVals___TypeInfo, 1);
    v20 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v20 )
      {
        v4 = sub_1C93C10(v20, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v28 = sub_1C93D50(v4);
          sub_1C93BFC(v28, 0);
        }
      }
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_20:
        sub_1C93D34(v4);
      *(_QWORD *)(v7 + 32) = v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      return (DataVals_array *)v7;
    }
LABEL_13:
    sub_1C93D2C(v4, v5);
  }
  v4 = sub_1C93B7C(DataVals___TypeInfo, LODWORD(svals->max_length));
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = v4;
  v8 = 4;
  v9 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v6->max_length);
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length_low )
      return (DataVals_array *)v7;
    if ( v11 >= max_length_low )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1C93C10(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= *(unsigned int *)(v7 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v7 + 8 * v8) = v13;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + v9), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}