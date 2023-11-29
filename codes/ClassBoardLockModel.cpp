void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x3

  if ( (byte_40FB980 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardLockUser_TypeInfo, entity);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    byte_40FB980 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v9 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               this->fields.lockId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v14 = sub_B170CC(ClassBoardLockUser_TypeInfo, v10, v11, v12, v13),
        System_Object___ctor((Il2CppObject *)v14, 0LL),
        *(_QWORD *)(v14 + 24) = entity,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v14 + 24),
          (System_Int32_array **)entity,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        this->fields.user = (struct IClassBoardSquareUser_o *)v14,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v14,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        !v9) )
  {
LABEL_10:
    sub_B170D4();
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v9->fields.age,
    (System_Int32_array *)v9->fields.name,
    v27);
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
  __int64 v9; // x1
  int32_t AcquireFlag; // w19
  System_Enum_o *v11; // x21
  System_Enum_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  bool IsOpen; // w0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  IClassBoardItemModel_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  int v42; // [xsp+10h] [xbp-50h]
  int v43; // [xsp+18h] [xbp-48h]
  ClassBoardCondData_o CondData; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o v45; // 0:x0.12

  if ( (byte_40FB981 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, checkedBlankIdHashSet);
    sub_B16FFC(&IClassBoardItemModel_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_40FB981 = 1;
  }
  v43 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  CondData.fields.Type = AcquireFlag;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &CondData);
  v41 = 1;
  v12 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41);
  if ( !v11 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v11, v12, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v13);
  *(_QWORD *)&v45.fields.Type = &CondData;
  v45.fields.Num = 0;
  IsOpen = ClassBoardCondData__IsOpen(v45, v14);
  itemList = this->fields.itemList;
  if ( !IsOpen )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B170D4();
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v20 = sub_AAFEF8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v20)(
          itemList,
          *(_QWORD *)(v20 + 8));
  if ( !v21 )
    sub_B170D4();
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_19;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_19:
      v25 = sub_AAFEF8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v28 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_26;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_26:
      v29 = sub_AAFEF8(v21, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( !v30 )
      sub_B170D4();
    v32 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v33 = 0LL;
      v34 = (IClassBoardItemModel_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v34 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v33;
        v34 += 2;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_33;
      }
      v35 = v32 + 16LL * (*(_DWORD *)v34 + 2) + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_AAFEF8(v30, IClassBoardItemModel_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v42 = 95;
  v43 = 1;
  v36 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_42;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_42:
    v39 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v21, *(_QWORD *)(v39 + 8));
  if ( v42 == 95 )
    v43 = 0;
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
    sub_B170D4();
  v8.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v8.fields.Type = &v6;
  v7 = 0;
  v6 = 0LL;
  ClassBoardCondData___ctor_26975256(v8, 0, v2);
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