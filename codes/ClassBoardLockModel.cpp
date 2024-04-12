void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *v7; // x21
  ClassBoardSquareUser_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B3881 & 1) == 0 )
  {
    sub_B52984(&ClassBoardLockUser_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_42B3881 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, 0LL);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v7 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               this->fields.lockId,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v8 = (ClassBoardSquareUser_o *)sub_B52A54(ClassBoardLockUser_TypeInfo),
        ClassBoardSquareUser___ctor(v8, entity, 0LL),
        this->fields.user = (struct IClassBoardSquareUser_o *)v8,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        !v7) )
  {
LABEL_10:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v7->fields.age,
    (System_Int32_array *)v7->fields.name,
    0LL);
}


int32_t __fastcall ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  int32_t AcquireFlag; // w19
  System_Enum_o *v6; // x21
  System_Enum_o *IsOpen; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x3
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
  __int64 v30; // x3
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
  ClassBoardCondData_o v44; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_42B3882 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&IClassBoardItemModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B3882 = 1;
  }
  v43 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, 0LL);
  v44.fields.Type = AcquireFlag;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v44);
  v41 = 1;
  IsOpen = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41);
  if ( !v6 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v6, IsOpen, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v9);
  v44 = CondData;
  *(_QWORD *)&CondData.fields.Type = &v44;
  IsOpen = (System_Enum_o *)ClassBoardCondData__IsOpen(CondData, v10);
  itemList = this->fields.itemList;
  if ( ((unsigned __int8)IsOpen & 1) == 0 )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B52A5C(IsOpen, v8);
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v16 = sub_AEB880(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v11);
  }
  v19 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v16)(
          itemList,
          *(_QWORD *)(v16 + 8));
  if ( !v19 )
    sub_B52A5C(0LL, v17);
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
      v23 = sub_AEB880(v19, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
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
      v27 = sub_AEB880(v19, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v18);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v31 = v28;
    if ( !v28 )
      sub_B52A5C(0LL, v29);
    v32 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v33 = 0LL;
      v34 = (IClassBoardItemModel_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v34 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v33;
        v34 += 2;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_33;
      }
      v35 = v32 + 16LL * (*(_DWORD *)v34 + 2) + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_AEB880(v28, IClassBoardItemModel_TypeInfo, 2LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v42 = 95;
  v43 = 1;
  v36 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_42;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_42:
    v39 = sub_AEB880(v19, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v19, *(_QWORD *)(v39 + 8));
  if ( v42 == 95 )
    v43 = 0;
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
    sub_B52A5C(this, method);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v8 = 0;
  v7 = 0LL;
  ClassBoardCondData___ctor_31633240(v9, v2, v3);
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