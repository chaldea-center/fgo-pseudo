void __fastcall ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C228F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__, method);
    byte_4C228F5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
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

  if ( (byte_4C228F2 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__,
      *(_QWORD *)&aftSvtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__, v7);
    byte_4C228F2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1C3B9C0(list, *(_QWORD *)&aftSvtId);
  v9 = 0;
  while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v9,
                                           (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ServantTransformEntity__get_Item__);
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

  if ( (byte_4C228F4 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_IndexValue_CommandCardTypeChange___, *(_QWORD *)&baseSvtId);
    byte_4C228F4 = 1;
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
           (const MethodInfo_2FDEA2C *)Method_BasicHelper_IndexValue_CommandCardTypeChange___);
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
  int64_t klass; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x21
  System_Func_T1__T2__TResult__o *v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C228F3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___, v10);
    sub_1C3B764(&System_Func_int__int__CommandCardTypeChange__TypeInfo, v11);
    sub_1C3B764(&Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__, v12);
    sub_1C3B764(&ServantTransformMaster___c__DisplayClass3_0_TypeInfo, v13);
    byte_4C228F3 = 1;
  }
  entity = 0LL;
  v14 = sub_1C3B9B0(ServantTransformMaster___c__DisplayClass3_0_TypeInfo);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( entity )
    {
      v20 = Master_object;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        entity->fields.befSvtId,
                                                                        (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v21 = Master_object ? Master_object[2].klass : 0LL;
        if ( entity )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v20,
                                                                          entity->fields.aftSvtId,
                                                                          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Master_object )
          {
            klass = (int64_t)Master_object[2].klass;
            if ( v14 )
            {
LABEL_15:
              *(_QWORD *)(v14 + 16) = klass;
              v28 = v14 + 16;
              sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), klass, v22, v23, v24, v25, v26, v27);
              if ( !v21 || !*(_QWORD *)v28 || LODWORD(v21->_1.namespaze) != *(_DWORD *)(*(_QWORD *)v28 + 24LL) )
                return 0LL;
              v29 = (System_Func_T1__T2__TResult__o *)sub_1C3B9B0(System_Func_int__int__CommandCardTypeChange__TypeInfo);
              System_Func_int__int__Int32Enum____ctor(
                v29,
                (Il2CppObject *)v14,
                Method_ServantTransformMaster___c__DisplayClass3_0__GetCommandCardTypeChangeArray_b__0__,
                0LL);
              v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum__50463576(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                           (System_Func_TSource__int__TResult__o *)v29,
                                                                           (const MethodInfo_3020358 *)Method_System_Linq_Enumerable_Select_int__CommandCardTypeChange___);
              return (CommandCardTypeChange_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                      v30,
                                                      (const MethodInfo_302ABB8 *)Method_System_Linq_Enumerable_ToArray_CommandCardTypeChange___);
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
    sub_1C3B9C0(Master_object, klass);
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

  if ( (byte_4C228F6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__,
      *(_QWORD *)&befSvtId);
    byte_4C228F6 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return (ServantTransformEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_329F900 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
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

  if ( (byte_4C228F0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseSvtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4C228F0 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
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
      sub_1C3B9C0(i, aftSvtId);
    }
    size = v9->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        aftSvtId,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  TransformServantInfo_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t aftSvtId; // w22
  int32_t aftDispLimitCount; // w23
  System_String_o *aftTitle; // x24
  TransformServantInfo_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  const MethodInfo *v55; // x4
  ServantTransformEntity_o *v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_String_o *v64; // x1
  int32_t v65; // w22
  int32_t v66; // w23
  System_String_o *v67; // x24
  TransformServantInfo_o *v68; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  ServantTransformEntity_o *v79; // [xsp+0h] [xbp-60h] BYREF
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C228F1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Last_TransformServantInfo___, *(_QWORD *)&baseSvtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_TransformServantInfo__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_TransformServantInfo__TypeInfo, v9);
    sub_1C3B764(&TransformServantInfo_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C228F1 = 1;
  }
  v79 = 0LL;
  entity = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  object = (Il2CppObject *)ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v13);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
    v30 = (TransformServantInfo_o *)sub_1C3B9B0(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_42018168(v30, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v12 )
    {
      items = v12->fields._items;
      v38 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v30,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v30;
          sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v30, v31, v32, v33, v34, v35, v36);
        }
        return (System_Collections_Generic_List_TransformServantInfo__o *)v12;
      }
    }
LABEL_31:
    sub_1C3B9C0(object, v15);
  }
  if ( !entity )
    goto LABEL_31;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v19 = (TransformServantInfo_o *)sub_1C3B9B0(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_42018168(v19, befSvtId, befDispLimitCount, befTitle, 0LL);
  if ( !v12 )
    goto LABEL_31;
  v26 = v12->fields._items;
  v27 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v26 )
    goto LABEL_31;
  v28 = v12->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    v12->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  if ( !entity )
    goto LABEL_31;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v44 = (TransformServantInfo_o *)sub_1C3B9B0(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_42018168(v44, aftSvtId, aftDispLimitCount, aftTitle, 0LL);
  v51 = v12->fields._items;
  v52 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v12->fields._version;
  if ( !v51 )
    goto LABEL_31;
  v53 = v12->fields._size;
  if ( (unsigned int)v53 >= v51->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v44,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v51->obj.klass + v53;
    v12->fields._size = v53 + 1;
    v54[4] = (Il2CppClass *)v44;
    sub_1C3B708((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v44, v45, v46, v47, v48, v49, v50);
  }
  v57 = entity;
  if ( !entity )
    goto LABEL_31;
  while ( ServantTransformMaster__TryGetEntity(this, &v79, v57->fields.aftSvtId, v57->fields.aftDispLimitCount, v55) )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
               (const MethodInfo_3015AA8 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v79 )
    {
      if ( object )
      {
        v64 = v79->fields.befTitle;
        object[1].monitor = v64;
        sub_1C3B708((PartyOrganizationUtility_o *)&object[1].monitor, (int64_t)v64, v58, v59, v60, v61, v62, v63);
        if ( v79 )
        {
          v65 = v79->fields.aftSvtId;
          v66 = v79->fields.aftDispLimitCount;
          v67 = v79->fields.aftTitle;
          v68 = (TransformServantInfo_o *)sub_1C3B9B0(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_42018168(v68, v65, v66, v67, 0LL);
          v75 = v12->fields._items;
          v76 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
          ++v12->fields._version;
          if ( v75 )
          {
            v77 = v12->fields._size;
            if ( (unsigned int)v77 >= v75->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v68,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = &v75->obj.klass + v77;
              v12->fields._size = v77 + 1;
              v78[4] = (Il2CppClass *)v68;
              sub_1C3B708((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v68, v69, v70, v71, v72, v73, v74);
            }
            v57 = v79;
            if ( v79 )
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

  if ( (byte_4C228F7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__, entity);
    byte_4C228F7 = 1;
  }
  PK = (Il2CppObject *)ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
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
  if ( (byte_4C228F8 & 1) == 0 )
  {
    this = (ServantTransformMaster___c__DisplayClass3_0_o *)sub_1C3B764(&BattleCommand_TypeInfo, *(_QWORD *)&x);
    byte_4C228F8 = 1;
  }
  afterSvtCardIds = v6->fields.afterSvtCardIds;
  if ( !afterSvtCardIds )
    sub_1C3B9C0(this, *(_QWORD *)&x);
  if ( afterSvtCardIds->max_length <= i )
    sub_1C3B9C8(this, *(_QWORD *)&x);
  v8 = afterSvtCardIds->m_Items[i + 1];
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__JudgeCommandCardTypeChange(x, v8, 0LL);
}