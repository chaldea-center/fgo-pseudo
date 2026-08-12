void ClassBoardLockModel___ctor(
        ClassBoardLockModel_o *this,
        ClassBoardSquareEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  DataManager_c *v7; // x0
  int v8; // w9
  Il2CppObject *v9; // x21
  __int64 v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x3

  if ( (byte_597478E & 1) == 0 )
  {
    sub_2213A60(&ClassBoardLockUser_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_597478E = 1;
  }
  ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)this, entity, method);
  if ( !entity )
    goto LABEL_9;
  v7 = DataManager_TypeInfo;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.lockId = entity->fields.lockId;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (v9 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               this->fields.lockId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__),
        v10 = sub_2213CCC(ClassBoardLockUser_TypeInfo),
        System_Object___ctor((Il2CppObject *)v10, 0),
        *(_QWORD *)(v10 + 24) = entity,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)entity, v11, v12, v13, v14, v15, v16),
        this->fields.user = (struct IClassBoardSquareUser_o *)v10,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.user, v10, v17, v18, v19, v20, v21, v22),
        !v9) )
  {
LABEL_9:
    sub_2213CDC(Master_object, v6);
  }
  ClassBoardSquareModel__InitializeItemList(
    (ClassBoardSquareModel_o *)this,
    (System_Int32_array *)v9[1].monitor,
    (System_Int32_array *)v9[2].klass,
    v23);
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
  __int64 v9; // x1
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x20
  System_Collections_Generic_List_IClassBoardItemModel__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  IClassBoardItemModel_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v42; // [xsp+8h] [xbp-48h] BYREF
  __int64 *v43; // [xsp+10h] [xbp-40h]
  __int64 v44; // [xsp+18h] [xbp-38h] BYREF
  ClassBoardCondData_o CondData; // 0:x0.12

  if ( (byte_597478F & 1) == 0 )
  {
    sub_2213A60(&IClassBoardItemModel_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597478F = 1;
  }
  v44 = 0;
  AcquireFlag = ClassBoardSquareModel__GetAcquireFlag((ClassBoardSquareModel_o *)this, checkedBlankIdHashSet, method);
  if ( (AcquireFlag & 1) == 0 )
  {
    CondData = ClassBoardLockModel__get_CondData(this, v5);
    v42 = *(_QWORD *)&CondData.fields.Type;
    *(_QWORD *)&CondData.fields.Type = &v42;
    LODWORD(v43) = CondData.fields.Num;
    IsOpen = ClassBoardCondData__IsOpen(CondData, v7);
    itemList = this->fields.itemList;
    if ( !IsOpen )
      AcquireFlag |= 4u;
    if ( !itemList )
      sub_2213CDC(IsOpen, v9);
    klass = itemList->klass;
    v12 = *(unsigned __int16 *)&itemList->klass->_2.rank;
    if ( *(_WORD *)&itemList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_11:
      v14 = sub_224BC3C(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v14)(
            itemList,
            *(_QWORD *)(v14 + 8));
    v44 = v15;
    v42 = 0;
    v43 = &v44;
    while ( 1 )
    {
      v17 = v44;
      if ( !v44 )
        sub_2213CDC(v15, v16);
      v18 = *(_QWORD *)v44;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_19:
        v21 = sub_224BC3C(v44, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
      if ( (v22 & 1) == 0 )
        break;
      v24 = v44;
      if ( !v44 )
        sub_2213CDC(v22, v23);
      v25 = *(_QWORD *)v44;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_27;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_27:
        v28 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
      v31 = v29;
      if ( !v29 )
        sub_2213CDC(0, v30);
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
            goto LABEL_34;
        }
        v35 = v32 + 16LL * (*(_DWORD *)v34 + 2) + 312;
      }
      else
      {
LABEL_34:
        v35 = sub_224BC3C(v29, IClassBoardItemModel_TypeInfo, 2);
      }
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
      if ( (v15 & 1) == 0 )
      {
        AcquireFlag |= 0x10u;
        break;
      }
    }
    v36 = v44;
    if ( v44 )
    {
      v37 = *(_QWORD *)v44;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_43;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_43:
        v40 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
    }
  }
  return AcquireFlag;
}


ClassBoardCondData_o ClassBoardLockModel__get_CondData(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t v8; // [xsp+8h] [xbp-18h]
  ClassBoardCondData_o v9; // 0:x0.12
  ClassBoardCondData_o result; // 0:x0.12

  entity = this->fields.entity;
  if ( !entity )
    sub_2213CDC(this, method);
  v9.fields.Num = entity->fields.lockId;
  *(_QWORD *)&v9.fields.Type = &v7;
  v7 = 0;
  v8 = 0;
  ClassBoardCondData___ctor_55441084(v9, v2, v3);
  *(_QWORD *)&result.fields.Type = v7;
  result.fields.Num = v8;
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


bool ClassBoardLockModel__get_IsOpenedMissionClearDialog(ClassBoardLockModel_o *this, const MethodInfo *method)
{
  return ClassBoardSave__IsPlayCondOpenEffect((IClassBoardLockModel_o *)this, 0);
}