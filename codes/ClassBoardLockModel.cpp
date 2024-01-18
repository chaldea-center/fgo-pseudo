void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  WarEntity_o *v10; // x21
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x3

  if ( (byte_4189506 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardLockUser_TypeInfo, entity);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    byte_4189506 = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v10 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                Master_WarQuestSelectionMaster,
                this->fields.lockId,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v11 = sub_B2C42C(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v11, 0LL),
        *(_QWORD *)(v11 + 24) = entity,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)entity,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        this->fields.user = (struct IClassBoardSquareUser_o *)v11,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v11,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        !v10) )
  {
LABEL_10:
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v10->fields.age,
    (System_Int32_array *)v10->fields.name,
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
  __int64 v9; // x1
  int32_t AcquireFlag; // w19
  System_Enum_o *v11; // x21
  System_Enum_o *IsOpen; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x21
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  IClassBoardItemModel_c **v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  int v46; // [xsp+Ch] [xbp-54h] BYREF
  int v47; // [xsp+10h] [xbp-50h]
  int v48; // [xsp+18h] [xbp-48h]
  ClassBoardCondData_o CondData; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o v50; // 0:x0.12

  if ( (byte_4189507 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, checkedBlankIdHashSet);
    sub_B2C35C(&IClassBoardItemModel_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4189507 = 1;
  }
  v48 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  CondData.fields.Type = AcquireFlag;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &CondData);
  v46 = 1;
  IsOpen = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v46);
  if ( !v11 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v11, IsOpen, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v14);
  *(_QWORD *)&v50.fields.Type = &CondData;
  v50.fields.Num = 0;
  IsOpen = (System_Enum_o *)ClassBoardCondData__IsOpen(v50, v15);
  itemList = this->fields.itemList;
  if ( ((unsigned __int8)IsOpen & 1) == 0 )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B2C434(IsOpen, v13);
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v21 = sub_AC5258(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v16);
  }
  v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v21)(
          itemList,
          *(_QWORD *)(v21 + 8));
  if ( !v24 )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_19;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_19:
      v28 = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v31 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_26;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_26:
      v32 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v23);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    v36 = v33;
    if ( !v33 )
      sub_B2C434(0LL, v34);
    v37 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v38 = 0LL;
      v39 = (IClassBoardItemModel_c **)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *(v39 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v38;
        v39 += 2;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_33;
      }
      v40 = v37 + 16LL * (*(_DWORD *)v39 + 2) + 312;
    }
    else
    {
LABEL_33:
      v40 = sub_AC5258(v33, IClassBoardItemModel_TypeInfo, 2LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v47 = 95;
  v48 = 1;
  v41 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_42;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_42:
    v44 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v24, *(_QWORD *)(v44 + 8));
  if ( v47 == 95 )
    v48 = 0;
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
    sub_B2C434(this, method);
  v8.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v8.fields.Type = &v6;
  v7 = 0;
  v6 = 0LL;
  ClassBoardCondData___ctor_25495440(v8, 0, v2);
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