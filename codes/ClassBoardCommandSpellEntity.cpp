void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187D48 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187D48 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4187D47 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId);
    byte_4187D47 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  DataVals_array *SetTypeDataValArray; // x19
  System_Collections_Generic_List_int__o *v10; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  FunctionMaster_o *v13; // x21
  unsigned __int64 v14; // x23
  __int64 v16; // x0

  if ( (byte_4187D44 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4187D44 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_16;
  if ( (int)funcIds->max_length >= 1 )
  {
    v13 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v14 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v14 >= SetTypeDataValArray->max_length )
      {
        v16 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v16, 0LL);
      }
      if ( !v13 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v13,
                                                                      SetTypeDataValArray->m_Items[v14],
                                                                      3,
                                                                      0LL);
      if ( !v10 )
        break;
      System_Collections_Generic_List_int___Add(
        v10,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v14 >= (int)funcIds->max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  unsigned int v16; // w22
  __int64 v18; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187D46 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v7);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    byte_4187D46 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v10);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v18 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v18, 0LL);
      }
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)SetTypeDataValArray->m_Items[v16];
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataVals__GetClassIconAuraEffectId(
                                                                      (DataVals_o *)Master_WarQuestSelectionMaster,
                                                                      0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster )
      {
        if ( !v15 )
          break;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                        v15,
                                                                        &entity,
                                                                        (int32_t)Master_WarQuestSelectionMaster,
                                                                        (const MethodInfo_24E412C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity || !v9 )
            break;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                                                          v9,
                                                                          *(&entity->fields.id + 1),
                                                                          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v16 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                 (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0
  __int64 v9; // x1

  if ( (byte_4187D45 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4187D45 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B2C434(DataValsList, v9);
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
  __int64 v10; // x23
  __int64 v11; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataVals_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4187D43 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, method);
    sub_B2C35C(&DataVals_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4187D43 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_B2C374(DataVals___TypeInfo, 1LL);
    v22 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v22 )
      {
        v6 = sub_B2C41C(v22, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v31 = sub_B2C454(v6);
          sub_B2C400(v31, 0LL);
        }
      }
      if ( !v9->max_length )
      {
LABEL_20:
        v30 = sub_B2C460(v6);
        sub_B2C400(v30, 0LL);
      }
      v9->m_Items[0] = v22;
      sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
      return v9;
    }
LABEL_13:
    sub_B2C434(v6, v7);
  }
  v6 = sub_B2C374(DataVals___TypeInfo, svals->max_length);
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
    v15 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_B2C41C(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v9 + v11),
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v8 = this->fields.svals;
      ++v10;
      v11 += 8LL;
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
}