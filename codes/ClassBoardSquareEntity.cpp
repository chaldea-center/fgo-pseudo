void ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42D35 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C42D35 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardSquareEntity__CreatePK(int32_t classBoardBaseId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C42D34 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C42D34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassBoardSquareEntity__CreatePrimaryKey(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardSquareEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}


bool ClassBoardSquareEntity__IsGrand(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42D32 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_4C42D32 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.classBoardBaseId,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return SLODWORD(entity[4].monitor) > 0;
LABEL_11:
    sub_1C372B4(Master_object);
  }
  return 0;
}


bool ClassBoardSquareEntity__IsSetGrandSvt(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  ClassBoardClassMaster_o *Master_object; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *OpenClassIdArrayFromBaseId; // x20
  ClassBoardClassMaster_c *klass; // x8
  ClassBoardClassMaster_o *v7; // x19
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  char v11; // w21
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  UserServantEntity_o *v21; // x0
  int32_t SvtClassId; // w1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C42D33 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C42D33 = 1;
  }
  if ( ClassBoardSquareEntity__IsGrand(this, method) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object
      || (OpenClassIdArrayFromBaseId = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                                                                              Master_object,
                                                                                              this->fields.classBoardBaseId,
                                                                                              v4),
          (Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___)) == 0)
      || (Master_object = (ClassBoardClassMaster_o *)UserServantGrandMaster__GetUserServantEntities(
                                                       (UserServantGrandMaster_o *)Master_object,
                                                       0)) == 0 )
    {
      sub_1C372B4(Master_object);
    }
    klass = Master_object->klass;
    v7 = Master_object;
    v8 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
    if ( *(_WORD *)&Master_object->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_13;
      }
      v10 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v10 = sub_1C87870(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(ClassBoardClassMaster_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
    if ( !v12 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_21;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_21:
        v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8));
      if ( (v11 & 1) == 0 )
        break;
      v17 = *(_QWORD *)v12;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_28;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_28:
        v20 = sub_1C87870(v12, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      v21 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
      if ( !v21 )
        sub_1C372B4(0);
      SvtClassId = UserServantEntity__getSvtClassId(v21, 0, 1, 0);
      if ( System_Linq_Enumerable__Contains_int_(
             OpenClassIdArrayFromBaseId,
             SvtClassId,
             (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        goto LABEL_34;
      }
    }
    v11 = 0;
LABEL_34:
    v23 = *(_QWORD *)v12;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_38;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_38:
      v26 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
  else
  {
    v11 = 0;
  }
  return v11 & 1;
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