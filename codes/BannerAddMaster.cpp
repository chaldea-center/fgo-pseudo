void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0E0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method);
    byte_4A4E0E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    204,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BannerAddEntity_o *__fastcall BannerAddMaster__GetEntity(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4E0DE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__, *(_QWORD *)&bannerId);
    byte_4A4E0DE = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3218D38 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BannerAddMaster__TryGetEntity(
        BannerAddMaster_o *this,
        BannerAddEntity_o **entity,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4E0DF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__, entity);
    byte_4A4E0DF = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  void *list; // x0
  int v21; // w23
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  int32_t v24; // w26
  int32_t v25; // w28
  int64_t v26; // x27
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  BannerAddMaster___c_c *v33; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v35; // x21
  struct BannerAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4A4E0E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Count__, *(_QWORD *)&bannerId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Item__, v7);
    sub_1B863B8(&System_Comparison_BannerAddEntity__TypeInfo, v8);
    sub_1B863B8(&CondType_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v14);
    sub_1B863B8(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v15);
    sub_1B863B8(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v16);
    sub_1B863B8(&BannerAddMaster___c_TypeInfo, v17);
    byte_4A4E0E1 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = (int)list;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_BannerAddEntity__get_Item__);
      if ( !list )
        break;
      v23 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == bannerId && *((_DWORD *)list + 5) == dispType )
      {
        v25 = *((_DWORD *)list + 7);
        v24 = *((_DWORD *)list + 8);
        v26 = *((int *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v25, v24, v26, 0, 0LL, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v30 = Method_System_Collections_Generic_List_BannerAddEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v23,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v23;
            sub_1B8635C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v23, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_19;
    }
LABEL_30:
    sub_1B86614(list, v19);
  }
LABEL_19:
  if ( !v18 )
    goto LABEL_30;
  if ( v18->fields._size < 1 )
    return -1;
  v33 = BannerAddMaster___c_TypeInfo;
  if ( !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v33 = BannerAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v33->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BannerAddMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v35, Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, 0LL);
    static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v37, v38);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v18,
    _9__3_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v18,
           0,
           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
  if ( !list )
    goto LABEL_30;
  return *((_DWORD *)list + 10);
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E0E2 & 1) == 0 )
  {
    sub_1B863B8(&BannerAddMaster___c_TypeInfo, v1);
    byte_4A4E0E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BannerAddMaster___c_TypeInfo->static_fields->__9 = (struct BannerAddMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BannerAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BannerAddMaster___c___ctor(BannerAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BannerAddMaster___c___getOverwriteBannerId_b__3_0(
        BannerAddMaster___c_o *this,
        BannerAddEntity_o *a,
        BannerAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}