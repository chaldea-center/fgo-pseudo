void BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938282 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
    byte_5938282 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BannerAddEntity_o *BannerAddMaster__GetEntity(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938280 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
    byte_5938280 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BannerAddMaster__TryGetEntity(
        BannerAddMaster_o *this,
        BannerAddEntity_o **entity,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938281 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
    byte_5938281 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


int32_t BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  int v10; // w23
  int32_t v11; // w24
  Il2CppObject *v12; // x25
  int64_t v13; // x28
  int32_t v14; // w26
  int32_t v15; // w27
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  BannerAddMaster___c_c *v26; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v29; // x21
  struct BannerAddMaster___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5938283 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Item__);
    sub_21FFC50(&System_Comparison_BannerAddEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BannerAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_BannerAddEntity__TypeInfo);
    sub_21FFC50(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__);
    sub_21FFC50(&BannerAddMaster___c_TypeInfo);
    byte_5938283 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Item__);
      if ( !list )
        break;
      v12 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == bannerId && *((_DWORD *)list + 5) == dispType )
      {
        v13 = *((int *)list + 9);
        v14 = *((_DWORD *)list + 7);
        v15 = *((_DWORD *)list + 8);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
        list = (void *)CondType__IsOpen(v14, v15, v13, 0, 0, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v23 = Method_System_Collections_Generic_List_BannerAddEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_19;
    }
LABEL_30:
    sub_21FFECC(list, v8);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_30;
  if ( v7->fields._size < 1 )
    return -1;
  v26 = BannerAddMaster___c_TypeInfo;
  if ( !*(&BannerAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo, v8);
    v26 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v8);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v29, Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, 0);
    v30 = BannerAddMaster___c_TypeInfo->static_fields;
    v30->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->__9__3_0, (int32_t)_9__3_0, v31, v32, v33, v34, v35, v36);
  }
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v7,
           0,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
  if ( !list )
    goto LABEL_30;
  return *((_DWORD *)list + 10);
}


void BannerAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938284 & 1) == 0 )
  {
    sub_21FFC50(&BannerAddMaster___c_TypeInfo);
    byte_5938284 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BannerAddMaster___c_TypeInfo->static_fields->__9 = (struct BannerAddMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BannerAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BannerAddMaster___c___ctor(BannerAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BannerAddMaster___c___getOverwriteBannerId_b__3_0(
        BannerAddMaster___c_o *this,
        BannerAddEntity_o *a,
        BannerAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}