void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37B3E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_4B37B3E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B37B3C & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B37B3C = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31D2248 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v14; // x21
  int32_t v15; // w23
  System_Collections_ObjectModel_Collection_T__o *v16; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v21; // x25
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x8
  struct System_Int32_array *v26; // x9
  _QWORD *v27; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v3 = relationSvtId;
  if ( (byte_4B37B42 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&relationSvtId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BD3458(&ServantVoiceRelationEntity_TypeInfo, v11);
    byte_4B37B42 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          items = list[1].fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v29.fields.fakeValue = items;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                                     v29,
                                                                     0LL);
          if ( (_DWORD)list == v3 )
          {
            v21 = v16->fields.items;
            klass = v16[1].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v30.fields.currentCryptoKey = v21;
            *(_QWORD *)&v30.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                                       v30,
                                                                       0LL);
            if ( !v14 )
              break;
            v22 = v14->fields._items;
            v23 = Method_System_Collections_Generic_List_int__Add__;
            ++v14->fields._version;
            if ( !v22 )
              break;
            size = v14->fields._size;
            *(_QWORD *)&relationSvtId = (unsigned int)list;
            if ( (unsigned int)size >= v22->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v14,
                (int32_t)list,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v14->fields._size = size + 1;
              v22->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_21;
    }
LABEL_28:
    sub_1BD36B4(list, *(_QWORD *)&relationSvtId);
  }
LABEL_21:
  if ( !v14 )
    goto LABEL_28;
  v25 = v14->fields._size;
  if ( (int)v25 <= 0 )
  {
    v26 = v14->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !v26 )
      goto LABEL_28;
    if ( (unsigned int)v25 >= v26->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        v3,
        *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = v25 + 1;
      v26->m_Items[v25 + 1] = v3;
    }
  }
  return v14;
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
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x20
  Il2CppObject *v37; // x21
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Object_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B37B3F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, relationList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BD3458(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BD3458(&ServantVoiceRelationEntity_TypeInfo, v14);
    sub_1BD3458(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v15);
    sub_1BD3458(&ServantVoiceRelationMaster___c_TypeInfo, v16);
    byte_4B37B3F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v53.fields.currentCryptoKey = klass;
          *(_QWORD *)&v53.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v53, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v22,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v22;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v22, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1BD36B4(list, relationList);
  }
LABEL_19:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)list + 23);
    v36 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v36, v37, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v36;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v19 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56371284(
    v19,
    v36,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v45 = System_Collections_Generic_List_object___ToArray(
          v19,
          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v45;
  sub_1BD33FC((PartyOrganizationUtility_o *)relationList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_40696560(
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
  System_Collections_Generic_List_object__o *v21; // x26
  System_Collections_Generic_List_object__o *v22; // x25
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w28
  Il2CppObject *Item; // x0
  int64_t v26; // x29
  __int64 methodPtr_low; // x10
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_object__o *v48; // x0
  System_Comparison_T__o *v49; // x23
  Il2CppObject *v50; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Object_array *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Object_array *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Comparison_T__o *v72; // x20
  Il2CppObject *v73; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Object_array *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4B37B40 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, beforeRelationList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BD3458(&ServantVoiceRelationEntity_TypeInfo, v15);
    sub_1BD3458(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v16);
    sub_1BD3458(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v17);
    sub_1BD3458(&ServantVoiceRelationMaster___c_TypeInfo, v18);
    byte_4B37B40 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_49;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = (int64_t)Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v92.fields.currentCryptoKey = klass;
          *(_QWORD *)&v92.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v92, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v36 = *(_DWORD *)(v26 + 48);
            if ( (v36 & 0x80000000) != 0 )
            {
              if ( !v21 )
                goto LABEL_49;
              items = v21->fields._items;
              v42 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v47 = v42[4];
                v48 = v21;
                goto LABEL_31;
              }
              v40 = &items->obj.klass + size;
              v21->fields._size = size + 1;
            }
            else if ( v36 )
            {
              if ( !v23 )
                goto LABEL_49;
              v37 = v23->fields._items;
              v38 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v23->fields._version;
              if ( !v37 )
                goto LABEL_49;
              v39 = v23->fields._size;
              if ( (unsigned int)v39 >= v37->max_length )
              {
                v47 = v38[4];
                v48 = v23;
LABEL_31:
                System_Collections_Generic_List_object___AddWithResize(
                  v48,
                  (Il2CppObject *)v26,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v47 + 192) + 112LL));
                continue;
              }
              v40 = &v37->obj.klass + v39;
              v23->fields._size = v39 + 1;
            }
            else
            {
              if ( !v22 )
                goto LABEL_49;
              v44 = v22->fields._items;
              v45 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v22->fields._version;
              if ( !v44 )
                goto LABEL_49;
              v46 = v22->fields._size;
              if ( (unsigned int)v46 >= v44->max_length )
              {
                v47 = v45[4];
                v48 = v22;
                goto LABEL_31;
              }
              v40 = &v44->obj.klass + v46;
              v22->fields._size = v46 + 1;
            }
            v40[4] = (Il2CppClass *)v26;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v26, v30, v31, v32, v33, v34, v35);
          }
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
  v49 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v49 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)**((_QWORD **)list + 23);
    v49 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v49, v50, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v49;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v49, v52, v53, v54, v55, v56, v57);
  }
  if ( !v21 )
    goto LABEL_49;
  System_Collections_Generic_List_object___Sort_56371284(
    v21,
    v49,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v58 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v58;
  sub_1BD33FC((PartyOrganizationUtility_o *)beforeRelationList, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  if ( !v22 )
    goto LABEL_49;
  v65 = System_Collections_Generic_List_object___ToArray(
          v22,
          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v65;
  sub_1BD33FC((PartyOrganizationUtility_o *)sameRelationList, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v72 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v72 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v73 = (Il2CppObject *)**((_QWORD **)list + 23);
    v72 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v72, v73, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v74 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v74->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v72;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v74->__9__4_1, (int64_t)v72, v75, v76, v77, v78, v79, v80);
  }
  if ( !v23 )
LABEL_49:
    sub_1BD36B4(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_56371284(
    v23,
    v72,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v81 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v81;
  sub_1BD33FC((PartyOrganizationUtility_o *)afterRelationList, (int64_t)v81, v82, v83, v84, v85, v86, v87);
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

  if ( (byte_4B37B41 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BD3458(&ServantVoiceRelationEntity_TypeInfo, v9);
    byte_4B37B41 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
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
                (const MethodInfo_321676C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v17,
            1,
            (const MethodInfo_3216558 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v12 == ++v13 )
        return;
    }
LABEL_18:
    sub_1BD36B4(list, isVoiceList);
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

  if ( (byte_4B37B3D & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_4B37B3D = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37B43 & 1) == 0 )
  {
    sub_1BD3458(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_4B37B43 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}