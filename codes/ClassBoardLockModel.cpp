void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *v7; // x21
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x3

  if ( (byte_438D3CD & 1) == 0 )
  {
    sub_B775C4(&ClassBoardLockUser_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_438D3CD = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v7 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               this->fields.lockId,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v8 = sub_B77694(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v8, 0LL),
        *(_QWORD *)(v8 + 24) = entity,
        sub_B77560(
          (BattleServantConfConponent_o *)(v8 + 24),
          (System_Int32_array **)entity,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        this->fields.user = (struct IClassBoardSquareUser_o *)v8,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v8,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        !v7) )
  {
LABEL_10:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v7->fields.age,
    (System_Int32_array *)v7->fields.name,
    v21);
}


int32_t __fastcall ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  int32_t AcquireFlag; // w19
  __int64 v6; // x2
  System_Enum_o *v7; // x21
  __int64 v8; // x2
  System_Enum_o *IsOpen; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  IClassBoardItemModel_c **v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+Ch] [xbp-54h] BYREF
  int v41; // [xsp+10h] [xbp-50h]
  int v42; // [xsp+18h] [xbp-48h]
  ClassBoardCondData_o CondData; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o v44; // 0:x0.12

  if ( (byte_438D3CE & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&IClassBoardItemModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438D3CE = 1;
  }
  v42 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  CondData.fields.Type = AcquireFlag;
  v7 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &CondData, v6);
  v40 = 1;
  IsOpen = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40, v8);
  if ( !v7 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v7, IsOpen, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v11);
  *(_QWORD *)&v44.fields.Type = &CondData;
  v44.fields.Num = 0;
  IsOpen = (System_Enum_o *)ClassBoardCondData__IsOpen(v44, v12);
  itemList = this->fields.itemList;
  if ( ((unsigned __int8)IsOpen & 1) == 0 )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B7769C(IsOpen, v10);
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v17 = sub_B0F4C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v17)(
          itemList,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_B7769C(0LL, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_19;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_19:
      v23 = sub_B0F4C0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v26 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_26;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_26:
      v27 = sub_B0F4C0(v19, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28 )
      sub_B7769C(0LL, v29);
    v31 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v32 = 0LL;
      v33 = (IClassBoardItemModel_c **)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *(v33 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * (*(_DWORD *)v33 + 2) + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_B0F4C0(v28, IClassBoardItemModel_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v41 = 95;
  v42 = 1;
  v35 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_42;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_42:
    v38 = sub_B0F4C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
  if ( v41 == 95 )
    v42 = 0;
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
  __int64 v6; // [xsp+0h] [xbp-10h] BYREF
  int32_t v7; // [xsp+8h] [xbp-8h]
  ClassBoardCondData_o v8; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_B7769C(this, method);
  v8.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v8.fields.Type = &v6;
  v7 = 0;
  v6 = 0LL;
  ClassBoardCondData___ctor_27357128(v8, 0, v2);
  v4 = v6;
  v5 = v7;
  *(_QWORD *)&result.fields.Type = v4;
  result.fields.Num = v5;
  return result;
}


bool __fastcall ClassBoardLockModel__get_IsOpen(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardCondData_o CondData; // [xsp+0h] [xbp-10h] BYREF
  ClassBoardCondData_o v5; // 0:x0.12

  CondData = ClassBoardLockModel__get_CondData(this, method);
  *(_QWORD *)&v5.fields.Type = &CondData;
  v5.fields.Num = 0;
  return ClassBoardCondData__IsOpen(v5, v2);
}


// attributes: thunk
bool __fastcall ClassBoardLockModel__get_IsOpenedMissionClearDialog(
        ClassBoardLockModel_o *this,
        const MethodInfo *method)
{
  return ClassBoardSave__IsPlayCondOpenEffect((IClassBoardLockModel_o *)this, method);
}