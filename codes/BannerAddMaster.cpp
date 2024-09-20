void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
    byte_4A5ADC7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_4A5ADC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
    byte_4A5ADC5 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_4A5ADC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
    byte_4A5ADC6 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  const MethodInfo_30BA610 **v10; // x27
  BannerAddEntity_c **v11; // x20
  int v12; // w23
  int32_t v13; // w24
  Il2CppObject *v14; // x25
  __int64 methodPtr_low; // x10
  BannerAddMaster_o *v16; // x23
  int32_t v17; // w22
  System_Collections_Generic_List_object__o *v18; // x21
  BannerAddEntity_c **v19; // x19
  const MethodInfo_30BA610 **v20; // x20
  int32_t v21; // w26
  int32_t v22; // w28
  int64_t v23; // x27
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  BannerAddMaster___c_c *v30; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v32; // x21
  struct BannerAddMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int v37; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5ADC8 & 1) == 0 )
  {
    sub_1B885B0(&BannerAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_BannerAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_BannerAddEntity__TypeInfo);
    sub_1B885B0(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__);
    sub_1B885B0(&BannerAddMaster___c_TypeInfo);
    byte_4A5ADC8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (const MethodInfo_30BA610 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v11 = &BannerAddEntity_TypeInfo;
    v12 = (int)list;
    v13 = 0;
    v37 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               *v10);
      if ( !list )
        break;
      v14 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE((*v11)->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != *v11 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == bannerId && *((_DWORD *)list + 5) == dispType )
      {
        v16 = this;
        v17 = bannerId;
        v18 = v7;
        v19 = v11;
        v20 = v10;
        v22 = *((_DWORD *)list + 7);
        v21 = *((_DWORD *)list + 8);
        v23 = *((int *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v22, v21, v23, 0, 0LL, 0LL);
        v10 = v20;
        v11 = v19;
        v7 = v18;
        bannerId = v17;
        this = v16;
        v12 = v37;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v27 = Method_System_Collections_Generic_List_BannerAddEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v14,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v14;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v14, v24, v25);
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_21;
    }
LABEL_32:
    sub_1B8880C(list, v8);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_32;
  if ( v7->fields._size < 1 )
    return -1;
  v30 = BannerAddMaster___c_TypeInfo;
  if ( !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v30 = BannerAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v30->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = BannerAddMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v32, Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, 0LL);
    static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v34, v35);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__3_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v7,
           0,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
  if ( !list )
    goto LABEL_32;
  return *((_DWORD *)list + 10);
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADC9 & 1) == 0 )
  {
    sub_1B885B0(&BannerAddMaster___c_TypeInfo);
    byte_4A5ADC9 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BannerAddMaster___c_TypeInfo->static_fields->__9 = (struct BannerAddMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BannerAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}