void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDFCC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_4BFDFCC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_4BFDFCE & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4BFDFCE = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C2E388(0LL, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantFilterMaster__IsEnableServant_41107720(
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
  if ( (byte_4BFDFCF & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1C2E12C(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4BFDFCF = 1;
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
        sub_1C2E390(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10 + 1],
                                        (const MethodInfo_327B180 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
    sub_1C2E388(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x20
  ServantFilterMaster___c_c *v34; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v36; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Int32_array *v44; // x21
  unsigned __int64 v45; // x22

  if ( (byte_4BFDFCD & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__, v3);
    sub_1C2E12C(&System_Comparison_ServantFilterEntity__TypeInfo, v4);
    sub_1C2E12C(&int___TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v11);
    sub_1C2E12C(&NetworkManager_TypeInfo, v12);
    sub_1C2E12C(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v13);
    sub_1C2E12C(&ServantFilterMaster___c_TypeInfo, v14);
    byte_4BFDFCD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Count__);
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
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_ServantFilterEntity__get_Item__);
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
        v30 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v22,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C2E388(list, v17);
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_33;
  v33 = (unsigned int)v16->fields._size;
  if ( (int)v33 >= 1 )
  {
    v34 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v34 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v34->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = ServantFilterMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v36, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0LL);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    System_Collections_Generic_List_object___Sort_57070448(
      v16,
      _9__1_0,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v44 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, (unsigned int)v33);
    v45 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v16,
                                                                 v45,
                                                                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v44 )
        break;
      if ( v45 >= v44->max_length )
        sub_1C2E390(list, v17);
      v44->m_Items[++v45] = (int32_t)list->fields.items;
      if ( v33 == v45 )
        return v44;
    }
    goto LABEL_33;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDFD0 & 1) == 0 )
  {
    sub_1C2E12C(&ServantFilterMaster___c_TypeInfo, v1);
    byte_4BFDFD0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantFilterMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return a->fields.priority - b->fields.priority;
}