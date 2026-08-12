void ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59705A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59705A5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardSquareEntity__CreatePK(int32_t classBoardBaseId, int32_t id, const MethodInfo *method)
{
  if ( (byte_59705A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59705A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassBoardSquareEntity__CreatePrimaryKey(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardSquareEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}


bool ClassBoardSquareEntity__IsGrand(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59705A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_59705A2 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.classBoardBaseId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return SLODWORD(entity[4].monitor) > 0;
LABEL_11:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


bool ClassBoardSquareEntity__IsSetGrandSvt(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *OpenClassIdArrayFromBaseId; // x19
  ClassBoardClassMaster_c *klass; // x8
  ClassBoardClassMaster_o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  char v13; // w20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  UserServantEntity_o *v24; // x0
  __int64 v25; // x1
  int32_t SvtClassId; // w1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v32; // [xsp+18h] [xbp-38h]

  if ( (byte_59705A3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59705A3 = 1;
  }
  if ( ClassBoardSquareEntity__IsGrand(this, method) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object
      || (OpenClassIdArrayFromBaseId = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                                                                              Master_object,
                                                                                              this->fields.classBoardBaseId,
                                                                                              v6),
          (Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___)) == 0)
      || (Master_object = (ClassBoardClassMaster_o *)UserServantGrandMaster__GetUserServantEntities(
                                                       (UserServantGrandMaster_o *)Master_object,
                                                       0)) == 0 )
    {
      sub_2213CDC(Master_object, v5);
    }
    klass = Master_object->klass;
    v9 = Master_object;
    v10 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
    if ( *(_WORD *)&Master_object->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v12 = sub_224BC3C(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(ClassBoardClassMaster_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
    v32 = v14;
    while ( 1 )
    {
      if ( !v32 )
        sub_2213CDC(v14, v15);
      v16 = *(_QWORD *)v32;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_22;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_22:
        v19 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v32, *(_QWORD *)(v19 + 8));
      if ( (v13 & 1) == 0 )
        break;
      v20 = *(_QWORD *)v32;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_29;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_29:
        v23 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      v24 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v32, *(_QWORD *)(v23 + 8));
      if ( !v24 )
        sub_2213CDC(0, v25);
      SvtClassId = UserServantEntity__getSvtClassId(v24, 0, 1, 0);
      v14 = System_Linq_Enumerable__Contains_int_(
              OpenClassIdArrayFromBaseId,
              SvtClassId,
              (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v14 & 1) != 0 )
        goto LABEL_35;
    }
    v13 = 0;
LABEL_35:
    v27 = *(_QWORD *)v32;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_39;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_39:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  else
  {
    v13 = 0;
  }
  return v13 & 1;
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