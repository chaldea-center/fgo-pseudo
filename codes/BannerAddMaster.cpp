void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC084 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method);
    byte_49FC084 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_49FC082 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__, *(_QWORD *)&bannerId);
    byte_49FC082 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_49FC083 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__, entity);
    byte_49FC083 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  int32_t v5; // w21
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x19
  void *list; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo_3070B98 **v23; // x27
  BannerAddEntity_c **v24; // x20
  int v25; // w23
  int32_t v26; // w24
  Il2CppObject *v27; // x25
  __int64 methodPtr_low; // x10
  BannerAddMaster_o *v29; // x23
  int32_t v30; // w22
  System_Collections_Generic_List_object__o *v31; // x21
  BannerAddEntity_c **v32; // x19
  const MethodInfo_3070B98 **v33; // x20
  int32_t v34; // w26
  int32_t v35; // w28
  int64_t v36; // x27
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  BannerAddMaster___c_c *v42; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v44; // x21
  struct BannerAddMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  int v49; // [xsp+Ch] [xbp-64h]

  v5 = bannerId;
  if ( (byte_49FC085 & 1) == 0 )
  {
    sub_1B640C8(&BannerAddEntity_TypeInfo, *(_QWORD *)&bannerId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&System_Comparison_BannerAddEntity__TypeInfo, v9);
    sub_1B640C8(&CondType_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v16);
    sub_1B640C8(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v17);
    sub_1B640C8(&BannerAddMaster___c_TypeInfo, v18);
    byte_49FC085 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BannerAddEntity__TypeInfo,
                                                       *(_QWORD *)&bannerId,
                                                       *(_QWORD *)&dispType);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (const MethodInfo_3070B98 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &BannerAddEntity_TypeInfo;
    v25 = (int)list;
    v26 = 0;
    v49 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v26,
               *v23);
      if ( !list )
        break;
      v27 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE((*v24)->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != *v24 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 && *((_DWORD *)list + 5) == dispType )
      {
        v29 = this;
        v30 = v5;
        v31 = v19;
        v32 = v24;
        v33 = v23;
        v35 = *((_DWORD *)list + 7);
        v34 = *((_DWORD *)list + 8);
        v36 = *((int *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v35, v34, v36, 0, 0LL);
        v23 = v33;
        v24 = v32;
        v19 = v31;
        v5 = v30;
        this = v29;
        v25 = v49;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v39 = Method_System_Collections_Generic_List_BannerAddEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              v27,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v27;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v27, v22, v37);
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_21;
    }
LABEL_32:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v19 )
    goto LABEL_32;
  if ( v19->fields._size < 1 )
    return -1;
  v42 = BannerAddMaster___c_TypeInfo;
  if ( !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v42 = BannerAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v42->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = BannerAddMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BannerAddEntity__TypeInfo, v21, v22);
    System_Comparison_object____ctor(_9__3_0, v44, Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, 0LL);
    static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v46, v47);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    _9__3_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v19,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
  if ( !list )
    goto LABEL_32;
  return *((_DWORD *)list + 10);
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC086 & 1) == 0 )
  {
    sub_1B640C8(&BannerAddMaster___c_TypeInfo, v1);
    byte_49FC086 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BannerAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BannerAddMaster___c_TypeInfo->static_fields->__9 = (struct BannerAddMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BannerAddMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}