void ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939025 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
    byte_5939025 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_5939027 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__);
    byte_5939027 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_21FFECC(0, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
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
  __int64 v21; // x20
  ServantFilterMaster___c_c *v22; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v25; // x22
  struct ServantFilterMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x21
  unsigned __int64 v34; // x22
  unsigned __int64 v35; // x9

  if ( (byte_5939026 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ServantFilterEntity__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__);
    sub_21FFC50(&ServantFilterMaster___c_TypeInfo);
    byte_5939026 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
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
        v18 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v10,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_17;
    }
LABEL_33:
    sub_21FFECC(list, v5);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_33;
  v21 = (unsigned int)v4->fields._size;
  if ( (int)v21 >= 1 )
  {
    v22 = ServantFilterMaster___c_TypeInfo;
    if ( !*(&ServantFilterMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo, v5);
      v22 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, v5);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v25, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0);
      v26 = ServantFilterMaster___c_TypeInfo->static_fields;
      v26->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__1_0, (int32_t)_9__1_0, v27, v28, v29, v30, v31, v32);
    }
    System_Collections_Generic_List_object___Sort_71636404(
      v4,
      _9__1_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v33 = sub_21FFD10(int___TypeInfo, (unsigned int)v21);
    v34 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v4,
                                                                 v34,
                                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v33 )
        break;
      if ( v34 >= *(unsigned int *)(v33 + 24) )
        sub_21FFED4(list);
      v35 = v33 + 4 * v34++;
      *(_DWORD *)(v35 + 32) = list->fields.items;
      if ( v21 == v34 )
        return (System_Int32_array *)v33;
    }
    goto LABEL_33;
  }
  return 0;
}


void ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939028 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterMaster___c_TypeInfo);
    byte_5939028 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantFilterMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}