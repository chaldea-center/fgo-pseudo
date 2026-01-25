void ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0EA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
    byte_4CEF0EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
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

  if ( (byte_4CEF0E7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    byte_4CEF0E7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1C7BD40(list, *(_QWORD *)&aftSvtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v8,
                                           (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
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

  if ( (byte_4CEF0E9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_CommandCardTypeChange___);
    byte_4CEF0E9 = 1;
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
           (const MethodInfo_315E878 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x21
  System_Func_T1__T2__TResult__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEF0E8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
    sub_1C7BAE8(&System_Func_int__int__CommandCardTypeChange__TypeInfo);
    sub_1C7BAE8(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__);
    sub_1C7BAE8(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CEF0E8 = 1;
  }
  entity = 0;
  v7 = sub_1C7BD34(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v13 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v14 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v13,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v7 )
            {
LABEL_15:
              *(_QWORD *)(v7 + 16) = klass;
              v21 = v7 + 16;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)klass, v15, v16, v17, v18, v19, v20);
              if ( !v14 || !*(_QWORD *)v21 || LODWORD(v14->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v21 + 24LL) )
                return 0;
              v22 = (System_Func_T1__T2__TResult__o *)sub_1C7BD34(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v22,
                (Il2CppObject *)v7,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0);
              v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__52048292(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                                           (System_Func_TSource__int__TResult__o *)v22,
                                                                           (const MethodInfo_31A31A4 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v23,
                                                      (const MethodInfo_31AF0D4 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
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
    sub_1C7BD40(Master_object, klass);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *ServantTransformMaster__GetEntity(
        ServantTransformMaster_o *this,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF0EB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
    byte_4CEF0EB = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(
                         befSvtId,
                         befDispLimitCount,
                         *(const MethodInfo **)&befDispLimitCount);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
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

  if ( (byte_4CEF0E5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF0E5 = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
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
      sub_1C7BD40(i, aftSvtId);
    }
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        aftSvtId,
        *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  TransformServantInfo_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
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
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x4
  ServantTransformEntity_o *v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_String_o *v59; // x1
  int32_t v60; // w22
  int32_t v61; // w23
  System_String_o *v62; // x24
  TransformServantInfo_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  ServantTransformEntity_o *v74; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEF0E6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_1C7BAE8(&TransformServantInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF0E6 = 1;
  }
  v74 = 0;
  entity = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v25 = (TransformServantInfo_o *)sub_1C7BD34(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_44142352(v25, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      items = v7->fields._items;
      v33 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v25,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
      }
    }
LABEL_31:
    sub_1C7BD40(object, v10);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v14 = (TransformServantInfo_o *)sub_1C7BD34(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_44142352(v14, befSvtId, befDispLimitCount, befTitle, 0);
  if ( !v7 )
    goto LABEL_31;
  v21 = v7->fields._items;
  v22 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v21 )
    goto LABEL_31;
  v23 = v7->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v14,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v7->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v39 = (TransformServantInfo_o *)sub_1C7BD34(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_44142352(v39, aftSvtId, aftDispLimitCount, aftTitle, 0);
  v46 = v7->fields._items;
  v47 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v46 )
    goto LABEL_31;
  v48 = v7->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v39,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v7->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v39;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v39, v40, v41, v42, v43, v44, v45);
  }
  v52 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v74, v52->fields.aftSvtId, v52->fields.aftDispLimitCount, v50) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
               (const MethodInfo_319A1D0 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v74 )
    {
      if ( object )
      {
        v59 = v74->fields.befTitle;
        object[1].monitor = v59;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&object[1].monitor, (int32_t)v59, v53, v54, v55, v56, v57, v58);
        if ( v74 )
        {
          v60 = v74->fields.aftSvtId;
          v61 = v74->fields.aftDispLimitCount;
          v62 = v74->fields.aftTitle;
          v63 = (TransformServantInfo_o *)sub_1C7BD34(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_44142352(v63, v60, v61, v62, 0);
          v70 = v7->fields._items;
          v71 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v7->fields._version;
          if ( v70 )
          {
            v72 = v7->fields._size;
            if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v63,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &v70->obj.klass + v72;
              v7->fields._size = v72 + 1;
              v73[4] = (Il2CppClass *)v63;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
            }
            v52 = v74;
            if ( v74 )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool ServantTransformMaster__TryGetEntity(
        ServantTransformMaster_o *this,
        ServantTransformEntity_o **entity,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF0EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
    byte_4CEF0EC = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, *(const MethodInfo **)&befSvtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
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
  if ( (byte_4CEF0ED & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CEF0ED = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1C7BD40(this, *(_QWORD *)&x);
  if ( LODWORD(afterSvtCardIds->max_length) <= i )
    sub_1C7BD48(this);
  v8 = afterSvtCardIds->m_Items[i];
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0);
}