void ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x3

  if ( (byte_4D3471D & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardLockUser_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_4D3471D = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  this->fields.lockId = entity->fields.lockId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v7 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               this->fields.lockId,
               (const MethodInfo_3463274 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v8 = sub_1C93D20(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v8, 0),
        *(_QWORD *)(v8 + 24) = entity,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)entity, v9, v10, v11, v12, v13, v14),
        this->fields.user = (struct IClassBoardSquareUser_o *)v8,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.user, v8, v15, v16, v17, v18, v19, v20),
        !v7) )
  {
LABEL_9:
    sub_1C93D2C(Master_object, v6);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v7[1].monitor,
    (System_Int32_array *)v7[2].klass,
    v21);
}


int32_t ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t AcquireFlag; // w19
  const MethodInfo *v7; // x2
  _BOOL8 IsOpen; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  IClassBoardItemModel_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  ClassBoardCondData_o v37; // [xsp+0h] [xbp-50h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_4D3471E & 1) == 0 )
  {
    sub_1C93AD4(&IClassBoardItemModel_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D3471E = 1;
  }
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v5);
    v37 = CondData;
    *(_QWORD *)&CondData.fields.Type = &v37;
    IsOpen = ClassBoardCondData__IsOpen(CondData, v7);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_1C93D2C(IsOpen, v9);
    klass = itemList->klass;
    v12 = *(unsigned __int16 *)&itemList->klass->_2.rank;
    if ( *(_WORD *)&itemList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_11:
      v14 = sub_1C69E5C(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v14)(
            itemList,
            *(_QWORD *)(v14 + 8));
    if ( !v16 )
      sub_1C93D2C(0, v15);
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_18;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_18:
        v20 = sub_1C69E5C(v16, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
        break;
      v21 = *(_QWORD *)v16;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v23 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_25;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_25:
        v24 = sub_1C69E5C(v16, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      v27 = v25;
      if ( !v25 )
        sub_1C93D2C(0, v26);
      v28 = *(_QWORD *)v25;
      v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v30 = (IClassBoardItemModel_c **)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *(v30 - 1) != IClassBoardItemModel_TypeInfo )
        {
          --v29;
          v30 += 2;
          if ( !v29 )
            goto LABEL_32;
        }
        v31 = v28 + 16LL * (*(_DWORD *)v30 + 2) + 312;
      }
      else
      {
LABEL_32:
        v31 = sub_1C69E5C(v25, IClassBoardItemModel_TypeInfo, 2);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v32 = *(_QWORD *)v16;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_40;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_40:
      v35 = sub_1C69E5C(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
  }
  return AcquireFlag;
}


ClassBoardCondData_o ClassBoardLockModel__get_CondData(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t v8; // [xsp+8h] [xbp-18h]
  ClassBoardCondData_o v9; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_1C93D2C(this, method);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0;
  ClassBoardCondData___ctor_48964016(v9, v2, v3);
  *(_QWORD *)&result.fields.Type = v7;
  result.fields.Num = v8;
  return result;
}


bool ClassBoardLockModel__get_IsOpen(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardCondData_o v4; // [xsp+0h] [xbp-20h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  CondData = ClassBoardLockModel__get_CondData(this, method);
  v4 = CondData;
  *(_QWORD *)&CondData.fields.Type = &v4;
  return ClassBoardCondData__IsOpen(CondData, v2);
}