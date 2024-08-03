void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC89 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_49FCC89 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCC87 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCC87 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantVoiceRelationMaster__GetOriginalSvtId(
        ServantVoiceRelationMaster_o *this,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x21
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_T__o *v18; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v23; // x25
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  __int64 v27; // x8
  struct System_Int32_array *v28; // x9
  _QWORD *v29; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_49FCC8D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&relationSvtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&ServantVoiceRelationEntity_TypeInfo, v11);
    byte_49FCC8D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          items = list[1].fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v31.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v31.fields.fakeValue = items;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                     v31,
                                                                     0LL);
          if ( (_DWORD)list == relationSvtId )
          {
            v23 = v18->fields.items;
            klass = v18[1].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v32.fields.currentCryptoKey = v23;
            *(_QWORD *)&v32.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                       v32,
                                                                       0LL);
            if ( !v16 )
              break;
            v24 = v16->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v16->fields._version;
            if ( !v24 )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= v24->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v16,
                (int32_t)list,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v16->fields._size = size + 1;
              v24->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_21;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v16 )
    goto LABEL_28;
  v27 = v16->fields._size;
  if ( (int)v27 <= 0 )
  {
    v28 = v16->fields._items;
    v29 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !v28 )
      goto LABEL_28;
    if ( (unsigned int)v27 >= v28->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        relationSvtId,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = v27 + 1;
      v28->m_Items[v27 + 1] = relationSvtId;
    }
  }
  return v16;
}


void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  void *list; // x0
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Object_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_49FCC8A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, relationList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&ServantVoiceRelationEntity_TypeInfo, v14);
    sub_1B640C8(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v15);
    sub_1B640C8(&ServantVoiceRelationMaster___c_TypeInfo, v16);
    byte_49FCC8A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v44.fields.currentCryptoKey = klass;
          *(_QWORD *)&v44.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v32 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                v26,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v26;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v26, v23, v30);
            }
          }
        }
      }
      if ( Count == ++v24 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1B64324(list);
  }
LABEL_19:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)list + 23);
    v35 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantVoiceRelationEntity__TypeInfo, v22, v23);
    System_Comparison_object____ctor(v35, v36, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v35, v38, v39);
  }
  if ( !v21 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_55243320(
    v21,
    v35,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v40 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)relationList, (int32_t)v40, v41, v42);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_39465092(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  void *list; // x0
  int32_t Count; // w27
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t v32; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v34; // x29
  __int64 methodPtr_low; // x10
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v38; // w3
  int v39; // w8
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  System_Collections_Generic_List_object__o *v51; // x0
  System_Comparison_T__o *v52; // x23
  Il2CppObject *v53; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Object_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Object_array *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  System_Comparison_T__o *v65; // x20
  Il2CppObject *v66; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Object_array *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_49FCC8B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, beforeRelationList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&ServantVoiceRelationEntity_TypeInfo, v15);
    sub_1B640C8(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v16);
    sub_1B640C8(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v17);
    sub_1B640C8(&ServantVoiceRelationMaster___c_TypeInfo, v18);
    byte_49FCC8B = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v32 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_49;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v32,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = klass;
          *(_QWORD *)&v77.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v77, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v39 = (int)v34[3].klass;
            if ( (v39 & 0x80000000) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              items = v23->fields._items;
              v45 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v23->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v23->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v50 = v45[4];
                v51 = v23;
                goto LABEL_31;
              }
              v43 = &items->obj.klass + size;
              v23->fields._size = size + 1;
            }
            else if ( v39 )
            {
              if ( !v29 )
                goto LABEL_49;
              v40 = v29->fields._items;
              v41 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v29->fields._version;
              if ( !v40 )
                goto LABEL_49;
              v42 = v29->fields._size;
              if ( (unsigned int)v42 >= v40->max_length )
              {
                v50 = v41[4];
                v51 = v29;
LABEL_31:
                System_Collections_Generic_List_object___AddWithResize(
                  v51,
                  v34,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50 + 192) + 112LL));
                continue;
              }
              v43 = &v40->obj.klass + v42;
              v29->fields._size = v42 + 1;
            }
            else
            {
              if ( !v26 )
                goto LABEL_49;
              v47 = v26->fields._items;
              v48 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v26->fields._version;
              if ( !v47 )
                goto LABEL_49;
              v49 = v26->fields._size;
              if ( (unsigned int)v49 >= v47->max_length )
              {
                v50 = v48[4];
                v51 = v26;
                goto LABEL_31;
              }
              v43 = &v47->obj.klass + v49;
              v26->fields._size = v49 + 1;
            }
            v43[4] = (Il2CppClass *)v34;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v34, v31, v38);
          }
        }
      }
    }
    while ( Count != ++v32 );
  }
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)list + 23);
    v52 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantVoiceRelationEntity__TypeInfo, v30, v31);
    System_Comparison_object____ctor(v52, v53, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v52;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v52, v55, v56);
  }
  if ( !v23 )
    goto LABEL_49;
  System_Collections_Generic_List_object___Sort_55243320(
    v23,
    v52,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v57 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)beforeRelationList, (int32_t)v57, v58, v59);
  if ( !v26 )
    goto LABEL_49;
  v60 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)sameRelationList, (int32_t)v60, v61, v62);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v65 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v65 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v66 = (Il2CppObject *)**((_QWORD **)list + 23);
    v65 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantVoiceRelationEntity__TypeInfo, v63, v64);
    System_Comparison_object____ctor(v65, v66, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v67 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v67->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v65;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->__9__4_1, (int32_t)v65, v68, v69);
  }
  if ( !v29 )
LABEL_49:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v29,
    v65,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v70 = System_Collections_Generic_List_object___ToArray(
          v29,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v70;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)afterRelationList, (int32_t)v70, v71, v72);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x23
  void *monitor; // x24
  int32_t v17; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FCC8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&ServantVoiceRelationEntity_TypeInfo, v9);
    byte_49FCC8C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantVoiceRelationEntity_TypeInfo )
      {
        break;
      }
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v18.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v18,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v17 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v17,
            1,
            (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v12 == ++v13 )
        return;
    }
LABEL_18:
    sub_1B64324(list);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceRelationMaster__TryGetEntity(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_o **entity,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCC88 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_49FCC88 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCC8E & 1) == 0 )
  {
    sub_1B640C8(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_49FCC8E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantVoiceRelationMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantVoiceRelationMaster___c___ctor(ServantVoiceRelationMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__3_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}