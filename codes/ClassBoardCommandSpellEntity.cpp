void ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27036 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27036 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4C27035 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27035 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ClassBoardCommandSpellEntity__CreatePrimaryKey(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ClassBoardCommandSpellEntity__CreatePK(this->fields.id, this->fields.commandSpellId, this->fields.lv, v2);
}


System_String_o *ClassBoardCommandSpellEntity__GetDetail(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.detail;
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
  __int64 v10; // x2
  FunctionMaster_o *v11; // x22
  unsigned __int64 v12; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C27032 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C27032 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
                          this,
                          (const MethodInfo *)classStatisticsInfos);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( SLODWORD(funcIds->max_length) >= 1 )
  {
    v11 = (FunctionMaster_o *)Master_object;
    v12 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v12 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C2D6F4(Master_object, v9, v10);
      if ( !v11 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v11,
                                        SetTypeDataValArray->m_Items[v12],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
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
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v12 >= SLODWORD(funcIds->max_length) )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(Master_object, v9);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  unsigned int v11; // w22
  int32_t GrandEffectId; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27034 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C27034 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C2D6F4(Master_object, v7, v8);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v11];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0);
      if ( (_DWORD)Master_object )
      {
        if ( !v10 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v10,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v3 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( !entity )
            break;
          GrandEffectId = ConstantMaster__GetGrandEffectId(HIDWORD(entity[1].klass), 0);
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            GrandEffectId,
                                            (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v11 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                 (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_1C2D6EC(Master_object, v7);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *ClassBoardCommandSpellEntity__GetName(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
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

  if ( (byte_4C27033 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27033 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C2D6EC(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcIds, DataValsList, 0);
}


DataVals_array *ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x8
  __int64 v8; // x19
  __int64 v9; // x24
  __int64 v10; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v12; // x26
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  const MethodInfo *v15; // x3
  DataVals_o *v16; // x20
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_4C27031 & 1) == 0 )
  {
    sub_1C2D490(&DataVals___TypeInfo);
    sub_1C2D490(&DataVals_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27031 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v8 = sub_1C2D538(DataVals___TypeInfo, 1);
    v16 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v8 )
    {
      if ( v16 )
      {
        v4 = sub_1C2D5CC(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v19 = sub_1C2D710(v4);
          sub_1C2D5B8(v19, 0);
        }
      }
      if ( !*(_DWORD *)(v8 + 24) )
LABEL_20:
        sub_1C2D6F4(v4, v5, v6);
      *(_QWORD *)(v8 + 32) = v16;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v16, v6, v17);
      return (DataVals_array *)v8;
    }
LABEL_13:
    sub_1C2D6EC(v4, v5);
  }
  v4 = sub_1C2D538(DataVals___TypeInfo, LODWORD(svals->max_length));
  v7 = this->fields.svals;
  if ( !v7 )
    goto LABEL_13;
  v8 = v4;
  v9 = 4;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v7->max_length);
    v12 = v9 - 4;
    if ( v9 - 4 >= (int)max_length_low )
      return (DataVals_array *)v8;
    if ( v12 >= max_length_low )
      goto LABEL_20;
    v13 = (System_String_o *)*((_QWORD *)&v7->obj.klass + v9);
    v14 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
    DataVals___ctor(v14, v13, 0);
    if ( v8 )
    {
      if ( v14 )
      {
        v4 = sub_1C2D5CC(v14, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v12 >= *(unsigned int *)(v8 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v8 + 8 * v9) = v14;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + v10), (int32_t)v14, v6, v15);
      v7 = this->fields.svals;
      ++v9;
      v10 += 8;
      if ( v7 )
        continue;
    }
    goto LABEL_13;
  }
}