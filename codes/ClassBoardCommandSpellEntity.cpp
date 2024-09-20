void __fastcall ClassBoardCommandSpellEntity___ctor(ClassBoardCommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AEED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AEED = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassBoardCommandSpellEntity__CreatePK(
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4A5AEEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5AEEC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           commandSpellId,
           lv,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  struct System_Int32_array *funcIds; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v5; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  FunctionMaster_o *v8; // x21
  unsigned __int64 v9; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4A5AEE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AEE9 = 1;
  }
  funcIds = this->fields.funcIds;
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, method);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcIds )
    goto LABEL_19;
  if ( (int)funcIds->max_length >= 1 )
  {
    v8 = (FunctionMaster_o *)Master_object;
    v9 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v9 >= SetTypeDataValArray->max_length )
        sub_1B88814(Master_object, v7);
      if ( !v8 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v8, SetTypeDataValArray->m_Items[v9], 3, 0LL);
      if ( !v5 )
        break;
      items = v5->fields._items;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      v7 = (unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          (int32_t)Master_object,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v9 >= (int)funcIds->max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(Master_object, v7);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ClassBoardCommandSpellEntity__GetEffectIdArray(
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AEEB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5AEEB = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  SetTypeDataValArray = ClassBoardCommandSpellEntity__GetSetTypeDataValArray(this, v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !SetTypeDataValArray )
    goto LABEL_18;
  max_length = SetTypeDataValArray->max_length;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B88814(Master_object, v7);
      Master_object = (Il2CppObject *)SetTypeDataValArray->m_Items[v10];
      if ( !Master_object )
        break;
      Master_object = (Il2CppObject *)DataVals__GetClassIconAuraEffectId((DataVals_o *)Master_object, 0LL);
      if ( (_DWORD)Master_object )
      {
        if ( !v9 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v9,
                                          &entity,
                                          (int32_t)Master_object,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity || !v3 )
            break;
          Master_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                            v3,
                                            HIDWORD(entity[1].klass),
                                            (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      max_length = SetTypeDataValArray->max_length;
      if ( (int)++v10 >= max_length )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                 (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_18:
    sub_1B8880C(Master_object, v7);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcIds; // x20
  FunctionMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x0
  __int64 v8; // x1

  if ( (byte_4A5AEEA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AEEA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcIds = this->fields.funcIds;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = ClassBoardCommandSpellEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1B8880C(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcIds, DataValsList, 0LL);
}


DataVals_array *__fastcall ClassBoardCommandSpellEntity__getDataValsList(
        ClassBoardCommandSpellEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  DataVals_array *v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  DataVals_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  if ( (byte_4A5AEE8 & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AEE8 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (DataVals_array *)sub_1B88658(DataVals___TypeInfo, 1LL);
    v16 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      if ( v16 )
      {
        v4 = sub_1B886EC(v16, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_21:
          v20 = sub_1B88830(v4);
          sub_1B886D8(v20, 0LL);
        }
      }
      if ( !v7->max_length )
LABEL_20:
        sub_1B88814(v4, v5);
      v7->m_Items[0] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v16, v17, v18);
      return v7;
    }
LABEL_13:
    sub_1B8880C(v4, v5);
  }
  v4 = sub_1B88658(DataVals___TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = (DataVals_array *)v4;
  v8 = 4LL;
  v9 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      return v7;
    if ( v11 >= max_length )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0LL);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1B886EC(v13, v7->obj.klass->_1.element_class);
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= v7->max_length )
        goto LABEL_20;
      *((_QWORD *)&v7->obj.klass + v8) = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v7 + v9), (int32_t)v13, v14, v15);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8LL;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}