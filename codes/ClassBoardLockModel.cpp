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
  ClassBoardSquareUser_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4217B35 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardLockUser_TypeInfo, entity);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    byte_4217B35 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, 0LL);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v9 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               this->fields.lockId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v12 = (ClassBoardSquareUser_o *)sub_B0D974(ClassBoardLockUser_TypeInfo, v10, v11),
        ClassBoardSquareUser___ctor(v12, entity, 0LL),
        this->fields.user = (struct IClassBoardSquareUser_o *)v12,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !v9) )
  {
LABEL_10:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v9->fields.age,
    (System_Int32_array *)v9->fields.name,
    0LL);
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
  System_Enum_o *IsOpen; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
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
  ClassBoardCondData_o v43; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_4217B36 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, checkedBlankIdHashSet);
    sub_B0D8A4(&IClassBoardItemModel_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4217B36 = 1;
  }
  v42 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, 0LL);
  v43.fields.Type = AcquireFlag;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v43);
  v40 = 1;
  IsOpen = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40);
  if ( !v11 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v11, IsOpen, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v13);
  v43 = CondData;
  *(_QWORD *)&CondData.fields.Type = &v43;
  IsOpen = (System_Enum_o *)ClassBoardCondData__IsOpen(CondData, v14);
  itemList = this->fields.itemList;
  if ( ((unsigned __int8)IsOpen & 1) == 0 )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B0D97C(IsOpen);
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v19 = sub_AA67A0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v19)(
          itemList,
          *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_19;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_19:
      v24 = sub_AA67A0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_26;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_26:
      v28 = sub_AA67A0(v20, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( !v29 )
      sub_B0D97C(0LL);
    v31 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v32 = 0LL;
      v33 = (IClassBoardItemModel_c **)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *(v33 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * (*(_DWORD *)v33 + 2) + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_AA67A0(v29, IClassBoardItemModel_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v41 = 95;
  v42 = 1;
  v35 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_42;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_42:
    v38 = sub_AA67A0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v20, *(_QWORD *)(v38 + 8));
  if ( v41 == 95 )
    v42 = 0;
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
  __int64 v7; // [xsp+0h] [xbp-10h] BYREF
  int32_t v8; // [xsp+8h] [xbp-8h]
  ClassBoardCondData_o v9; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0LL;
  ClassBoardCondData___ctor_30312804(v9, v2, v3);
  v5 = v7;
  v6 = v8;
  *(_QWORD *)&result.fields.Type = v5;
  result.fields.Num = v6;
  return result;
}


bool __fastcall ClassBoardLockModel__get_IsOpen(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardCondData_o v4; // [xsp+0h] [xbp-10h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  CondData = ClassBoardLockModel__get_CondData(this, method);
  v4 = CondData;
  *(_QWORD *)&CondData.fields.Type = &v4;
  return ClassBoardCondData__IsOpen(CondData, v2);
}


bool __fastcall ClassBoardLockModel__get_IsOpenedMissionClearDialog(
        ClassBoardLockModel_o *this,
        const MethodInfo *method)
{
  return ClassBoardSave__IsPlayCondOpenEffect((IClassBoardLockModel_o *)this, 0LL);
}