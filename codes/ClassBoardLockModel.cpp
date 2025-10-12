void ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *v6; // x21
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_4C3B59B & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardLockUser_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_4C3B59B = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  this->fields.lockId = entity->fields.lockId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v6 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               this->fields.lockId,
               (const MethodInfo_3396838 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v7 = sub_1C32E6C(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v7, 0),
        *(_QWORD *)(v7 + 24) = entity,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)entity, v8, v9),
        this->fields.user = (struct IClassBoardSquareUser_o *)v7,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.user, v7, v10, v11),
        !v6) )
  {
LABEL_9:
    sub_1C32E7C(Master_object);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v6[1].monitor,
    (System_Int32_array *)v6[2].klass,
    v12);
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
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x20
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  IClassBoardItemModel_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  ClassBoardCondData_o v34; // [xsp+0h] [xbp-50h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_4C3B59C & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardItemModel_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3B59C = 1;
  }
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v5);
    v34 = CondData;
    *(_QWORD *)&CondData.fields.Type = &v34;
    IsOpen = ClassBoardCondData__IsOpen(CondData, v7);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_1C32E7C(IsOpen);
    klass = itemList->klass;
    v11 = *(unsigned __int16 *)&itemList->klass->_2.rank;
    if ( *(_WORD *)&itemList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_11:
      v13 = sub_1C83438(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v13)(
            itemList,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_18;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_18:
        v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v21 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_25;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_25:
        v22 = sub_1C83438(v14, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      v24 = v23;
      if ( !v23 )
        sub_1C32E7C(0);
      v25 = *(_QWORD *)v23;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
      {
        v27 = (IClassBoardItemModel_c **)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *(v27 - 1) != IClassBoardItemModel_TypeInfo )
        {
          --v26;
          v27 += 2;
          if ( !v26 )
            goto LABEL_32;
        }
        v28 = v25 + 16LL * (*(_DWORD *)v27 + 2) + 312;
      }
      else
      {
LABEL_32:
        v28 = sub_1C83438(v23, IClassBoardItemModel_TypeInfo, 2);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v29 = *(_QWORD *)v14;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_40;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_40:
      v32 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v14, *(_QWORD *)(v32 + 8));
  }
  return AcquireFlag;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCondData_o ClassBoardLockModel__get_CondData(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v5; // x0
  int32_t v6; // w1
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t v8; // [xsp+8h] [xbp-18h]
  ClassBoardCondData_o v9; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0;
  ClassBoardCondData___ctor_48005036(v9, v2, v3);
  v5 = v7;
  v6 = v8;
  *(_QWORD *)&result.fields.Type = v5;
  result.fields.Num = v6;
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