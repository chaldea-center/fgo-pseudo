void ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3772D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3772D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4C3772C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C3772C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  FunctionMaster_o *v9; // x22
  unsigned __int64 v10; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C37729 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C37729 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(
                          this,
                          (const MethodInfo *)classStatisticsInfos);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( SLODWORD(funcIds->max_length) >= 1 )
  {
    v9 = (FunctionMaster_o *)Master_object;
    v10 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v10 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C32E84(Master_object);
      if ( !v9 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v9,
                                        SetTypeDataValArray->m_Items[v10],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          (int32_t)Master_object,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v10 >= SLODWORD(funcIds->max_length) )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(Master_object);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  DataVals_array *SetTypeDataValArray; // x20
  Il2CppObject *Master_object; // x0
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned int v9; // w22
  int32_t GrandEffectId; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3772B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C3772B = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C32E84(Master_object);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v9];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0);
      if ( (_DWORD)Master_object )
      {
        if ( !v8 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v8,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v3 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( !entity )
            break;
          GrandEffectId = ConstantMaster__GetGrandEffectId(HIDWORD(entity[1].klass), 0);
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            GrandEffectId,
                                            (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v9 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                 (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_1C32E7C(Master_object);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C3772A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3772A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C32E7C(DataValsList);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcIds, DataValsList, 0);
}


DataVals_array *ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  struct System_String_array *v5; // x8
  __int64 v6; // x19
  __int64 v7; // x24
  __int64 v8; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x26
  System_String_o *v11; // x22
  DataVals_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataVals_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_4C37728 & 1) == 0 )
  {
    sub_1C32C20(&DataVals___TypeInfo);
    sub_1C32C20(&DataVals_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37728 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v6 = sub_1C32CC8(DataVals___TypeInfo, 1);
    v15 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
    DataVals___ctor(v15, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v6 )
    {
      if ( v15 )
      {
        v4 = sub_1C32D5C(v15, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v19 = sub_1C32EA0(v4);
          sub_1C32D48(v19, 0);
        }
      }
      if ( !*(_DWORD *)(v6 + 24) )
LABEL_20:
        sub_1C32E84(v4);
      *(_QWORD *)(v6 + 32) = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v15, v16, v17);
      return (DataVals_array *)v6;
    }
LABEL_13:
    sub_1C32E7C(v4);
  }
  v4 = sub_1C32CC8(DataVals___TypeInfo, LODWORD(svals->max_length));
  v5 = this->fields.svals;
  if ( !v5 )
    goto LABEL_13;
  v6 = v4;
  v7 = 4;
  v8 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v5->max_length);
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      return (DataVals_array *)v6;
    if ( v10 >= max_length_low )
      goto LABEL_20;
    v11 = (System_String_o *)*((_QWORD *)&v5->obj.klass + v7);
    v12 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
    DataVals___ctor(v12, v11, 0);
    if ( v6 )
    {
      if ( v12 )
      {
        v4 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v10 >= *(unsigned int *)(v6 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v6 + 8 * v7) = v12;
      sub_1C32BC4((CGThumbnailListItem_o *)(v6 + v8), (int32_t)v12, v13, v14);
      v5 = this->fields.svals;
      ++v7;
      v8 += 8;
      if ( v5 )
        continue;
    }
    goto LABEL_13;
  }
}