void __fastcall ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__, method, v2);
    byte_4B16B1C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  ServantTransformEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16B19 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&aftSvtId,
      *(_QWORD *)&aftDispLimitCount);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&ServantTransformEntity_TypeInfo, v9, v10);
    byte_4B16B19 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1BCAA3C(list, *(_QWORD *)&aftSvtId);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v12,
                                           (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v12;
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

  if ( (byte_4B16B1B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_CommandCardTypeChange___,
      *(_QWORD *)&baseSvtId,
      *(_QWORD *)&baseDispLimitCount);
    byte_4B16B1B = 1;
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
           (const MethodInfo_2F017A8 *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
}


// local variable allocation has failed, the output may be wrong!
CommandCardTypeChange_array *__fastcall ServantTransformMaster__GetCommandCardTypeChangeArray(
        ServantTransformMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x19
  const MethodInfo *v22; // x4
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  CommandCardTypeChange_array *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int64_t klass; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_T1__T2__TResult__o *v40; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16B1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___, v13, v14);
    sub_1BCA7E0(&System_Func_int__int__CommandCardTypeChange__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__, v17, v18);
    sub_1BCA7E0(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo, v19, v20);
    byte_4B16B1A = 1;
  }
  entity = 0LL;
  v21 = sub_1BCAA2C(
          ServantTransformMaster___c__DisplayClass3_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&dispLimitCount,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( ServantTransformMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v22)
    || (result = (CommandCardTypeChange_array *)ServantTransformMaster__GetBeforeTransformEntity(
                                                  this,
                                                  svtId,
                                                  dispLimitCount,
                                                  v24),
        (entity = (ServantTransformEntity_o *)result) != 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v28 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v29 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v28,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = (int64_t)Master_object[2].klass;
            if ( v21 )
            {
LABEL_15:
              *(_QWORD *)(v21 + 16) = klass;
              v36 = v21 + 16;
              sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), klass, v30, v31, v32, v33, v34, v35);
              if ( !v29 || !*(_QWORD *)v36 || LODWORD(v29->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v36 + 24LL) )
                return 0LL;
              v40 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                        System_Func_int__int__CommandCardTypeChange__TypeInfo,
                                                        v37,
                                                        v38,
                                                        v39);
              System_Func_int__int__Int32Enum____ctor(
                v40,
                (Il2CppObject *)v21,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0LL);
              v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__49541788(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                           (System_Func_TSource__int__TResult__o *)v40,
                                                                           (const MethodInfo_2F3F29C *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v41,
                                                      (const MethodInfo_2F4B8F8 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
            }
          }
          else
          {
            klass = 0LL;
            if ( v21 )
              goto LABEL_15;
          }
        }
      }
    }
    sub_1BCAA3C(Master_object, klass);
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

  if ( (byte_4B16B1D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__,
      *(_QWORD *)&befSvtId,
      *(_QWORD *)&befDispLimitCount);
    byte_4B16B1D = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantTransformMaster__GetTransformServantIds(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  const MethodInfo *v12; // x4
  _BOOL8 i; // x0
  __int64 aftSvtId; // x1
  const MethodInfo *v15; // x4
  ServantTransformEntity_o *v16; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16B17 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_int__Add__,
      *(_QWORD *)&baseSvtId,
      *(_QWORD *)&baseDispLimitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B16B17 = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&baseSvtId,
                                                    *(_QWORD *)&baseDispLimitCount,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v12);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              v16->fields.aftSvtId,
              v16->fields.aftDispLimitCount,
              v15) )
  {
    v16 = entity;
    if ( !entity
      || !v11
      || (aftSvtId = (unsigned int)entity->fields.aftSvtId,
          items = v11->fields._items,
          v18 = Method_System_Collections_Generic_List_int__Add__,
          ++v11->fields._version,
          !items) )
    {
LABEL_12:
      sub_1BCAA3C(i, aftSvtId);
    }
    size = v11->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        aftSvtId,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      v16 = entity;
      if ( !entity )
        goto LABEL_12;
    }
    else
    {
      v11->fields._size = size + 1;
      items->m_Items[size + 1] = aftSvtId;
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TransformServantInfo__o *__fastcall ServantTransformMaster__GetTransformServantInfo(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x19
  const MethodInfo *v18; // x4
  Il2CppObject *object; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  TransformServantInfo_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  const MethodInfo *v64; // x4
  ServantTransformEntity_o *v66; // x8
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_String_o *v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  int32_t v76; // w22
  int32_t v77; // w23
  System_String_o *v78; // x24
  TransformServantInfo_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  ServantTransformEntity_o *v90; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16B18 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Last_TransformServantInfo___,
      *(_QWORD *)&baseSvtId,
      *(_QWORD *)&baseDispLimitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TransformServantInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_TransformServantInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&TransformServantInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B16B18 = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_TransformServantInfo__TypeInfo,
                                                       *(_QWORD *)&baseSvtId,
                                                       *(_QWORD *)&baseDispLimitCount,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v18);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v39 = (TransformServantInfo_o *)sub_1BCAA2C(TransformServantInfo_TypeInfo, v20, v21, v22);
    TransformServantInfo___ctor_41269632(v39, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v17 )
    {
      items = v17->fields._items;
      v47 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v17->fields._version;
      if ( items )
      {
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v39,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v39, v40, v41, v42, v43, v44, v45);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v17;
      }
    }
LABEL_31:
    sub_1BCAA3C(object, v20);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v26 = (TransformServantInfo_o *)sub_1BCAA2C(TransformServantInfo_TypeInfo, v20, v21, v22);
  TransformServantInfo___ctor_41269632(v26, befSvtId, befDispLimitCount, befTitle, 0LL);
  if ( !v17 )
    goto LABEL_31;
  v33 = v17->fields._items;
  v34 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v17->fields._version;
  if ( !v33 )
    goto LABEL_31;
  v35 = v17->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v17->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v53 = (TransformServantInfo_o *)sub_1BCAA2C(TransformServantInfo_TypeInfo, v20, v37, v38);
  TransformServantInfo___ctor_41269632(v53, aftSvtId, aftDispLimitCount, aftTitle, 0LL);
  v60 = v17->fields._items;
  v61 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v17->fields._version;
  if ( !v60 )
    goto LABEL_31;
  v62 = v17->fields._size;
  if ( (unsigned int)v62 >= v60->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v53,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v17->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v53, v54, v55, v56, v57, v58, v59);
  }
  v66 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v90, v66->fields.aftSvtId, v66->fields.aftDispLimitCount, v64) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
               (const MethodInfo_2F36F54 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v90 )
    {
      if ( object )
      {
        v73 = v90->fields.befTitle;
        object[1].monitor = v73;
        sub_1BCA784((PartyOrganizationUtility_o *)&object[1].monitor, (int64_t)v73, v67, v68, v69, v70, v71, v72);
        if ( v90 )
        {
          v76 = v90->fields.aftSvtId;
          v77 = v90->fields.aftDispLimitCount;
          v78 = v90->fields.aftTitle;
          v79 = (TransformServantInfo_o *)sub_1BCAA2C(TransformServantInfo_TypeInfo, v20, v74, v75);
          TransformServantInfo___ctor_41269632(v79, v76, v77, v78, 0LL);
          v86 = v17->fields._items;
          v87 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v17->fields._version;
          if ( v86 )
          {
            v88 = v17->fields._size;
            if ( (unsigned int)v88 >= v86->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)v79,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v89 = &v86->obj.klass + v88;
              v17->fields._size = v88 + 1;
              v89[4] = (Il2CppClass *)v79;
              sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v79, v80, v81, v82, v83, v84, v85);
            }
            v66 = v90;
            if ( v90 )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTransformMaster__TryGetEntity(
        ServantTransformMaster_o *this,
        ServantTransformEntity_o **entity,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16B1E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&befSvtId);
    byte_4B16B1E = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(this, *(_QWORD *)&x);
  if ( afterSvtCardIds->max_length <= i )
    sub_1BCAA44(this, x);
  return BattleCommand__JudgeCommandCardTypeChange(x, afterSvtCardIds->m_Items[i + 1], 0LL);
}