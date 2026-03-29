void ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D314CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
    byte_4D314CE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    181,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D314CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
    byte_4D314CC = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *ServantVoiceRelationMaster__GetOriginalSvtId(
        ServantVoiceRelationMaster_o *this,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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

  v3 = relationSvtId;
  if ( (byte_4D314D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D314D2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( list )
      {
        v9 = list;
        monitor = list[1].monitor;
        items = list[1].fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = items;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                   v21,
                                                                   0);
        if ( (_DWORD)list == v3 )
        {
          v13 = v9->fields.items;
          klass = v9[1].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = v13;
          *(_QWORD *)&v22.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
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
          *(_QWORD *)&relationSvtId = (unsigned int)list;
          if ( (unsigned int)size >= LODWORD(v14->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              (int32_t)list,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1C93D2C(list, *(_QWORD *)&relationSvtId);
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
        v3,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v17 + 1;
      v18->m_Items[v17] = v3;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x20
  Il2CppObject *v25; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Object_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4D314CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__);
    sub_1C93AD4(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4D314CF = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = klass;
        *(_QWORD *)&v41.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v41, 0);
        if ( (_DWORD)list == svtId )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v11,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v11;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C93D2C(list, relationList);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)list + 23);
    v24 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v24;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !v8 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_59225184(
    v8,
    v24,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v33 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)relationList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
}


void ServantVoiceRelationMaster__GetRelationList_43534888(
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int v24; // w8
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  System_Comparison_T__o *v37; // x23
  Il2CppObject *v38; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Object_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Object_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Comparison_T__o *v60; // x20
  Il2CppObject *v61; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Object_array *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4D314D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__);
    sub_1C93AD4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__);
    sub_1C93AD4(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4D314D0 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = klass;
        *(_QWORD *)&v79.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v79, 0);
        if ( (_DWORD)list == svtId )
        {
          v24 = (int)v15[3].klass;
          if ( v24 < 0 )
          {
            if ( !v10 )
              goto LABEL_47;
            items = v10->fields._items;
            v30 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_47;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v35 = v30[4];
              v36 = v10;
              goto LABEL_29;
            }
            v28 = &items->obj.klass + size;
            v10->fields._size = size + 1;
          }
          else if ( v24 )
          {
            if ( !v12 )
              goto LABEL_47;
            v25 = v12->fields._items;
            v26 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v12->fields._version;
            if ( !v25 )
              goto LABEL_47;
            v27 = v12->fields._size;
            if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
            {
              v35 = v26[4];
              v36 = v12;
LABEL_29:
              System_Collections_Generic_List_object___AddWithResize(
                v36,
                v15,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v35 + 192) + 112LL));
              continue;
            }
            v28 = &v25->obj.klass + v27;
            v12->fields._size = v27 + 1;
          }
          else
          {
            if ( !v11 )
              goto LABEL_47;
            v32 = v11->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v11->fields._version;
            if ( !v32 )
              goto LABEL_47;
            v34 = v11->fields._size;
            if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
            {
              v35 = v33[4];
              v36 = v11;
              goto LABEL_29;
            }
            v28 = &v32->obj.klass + v34;
            v11->fields._size = v34 + 1;
          }
          v28[4] = (Il2CppClass *)v15;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v15, v18, v19, v20, v21, v22, v23);
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
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)list + 23);
    v37 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v37, v38, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v37;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v37, v40, v41, v42, v43, v44, v45);
  }
  if ( !v10 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_59225184(
    v10,
    v37,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v46 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v46;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)beforeRelationList, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !v11 )
    goto LABEL_47;
  v53 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v53;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)sameRelationList, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v60 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v60 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)**((_QWORD **)list + 23);
    v60 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v60, v61, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0);
    v62 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v62->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v60;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v62->__9__4_1, (int32_t)v60, v63, v64, v65, v66, v67, v68);
  }
  if ( !v12 )
LABEL_47:
    sub_1C93D2C(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_59225184(
    v12,
    v60,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v69 = System_Collections_Generic_List_object___ToArray(
          v12,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v69;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)afterRelationList, (int32_t)v69, v70, v71, v72, v73, v74, v75);
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

  if ( (byte_4D314D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D314D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v12.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
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
                (const MethodInfo_34AE724 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v11,
            1,
            (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_16:
    sub_1C93D2C(list, isVoiceList);
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

  if ( (byte_4D314CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
    byte_4D314CD = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D314D3 & 1) == 0 )
  {
    sub_1C93AD4(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4D314D3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C93D2C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C93D2C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}