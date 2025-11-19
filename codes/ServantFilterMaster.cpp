void ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6C01 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
    byte_4CB6C01 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


bool ServantFilterMaster__IsEnableServant(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4CB6C03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__);
    byte_4CB6C03 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C6BC60(0, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
}


bool ServantFilterMaster__IsEnableServant_42927400(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  il2cpp_array_size_t max_length; // x8
  bool v9; // w23
  unsigned __int64 v10; // x24
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4CB6C04 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1C6BA08(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    byte_4CB6C04 = 1;
  }
  if ( !ids )
    goto LABEL_12;
  max_length = ids->max_length;
  v9 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10],
                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
      if ( !this )
        break;
      *(_QWORD *)&v13.fields.currentCryptoKey = v6;
      *(_QWORD *)&v13.fields.fakeValue = v5;
      this = (ServantFilterMaster_o *)ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)this, v13, v11);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = ids->max_length;
        v9 = (__int64)++v10 < (int)max_length;
        if ( (__int64)v10 < (int)max_length )
          continue;
      }
      return v9;
    }
LABEL_12:
    sub_1C6BC60(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  }
  return v9;
}


System_Int32_array *ServantFilterMaster__getEnableIdList(ServantFilterMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  __int64 v17; // x20
  ServantFilterMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v20; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  unsigned __int64 v25; // x22

  if ( (byte_4CB6C02 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ServantFilterEntity__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__);
    sub_1C6BA08(&ServantFilterMaster___c_TypeInfo);
    byte_4CB6C02 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
      if ( !list )
        break;
      v10 = (Il2CppObject *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantFilterEntity__IsEnable(
                                                                 (ServantFilterEntity_o *)list,
                                                                 Time,
                                                                 v9);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v4 )
          break;
        items = v4->fields._items;
        v14 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v10,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v10;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C6BC60(list, v5);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_33;
  v17 = (unsigned int)v4->fields._size;
  if ( (int)v17 >= 1 )
  {
    v18 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v18 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v18->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = ServantFilterMaster___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v20, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v22, v23);
    }
    System_Collections_Generic_List_object___Sort_58729528(
      v4,
      _9__1_0,
      (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v24 = sub_1C6BAB0(int___TypeInfo, (unsigned int)v17);
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v4,
                                                                 v25,
                                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v24 )
        break;
      if ( v25 >= *(unsigned int *)(v24 + 24) )
        sub_1C6BC68(list);
      *(_DWORD *)(v24 + 32 + 4 * v25++) = list->fields.items;
      if ( v17 == v25 )
        return (System_Int32_array *)v24;
    }
    goto LABEL_33;
  }
  return 0;
}


void ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6C05 & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterMaster___c_TypeInfo);
    byte_4CB6C05 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantFilterMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantFilterMaster___c___ctor(ServantFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantFilterMaster___c___getEnableIdList_b__1_0(
        ServantFilterMaster___c_o *this,
        ServantFilterEntity_o *a,
        ServantFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}