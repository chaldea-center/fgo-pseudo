void GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37DFA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
    byte_4C37DFA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37DF8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
    byte_4C37DF8 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_339B2F0 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GuideMaster__TryGetEntity(
        GuideMaster_o *this,
        GuideEntity_o **entity,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37DF9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
    byte_4C37DF9 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *GuideMaster__getDataListByType(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppClass *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C37DFB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
    sub_1C32C20(&System_Comparison_GuideEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GuideEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GuideEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GuideEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GuideEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GuideEntity__TypeInfo);
    sub_1C32C20(&Method_GuideMaster___c__getDataListByType_b__3_0__);
    sub_1C32C20(&GuideMaster___c_TypeInfo);
    byte_4C37DFB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
      if ( list )
      {
        v12 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == type )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = v12;
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C32E7C(list);
  }
LABEL_15:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_GuideMaster___c__getDataListByType_b__3_0__, 0);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v17;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    v17,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  GuideEntity_array *DataListByType; // x0
  il2cpp_array_size_t max_length; // x8
  GuideEntity_array *v7; // x19
  GuideEntity_o *v8; // x21
  __int64 v9; // x25
  NetworkManager_c *v10; // x0
  int32_t condQuestPhase; // w23
  int32_t condQuestId; // w24
  int64_t userIdNumber; // x22

  if ( (byte_4C37DFC & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37DFC = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0;
  max_length = DataListByType->max_length;
  v7 = DataListByType;
  v8 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)max_length )
        sub_1C32E84(DataListByType);
      v8 = v7->m_Items[v9];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v10 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v10 = NetworkManager_TypeInfo;
      }
      if ( !v8 )
        sub_1C32E7C(v10);
      condQuestId = v8->fields.condQuestId;
      condQuestPhase = v8->fields.condQuestPhase;
      userIdNumber = v10->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(
                                              userIdNumber,
                                              condQuestId,
                                              condQuestPhase,
                                              -1,
                                              0,
                                              0);
      if ( ((unsigned __int8)DataListByType & 1) != 0 || !v8->fields.condQuestId )
        break;
      LODWORD(max_length) = v7->max_length;
      if ( (int)++v9 >= (int)max_length )
        return 0;
    }
  }
  return v8;
}


void GuideMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37DFD & 1) == 0 )
  {
    sub_1C32C20(&GuideMaster___c_TypeInfo);
    byte_4C37DFD = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GuideMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)GuideMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void GuideMaster___c___ctor(GuideMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GuideMaster___c___getDataListByType_b__3_0(
        GuideMaster___c_o *this,
        GuideEntity_o *a,
        GuideEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}