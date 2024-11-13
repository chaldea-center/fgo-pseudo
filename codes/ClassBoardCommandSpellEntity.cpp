void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15F7D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B15F7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&commandSpellId, *(_QWORD *)&lv);
    byte_4B15F7C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *funcIds; // x22
  DataVals_array *SetTypeDataValArray; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  FunctionMaster_o *v23; // x21
  unsigned __int64 v24; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4B15F79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v12, v13);
    byte_4B15F79 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( (int)funcIds->max_length >= 1 )
  {
    v23 = (FunctionMaster_o *)Master_object;
    v24 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v24 >= SetTypeDataValArray->max_length )
        sub_1BCAA44(Master_object, v22);
      if ( !v23 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v23, SetTypeDataValArray->m_Items[v24], 3, 0LL);
      if ( !v19 )
        break;
      items = v19->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      size = v19->fields._size;
      v22 = (unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)Master_object,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v24 >= (int)funcIds->max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(Master_object, v22);
  }
LABEL_17:
  if ( !v19 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_HashSet_int__o *v17; // x19
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  DataVals_array *SetTypeDataValArray; // x20
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  unsigned int v25; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15F7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AuraEffectMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16);
    byte_4B15F7B = 1;
  }
  entity = 0LL;
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_18;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BCAA44(Master_object, v22);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v25];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0LL);
      if ( (_DWORD)Master_object )
      {
        if ( !v24 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v24,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity || !v17 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v17,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v25 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                 (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_18:
    sub_1BCAA3C(Master_object, v22);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v8; // x21
  const MethodInfo *v9; // x1
  DataVals_array *DataValsList; // x0
  __int64 v11; // x1

  if ( (byte_4B15F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B15F7A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v8 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v9);
  if ( !v8 )
    sub_1BCAA3C(DataValsList, v11);
  return FunctionMaster__GetSetTypeDataValArray(v8, funcIds, DataValsList, 0LL);
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_array *svals; // x8
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_String_array *v13; // x8
  DataVals_array *v14; // x19
  __int64 v15; // x24
  __int64 v16; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x26
  System_String_o *v19; // x22
  DataVals_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  DataVals_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v38; // x0

  if ( (byte_4B15F78 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals___TypeInfo, method, v2);
    sub_1BCA7E0(&DataVals_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B15F78 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v14 = (DataVals_array *)sub_1BCA888(DataVals___TypeInfo, 1LL);
    v30 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v27, v28, v29);
    DataVals___ctor(v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v14 )
    {
      if ( v30 )
      {
        v9 = sub_1BCA91C(v30, v14->obj.klass->_1.element_class);
        if ( !v9 )
        {
LABEL_21:
          v38 = sub_1BCAA60(v9);
          sub_1BCA908(v38, 0LL);
        }
      }
      if ( !v14->max_length )
LABEL_20:
        sub_1BCAA44(v9, v10);
      v14->m_Items[0] = v30;
      sub_1BCA784((PartyOrganizationUtility_o *)v14->m_Items, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      return v14;
    }
LABEL_13:
    sub_1BCAA3C(v9, v10);
  }
  v9 = sub_1BCA888(DataVals___TypeInfo, svals->max_length);
  v13 = this->fields.svals;
  if ( !v13 )
    goto LABEL_13;
  v14 = (DataVals_array *)v9;
  v15 = 4LL;
  v16 = 32LL;
  while ( 1 )
  {
    max_length = v13->max_length;
    v18 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      return v14;
    if ( v18 >= max_length )
      goto LABEL_20;
    v19 = (System_String_o *)*((_QWORD *)&v13->obj.klass + v15);
    v20 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v10, v11, v12);
    DataVals___ctor(v20, v19, 0LL);
    if ( v14 )
    {
      if ( v20 )
      {
        v9 = sub_1BCA91C(v20, v14->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_21;
      }
      if ( v18 >= v14->max_length )
        goto LABEL_20;
      *((_QWORD *)&v14->obj.klass + v15) = v20;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v14 + v16), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      v13 = this->fields.svals;
      ++v15;
      v16 += 8LL;
      if ( v13 )
        continue;
    }
    goto LABEL_13;
  }
}