void ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE40F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE40F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardSquareEntity__CreatePK(int32_t classBoardBaseId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4CEE40E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE40E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassBoardSquareEntity__CreatePrimaryKey(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardSquareEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}


bool ClassBoardSquareEntity__IsGrand(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE40C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_4CEE40C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.classBoardBaseId,
                                    (const MethodInfo_342E348 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return SLODWORD(entity[4].monitor) > 0;
LABEL_11:
    sub_1C7BD40(Master_object, v4);
  }
  return 0;
}


bool ClassBoardSquareEntity__IsSetGrandSvt(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_IEnumerable_TSource__o *OpenClassIdArrayFromBaseId; // x20
  ClassBoardClassMaster_c *klass; // x8
  ClassBoardClassMaster_o *v8; // x19
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  int32_t SvtClassId; // w1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4CEE40D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CEE40D = 1;
  }
  if ( ClassBoardSquareEntity__IsGrand(this, method) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object
      || (OpenClassIdArrayFromBaseId = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                                                                              Master_object,
                                                                                              this->fields.classBoardBaseId,
                                                                                              v5),
          (Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantGrandMaster___)) == 0)
      || (Master_object = (ClassBoardClassMaster_o *)UserServantGrandMaster__GetUserServantEntities(
                                                       (UserServantGrandMaster_o *)Master_object,
                                                       0)) == 0 )
    {
      sub_1C7BD40(Master_object, v4);
    }
    klass = Master_object->klass;
    v8 = Master_object;
    v9 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
    if ( *(_WORD *)&Master_object->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_13;
      }
      v11 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v11 = sub_1C51E70(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(ClassBoardClassMaster_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
    if ( !v14 )
      sub_1C7BD40(0, v13);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_21;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_21:
        v18 = sub_1C51E70(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
      if ( (v12 & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_28;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_28:
        v22 = sub_1C51E70(v14, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      v23 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C7BD40(0, v24);
      SvtClassId = UserServantEntity__getSvtClassId(v23, 0, 1, 0);
      if ( System_Linq_Enumerable__Contains_int_(
             OpenClassIdArrayFromBaseId,
             SvtClassId,
             (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        goto LABEL_34;
      }
    }
    v12 = 0;
LABEL_34:
    v26 = *(_QWORD *)v14;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_38;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_38:
      v29 = sub_1C51E70(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v14, *(_QWORD *)(v29 + 8));
  }
  else
  {
    v12 = 0;
  }
  return v12 & 1;
}


bool ClassBoardSquareEntity__get_HasLockId(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.lockId != 0;
}


bool ClassBoardSquareEntity__get_IsBlank(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool ClassBoardSquareEntity__get_IsCommandSpell(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 2;
}


bool ClassBoardSquareEntity__get_IsPassive(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 1;
}


bool ClassBoardSquareEntity__get_IsStart(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}