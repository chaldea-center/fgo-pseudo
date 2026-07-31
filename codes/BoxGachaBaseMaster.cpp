void BoxGachaBaseMaster___ctor(BoxGachaBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938345 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
    byte_5938345 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    131,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_o *BoxGachaBaseMaster__GetEntity(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938346 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
    byte_5938346 = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&no);
  return (BoxGachaBaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BoxGachaBaseMaster__TryGetEntity(
        BoxGachaBaseMaster_o *this,
        BoxGachaBaseEntity_o **entity,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938347 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
    byte_5938347 = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
}


bool BoxGachaBaseMaster__checkIsResetTarget(BoxGachaBaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  BoxGachaBaseEntity_array *GachaBaseList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  BoxGachaBaseEntity_o *v7; // x11

  GachaBaseList = BoxGachaBaseMaster__getGachaBaseList(this, id, method);
  if ( !GachaBaseList )
    goto LABEL_11;
  max_length = GachaBaseList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_21FFED4(GachaBaseList);
      v7 = GachaBaseList->m_Items[v6];
      if ( !v7 )
        break;
      if ( !v7->fields.isRare && (max_length & ~(max_length >> 31)) != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_11:
    sub_21FFECC(GachaBaseList, v4);
  }
  v6 = 0;
  return v6 < max_length;
}


BoxGachaBaseEntity_array *BoxGachaBaseMaster__getGachaBaseList(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
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
  struct BoxGachaBaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v23; // x21
  struct BoxGachaBaseMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5938344 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__);
    sub_21FFC50(&System_Comparison_BoxGachaBaseEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
    sub_21FFC50(&Method_BoxGachaBaseMaster___c__getGachaBaseList_b__0_0__);
    sub_21FFC50(&BoxGachaBaseMaster___c_TypeInfo);
    byte_5938344 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( id < 1 || *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_16;
    }
LABEL_24:
    sub_21FFECC(list, v6);
  }
LABEL_16:
  list = BoxGachaBaseMaster___c_TypeInfo;
  if ( !*(&BoxGachaBaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaBaseMaster___c_TypeInfo, v6);
    list = BoxGachaBaseMaster___c_TypeInfo;
  }
  static_fields = (struct BoxGachaBaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BoxGachaBaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__0_0, v23, Method_BoxGachaBaseMaster___c__getGachaBaseList_b__0_0__, 0);
    v24 = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    v24->__9__0_0 = (struct System_Comparison_BoxGachaBaseEntity__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__0_0, (int32_t)_9__0_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__0_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
  return (BoxGachaBaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
}


void BoxGachaBaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938348 & 1) == 0 )
  {
    sub_21FFC50(&BoxGachaBaseMaster___c_TypeInfo);
    byte_5938348 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BoxGachaBaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaBaseMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaBaseMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BoxGachaBaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BoxGachaBaseMaster___c___ctor(BoxGachaBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BoxGachaBaseMaster___c___getGachaBaseList_b__0_0(
        BoxGachaBaseMaster___c_o *this,
        BoxGachaBaseEntity_o *a,
        BoxGachaBaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}