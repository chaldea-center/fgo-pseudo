void __fastcall ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  WarEntity_o *v17; // x21
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3

  if ( (byte_42EA81B & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardLockUser_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v12, v13, v14);
    byte_42EA81B = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_10;
  this->fields.lockId = entity->fields.lockId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v17 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                Master_WarQuestSelectionMaster,
                this->fields.lockId,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v18 = sub_B5D694(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v18, 0LL),
        *(_QWORD *)(v18 + 24) = entity,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 24),
          (System_Int32_array **)entity,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        this->fields.user = (struct IClassBoardSquareUser_o *)v18,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.user,
          (System_Int32_array **)v18,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        !v17) )
  {
LABEL_10:
    sub_B5D69C(Master_WarQuestSelectionMaster, v16);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v17->fields.age,
    (System_Int32_array *)v17->fields.name,
    v31);
}


int32_t __fastcall ClassBoardLockModel__GetAcquireFlag(
        ClassBoardLockModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t AcquireFlag; // w19
  System_Enum_o *v22; // x21
  System_Enum_o *IsOpen; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x3
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  __int64 v35; // x20
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x21
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  IClassBoardItemModel_c **v50; // x11
  __int64 v51; // x0
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  int v57; // [xsp+Ch] [xbp-54h] BYREF
  int v58; // [xsp+10h] [xbp-50h]
  int v59; // [xsp+18h] [xbp-48h]
  ClassBoardCondData_o CondData; // [xsp+20h] [xbp-40h] BYREF
  ClassBoardCondData_o v61; // 0:x0.12

  if ( (byte_42EA81C & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)checkedBlankIdHashSet, (_DWORD)method, v3);
    sub_B5D5C4(&IClassBoardItemModel_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    byte_42EA81C = 1;
  }
  v59 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  CondData.fields.Type = AcquireFlag;
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &CondData);
  v57 = 1;
  IsOpen = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v57);
  if ( !v22 )
    goto LABEL_49;
  if ( System_Enum__HasFlag(v22, IsOpen, 0LL) )
    return AcquireFlag;
  CondData = ClassBoardLockModel__get_CondData(this, v25);
  *(_QWORD *)&v61.fields.Type = &CondData;
  v61.fields.Num = 0;
  IsOpen = (System_Enum_o *)ClassBoardCondData__IsOpen(v61, v26);
  itemList = this->fields.itemList;
  if ( ((unsigned __int8)IsOpen & 1) == 0 )
    AcquireFlag |= 4u;
  if ( !itemList )
LABEL_49:
    sub_B5D69C(IsOpen, v24);
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v32 = sub_AF54C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v27);
  }
  v35 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v32)(
          itemList,
          *(_QWORD *)(v32 + 8));
  if ( !v35 )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_19;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_19:
      v39 = sub_AF54C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v42 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_26;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_26:
      v43 = sub_AF54C0(v35, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v34);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v47 = v44;
    if ( !v44 )
      sub_B5D69C(0LL, v45);
    v48 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v49 = 0LL;
      v50 = (IClassBoardItemModel_c **)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *(v50 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v49;
        v50 += 2;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_33;
      }
      v51 = v48 + 16LL * (*(_DWORD *)v50 + 2) + 312;
    }
    else
    {
LABEL_33:
      v51 = sub_AF54C0(v44, IClassBoardItemModel_TypeInfo, 2LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
    {
      AcquireFlag |= 0x10u;
      break;
    }
  }
  v58 = 95;
  v59 = 1;
  v52 = *(_QWORD *)v35;
  if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
  {
    v53 = 0LL;
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
        goto LABEL_42;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_42:
    v55 = sub_AF54C0(v35, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v35, *(_QWORD *)(v55 + 8));
  if ( v58 == 95 )
    v59 = 0;
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
    sub_B5D69C(this, method);
  v8.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v8.fields.Type = &v6;
  v7 = 0;
  v6 = 0LL;
  ClassBoardCondData___ctor_27230432(v8, 0, v2);
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