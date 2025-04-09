void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB88F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_49BB88F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    181,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB88D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49BB88D = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantVoiceRelationMaster__GetOriginalSvtId(
        ServantVoiceRelationMaster_o *this,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v13; // x21
  int32_t v14; // w23
  System_Collections_ObjectModel_Collection_T__o *v15; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v19; // x25
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x8
  struct System_Int32_array *v24; // x9
  _QWORD *v25; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v3 = relationSvtId;
  if ( (byte_49BB893 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__,
      *(_QWORD *)&relationSvtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49BB893 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v13 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( list )
      {
        v15 = list;
        monitor = list[1].monitor;
        items = list[1].fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v27.fields.fakeValue = items;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                   v27,
                                                                   0LL);
        if ( (_DWORD)list == v3 )
        {
          v19 = v15->fields.items;
          klass = v15[1].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = v19;
          *(_QWORD *)&v28.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                     v28,
                                                                     0LL);
          if ( !v13 )
            break;
          v20 = v13->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !v20 )
            break;
          size = v13->fields._size;
          *(_QWORD *)&relationSvtId = (unsigned int)list;
          if ( (unsigned int)size >= v20->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              (int32_t)list,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = size + 1;
            v20->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_19;
    }
LABEL_26:
    sub_1B4D1EC(list, *(_QWORD *)&relationSvtId);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_26;
  v23 = v13->fields._size;
  if ( (int)v23 <= 0 )
  {
    v24 = v13->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v24 )
      goto LABEL_26;
    if ( (unsigned int)v23 >= v24->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v3,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = v23 + 1;
      v24->m_Items[v23 + 1] = v3;
    }
  }
  return v13;
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x25
  void *monitor; // x26
  Il2CppClass *klass; // x27
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Object_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49BB890 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__, relationList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v6);
    sub_1B4CF90(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B4CF90(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v14);
    sub_1B4CF90(&ServantVoiceRelationMaster___c_TypeInfo, v15);
    byte_49BB890 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v21 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = klass;
        *(_QWORD *)&v39.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v39, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v21,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v21;
            sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v21, v24, v25);
          }
        }
      }
      if ( Count == ++v19 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B4D1EC(list, relationList);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v30, v33, v34);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56106144(
    v18,
    v30,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v35 = System_Collections_Generic_List_object___ToArray(
          v18,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v35;
  sub_1B4CF34((CGThumbnailListItem_o *)relationList, (int32_t)v35, v36, v37);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_40468420(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v21; // x26
  System_Collections_Generic_List_object__o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x29
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v31; // w8
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  System_Comparison_T__o *v44; // x23
  Il2CppObject *v45; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Object_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Object_array *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Comparison_T__o *v55; // x20
  Il2CppObject *v56; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Object_array *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_49BB891 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__,
      beforeRelationList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v8);
    sub_1B4CF90(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v14);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B4CF90(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v16);
    sub_1B4CF90(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v17);
    sub_1B4CF90(&ServantVoiceRelationMaster___c_TypeInfo, v18);
    byte_49BB891 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_47;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v26 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = klass;
        *(_QWORD *)&v66.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v66, 0LL);
        if ( (_DWORD)list == svtId )
        {
          v31 = (int)v26[3].klass;
          if ( (v31 & 0x80000000) != 0 )
          {
            if ( !v21 )
              goto LABEL_47;
            items = v21->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_47;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v42 = v37[4];
              v43 = v21;
              goto LABEL_29;
            }
            v35 = &items->obj.klass + size;
            v21->fields._size = size + 1;
          }
          else if ( v31 )
          {
            if ( !v23 )
              goto LABEL_47;
            v32 = v23->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v23->fields._version;
            if ( !v32 )
              goto LABEL_47;
            v34 = v23->fields._size;
            if ( (unsigned int)v34 >= v32->max_length )
            {
              v42 = v33[4];
              v43 = v23;
LABEL_29:
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                v26,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v42 + 192) + 112LL));
              continue;
            }
            v35 = &v32->obj.klass + v34;
            v23->fields._size = v34 + 1;
          }
          else
          {
            if ( !v22 )
              goto LABEL_47;
            v39 = v22->fields._items;
            v40 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v22->fields._version;
            if ( !v39 )
              goto LABEL_47;
            v41 = v22->fields._size;
            if ( (unsigned int)v41 >= v39->max_length )
            {
              v42 = v40[4];
              v43 = v22;
              goto LABEL_29;
            }
            v35 = &v39->obj.klass + v41;
            v22->fields._size = v41 + 1;
          }
          v35[4] = (Il2CppClass *)v26;
          sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v26, v29, v30);
        }
      }
    }
    while ( Count != ++v24 );
  }
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v44, v45, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v44;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v44, v47, v48);
  }
  if ( !v21 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_56106144(
    v21,
    v44,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v49 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v49;
  sub_1B4CF34((CGThumbnailListItem_o *)beforeRelationList, (int32_t)v49, v50, v51);
  if ( !v22 )
    goto LABEL_47;
  v52 = System_Collections_Generic_List_object___ToArray(
          v22,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v52;
  sub_1B4CF34((CGThumbnailListItem_o *)sameRelationList, (int32_t)v52, v53, v54);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v55 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v56 = (Il2CppObject *)**((_QWORD **)list + 23);
    v55 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v55, v56, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v57 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v57->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v55;
    sub_1B4CF34((CGThumbnailListItem_o *)&v57->__9__4_1, (int32_t)v55, v58, v59);
  }
  if ( !v23 )
LABEL_47:
    sub_1B4D1EC(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_56106144(
    v23,
    v55,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v60 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v60;
  sub_1B4CF34((CGThumbnailListItem_o *)afterRelationList, (int32_t)v60, v61, v62);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  struct System_Collections_Generic_IList_T__o *items; // x23
  void *monitor; // x24
  int32_t v15; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49BB892 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__, isVoiceList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49BB892 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                 v16,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v15 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_31E85B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v15,
            1,
            (const MethodInfo_31E839C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v11 == ++v12 )
        return;
    }
LABEL_16:
    sub_1B4D1EC(list, isVoiceList);
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

  if ( (byte_49BB88E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_49BB88E = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB894 & 1) == 0 )
  {
    sub_1B4CF90(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_49BB894 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}