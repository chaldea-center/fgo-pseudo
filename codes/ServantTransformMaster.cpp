void __fastcall ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC20 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__, method);
    byte_49FCC20 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  ServantTransformEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FCC1D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&aftSvtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&ServantTransformEntity_TypeInfo, v8);
    byte_49FCC1D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B64324(list);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v10,
                                           (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantTransformEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantTransformEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantTransformEntity_TypeInfo
        && result->fields.aftSvtId == aftSvtId
        && result->fields.aftDispLimitCount == aftDispLimitCount )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantTransformMaster__GetCommandCardTypeChange(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        int32_t index,
        const MethodInfo *method)
{
  CommandCardTypeChange_array *v9; // x0

  if ( (byte_49FCC1F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_CommandCardTypeChange___, *(_QWORD *)&baseSvtId);
    byte_49FCC1F = 1;
  }
  v9 = ServantTransformMaster__GetCommandCardTypeChangeArray(
         this,
         baseSvtId,
         baseDispLimitCount,
         *(const MethodInfo **)&index);
  return BasicHelper__IndexValue_Int32Enum_(
           (System_Int32Enum_array *)v9,
           index,
           0,
           (const MethodInfo_2E28188 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
}


// local variable allocation has failed, the output may be wrong!
CommandCardTypeChange_array *__fastcall ServantTransformMaster__GetCommandCardTypeChangeArray(
        ServantTransformMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x3
  CommandCardTypeChange_array *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x1
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_T1__T2__TResult__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FCC1E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___, v10);
    sub_1B640C8(&System_Func_int__int__CommandCardTypeChange__TypeInfo, v11);
    sub_1B640C8(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__, v12);
    sub_1B640C8(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo, v13);
    byte_49FCC1E = 1;
  }
  entity = 0LL;
  v14 = sub_1B64314(ServantTransformMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&dispLimitCount);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( ServantTransformMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v15)
    || (result = (CommandCardTypeChange_array *)ServantTransformMaster__GetBeforeTransformEntity(
                                                  this,
                                                  svtId,
                                                  dispLimitCount,
                                                  v16),
        (entity = (ServantTransformEntity_o *)result) != 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v19 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v20 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v19,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v14 )
            {
LABEL_15:
              *(_QWORD *)(v14 + 16) = klass;
              v24 = v14 + 16;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)klass, v21, v22);
              if ( !v20 || !*(_QWORD *)v24 || LODWORD(v20->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v24 + 24LL) )
                return 0LL;
              v27 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                        System_Func_int__int__CommandCardTypeChange__TypeInfo,
                                                        v25,
                                                        v26);
              System_Func_int__int__Int32Enum____ctor(
                v27,
                (Il2CppObject *)v14,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0LL);
              v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__48656220(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                           (System_Func_TSource__int__TResult__o *)v27,
                                                                           (const MethodInfo_2E66F5C *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v28,
                                                      (const MethodInfo_2E712B4 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
            }
          }
          else
          {
            klass = 0LL;
            if ( v14 )
              goto LABEL_15;
          }
        }
      }
    }
    sub_1B64324(Master_object);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetEntity(
        ServantTransformMaster_o *this,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCC21 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__,
      *(_QWORD *)&befSvtId);
    byte_49FCC21 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantTransformMaster__GetTransformServantIds(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  const MethodInfo *v10; // x4
  _BOOL8 i; // x0
  const MethodInfo *v12; // x4
  ServantTransformEntity_o *v13; // x8
  int32_t aftSvtId; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FCC1B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49FCC1B = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&baseSvtId,
                                                   *(_QWORD *)&baseDispLimitCount);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v10);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              v13->fields.aftSvtId,
              v13->fields.aftDispLimitCount,
              v12) )
  {
    v13 = entity;
    if ( !entity
      || !v9
      || (aftSvtId = entity->fields.aftSvtId,
          items = v9->fields._items,
          v16 = Method_System_Collections_Generic_List_int__Add__,
          ++v9->fields._version,
          !items) )
    {
LABEL_12:
      sub_1B64324(i);
    }
    size = v9->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        aftSvtId,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      v13 = entity;
      if ( !entity )
        goto LABEL_12;
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size + 1] = aftSvtId;
    }
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TransformServantInfo__o *__fastcall ServantTransformMaster__GetTransformServantInfo(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x4
  Il2CppObject *object; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  TransformServantInfo_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  const MethodInfo *v46; // x4
  ServantTransformEntity_o *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_String_o *v51; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t v54; // w22
  int32_t v55; // w23
  System_String_o *v56; // x24
  TransformServantInfo_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  ServantTransformEntity_o *v64; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FCC1C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Last_TransformServantInfo___, *(_QWORD *)&baseSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_TransformServantInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_TransformServantInfo__TypeInfo, v9);
    sub_1B640C8(&TransformServantInfo_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FCC1C = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_TransformServantInfo__TypeInfo,
                                                       *(_QWORD *)&baseSvtId,
                                                       *(_QWORD *)&baseDispLimitCount);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v13);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v29 = (TransformServantInfo_o *)sub_1B64314(TransformServantInfo_TypeInfo, v15, v16);
    TransformServantInfo___ctor_40196336(v29, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v12 )
    {
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v29,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v29;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v12;
      }
    }
LABEL_31:
    sub_1B64324(object);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v20 = (TransformServantInfo_o *)sub_1B64314(TransformServantInfo_TypeInfo, v15, v16);
  TransformServantInfo___ctor_40196336(v20, befSvtId, befDispLimitCount, befTitle, 0LL);
  if ( !v12 )
    goto LABEL_31;
  v23 = v12->fields._items;
  v24 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v23 )
    goto LABEL_31;
  v25 = v12->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v12->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v39 = (TransformServantInfo_o *)sub_1B64314(TransformServantInfo_TypeInfo, v27, v28);
  TransformServantInfo___ctor_40196336(v39, aftSvtId, aftDispLimitCount, aftTitle, 0LL);
  v42 = v12->fields._items;
  v43 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v42 )
    goto LABEL_31;
  v44 = v12->fields._size;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v39,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v12->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
  }
  v48 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v64, v48->fields.aftSvtId, v48->fields.aftDispLimitCount, v46) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
               (const MethodInfo_2E5EC80 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v64 )
    {
      if ( object )
      {
        v51 = v64->fields.befTitle;
        object[1].monitor = v51;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&object[1].monitor, (int32_t)v51, v49, v50);
        if ( v64 )
        {
          v54 = v64->fields.aftSvtId;
          v55 = v64->fields.aftDispLimitCount;
          v56 = v64->fields.aftTitle;
          v57 = (TransformServantInfo_o *)sub_1B64314(TransformServantInfo_TypeInfo, v52, v53);
          TransformServantInfo___ctor_40196336(v57, v54, v55, v56, 0LL);
          v60 = v12->fields._items;
          v61 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v12->fields._version;
          if ( v60 )
          {
            v62 = v12->fields._size;
            if ( (unsigned int)v62 >= v60->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v57,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &v60->obj.klass + v62;
              v12->fields._size = v62 + 1;
              v63[4] = (Il2CppClass *)v57;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
            }
            v48 = v64;
            if ( v64 )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v12;
}


bool __fastcall ServantTransformMaster__TryGetEntity(
        ServantTransformMaster_o *this,
        ServantTransformEntity_o **entity,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCC22 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__, entity);
    byte_49FCC22 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
}


void __fastcall ServantTransformMaster___c__DisplayClass3_0___ctor(
        ServantTransformMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantTransformMaster___c__DisplayClass3_0___GetCommandCardTypeChangeArray_b__0(
        ServantTransformMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        int32_t i,
        const MethodInfo *method)
{
  struct System_Int32_array *afterSvtCardIds; // x8

  afterSvtCardIds = this->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1B64324(this);
  if ( afterSvtCardIds->max_length <= i )
    sub_1B6432C(this, *(_QWORD *)&x);
  return BattleCommand__JudgeCommandCardTypeChange(x, afterSvtCardIds->m_Items[i + 1], 0LL);
}