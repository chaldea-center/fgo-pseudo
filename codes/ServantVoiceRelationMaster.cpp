void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B9FB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
    byte_4A5B9FB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B9F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
    byte_4A5B9F9 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantVoiceRelationMaster__GetOriginalSvtId(
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
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v14; // x25
  struct System_Int32_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  __int64 v18; // x8
  struct System_Int32_array *v19; // x9
  _QWORD *v20; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v3 = relationSvtId;
  if ( (byte_4A5B9FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantVoiceRelationEntity_TypeInfo);
    byte_4A5B9FF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          items = list[1].fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v22.fields.fakeValue = items;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                     v22,
                                                                     0LL);
          if ( (_DWORD)list == v3 )
          {
            v14 = v9->fields.items;
            klass = v9[1].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v14;
            *(_QWORD *)&v23.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                       v23,
                                                                       0LL);
            if ( !v7 )
              break;
            v15 = v7->fields._items;
            v16 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !v15 )
              break;
            size = v7->fields._size;
            *(_QWORD *)&relationSvtId = (unsigned int)list;
            if ( (unsigned int)size >= v15->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                (int32_t)list,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = size + 1;
              v15->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_21;
    }
LABEL_28:
    sub_1B8880C(list, *(_QWORD *)&relationSvtId);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_28;
  v18 = v7->fields._size;
  if ( (int)v18 <= 0 )
  {
    v19 = v7->fields._items;
    v20 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !v19 )
      goto LABEL_28;
    if ( (unsigned int)v18 >= v19->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v18 + 1;
      v19->m_Items[v18 + 1] = v3;
    }
  }
  return v7;
}


void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Object_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A5B9FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantVoiceRelationEntity_TypeInfo);
    sub_1B885B0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__);
    sub_1B885B0(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4A5B9FC = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v18 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                v11,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1B8880C(list, relationList);
  }
LABEL_19:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v21, v24, v25);
  }
  if ( !v8 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_55571192(
    v8,
    v21,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v26 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)relationList, (int32_t)v26, v27, v28);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_39795048(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w27
  System_Collections_Generic_List_object__o *v9; // x26
  System_Collections_Generic_List_object__o *v10; // x25
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t v12; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x29
  __int64 methodPtr_low; // x10
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v37; // w3
  System_Object_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Object_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4A5B9FD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantVoiceRelationEntity_TypeInfo);
    sub_1B885B0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__);
    sub_1B885B0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__);
    sub_1B885B0(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4A5B9FD = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_49;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v56.fields.currentCryptoKey = klass;
          *(_QWORD *)&v56.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v56, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v20 = (int)v14[3].klass;
            if ( (v20 & 0x80000000) != 0 )
            {
              if ( !v9 )
                goto LABEL_49;
              items = v9->fields._items;
              v26 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v9->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v31 = v26[4];
                v32 = v9;
                goto LABEL_31;
              }
              v24 = &items->obj.klass + size;
              v9->fields._size = size + 1;
            }
            else if ( v20 )
            {
              if ( !v11 )
                goto LABEL_49;
              v21 = v11->fields._items;
              v22 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v11->fields._version;
              if ( !v21 )
                goto LABEL_49;
              v23 = v11->fields._size;
              if ( (unsigned int)v23 >= v21->max_length )
              {
                v31 = v22[4];
                v32 = v11;
LABEL_31:
                System_Collections_Generic_List_object___AddWithResize(
                  v32,
                  v14,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31 + 192) + 112LL));
                continue;
              }
              v24 = &v21->obj.klass + v23;
              v11->fields._size = v23 + 1;
            }
            else
            {
              if ( !v10 )
                goto LABEL_49;
              v28 = v10->fields._items;
              v29 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v10->fields._version;
              if ( !v28 )
                goto LABEL_49;
              v30 = v10->fields._size;
              if ( (unsigned int)v30 >= v28->max_length )
              {
                v31 = v29[4];
                v32 = v10;
                goto LABEL_31;
              }
              v24 = &v28->obj.klass + v30;
              v10->fields._size = v30 + 1;
            }
            v24[4] = (Il2CppClass *)v14;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v14, v18, v19);
          }
        }
      }
    }
    while ( Count != ++v12 );
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
    v33 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v33;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v33, v36, v37);
  }
  if ( !v9 )
    goto LABEL_49;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v33,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v38 = System_Collections_Generic_List_object___ToArray(
          v9,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)beforeRelationList, (int32_t)v38, v39, v40);
  if ( !v10 )
    goto LABEL_49;
  v41 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)sameRelationList, (int32_t)v41, v42, v43);
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
    v44 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v44, v45, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v46 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v46->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->__9__4_1, (int32_t)v44, v47, v48);
  }
  if ( !v11 )
LABEL_49:
    sub_1B8880C(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    v44,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v49 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)afterRelationList, (int32_t)v49, v50, v51);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x23
  void *monitor; // x24
  int32_t v12; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5B9FE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantVoiceRelationEntity_TypeInfo);
    byte_4A5B9FE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      *(_QWORD *)&v13.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v13.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v13,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v12 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v12,
            1,
            (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_18:
    sub_1B8880C(list, isVoiceList);
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

  if ( (byte_4A5B9FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
    byte_4A5B9FA = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BA00 & 1) == 0 )
  {
    sub_1B885B0(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_4A5BA00 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}