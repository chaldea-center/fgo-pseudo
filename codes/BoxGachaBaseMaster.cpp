void BoxGachaBaseMaster___ctor(BoxGachaBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37689 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
    byte_4C37689 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    129,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_o *BoxGachaBaseMaster__GetEntity(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3768A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
    byte_4C3768A = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&no);
  return (BoxGachaBaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_339B2F0 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
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

  if ( (byte_4C3768B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
    byte_4C3768B = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
}


bool BoxGachaBaseMaster__checkIsResetTarget(BoxGachaBaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  BoxGachaBaseEntity_array *GachaBaseList; // x0
  int max_length; // w8
  int v5; // w9
  BoxGachaBaseEntity_o *v6; // x10

  GachaBaseList = BoxGachaBaseMaster__getGachaBaseList(this, id, method);
  if ( !GachaBaseList )
    goto LABEL_12;
  max_length = GachaBaseList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1C32E84(GachaBaseList);
      v6 = GachaBaseList->m_Items[v5];
      if ( !v6 )
        break;
      if ( !v6->fields.isRare && max_length != ++v5 )
        continue;
      return v5 < max_length;
    }
LABEL_12:
    sub_1C32E7C(GachaBaseList);
  }
  v5 = 0;
  return v5 < max_length;
}


BoxGachaBaseEntity_array *BoxGachaBaseMaster__getGachaBaseList(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
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
  struct BoxGachaBaseMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C37688 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__);
    sub_1C32C20(&System_Comparison_BoxGachaBaseEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
    sub_1C32C20(&Method_BoxGachaBaseMaster___c__getGachaBaseList_b__0_0__);
    sub_1C32C20(&BoxGachaBaseMaster___c_TypeInfo);
    byte_4C37688 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__);
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
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__);
      if ( list )
      {
        v12 = (Il2CppClass *)list;
        if ( id < 1 || *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__;
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
        goto LABEL_16;
    }
LABEL_24:
    sub_1C32E7C(list);
  }
LABEL_16:
  list = BoxGachaBaseMaster___c_TypeInfo;
  if ( !BoxGachaBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaBaseMaster___c_TypeInfo);
    list = BoxGachaBaseMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaBaseMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BoxGachaBaseEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_BoxGachaBaseMaster___c__getGachaBaseList_b__0_0__, 0);
    static_fields = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BoxGachaBaseEntity__o *)v17;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    v17,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
  return (BoxGachaBaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
}


void BoxGachaBaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3768C & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaBaseMaster___c_TypeInfo);
    byte_4C3768C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BoxGachaBaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaBaseMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaBaseMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BoxGachaBaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}