void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4217AC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4217AC7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4217AC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId);
    byte_4217AC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  FunctionMaster_o *v14; // x21
  unsigned __int64 v15; // x23
  __int64 v17; // x0

  if ( (byte_4217AC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4217AC3 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_16;
  if ( (int)funcIds->max_length >= 1 )
  {
    v14 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v15 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v15 >= SetTypeDataValArray->max_length )
      {
        v17 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v17, 0LL);
      }
      if ( !v14 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v14,
                                                                      SetTypeDataValArray->m_Items[v15],
                                                                      3,
                                                                      0LL);
      if ( !v12 )
        break;
      System_Collections_Generic_List_int___Add(
        v12,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v15 >= (int)funcIds->max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_HashSet_int__o *v10; // x19
  const MethodInfo *v11; // x1
  DataVals_array *SetTypeDataValArray; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  unsigned int v16; // w22
  __int64 v18; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217AC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v8);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    byte_4217AC5 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v11);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AuraEffectMaster___);
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
        v18 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v18, 0LL);
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
                                                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity || !v10 )
            break;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                                                          v10,
                                                                          *(&entity->fields.id + 1),
                                                                          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v16 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v10,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4217AC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4217AC4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B0D97C(DataValsList);
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
  __int64 v11; // x23
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  DataVals_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4217AC2 & 1) == 0 )
  {
    sub_B0D8A4(&DataVals___TypeInfo, method);
    sub_B0D8A4(&DataVals_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4217AC2 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_B0D8BC(DataVals___TypeInfo, 1LL);
    v25 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v23, v24);
    DataVals___ctor(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v25 )
      {
        v6 = sub_B0D964(v25, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v34 = sub_B0D99C(v6);
          sub_B0D948(v34, 0LL);
        }
      }
      if ( !v10->max_length )
      {
LABEL_20:
        v33 = sub_B0D9A8(v6);
        sub_B0D948(v33, 0LL);
      }
      v10->m_Items[0] = v25;
      sub_B0D840((BattleServantConfConponent_o *)v10->m_Items, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
      return v10;
    }
LABEL_13:
    sub_B0D97C(v6);
  }
  v6 = sub_B0D8BC(DataVals___TypeInfo, svals->max_length);
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
    v16 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v7, v8);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_B0D964(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v10 + v12),
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
}