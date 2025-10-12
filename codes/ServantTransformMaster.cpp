void ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3842F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
    byte_4C3842F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


ServantTransformEntity_o *ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  ServantTransformEntity_o *result; // x0

  if ( (byte_4C3842C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    byte_4C3842C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1C32E7C(list);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v8,
                                           (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
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

  if ( (byte_4C3842E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_CommandCardTypeChange___);
    byte_4C3842E = 1;
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
           (const MethodInfo_30CB8E0 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x1
  __int64 v17; // x21
  System_Func_T1__T2__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3842D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
    sub_1C32C20(&System_Func_int__int__CommandCardTypeChange__TypeInfo);
    sub_1C32C20(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__);
    sub_1C32C20(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C3842D = 1;
  }
  entity = 0;
  v7 = sub_1C32E6C(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v12 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v13 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v12,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v7 )
            {
LABEL_15:
              *(_QWORD *)(v7 + 16) = klass;
              v17 = v7 + 16;
              sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)klass, v14, v15);
              if ( !v13 || !*(_QWORD *)v17 || LODWORD(v13->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v17 + 24LL) )
                return 0;
              v18 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v18,
                (Il2CppObject *)v7,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0);
              v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__51449232(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                           (System_Func_TSource__int__TResult__o *)v18,
                                                                           (const MethodInfo_3110D90 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v19,
                                                      (const MethodInfo_311C97C *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
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
    sub_1C32E7C(Master_object);
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

  if ( (byte_4C38430 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
    byte_4C38430 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
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
  const MethodInfo *v10; // x4
  ServantTransformEntity_o *v11; // x8
  int32_t aftSvtId; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3842A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3842A = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              v11->fields.aftSvtId,
              v11->fields.aftDispLimitCount,
              v10) )
  {
    v11 = entity;
    if ( !entity
      || !v7
      || (aftSvtId = entity->fields.aftSvtId,
          items = v7->fields._items,
          v14 = Method_System_Collections_Generic_List_int__Add__,
          ++v7->fields._version,
          !items) )
    {
LABEL_12:
      sub_1C32E7C(i);
    }
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        aftSvtId,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      v11 = entity;
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
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  TransformServantInfo_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x4
  ServantTransformEntity_o *v39; // x8
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_String_o *v42; // x1
  int32_t v43; // w22
  int32_t v44; // w23
  System_String_o *v45; // x24
  TransformServantInfo_o *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  ServantTransformEntity_o *v53; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3842B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_1C32C20(&TransformServantInfo_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3842B = 1;
  }
  v53 = 0;
  entity = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v20 = (TransformServantInfo_o *)sub_1C32E6C(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_43424388(v20, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v20,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v20;
          sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
      }
    }
LABEL_31:
    sub_1C32E7C(object);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v13 = (TransformServantInfo_o *)sub_1C32E6C(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_43424388(v13, befSvtId, befDispLimitCount, befTitle, 0);
  if ( !v7 )
    goto LABEL_31;
  v16 = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v16 )
    goto LABEL_31;
  v18 = v7->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v7->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v30 = (TransformServantInfo_o *)sub_1C32E6C(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_43424388(v30, aftSvtId, aftDispLimitCount, aftTitle, 0);
  v33 = v7->fields._items;
  v34 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v33 )
    goto LABEL_31;
  v35 = v7->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v30,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v7->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
  }
  v39 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v53, v39->fields.aftSvtId, v39->fields.aftDispLimitCount, v37) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
               (const MethodInfo_31082C4 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v53 )
    {
      if ( object )
      {
        v42 = v53->fields.befTitle;
        object[1].monitor = v42;
        sub_1C32BC4((CGThumbnailListItem_o *)&object[1].monitor, (int32_t)v42, v40, v41);
        if ( v53 )
        {
          v43 = v53->fields.aftSvtId;
          v44 = v53->fields.aftDispLimitCount;
          v45 = v53->fields.aftTitle;
          v46 = (TransformServantInfo_o *)sub_1C32E6C(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_43424388(v46, v43, v44, v45, 0);
          v49 = v7->fields._items;
          v50 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v7->fields._version;
          if ( v49 )
          {
            v51 = v7->fields._size;
            if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v46,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &v49->obj.klass + v51;
              v7->fields._size = v51 + 1;
              v52[4] = (Il2CppClass *)v46;
              sub_1C32BC4((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
            }
            v39 = v53;
            if ( v53 )
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

  if ( (byte_4C38431 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
    byte_4C38431 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
}


void ServantTransformMaster___c__DisplayClass3_0___ctor(
        ServantTransformMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  if ( (byte_4C38432 & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_1C32C20(&BattleCommand_TypeInfo);
    byte_4C38432 = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1C32E7C(this);
  if ( LODWORD(afterSvtCardIds->max_length) <= i )
    sub_1C32E84(this);
  v8 = afterSvtCardIds->m_Items[i];
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0);
}