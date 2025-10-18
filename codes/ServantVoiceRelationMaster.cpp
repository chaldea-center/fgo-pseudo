void ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43A99 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
    byte_4C43A99 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    181,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43A97 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
    byte_4C43A97 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *ServantVoiceRelationMaster__GetOriginalSvtId(
        ServantVoiceRelationMaster_o *this,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w23
  System_Collections_ObjectModel_Collection_T__o *v9; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v13; // x25
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x8
  struct System_Int32_array *v18; // x9
  _QWORD *v19; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C43A9D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C43A9D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( list )
      {
        v9 = list;
        monitor = list[1].monitor;
        items = list[1].fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = items;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                   v21,
                                                                   0);
        if ( (_DWORD)list == relationSvtId )
        {
          v13 = v9->fields.items;
          klass = v9[1].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = v13;
          *(_QWORD *)&v22.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                     v22,
                                                                     0);
          if ( !v7 )
            break;
          v14 = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !v14 )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(v14->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              (int32_t)list,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            v14->m_Items[size] = (int)list;
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_19;
    }
LABEL_26:
    sub_1C372B4(list);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_26;
  v17 = v7->fields._size;
  if ( (int)v17 <= 0 )
  {
    v18 = v7->fields._items;
    v19 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !v18 )
      goto LABEL_26;
    if ( (unsigned int)v17 >= LODWORD(v18->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        relationSvtId,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v17 + 1;
      v18->m_Items[v17] = relationSvtId;
    }
  }
  return v7;
}


void ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x25
  void *monitor; // x26
  Il2CppClass *klass; // x27
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x20
  Il2CppObject *v21; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Object_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C43A9A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C37058(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__);
    sub_1C37058(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4C43A9A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = klass;
        *(_QWORD *)&v29.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v29, 0);
        if ( (_DWORD)list == svtId )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v11,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v11;
            sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C372B4(list);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v20, v23, v24);
  }
  if ( !v8 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_58346216(
    v8,
    v20,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v25 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v25;
  sub_1C36FFC((CGThumbnailListItem_o *)relationList, (int32_t)v25, v26, v27);
}


void ServantVoiceRelationMaster__GetRelationList_42823828(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w27
  System_Collections_Generic_List_object__o *v10; // x26
  System_Collections_Generic_List_object__o *v11; // x24
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x29
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int v20; // w8
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x0
  System_Comparison_T__o *v33; // x23
  Il2CppObject *v34; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Object_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Object_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Object_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4C43A9B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C37058(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__);
    sub_1C37058(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__);
    sub_1C37058(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4C43A9B = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_47;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = klass;
        *(_QWORD *)&v55.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v55, 0);
        if ( (_DWORD)list == svtId )
        {
          v20 = (int)v15[3].klass;
          if ( v20 < 0 )
          {
            if ( !v10 )
              goto LABEL_47;
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_47;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v31 = v26[4];
              v32 = v10;
              goto LABEL_29;
            }
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
          }
          else if ( v20 )
          {
            if ( !v12 )
              goto LABEL_47;
            v21 = v12->fields._items;
            v22 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v12->fields._version;
            if ( !v21 )
              goto LABEL_47;
            v23 = v12->fields._size;
            if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
            {
              v31 = v22[4];
              v32 = v12;
LABEL_29:
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                v15,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31 + 192) + 112LL));
              continue;
            }
            v24 = &v21->obj.klass + v23;
            v12->fields._size = v23 + 1;
          }
          else
          {
            if ( !v11 )
              goto LABEL_47;
            v28 = v11->fields._items;
            v29 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v11->fields._version;
            if ( !v28 )
              goto LABEL_47;
            v30 = v11->fields._size;
            if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
            {
              v31 = v29[4];
              v32 = v11;
              goto LABEL_29;
            }
            v24 = &v28->obj.klass + v30;
            v11->fields._size = v30 + 1;
          }
          v24[4] = (Il2CppClass *)v15;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v18, v19);
        }
      }
    }
    while ( Count != ++v13 );
  }
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)list + 23);
    v33 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v33;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v33, v36, v37);
  }
  if ( !v10 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_58346216(
    v10,
    v33,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v38 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v38;
  sub_1C36FFC((CGThumbnailListItem_o *)beforeRelationList, (int32_t)v38, v39, v40);
  if ( !v11 )
    goto LABEL_47;
  v41 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v41;
  sub_1C36FFC((CGThumbnailListItem_o *)sameRelationList, (int32_t)v41, v42, v43);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v44, v45, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0);
    v46 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v46->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v44;
    sub_1C36FFC((CGThumbnailListItem_o *)&v46->__9__4_1, (int32_t)v44, v47, v48);
  }
  if ( !v12 )
LABEL_47:
    sub_1C372B4(list);
  System_Collections_Generic_List_object___Sort_58346216(
    v12,
    v44,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v49 = System_Collections_Generic_List_object___ToArray(
          v12,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v49;
  sub_1C36FFC((CGThumbnailListItem_o *)afterRelationList, (int32_t)v49, v50, v51);
}


void ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  struct System_Collections_Generic_IList_T__o *items; // x23
  void *monitor; // x24
  int32_t v11; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C43A9C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C43A9C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v12.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                 v12,
                                                                 0);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v11 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_33EBF24 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v11,
            1,
            (const MethodInfo_33EBD10 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_16:
    sub_1C372B4(list);
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoiceRelationMaster__TryGetEntity(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_o **entity,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43A98 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
    byte_4C43A98 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43A9E & 1) == 0 )
  {
    sub_1C37058(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4C43A9E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantVoiceRelationMaster___c___ctor(ServantVoiceRelationMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__3_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}