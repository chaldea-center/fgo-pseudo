void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB708 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_49BB708 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_319B678 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


bool __fastcall ServantFilterMaster__IsEnableServant(
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
  if ( (byte_49BB70A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_49BB70A = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B4D1EC(0LL, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantFilterMaster__IsEnableServant_40341156(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  __int64 v8; // x8
  bool v9; // w23
  unsigned __int64 v10; // x24
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_49BB70B & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1B4CF90(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_49BB70B = 1;
  }
  if ( !ids )
    goto LABEL_12;
  v8 = *(_QWORD *)&ids->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1B4D1F4(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10 + 1],
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
      if ( !this )
        break;
      *(_QWORD *)&v13.fields.currentCryptoKey = v6;
      *(_QWORD *)&v13.fields.fakeValue = v5;
      this = (ServantFilterMaster_o *)ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)this, v13, v11);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v8) = ids->max_length;
        v9 = (__int64)++v10 < (int)v8;
        if ( (__int64)v10 < (int)v8 )
          continue;
      }
      return v9;
    }
LABEL_12:
    sub_1B4D1EC(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  }
  return v9;
}


System_Int32_array *__fastcall ServantFilterMaster__getEnableIdList(
        ServantFilterMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v19; // w22
  int32_t v20; // w23
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x20
  ServantFilterMaster___c_c *v30; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v32; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x21
  unsigned __int64 v37; // x22

  if ( (byte_49BB709 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__, v3);
    sub_1B4CF90(&System_Comparison_ServantFilterEntity__TypeInfo, v4);
    sub_1B4CF90(&int___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v13);
    sub_1B4CF90(&ServantFilterMaster___c_TypeInfo, v14);
    byte_49BB709 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v19 = (int)list;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v20,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
      if ( !list )
        break;
      v22 = (Il2CppObject *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantFilterEntity__IsEnable(
                                                                 (ServantFilterEntity_o *)list,
                                                                 Time,
                                                                 v21);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v26 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v22,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_33:
    sub_1B4D1EC(list, v17);
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_33;
  v29 = (unsigned int)v16->fields._size;
  if ( (int)v29 >= 1 )
  {
    v30 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v30 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v30->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ServantFilterMaster___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v32, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0LL);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v34, v35);
    }
    System_Collections_Generic_List_object___Sort_56106144(
      v16,
      _9__1_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v36 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)v29);
    v37 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v16,
                                                                 v37,
                                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v36 )
        break;
      if ( v37 >= v36->max_length )
        sub_1B4D1F4(list, v17);
      v36->m_Items[++v37] = (int32_t)list->fields.items;
      if ( v29 == v37 )
        return v36;
    }
    goto LABEL_33;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB70C & 1) == 0 )
  {
    sub_1B4CF90(&ServantFilterMaster___c_TypeInfo, v1);
    byte_49BB70C = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantFilterMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantFilterMaster___c___ctor(ServantFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantFilterMaster___c___getEnableIdList_b__1_0(
        ServantFilterMaster___c_o *this,
        ServantFilterEntity_o *a,
        ServantFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.priority - b->fields.priority;
}