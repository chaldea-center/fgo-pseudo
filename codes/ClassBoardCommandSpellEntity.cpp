void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAFB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAFB7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_40FAFB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId);
    byte_40FAFB6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_int__o *v14; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  FunctionMaster_o *v18; // x21
  unsigned __int64 v19; // x23
  int32_t DispValFromFunc; // w0

  if ( (byte_40FAFB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40FAFB3 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_16;
  if ( (int)funcIds->max_length >= 1 )
  {
    v18 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v19 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v19 >= SetTypeDataValArray->max_length )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v16, v17);
        sub_B170A0();
      }
      if ( !v18 )
        break;
      DispValFromFunc = FunctionMaster__GetDispValFromFunc(v18, SetTypeDataValArray->m_Items[v19], 3, 0LL);
      if ( !v14 )
        break;
      System_Collections_Generic_List_int___Add(
        v14,
        DispValFromFunc,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v19 >= (int)funcIds->max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v14 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x19
  const MethodInfo *v13; // x1
  DataVals_array *SetTypeDataValArray; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  unsigned int v20; // w22
  DataVals_o *v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FAFB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v10);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    byte_40FAFB5 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v12,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v13);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_19;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v16, v17);
        sub_B170A0();
      }
      v21 = SetTypeDataValArray->m_Items[v20];
      if ( !v21 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataVals__GetClassIconAuraEffectId(v21, 0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster )
      {
        if ( !v19 )
          break;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                        v19,
                                                                        &entity,
                                                                        (int32_t)Master_WarQuestSelectionMaster,
                                                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity || !v12 )
            break;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                                                          v12,
                                                                          *(&entity->fields.id + 1),
                                                                          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v20 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_19:
    sub_B170D4();
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v12,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_40FAFB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FAFB4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B170D4();
  return FunctionMaster__GetSetTypeDataValArray(v6, funcIds, DataValsList, 0LL);
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_array *svals; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_String_array *v12; // x8
  DataVals_array *v13; // x19
  __int64 v14; // x23
  __int64 v15; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x26
  System_String_o *v18; // x22
  DataVals_o *v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  DataVals_o *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40FAFB2 & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, method);
    sub_B16FFC(&DataVals_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FAFB2 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v13 = (DataVals_array *)sub_B17014(DataVals___TypeInfo, 1LL, v2);
    v29 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v25, v26, v27, v28);
    DataVals___ctor(v29, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v13 )
    {
      if ( v29 )
      {
        v7 = sub_B170BC(v29, v13->obj.klass->_1.element_class);
        if ( !v7 )
        {
LABEL_21:
          sub_B170F4(v7);
          sub_B170A0();
        }
      }
      if ( !v13->max_length )
      {
LABEL_20:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v13->m_Items[0] = v29;
      sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, (System_Int32_array **)v29, v9, v30, v31, v32, v33, v34);
      return v13;
    }
LABEL_13:
    sub_B170D4();
  }
  v7 = sub_B17014(DataVals___TypeInfo, svals->max_length, v2);
  v12 = this->fields.svals;
  if ( !v12 )
    goto LABEL_13;
  v13 = (DataVals_array *)v7;
  v14 = 4LL;
  v15 = 32LL;
  while ( 1 )
  {
    max_length = v12->max_length;
    v17 = v14 - 4;
    if ( v14 - 4 >= (int)max_length )
      return v13;
    if ( v17 >= max_length )
      goto LABEL_20;
    v18 = (System_String_o *)*((_QWORD *)&v12->obj.klass + v14);
    v19 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v8, v9, v10, v11);
    DataVals___ctor(v19, v18, 0LL);
    if ( v13 )
    {
      if ( v19 )
      {
        v7 = sub_B170BC(v19, v13->obj.klass->_1.element_class);
        if ( !v7 )
          goto LABEL_21;
      }
      if ( v17 >= v13->max_length )
        goto LABEL_20;
      *((_QWORD *)&v13->obj.klass + v14) = v19;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v13 + v15),
        (System_Int32_array **)v19,
        v9,
        v20,
        v21,
        v22,
        v23,
        v24);
      v12 = this->fields.svals;
      ++v14;
      v15 += 8LL;
      if ( v12 )
        continue;
    }
    goto LABEL_13;
  }
}