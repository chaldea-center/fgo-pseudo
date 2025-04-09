void __fastcall ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB821 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__, method);
    byte_49BB821 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w22
  ServantTransformEntity_o *result; // x0

  if ( (byte_49BB81E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__,
      *(_QWORD *)&aftSvtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__, v7);
    byte_49BB81E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1B4D1EC(list, *(_QWORD *)&aftSvtId);
  v9 = 0;
  while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v9,
                                           (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    if ( result && result->fields.aftSvtId == aftSvtId && result->fields.aftDispLimitCount == aftDispLimitCount )
      return result;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_11;
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

  if ( (byte_49BB820 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_CommandCardTypeChange___, *(_QWORD *)&baseSvtId);
    byte_49BB820 = 1;
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
           (const MethodInfo_2EF034C *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
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
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  System_Func_T1__T2__TResult__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB81F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___, v10);
    sub_1B4CF90(&System_Func_int__int__CommandCardTypeChange__TypeInfo, v11);
    sub_1B4CF90(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__, v12);
    sub_1B4CF90(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo, v13);
    byte_49BB81F = 1;
  }
  entity = 0LL;
  v14 = sub_1B4D1DC(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v20 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v21 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v20,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v14 )
            {
LABEL_15:
              *(_QWORD *)(v14 + 16) = klass;
              v24 = v14 + 16;
              sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 16), (int32_t)klass, v22, v23);
              if ( !v21 || !*(_QWORD *)v24 || LODWORD(v21->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v24 + 24LL) )
                return 0LL;
              v25 = (System_Func_T1__T2__TResult__o *)sub_1B4D1DC(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v25,
                (Il2CppObject *)v14,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0LL);
              v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__49486452(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                           (System_Func_TSource__int__TResult__o *)v25,
                                                                           (const MethodInfo_2F31A74 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v26,
                                                      (const MethodInfo_2F3C2D4 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
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
    sub_1B4D1EC(Master_object, klass);
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

  if ( (byte_49BB822 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__,
      *(_QWORD *)&befSvtId);
    byte_49BB822 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
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
  __int64 aftSvtId; // x1
  const MethodInfo *v13; // x4
  ServantTransformEntity_o *v14; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB81C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseSvtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49BB81C = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v10);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              v14->fields.aftSvtId,
              v14->fields.aftDispLimitCount,
              v13) )
  {
    v14 = entity;
    if ( !entity
      || !v9
      || (aftSvtId = (unsigned int)entity->fields.aftSvtId,
          items = v9->fields._items,
          v16 = Method_System_Collections_Generic_List_int__Add__,
          ++v9->fields._version,
          !items) )
    {
LABEL_12:
      sub_1B4D1EC(i, aftSvtId);
    }
    size = v9->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        aftSvtId,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      v14 = entity;
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
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  TransformServantInfo_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x4
  ServantTransformEntity_o *v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_String_o *v48; // x1
  int32_t v49; // w22
  int32_t v50; // w23
  System_String_o *v51; // x24
  TransformServantInfo_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  ServantTransformEntity_o *v59; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49BB81D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Last_TransformServantInfo___, *(_QWORD *)&baseSvtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TransformServantInfo__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_TransformServantInfo__TypeInfo, v9);
    sub_1B4CF90(&TransformServantInfo_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_1/*""*/, v11);
    byte_49BB81D = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v13);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v26 = (TransformServantInfo_o *)sub_1B4D1DC(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_41144712(v26, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v12 )
    {
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v26,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v26;
          sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v12;
      }
    }
LABEL_31:
    sub_1B4D1EC(object, v15);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v19 = (TransformServantInfo_o *)sub_1B4D1DC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_41144712(v19, befSvtId, befDispLimitCount, befTitle, 0LL);
  if ( !v12 )
    goto LABEL_31;
  v22 = v12->fields._items;
  v23 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v22 )
    goto LABEL_31;
  v24 = v12->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v12->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v19;
    sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v36 = (TransformServantInfo_o *)sub_1B4D1DC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_41144712(v36, aftSvtId, aftDispLimitCount, aftTitle, 0LL);
  v39 = v12->fields._items;
  v40 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v39 )
    goto LABEL_31;
  v41 = v12->fields._size;
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v36,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v39->obj.klass + v41;
    v12->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)v36;
    sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
  }
  v45 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v59, v45->fields.aftSvtId, v45->fields.aftDispLimitCount, v43) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
               (const MethodInfo_2F29358 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v59 )
    {
      if ( object )
      {
        v48 = v59->fields.befTitle;
        object[1].monitor = v48;
        sub_1B4CF34((CGThumbnailListItem_o *)&object[1].monitor, (int32_t)v48, v46, v47);
        if ( v59 )
        {
          v49 = v59->fields.aftSvtId;
          v50 = v59->fields.aftDispLimitCount;
          v51 = v59->fields.aftTitle;
          v52 = (TransformServantInfo_o *)sub_1B4D1DC(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_41144712(v52, v49, v50, v51, 0LL);
          v55 = v12->fields._items;
          v56 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v12->fields._version;
          if ( v55 )
          {
            v57 = v12->fields._size;
            if ( (unsigned int)v57 >= v55->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v52,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &v55->obj.klass + v57;
              v12->fields._size = v57 + 1;
              v58[4] = (Il2CppClass *)v52;
              sub_1B4CF34((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v52, v53, v54);
            }
            v45 = v59;
            if ( v59 )
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

  if ( (byte_49BB823 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__, entity);
    byte_49BB823 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
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
  ServantTransformMaster___c__DisplayClass3_0_o *v6; // x21
  struct System_Int32_array *afterSvtCardIds; // x8
  int32_t v8; // w20

  v6 = this;
  if ( (byte_49BB824 & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_1B4CF90(&BattleCommand_TypeInfo, *(_QWORD *)&x);
    byte_49BB824 = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1B4D1EC(this, *(_QWORD *)&x);
  if ( afterSvtCardIds->max_length <= i )
    sub_1B4D1F4(this, *(_QWORD *)&x);
  v8 = afterSvtCardIds->m_Items[i + 1];
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0LL);
}