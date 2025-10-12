void ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C382EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
    byte_4C382EA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_3394514 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


bool ServantFilterMaster__IsEnableServant(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  const MethodInfo *v8; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4C382EC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__);
    byte_4C382EC = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3396884 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C32E7C(0);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v12, v8);
  }
  else
  {
    return 0;
  }
}


bool ServantFilterMaster__IsEnableServant_42586228(
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
  if ( (byte_4C382ED & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1C32C20(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    byte_4C382ED = 1;
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
        sub_1C32E84(this);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10],
                                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
    sub_1C32E7C(this);
  }
  return v9;
}


System_Int32_array *ServantFilterMaster__getEnableIdList(ServantFilterMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w22
  int32_t v7; // w23
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  __int64 v16; // x20
  ServantFilterMaster___c_c *v17; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x21
  unsigned __int64 v24; // x22

  if ( (byte_4C382EB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
    sub_1C32C20(&System_Comparison_ServantFilterEntity__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__);
    sub_1C32C20(&ServantFilterMaster___c_TypeInfo);
    byte_4C382EB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
      if ( !list )
        break;
      v9 = (Il2CppObject *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantFilterEntity__IsEnable(
                                                                 (ServantFilterEntity_o *)list,
                                                                 Time,
                                                                 v8);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v4 )
          break;
        items = v4->fields._items;
        v13 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v9;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C32E7C(list);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_33;
  v16 = (unsigned int)v4->fields._size;
  if ( (int)v16 >= 1 )
  {
    v17 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v17 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v17->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = ServantFilterMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v19, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v21, v22);
    }
    System_Collections_Generic_List_object___Sort_58303104(
      v4,
      _9__1_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v23 = sub_1C32CC8(int___TypeInfo, (unsigned int)v16);
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v4,
                                                                 v24,
                                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v23 )
        break;
      if ( v24 >= *(unsigned int *)(v23 + 24) )
        sub_1C32E84(list);
      *(_DWORD *)(v23 + 32 + 4 * v24++) = list->fields.items;
      if ( v16 == v24 )
        return (System_Int32_array *)v23;
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

  if ( (byte_4C382EE & 1) == 0 )
  {
    sub_1C32C20(&ServantFilterMaster___c_TypeInfo);
    byte_4C382EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantFilterMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return a->fields.priority - b->fields.priority;
}