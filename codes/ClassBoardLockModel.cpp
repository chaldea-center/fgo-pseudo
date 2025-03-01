void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  int64_t v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3

  if ( (byte_4C00E54 & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardLockUser_TypeInfo, entity);
    sub_1C2E12C(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    byte_4C00E54 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  this->fields.lockId = entity->fields.lockId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v10 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                this->fields.lockId,
                (const MethodInfo_327B180 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v11 = sub_1C2E378(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v11, 0LL),
        *(_QWORD *)(v11 + 24) = entity,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)entity, v12, v13, v14, v15, v16, v17),
        this->fields.user = (struct IClassBoardSquareUser_o *)v11,
        sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.user, v11, v18, v19, v20, v21, v22, v23),
        !v10) )
  {
LABEL_9:
    sub_1C2E388(Master_object, v9);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v10[1].monitor,
    (System_Int32_array *)v10[2].klass,
    v24);
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  IClassBoardItemModel_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  ClassBoardCondData_o v41; // [xsp+0h] [xbp-50h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_4C00E55 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardItemModel_TypeInfo, checkedBlankIdHashSet);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4C00E55 = 1;
  }
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v9);
    v41 = CondData;
    *(_QWORD *)&CondData.fields.Type = &v41;
    IsOpen = ClassBoardCondData__IsOpen(CondData, v11);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_1C2E388(IsOpen, v13);
    klass = itemList->klass;
    v16 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v18 = sub_1C8010C(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v18)(
            itemList,
            *(_QWORD *)(v18 + 8));
    if ( !v20 )
      sub_1C2E388(0LL, v19);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_18;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_18:
        v24 = sub_1C8010C(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_25;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_25:
        v28 = sub_1C8010C(v20, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      v31 = v29;
      if ( !v29 )
        sub_1C2E388(0LL, v30);
      v32 = *(_QWORD *)v29;
      v33 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v34 = (IClassBoardItemModel_c **)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *(v34 - 1) != IClassBoardItemModel_TypeInfo )
        {
          --v33;
          v34 += 2;
          if ( !v33 )
            goto LABEL_32;
        }
        v35 = v32 + 16LL * (*(_DWORD *)v34 + 2) + 312;
      }
      else
      {
LABEL_32:
        v35 = sub_1C8010C(v29, IClassBoardItemModel_TypeInfo, 2LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v36 = *(_QWORD *)v20;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_40;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_40:
      v39 = sub_1C8010C(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
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
    sub_1C2E388(this, method);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0LL;
  ClassBoardCondData___ctor_46048516(v9, v2, v3);
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