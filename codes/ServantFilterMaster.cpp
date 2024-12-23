void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67316 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_4B67316 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_4B67318 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4B67318 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BE4D28(0LL, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    return ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)entity, v13, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantFilterMaster__IsEnableServant_40619188(
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
  if ( (byte_4B67319 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_1BE4ACC(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4B67319 = 1;
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
        sub_1BE4D30(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      this = (ServantFilterMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        v7,
                                        ids->m_Items[v10 + 1],
                                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
    sub_1BE4D28(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
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
  __int64 v15; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w22
  int32_t v21; // w23
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x20
  ServantFilterMaster___c_c *v36; // x0
  System_Comparison_T__o *_9__1_0; // x21
  Il2CppObject *v38; // x22
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Int32_array *v46; // x21
  unsigned __int64 v47; // x22

  if ( (byte_4B67317 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&System_Comparison_ServantFilterEntity__TypeInfo, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&ServantFilterEntity_TypeInfo, v13);
    sub_1BE4ACC(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v14);
    sub_1BE4ACC(&ServantFilterMaster___c_TypeInfo, v15);
    byte_4B67317 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = (int)list;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(ServantFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantFilterEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantFilterEntity__IsEnable(
                                                                 (ServantFilterEntity_o *)list,
                                                                 Time,
                                                                 v22);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v32 = Method_System_Collections_Generic_List_ServantFilterEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v23,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_19;
    }
LABEL_35:
    sub_1BE4D28(list, v18);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_35;
  v35 = (unsigned int)v17->fields._size;
  if ( (int)v35 >= 1 )
  {
    v36 = ServantFilterMaster___c_TypeInfo;
    if ( !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v36 = ServantFilterMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Comparison_T__o *)v36->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = ServantFilterMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v36->static_fields->__9;
      _9__1_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_object____ctor(_9__1_0, v38, Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, 0LL);
      static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    System_Collections_Generic_List_object___Sort_56548584(
      v17,
      _9__1_0,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v46 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v35);
    v47 = 0LL;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v17,
                                                                 v47,
                                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
      if ( !list || !v46 )
        break;
      if ( v47 >= v46->max_length )
        sub_1BE4D30(list, v18);
      v46->m_Items[++v47] = (int32_t)list->fields.items;
      if ( v35 == v47 )
        return v46;
    }
    goto LABEL_35;
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

  if ( (byte_4B6731A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFilterMaster___c_TypeInfo, v1);
    byte_4B6731A = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterMaster___c_TypeInfo->static_fields->__9 = (struct ServantFilterMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, a);
  return a->fields.priority - b->fields.priority;
}