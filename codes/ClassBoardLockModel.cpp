void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3

  if ( (byte_49FF84C & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardLockUser_TypeInfo, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    byte_49FF84C = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  this->fields.lockId = entity->fields.lockId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v9 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               this->fields.lockId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v12 = sub_1B64314(ClassBoardLockUser_TypeInfo, v10, v11),
        System_Object___ctor((Il2CppObject *)v12, 0LL),
        *(_QWORD *)(v12 + 24) = entity,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)entity, v13, v14),
        this->fields.user = (struct IClassBoardSquareUser_o *)v12,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.user, v12, v15, v16),
        !v9) )
  {
LABEL_9:
    sub_1B64324(Master_object);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v9[1].monitor,
    (System_Int32_array *)v9[2].klass,
    v17);
}


int32_t __fastcall ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  int32_t AcquireFlag; // w19
  const MethodInfo *v11; // x2
  _BOOL8 IsOpen; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  IClassBoardItemModel_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  ClassBoardCondData_o v38; // [xsp+0h] [xbp-50h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_49FF84D & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardItemModel_TypeInfo, checkedBlankIdHashSet);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FF84D = 1;
  }
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v9);
    v38 = CondData;
    *(_QWORD *)&CondData.fields.Type = &v38;
    IsOpen = ClassBoardCondData__IsOpen(CondData, v11);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_1B64324(IsOpen);
    klass = itemList->klass;
    v15 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v17 = sub_1BB60A8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v17)(
            itemList,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_18;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_18:
        v22 = sub_1BB60A8(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v25 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_25;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_25:
        v26 = sub_1BB60A8(v18, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      v28 = v27;
      if ( !v27 )
        sub_1B64324(0LL);
      v29 = *(_QWORD *)v27;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v31 = (IClassBoardItemModel_c **)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *(v31 - 1) != IClassBoardItemModel_TypeInfo )
        {
          --v30;
          v31 += 2;
          if ( !v30 )
            goto LABEL_32;
        }
        v32 = v29 + 16LL * (*(_DWORD *)v31 + 2) + 312;
      }
      else
      {
LABEL_32:
        v32 = sub_1BB60A8(v27, IClassBoardItemModel_TypeInfo, 2LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v33 = *(_QWORD *)v18;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_40;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_40:
      v36 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v18, *(_QWORD *)(v36 + 8));
  }
  return AcquireFlag;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCondData_o __fastcall ClassBoardLockModel__get_CondData(
        ClassBoardLockModel_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v5; // x0 OVERLAPPED
  int32_t v6; // w1
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t v8; // [xsp+8h] [xbp-18h]
  ClassBoardCondData_o v9; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64324(this);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0LL;
  ClassBoardCondData___ctor_44154792(v9, v2, v3);
  v5 = v7;
  v6 = v8;
  *(_QWORD *)&result.fields.Type = v5;
  result.fields.Num = v6;
  return result;
}


bool __fastcall ClassBoardLockModel__get_IsOpen(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardCondData_o v4; // [xsp+0h] [xbp-20h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  CondData = ClassBoardLockModel__get_CondData(this, method);
  v4 = CondData;
  *(_QWORD *)&CondData.fields.Type = &v4;
  return ClassBoardCondData__IsOpen(CondData, v2);
}