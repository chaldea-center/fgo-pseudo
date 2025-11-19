void ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6D4A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
    byte_4CB6D4A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  ServantTransformEntity_o *result; // x0

  if ( (byte_4CB6D47 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    byte_4CB6D47 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1C6BC60(list, *(_QWORD *)&aftSvtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v8,
                                           (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    if ( result && result->fields.aftSvtId == aftSvtId && result->fields.aftDispLimitCount == aftDispLimitCount )
      return result;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_11;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantTransformMaster__GetCommandCardTypeChange(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        int32_t index,
        const MethodInfo *method)
{
  CommandCardTypeChange_array *v9; // x0

  if ( (byte_4CB6D49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_CommandCardTypeChange___);
    byte_4CB6D49 = 1;
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
           (const MethodInfo_3129580 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
}


CommandCardTypeChange_array *ServantTransformMaster__GetCommandCardTypeChangeArray(
        ServantTransformMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x19
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  CommandCardTypeChange_array *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  System_Func_T1__T2__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6D48 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
    sub_1C6BA08(&System_Func_int__int__CommandCardTypeChange__TypeInfo);
    sub_1C6BA08(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__);
    sub_1C6BA08(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CB6D48 = 1;
  }
  entity = 0;
  v7 = sub_1C6BC54(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( ServantTransformMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v8)
    || (result = (CommandCardTypeChange_array *)ServantTransformMaster__GetBeforeTransformEntity(
                                                  this,
                                                  svtId,
                                                  dispLimitCount,
                                                  v9),
        (entity = (ServantTransformEntity_o *)result) != 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v13 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v14 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v13,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v7 )
            {
LABEL_15:
              *(_QWORD *)(v7 + 16) = klass;
              v17 = v7 + 16;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)klass, v15, v16);
              if ( !v14 || !*(_QWORD *)v17 || LODWORD(v14->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v17 + 24LL) )
                return 0;
              v18 = (System_Func_T1__T2__TResult__o *)sub_1C6BC54(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v18,
                (Il2CppObject *)v7,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0);
              v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__51834340(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                                           (System_Func_TSource__int__TResult__o *)v18,
                                                                           (const MethodInfo_316EDE4 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v19,
                                                      (const MethodInfo_317B138 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
            }
          }
          else
          {
            klass = 0;
            if ( v7 )
              goto LABEL_15;
          }
        }
      }
    }
    sub_1C6BC60(Master_object, klass);
  }
  return result;
}


ServantTransformEntity_o *ServantTransformMaster__GetEntity(
        ServantTransformMaster_o *this,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6D4B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
    byte_4CB6D4B = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *ServantTransformMaster__GetTransformServantIds(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  const MethodInfo *v8; // x4
  _BOOL8 i; // x0
  __int64 aftSvtId; // x1
  const MethodInfo *v11; // x4
  ServantTransformEntity_o *v12; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6D45 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB6D45 = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              v12->fields.aftSvtId,
              v12->fields.aftDispLimitCount,
              v11) )
  {
    v12 = entity;
    if ( !entity
      || !v7
      || (aftSvtId = (unsigned int)entity->fields.aftSvtId,
          items = v7->fields._items,
          v14 = Method_System_Collections_Generic_List_int__Add__,
          ++v7->fields._version,
          !items) )
    {
LABEL_12:
      sub_1C6BC60(i, aftSvtId);
    }
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        aftSvtId,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      v12 = entity;
      if ( !entity )
        goto LABEL_12;
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size] = aftSvtId;
    }
  }
  return v7;
}


System_Collections_Generic_List_TransformServantInfo__o *ServantTransformMaster__GetTransformServantInfo(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x4
  Il2CppObject *object; // x0
  __int64 v10; // x1
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  TransformServantInfo_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // x4
  ServantTransformEntity_o *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_String_o *v43; // x1
  int32_t v44; // w22
  int32_t v45; // w23
  System_String_o *v46; // x24
  TransformServantInfo_o *v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  ServantTransformEntity_o *v54; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB6D46 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_1C6BA08(&TransformServantInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6D46 = 1;
  }
  v54 = 0;
  entity = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v21 = (TransformServantInfo_o *)sub_1C6BC54(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_43773020(v21, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      items = v7->fields._items;
      v25 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v21,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
      }
    }
LABEL_31:
    sub_1C6BC60(object, v10);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v14 = (TransformServantInfo_o *)sub_1C6BC54(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_43773020(v14, befSvtId, befDispLimitCount, befTitle, 0);
  if ( !v7 )
    goto LABEL_31;
  v17 = v7->fields._items;
  v18 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v17 )
    goto LABEL_31;
  v19 = v7->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v14,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    v7->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v31 = (TransformServantInfo_o *)sub_1C6BC54(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_43773020(v31, aftSvtId, aftDispLimitCount, aftTitle, 0);
  v34 = v7->fields._items;
  v35 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v34 )
    goto LABEL_31;
  v36 = v7->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v31,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v7->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v31;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
  }
  v40 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v54, v40->fields.aftSvtId, v40->fields.aftDispLimitCount, v38) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
               (const MethodInfo_3166318 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v54 )
    {
      if ( object )
      {
        v43 = v54->fields.befTitle;
        object[1].monitor = v43;
        sub_1C6B9AC((CGThumbnailListItem_o *)&object[1].monitor, (int32_t)v43, v41, v42);
        if ( v54 )
        {
          v44 = v54->fields.aftSvtId;
          v45 = v54->fields.aftDispLimitCount;
          v46 = v54->fields.aftTitle;
          v47 = (TransformServantInfo_o *)sub_1C6BC54(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_43773020(v47, v44, v45, v46, 0);
          v50 = v7->fields._items;
          v51 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v7->fields._version;
          if ( v50 )
          {
            v52 = v7->fields._size;
            if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v47,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &v50->obj.klass + v52;
              v7->fields._size = v52 + 1;
              v53[4] = (Il2CppClass *)v47;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v47, v48, v49);
            }
            v40 = v54;
            if ( v54 )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
}


bool ServantTransformMaster__TryGetEntity(
        ServantTransformMaster_o *this,
        ServantTransformEntity_o **entity,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6D4C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
    byte_4CB6D4C = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
}


void ServantTransformMaster___c__DisplayClass3_0___ctor(
        ServantTransformMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantTransformMaster___c__DisplayClass3_0___GetCommandCardTypeChangeArray_b__0(
        ServantTransformMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        int32_t i,
        const MethodInfo *method)
{
  ServantTransformMaster___c__DisplayClass3_0_o *v6; // x21
  struct System_Int32_array *afterSvtCardIds; // x8
  int32_t v8; // w20

  v6 = this;
  if ( (byte_4CB6D4D & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_1C6BA08(&BattleCommand_TypeInfo);
    byte_4CB6D4D = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1C6BC60(this, *(_QWORD *)&x);
  if ( LODWORD(afterSvtCardIds->max_length) <= i )
    sub_1C6BC68(this);
  v8 = afterSvtCardIds->m_Items[i];
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0);
}