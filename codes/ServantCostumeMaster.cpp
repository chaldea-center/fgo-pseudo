void ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E052F9 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
    byte_4E052F9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_34EBC44 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  const MethodInfo *v5; // x4
  int max_length; // w8
  ServantCostumeMaster_o *v7; // x21
  __int64 v8; // x22
  int32_t *p_revision; // x24
  CostumeReleaseAnnounce_o *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_String_o *name; // x1
  GrandQuestFolderBoardItem_o *v18; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4E052FD & 1) == 0 )
  {
    sub_1CE6700(&string___TypeInfo);
    this = (ServantCostumeMaster_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E052FD = 1;
  }
  entity = 0;
  if ( !releases )
LABEL_18:
    sub_1CE6958(this, releases);
  this = (ServantCostumeMaster_o *)sub_1CE67A8(string___TypeInfo, LODWORD(releases->max_length));
  max_length = releases->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    p_revision = &this->fields.revision;
    while ( (unsigned int)v8 < max_length )
    {
      v10 = releases->m_Items[v8];
      if ( !v10 )
        goto LABEL_18;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v10->fields.svtId,
                                         v10->fields.costumeId,
                                         v5);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v7 )
          goto LABEL_18;
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        name = entity->fields.name;
        v18 = (GrandQuestFolderBoardItem_o *)(&v7->fields.revision + 2 * (int)v8);
      }
      else
      {
        if ( !v7 )
          goto LABEL_18;
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v18 = (GrandQuestFolderBoardItem_o *)p_revision;
      }
      *(_QWORD *)p_revision = name;
      sub_1CE66A4(v18, (int32_t)name, v11, v12, v13, v14, v15, v16);
      max_length = releases->max_length;
      ++v8;
      p_revision += 2;
      if ( (int)v8 >= max_length )
        return (System_String_array *)v7;
    }
    sub_1CE6960(this);
  }
  return (System_String_array *)v7;
}


System_Collections_Generic_List_int__o *ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  System_Collections_ObjectModel_Collection_T__o *v10; // x23
  int32_t *p_fields; // x8
  int32_t v12; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int32_t baseSvtId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4E052FB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E052FB = 1;
  }
  baseSvtId = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3480AB0 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3480B40 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCostumeEntity__TryGetBaseSvtId(
                                                                 (ServantCostumeEntity_o *)list,
                                                                 &baseSvtId,
                                                                 v9);
      p_fields = (int32_t *)&v10->fields;
      if ( ((unsigned __int8)list & 1) != 0 )
        p_fields = &baseSvtId;
      if ( !v3 )
        break;
      v12 = *p_fields;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___Contains(
                                                                 v3,
                                                                 *p_fields,
                                                                 (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v12;
        }
      }
      if ( v7 == ++v8 )
        return v3;
    }
LABEL_18:
    sub_1CE6958(list, v4);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E052F7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
    byte_4E052F7 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34EE1BC *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  int32_t baseSvtId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E052FA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    byte_4E052FA = 1;
  }
  baseSvtId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1CE6958(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3480AB0 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3480B40 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    if ( !list )
      goto LABEL_15;
    if ( LODWORD(list->fields.items) == svtId
      || ServantCostumeEntity__TryGetBaseSvtId((ServantCostumeEntity_o *)list, &baseSvtId, v9) && baseSvtId == svtId )
    {
      return 1;
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeMaster__TryGetEntity(
        ServantCostumeMaster_o *this,
        ServantCostumeEntity_o **entity,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E052F8 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
    byte_4E052F8 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_34EE208 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


ServantCostumeEntity_array *ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        bool isIncludeBaseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  const MethodInfo *v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  const MethodInfo *v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x26
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t baseSvtId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4E052FC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_1CE6700(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1CE6700(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__);
    sub_1CE6700(&ServantCostumeMaster___c_TypeInfo);
    byte_4E052FC = 1;
  }
  baseSvtId = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3480AB0 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_3480B40 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v21 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == svtId
        || isIncludeBaseSvtId
        && (list = (void *)ServantCostumeEntity__TryGetBaseSvtId((ServantCostumeEntity_o *)list, &baseSvtId, v15),
            ((unsigned __int8)list & 1) != 0)
        && baseSvtId == svtId )
      {
        if ( (BYTE4(v21[5].klass) & 0x10) == 0 && !isChkHave
          || (list = (void *)ServantCostumeEntity__IsHaveCostume((ServantCostumeEntity_o *)v21, v10),
              ((unsigned __int8)list & 1) != 0) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v21,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v21;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v21, (int32_t)v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_21;
    }
LABEL_29:
    sub_1CE6958(list, v10);
  }
LABEL_21:
  list = ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = ServantCostumeMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1CE694C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v26;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_59800108(
    v9,
    v26,
    (const MethodInfo_3907A2C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E052FE & 1) == 0 )
  {
    sub_1CE6700(&ServantCostumeMaster___c_TypeInfo);
    byte_4E052FE = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCostumeMaster___c___ctor(ServantCostumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCostumeMaster___c___releasedCostumeEntityList_b__5_0(
        ServantCostumeMaster___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1CE6958(this, a);
  return b->fields.priority - a->fields.priority;
}