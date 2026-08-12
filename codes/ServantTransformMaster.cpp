void ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971326 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
    byte_5971326 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
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

  if ( (byte_5971323 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
    byte_5971323 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_2213CDC(list, *(_QWORD *)&aftSvtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v8,
                                           (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
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

  if ( (byte_5971325 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_CommandCardTypeChange___);
    byte_5971325 = 1;
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
           (const MethodInfo_3814C08 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
}


CommandCardTypeChange_array *ServantTransformMaster__GetCommandCardTypeChangeArray(
        ServantTransformMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x19
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  CommandCardTypeChange_array *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x21
  System_Func_T1__T2__TResult__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971324 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
    sub_2213A60(&System_Func_int__int__CommandCardTypeChange__TypeInfo);
    sub_2213A60(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__);
    sub_2213A60(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
    byte_5971324 = 1;
  }
  entity = 0;
  v7 = sub_2213CCC(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( ServantTransformMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v8)
    || (result = (CommandCardTypeChange_array *)ServantTransformMaster__GetBeforeTransformEntity(
                                                  this,
                                                  svtId,
                                                  dispLimitCount,
                                                  v10),
        (entity = (ServantTransformEntity_o *)result) != 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v14 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v15 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v14,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = Master_object[2].klass;
            if ( v7 )
            {
LABEL_15:
              *(_QWORD *)(v7 + 16) = klass;
              v22 = v7 + 16;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)klass, v16, v17, v18, v19, v20, v21);
              if ( !v15 || !*(_QWORD *)v22 || LODWORD(v15->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v22 + 24LL) )
                return 0;
              v23 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v23,
                (Il2CppObject *)v7,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0);
              v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__59301432(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                           (System_Func_TSource__int__TResult__o *)v23,
                                                                           (const MethodInfo_388DE38 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v24,
                                                      (const MethodInfo_389BA1C *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
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
    sub_2213CDC(Master_object, klass);
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

  if ( (byte_5971327 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
    byte_5971327 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(
                         befSvtId,
                         befDispLimitCount,
                         *(const MethodInfo **)&befDispLimitCount);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
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

  if ( (byte_5971321 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971321 = 1;
  }
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      || (items = v7->fields._items,
          aftSvtId = (unsigned int)entity->fields.aftSvtId,
          v14 = Method_System_Collections_Generic_List_int__Add__,
          ++v7->fields._version,
          !items) )
    {
LABEL_12:
      sub_2213CDC(i, aftSvtId);
    }
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        aftSvtId,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
  System_String_o *befTitle; // x24
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  TransformServantInfo_o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  TransformServantInfo_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v40; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  const MethodInfo *v51; // x4
  ServantTransformEntity_o *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_String_o *v59; // x1
  int32_t v60; // w22
  int32_t v61; // w23
  System_String_o *v62; // x24
  TransformServantInfo_o *v63; // x21
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  ServantTransformEntity_o *v74; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5971322 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_2213A60(&TransformServantInfo_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971322 = 1;
  }
  v74 = 0;
  entity = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v25 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_50627376(v25, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
      }
    }
LABEL_31:
    sub_2213CDC(object, v10);
  }
  if ( !entity )
    goto LABEL_31;
  befTitle = entity->fields.befTitle;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  v14 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_50627376(v14, befSvtId, befDispLimitCount, befTitle, 0);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v7->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v40 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_50627376(v40, aftSvtId, aftDispLimitCount, aftTitle, 0);
  v47 = v7->fields._items;
  v48 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v7->fields._version;
  if ( !v47 )
    goto LABEL_31;
  v49 = v7->fields._size;
  if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v40,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v47->obj.klass + v49;
    v7->fields._size = v49 + 1;
    v50[4] = (Il2CppClass *)v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  v52 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v74, v52->fields.aftSvtId, v52->fields.aftDispLimitCount, v51) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
               (const MethodInfo_3883CD8 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v74 )
    {
      if ( object )
      {
        v59 = v74->fields.befTitle;
        object[1].monitor = v59;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&object[1].monitor, (int32_t)v59, v53, v54, v55, v56, v57, v58);
        if ( v74 )
        {
          v60 = v74->fields.aftSvtId;
          v61 = v74->fields.aftDispLimitCount;
          v62 = v74->fields.aftTitle;
          v63 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_50627376(v63, v60, v61, v62, 0);
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &v70->obj.klass + v72;
              v7->fields._size = v72 + 1;
              v73[4] = (Il2CppClass *)v63;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
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

  if ( (byte_5971328 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
    byte_5971328 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, *(const MethodInfo **)&befSvtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
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
  if ( (byte_5971329 & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_2213A60(&BattleCommand_TypeInfo);
    byte_5971329 = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_2213CDC(this, *(_QWORD *)&x);
  if ( LODWORD(afterSvtCardIds->max_length) <= i )
    sub_2213CE4(this);
  v8 = afterSvtCardIds->m_Items[i];
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, *(_QWORD *)&x);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0);
}