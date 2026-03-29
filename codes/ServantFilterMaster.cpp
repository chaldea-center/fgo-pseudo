void ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3131B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
    byte_4D3131B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_4D3131D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__);
    byte_4D3131D = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C93D2C(0, v8);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  __int64 v21; // x20
  ServantFilterMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v24; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x21
  unsigned __int64 v33; // x22

  if ( (byte_4D3131C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_ServantFilterEntity__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__);
    sub_1C93AD4(&ServantFilterMaster___c_TypeInfo);
    byte_4D3131C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C93D2C(list, v5);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_33;
  v21 = (unsigned int)v4->fields._size;
  if ( (int)v21 >= 1 )
  {
    v22 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v22 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v22->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = ServantFilterMaster___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v24, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0,
        (int32_t)_9__1_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    System_Collections_Generic_List_object___Sort_59225184(
      v4,
      _9__1_0,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v32 = sub_1C93B7C(int___TypeInfo, (unsigned int)v21);
    v33 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v4,
                                                                 v33,
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v32 )
        break;
      if ( v33 >= *(unsigned int *)(v32 + 24) )
        sub_1C93D34(list);
      *(_DWORD *)(v32 + 32 + 4 * v33++) = list->fields.items;
      if ( v21 == v33 )
        return (System_Int32_array *)v32;
    }
    goto LABEL_33;
  }
  return 0;
}


void ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3131E & 1) == 0 )
  {
    sub_1C93AD4(&ServantFilterMaster___c_TypeInfo);
    byte_4D3131E = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantFilterMaster___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, a);
  return a->fields.priority - b->fields.priority;
}