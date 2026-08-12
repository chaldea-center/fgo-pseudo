void GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970CBF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
    byte_5970CBF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    165,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970CBD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
    byte_5970CBD = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_3F157EC *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_5970CBE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
    byte_5970CBE = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *GuideMaster__getDataListByType(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct GuideMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct GuideMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5970CC0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
    sub_2213A60(&System_Comparison_GuideEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GuideEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GuideEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GuideEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GuideEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GuideEntity__TypeInfo);
    sub_2213A60(&Method_GuideMaster___c__getDataListByType_b__3_0__);
    sub_2213A60(&GuideMaster___c_TypeInfo);
    byte_5970CC0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == type )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_2213CDC(list, v6);
  }
LABEL_15:
  list = GuideMaster___c_TypeInfo;
  if ( !*(&GuideMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo, v6);
    list = GuideMaster___c_TypeInfo;
  }
  static_fields = (struct GuideMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = GuideMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v23, Method_GuideMaster___c__getDataListByType_b__3_0__, 0);
    v24 = GuideMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Comparison_GuideEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__3_0, (int32_t)_9__3_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  GuideEntity_array *DataListByType; // x0
  __int64 v6; // x1
  int max_length; // w8
  GuideEntity_array *v8; // x19
  __int64 v9; // x25
  GuideEntity_o *v10; // x21
  NetworkManager_c *v11; // x0
  int32_t condQuestId; // w23
  int32_t condQuestPhase; // w24
  int64_t userIdNumber; // x22

  if ( (byte_5970CC1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970CC1 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0;
  max_length = DataListByType->max_length;
  v8 = DataListByType;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_2213CE4(DataListByType);
    v10 = v8->m_Items[v9];
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v11 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      v11 = NetworkManager_TypeInfo;
    }
    if ( !v10 )
      sub_2213CDC(v11, v6);
    condQuestId = v10->fields.condQuestId;
    condQuestPhase = v10->fields.condQuestPhase;
    userIdNumber = v11->static_fields->userIdNumber;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
    DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(
                                            userIdNumber,
                                            condQuestId,
                                            condQuestPhase,
                                            -1,
                                            0,
                                            0);
    if ( ((unsigned __int8)DataListByType & 1) != 0 || !v10->fields.condQuestId )
      break;
    max_length = v8->max_length;
    if ( (int)++v9 >= max_length )
      return 0;
  }
  return v10;
}


void GuideMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970CC2 & 1) == 0 )
  {
    sub_2213A60(&GuideMaster___c_TypeInfo);
    byte_5970CC2 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GuideMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GuideMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}