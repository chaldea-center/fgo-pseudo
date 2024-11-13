void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1692E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method, v2);
    byte_4B1692E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    204,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_4B16930 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey,
      *(_QWORD *)&svtId.fields.fakeValue);
    byte_4B16930 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantFilterMaster__IsEnableServant_40398984(
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
  if ( (byte_4B16931 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1BCA7E0(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey,
                                      *(_QWORD *)&svtId.fields.fakeValue);
    byte_4B16931 = 1;
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
        sub_1BCAA44(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10 + 1],
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
    sub_1BCAA3C(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  }
  return v9;
}


System_Int32_array *__fastcall ServantFilterMaster__getEnableIdList(
        ServantFilterMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  int64_t Time; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x19
  __int64 v35; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int64_t v37; // x2
  __int64 v38; // x3
  int v39; // w22
  int32_t v40; // w23
  const MethodInfo *v41; // x2
  Il2CppObject *v42; // x24
  __int64 methodPtr_low; // x10
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x20
  ServantFilterMaster___c_c *v53; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v55; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Int32_array *v63; // x21
  unsigned __int64 v64; // x22

  if ( (byte_4B1692F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&System_Comparison_ServantFilterEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&ServantFilterEntity_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v26, v27);
    sub_1BCA7E0(&ServantFilterMaster___c_TypeInfo, v28, v29);
    byte_4B1692F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantFilterEntity__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v39 = (int)list;
    v40 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v40,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v42 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(ServantFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantFilterEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantFilterEntity__IsEnable(
                                                                 (ServantFilterEntity_o *)list,
                                                                 Time,
                                                                 v41);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v34 )
          break;
        items = v34->fields._items;
        v49 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            v42,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v42;
          sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v42, v37, v38, v44, v45, v46, v47);
        }
      }
      if ( v39 == ++v40 )
        goto LABEL_19;
    }
LABEL_35:
    sub_1BCAA3C(list, v35);
  }
LABEL_19:
  if ( !v34 )
    goto LABEL_35;
  v52 = (unsigned int)v34->fields._size;
  if ( (int)v52 >= 1 )
  {
    v53 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo, v35);
      v53 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v53->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53, v35);
        v53 = ServantFilterMaster___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantFilterEntity__TypeInfo, v35, v37, v38);
      System_Comparison_object____ctor(_9__1_0, v55, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0LL);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v34,
      _9__1_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v63 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v52);
    v64 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v34,
                                                                 v64,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v63 )
        break;
      if ( v64 >= v63->max_length )
        sub_1BCAA44(list, v35);
      v63->m_Items[++v64] = (int32_t)list->fields.items;
      if ( v52 == v64 )
        return v63;
    }
    goto LABEL_35;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16932 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterMaster___c_TypeInfo, v1, v2);
    byte_4B16932 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantFilterMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantFilterMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}