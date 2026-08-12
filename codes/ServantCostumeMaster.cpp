void ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597116F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
    byte_597116F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
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
  __int64 v8; // x23
  MissionNaviTransitionBoardItem_o *p_revision; // x22
  CostumeReleaseAnnounce_o *v10; // x8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o **p_name; // x8
  struct System_String_o *v18; // x1
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_5971173 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    this = (ServantCostumeMaster_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971173 = 1;
  }
  entity = 0;
  if ( !releases )
LABEL_17:
    sub_2213CDC(this, releases);
  this = (ServantCostumeMaster_o *)sub_2213B20(string___TypeInfo, LODWORD(releases->max_length));
  max_length = releases->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    p_revision = (MissionNaviTransitionBoardItem_o *)&this->fields.revision;
    while ( (unsigned int)v8 < max_length )
    {
      v10 = releases->m_Items[v8];
      if ( !v10 )
        goto LABEL_17;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v10->fields.svtId,
                                         v10->fields.costumeId,
                                         v5);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v7 )
          goto LABEL_17;
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        p_name = &entity->fields.name;
      }
      else
      {
        if ( !v7 )
          goto LABEL_17;
        p_name = (struct System_String_o **)&StringLiteral_1/*""*/;
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
      }
      v18 = *p_name;
      p_revision->klass = (MissionNaviTransitionBoardItem_c *)*p_name;
      sub_2213A04(p_revision, (int32_t)v18, v11, v12, v13, v14, v15, v16);
      max_length = releases->max_length;
      ++v8;
      p_revision = (MissionNaviTransitionBoardItem_o *)((char *)p_revision + 8);
      if ( (int)v8 >= max_length )
        return (System_String_array *)v7;
    }
    sub_2213CE4(this);
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

  if ( (byte_5971171 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971171 = 1;
  }
  baseSvtId = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
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
                                                                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_2213CDC(list, v4);
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

  if ( (byte_597116D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
    byte_597116D = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
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
  bool v9; // w24
  const MethodInfo *v10; // x2
  int32_t baseSvtId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5971170 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    byte_5971170 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  baseSvtId = 0;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) != svtId
        && (!ServantCostumeEntity__TryGetBaseSvtId((ServantCostumeEntity_o *)list, &baseSvtId, v10) || baseSvtId != svtId) )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_2213CDC(list, *(_QWORD *)&svtId);
  }
  return 0;
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

  if ( (byte_597116E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
    byte_597116E = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x26
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v28; // x21
  struct ServantCostumeMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t baseSvtId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5971172 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_2213A60(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_2213A60(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__);
    sub_2213A60(&ServantCostumeMaster___c_TypeInfo);
    byte_5971172 = 1;
  }
  baseSvtId = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v21 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == svtId
        || isIncludeBaseSvtId
        && (list = (void *)ServantCostumeEntity__TryGetBaseSvtId(
                             (ServantCostumeEntity_o *)list,
                             &baseSvtId,
                             (const MethodInfo *)v15),
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v21;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v21, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_22;
    }
LABEL_30:
    sub_2213CDC(list, v10);
  }
LABEL_22:
  list = ServantCostumeMaster___c_TypeInfo;
  if ( !*(&ServantCostumeMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo, v10);
    list = ServantCostumeMaster___c_TypeInfo;
  }
  static_fields = (struct ServantCostumeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v10);
      static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v28,
      Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__,
      0);
    v29 = ServantCostumeMaster___c_TypeInfo->static_fields;
    v29->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__5_0, (int32_t)_9__5_0, v30, v31, v32, v33, v34, v35);
  }
  if ( !v9 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_71849708(
    v9,
    _9__5_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971174 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeMaster___c_TypeInfo);
    byte_5971174 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}