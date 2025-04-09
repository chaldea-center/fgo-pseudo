void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BABE9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BABE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_49BABE8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId);
    byte_49BABE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_2F0013C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int32_array *funcIds; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v10; // x19
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  FunctionMaster_o *v13; // x21
  unsigned __int64 v14; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49BABE5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49BABE5 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( (int)funcIds->max_length >= 1 )
  {
    v13 = (FunctionMaster_o *)Master_object;
    v14 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v14 >= SetTypeDataValArray->max_length )
        sub_1B4D1F4(Master_object, v12);
      if ( !v13 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v13, SetTypeDataValArray->m_Items[v14], 3, 0LL);
      if ( !v10 )
        break;
      items = v10->fields._items;
      v16 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      v12 = (unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          (int32_t)Master_object,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v14 >= (int)funcIds->max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B4D1EC(Master_object, v12);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v13; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  unsigned int v16; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BABE7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    byte_49BABE7 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_18;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1B4D1F4(Master_object, v13);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v16];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0LL);
      if ( (_DWORD)Master_object )
      {
        if ( !v15 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v15,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity || !v9 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v9,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v16 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                 (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_18:
    sub_1B4D1EC(Master_object, v13);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49BABE6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49BABE6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1B4D1EC(DataValsList, v9);
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
  struct System_String_array *v8; // x8
  DataVals_array *v9; // x19
  __int64 v10; // x24
  __int64 v11; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v22; // x0

  if ( (byte_49BABE4 & 1) == 0 )
  {
    sub_1B4CF90(&DataVals___TypeInfo, method);
    sub_1B4CF90(&DataVals_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BABE4 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1B4D038(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v18 )
      {
        v6 = sub_1B4D0CC(v18, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v22 = sub_1B4D210(v6);
          sub_1B4D0B8(v22, 0LL);
        }
      }
      if ( !v9->max_length )
LABEL_20:
        sub_1B4D1F4(v6, v7);
      v9->m_Items[0] = v18;
      sub_1B4CF34((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v18, v19, v20);
      return v9;
    }
LABEL_13:
    sub_1B4D1EC(v6, v7);
  }
  v6 = sub_1B4D038(DataVals___TypeInfo, svals->max_length);
  v8 = this->fields.svals;
  if ( !v8 )
    goto LABEL_13;
  v9 = (DataVals_array *)v6;
  v10 = 4LL;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    v13 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      return v9;
    if ( v13 >= max_length )
      goto LABEL_20;
    v14 = (System_String_o *)*((_QWORD *)&v8->obj.klass + v10);
    v15 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_1B4D0CC(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v9 + v11), (int32_t)v15, v16, v17);
      v8 = this->fields.svals;
      ++v10;
      v11 += 8LL;
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
}