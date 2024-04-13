void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9BF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9BF4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_42E9BF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, commandSpellId, lv, method);
    byte_42E9BF3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Int32_array *funcIds; // x22
  DataVals_array *SetTypeDataValArray; // x19
  System_Collections_Generic_List_int__o *v22; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  FunctionMaster_o *v25; // x21
  unsigned __int64 v26; // x23
  __int64 v28; // x0

  if ( (byte_42E9BF0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    byte_42E9BF0 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_16;
  if ( (int)funcIds->max_length >= 1 )
  {
    v25 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v26 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v26 >= SetTypeDataValArray->max_length )
      {
        v28 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v28, 0LL);
      }
      if ( !v25 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v25,
                                                                      SetTypeDataValArray->m_Items[v26],
                                                                      3,
                                                                      0LL);
      if ( !v22 )
        break;
      System_Collections_Generic_List_int___Add(
        v22,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v26 >= (int)funcIds->max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  }
LABEL_14:
  if ( !v22 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_HashSet_int__o *v23; // x19
  const MethodInfo *v24; // x1
  DataVals_array *SetTypeDataValArray; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x21
  unsigned int v30; // w22
  __int64 v32; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9BF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_AuraEffectMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v20, v21, v22);
    byte_42E9BF2 = 1;
  }
  entity = 0LL;
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v24);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v32 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v32, 0LL);
      }
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)SetTypeDataValArray->m_Items[v30];
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataVals__GetClassIconAuraEffectId(
                                                                      (DataVals_o *)Master_WarQuestSelectionMaster,
                                                                      0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster )
      {
        if ( !v29 )
          break;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                        v29,
                                                                        &entity,
                                                                        (int32_t)Master_WarQuestSelectionMaster,
                                                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity || !v23 )
            break;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                                                          v23,
                                                                          *(&entity->fields.id + 1),
                                                                          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v30 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_B5D69C(Master_WarQuestSelectionMaster, v27);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v23,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v10; // x21
  const MethodInfo *v11; // x1
  DataVals_array *DataValsList; // x0
  __int64 v13; // x1

  if ( (byte_42E9BF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9BF1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v10 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v11);
  if ( !v10 )
    sub_B5D69C(DataValsList, v13);
  return FunctionMaster__GetSetTypeDataValArray(v10, funcIds, DataValsList, 0LL);
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_array *svals; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_String_array *v14; // x8
  DataVals_array *v15; // x19
  __int64 v16; // x23
  __int64 v17; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x26
  System_String_o *v20; // x22
  DataVals_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataVals_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_42E9BEF & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataVals_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E9BEF = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = (DataVals_array *)sub_B5D5DC(DataVals___TypeInfo, 1LL);
    v28 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v15 )
    {
      if ( v28 )
      {
        v12 = sub_B5D684(v28, v15->obj.klass->_1.element_class);
        if ( !v12 )
        {
LABEL_21:
          v37 = sub_B5D6BC(v12);
          sub_B5D668(v37, 0LL);
        }
      }
      if ( !v15->max_length )
      {
LABEL_20:
        v36 = sub_B5D6C8(v12);
        sub_B5D668(v36, 0LL);
      }
      v15->m_Items[0] = v28;
      sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
      return v15;
    }
LABEL_13:
    sub_B5D69C(v12, v13);
  }
  v12 = sub_B5D5DC(DataVals___TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_13;
  v15 = (DataVals_array *)v12;
  v16 = 4LL;
  v17 = 32LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    v19 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      return v15;
    if ( v19 >= max_length )
      goto LABEL_20;
    v20 = (System_String_o *)*((_QWORD *)&v14->obj.klass + v16);
    v21 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v21, v20, 0LL);
    if ( v15 )
    {
      if ( v21 )
      {
        v12 = sub_B5D684(v21, v15->obj.klass->_1.element_class);
        if ( !v12 )
          goto LABEL_21;
      }
      if ( v19 >= v15->max_length )
        goto LABEL_20;
      *((_QWORD *)&v15->obj.klass + v16) = v21;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v15 + v17),
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v14 = this->fields.svals;
      ++v16;
      v17 += 8LL;
      if ( v14 )
        continue;
    }
    goto LABEL_13;
  }
}