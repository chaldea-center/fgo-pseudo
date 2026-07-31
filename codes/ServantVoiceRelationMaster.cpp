void ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59391D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
    byte_59391D7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59391D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
    byte_59391D5 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
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
  void *monitor; // x25
  struct System_Collections_Generic_IList_T__o *items; // x26
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
  if ( (byte_59391DB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59391DB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( list )
      {
        v9 = list;
        monitor = list[1].monitor;
        items = list[1].fields.items;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&relationSvtId);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = items;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                   v21,
                                                                   0);
        if ( (_DWORD)list == v3 )
        {
          v13 = v9->fields.items;
          klass = v9[1].klass;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&relationSvtId);
          *(_QWORD *)&v22.fields.currentCryptoKey = v13;
          *(_QWORD *)&v22.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
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
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_21FFECC(list, *(_QWORD *)&relationSvtId);
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
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
  Il2CppClass *klass; // x26
  void *monitor; // x27
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v26; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Object_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_59391D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__);
    sub_21FFC50(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_59391D8 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, relationList);
        *(_QWORD *)&v42.fields.currentCryptoKey = klass;
        *(_QWORD *)&v42.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v42, 0);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v11;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_17;
    }
LABEL_25:
    sub_21FFECC(list, relationList);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !*(&ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, relationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, relationList);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v26, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0);
    v27 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__3_0, (int32_t)_9__3_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v8 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_71636404(
    v8,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)relationList, (int32_t)v34, v35, v36, v37, v38, v39, v40);
}


void ServantVoiceRelationMaster__GetRelationList_49781612(
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
  Il2CppClass *klass; // x19
  void *monitor; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
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
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v39; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Object_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Object_array *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct ServantVoiceRelationMaster___c_StaticFields *v61; // x8
  System_Comparison_T__o *_9__4_1; // x20
  Il2CppObject *v63; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Object_array *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_59391D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__);
    sub_21FFC50(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__);
    sub_21FFC50(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_59391D9 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, beforeRelationList);
        *(_QWORD *)&v81.fields.currentCryptoKey = klass;
        *(_QWORD *)&v81.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v81, 0);
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
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35 + 192) + 112LL));
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
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v15, v18, v19, v20, v21, v22, v23);
        }
      }
    }
    while ( Count != ++v13 );
  }
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !*(&ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, beforeRelationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, beforeRelationList);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v39, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0);
    v40 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v40->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__4_0, (int32_t)_9__4_0, v41, v42, v43, v44, v45, v46);
  }
  if ( !v10 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__4_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v47 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v47;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)beforeRelationList, (int32_t)v47, v48, v49, v50, v51, v52, v53);
  if ( !v11 )
    goto LABEL_47;
  v54 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v54;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)sameRelationList, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !*(&ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, beforeRelationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v61 = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_1 = (System_Comparison_T__o *)v61->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, beforeRelationList);
      v61 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__4_1 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_1, v63, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0);
    v64 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v64->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->__9__4_1, (int32_t)_9__4_1, v65, v66, v67, v68, v69, v70);
  }
  if ( !v12 )
LABEL_47:
    sub_21FFECC(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_71636404(
    v12,
    _9__4_1,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v71 = System_Collections_Generic_List_object___ToArray(
          v12,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v71;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)afterRelationList, (int32_t)v71, v72, v73, v74, v75, v76, v77);
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
  void *monitor; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  int32_t v11; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_59391DA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59391DA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isVoiceList);
      *(_QWORD *)&v12.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v12.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
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
                (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v11,
            1,
            (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_16:
    sub_21FFECC(list, isVoiceList);
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

  if ( (byte_59391D6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
    byte_59391D6 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59391DC & 1) == 0 )
  {
    sub_21FFC50(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_59391DC = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}