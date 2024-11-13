void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x3

  if ( (byte_4B19761 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardLockUser_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v9, v10);
    byte_4B19761 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  this->fields.lockId = entity->fields.lockId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                this->fields.lockId,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v17 = sub_1BCAA2C(ClassBoardLockUser_TypeInfo, v14, v15, v16),
        System_Object___ctor((Il2CppObject *)v17, 0LL),
        *(_QWORD *)(v17 + 24) = entity,
        sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)entity, v18, v19, v20, v21, v22, v23),
        this->fields.user = (struct IClassBoardSquareUser_o *)v17,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.user, v17, v24, v25, v26, v27, v28, v29),
        !v13) )
  {
LABEL_9:
    sub_1BCAA3C(Master_object, v12);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v13[1].monitor,
    (System_Int32_array *)v13[2].klass,
    v30);
}


int32_t __fastcall ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x1
  int32_t AcquireFlag; // w19
  const MethodInfo *v15; // x2
  _BOOL8 IsOpen; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x8
  __int64 v37; // x9
  IClassBoardItemModel_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  ClassBoardCondData_o CondData; // [xsp+0h] [xbp-50h] BYREF
  ClassBoardCondData_o v46; // 0:x0.12

  if ( (byte_4B19762 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardItemModel_TypeInfo, checkedBlankIdHashSet, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B19762 = 1;
  }
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v13);
    *(_QWORD *)&v46.fields.Type = &CondData;
    v46.fields.Num = 0;
    IsOpen = ClassBoardCondData__IsOpen(v46, v15);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_1BCAA3C(IsOpen, v17);
    klass = itemList->klass;
    v20 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_11;
      }
      v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v22 = sub_1C1C7C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v22)(
            itemList,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1BCAA3C(0LL, v23);
    while ( 1 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_18;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_18:
        v28 = sub_1C1C7C0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      v29 = *(_QWORD *)v24;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v31 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_25;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_25:
        v32 = sub_1C1C7C0(v24, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
      }
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
      v35 = v33;
      if ( !v33 )
        sub_1BCAA3C(0LL, v34);
      v36 = *(_QWORD *)v33;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v38 = (IClassBoardItemModel_c **)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *(v38 - 1) != IClassBoardItemModel_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_32;
        }
        v39 = v36 + 16LL * (*(_DWORD *)v38 + 2) + 312;
      }
      else
      {
LABEL_32:
        v39 = sub_1C1C7C0(v33, IClassBoardItemModel_TypeInfo, 2LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v40 = *(_QWORD *)v24;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_40;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_40:
      v43 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v24, *(_QWORD *)(v43 + 8));
  }
  return AcquireFlag;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCondData_o __fastcall ClassBoardLockModel__get_CondData(
        ClassBoardLockModel_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v4; // x0 OVERLAPPED
  int32_t v5; // w1
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  int32_t v7; // [xsp+8h] [xbp-18h]
  ClassBoardCondData_o v8; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, method);
  v8.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v8.fields.Type = &v6;
  v7 = 0;
  v6 = 0LL;
  ClassBoardCondData___ctor_45326636(v8, 0, v2);
  v4 = v6;
  v5 = v7;
  *(_QWORD *)&result.fields.Type = v4;
  result.fields.Num = v5;
  return result;
}


bool __fastcall ClassBoardLockModel__get_IsOpen(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardCondData_o CondData; // [xsp+0h] [xbp-20h] BYREF
  ClassBoardCondData_o v5; // 0:x0.12

  CondData = ClassBoardLockModel__get_CondData(this, method);
  *(_QWORD *)&v5.fields.Type = &CondData;
  v5.fields.Num = 0;
  return ClassBoardCondData__IsOpen(v5, v2);
}