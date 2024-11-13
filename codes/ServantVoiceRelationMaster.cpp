void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B88 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__,
      method,
      v2);
    byte_4B16B88 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16B86 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&relationSvtId);
    byte_4B16B86 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantVoiceRelationMaster__GetOriginalSvtId(
        ServantVoiceRelationMaster_o *this,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_int__o *v24; // x21
  int32_t v25; // w23
  System_Collections_ObjectModel_Collection_T__o *v26; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *v31; // x25
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x8
  struct System_Int32_array *v36; // x9
  _QWORD *v37; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v3 = relationSvtId;
  if ( (byte_4B16B8C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&relationSvtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantVoiceRelationEntity_TypeInfo, v17, v18);
    byte_4B16B8C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v26 = list;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          items = list[1].fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&relationSvtId);
          *(_QWORD *)&v39.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v39.fields.fakeValue = items;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     v39,
                                                                     0LL);
          if ( (_DWORD)list == v3 )
          {
            v31 = v26->fields.items;
            klass = v26[1].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                *(_QWORD *)&relationSvtId);
            *(_QWORD *)&v40.fields.currentCryptoKey = v31;
            *(_QWORD *)&v40.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                       v40,
                                                                       0LL);
            if ( !v24 )
              break;
            v32 = v24->fields._items;
            v33 = Method_System_Collections_Generic_List_int__Add__;
            ++v24->fields._version;
            if ( !v32 )
              break;
            size = v24->fields._size;
            *(_QWORD *)&relationSvtId = (unsigned int)list;
            if ( (unsigned int)size >= v32->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v24,
                (int32_t)list,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v24->fields._size = size + 1;
              v32->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( Count == ++v25 )
        goto LABEL_21;
    }
LABEL_28:
    sub_1BCAA3C(list, *(_QWORD *)&relationSvtId);
  }
LABEL_21:
  if ( !v24 )
    goto LABEL_28;
  v35 = v24->fields._size;
  if ( (int)v35 <= 0 )
  {
    v36 = v24->fields._items;
    v37 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !v36 )
      goto LABEL_28;
    if ( (unsigned int)v35 >= v36->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        v3,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = v35 + 1;
      v36->m_Items[v35 + 1] = v3;
    }
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  void *list; // x0
  int32_t Count; // w23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x22
  int64_t v34; // x2
  __int64 v35; // x3
  int32_t v36; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v38; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Comparison_T__o *v50; // x20
  Il2CppObject *v51; // x21
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Object_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B16B89 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      relationList,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&ServantVoiceRelationEntity_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v24, v25);
    sub_1BCA7E0(&ServantVoiceRelationMaster___c_TypeInfo, v26, v27);
    byte_4B16B89 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v36,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v38 = Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, relationList);
          *(_QWORD *)&v67.fields.currentCryptoKey = klass;
          *(_QWORD *)&v67.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v33 )
              break;
            items = v33->fields._items;
            v47 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              break;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                v38,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v38;
              sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v38, v34, v35, v42, v43, v44, v45);
            }
          }
        }
      }
      if ( Count == ++v36 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1BCAA3C(list, relationList);
  }
LABEL_19:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, relationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v50 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, relationList);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)list + 23);
    v50 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                      relationList,
                                      v34,
                                      v35);
    System_Comparison_object____ctor(v50, v51, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v50;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v33 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    v50,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v59 = System_Collections_Generic_List_object___ToArray(
          v33,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v59;
  sub_1BCA784((PartyOrganizationUtility_o *)relationList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_40609312(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  void *list; // x0
  int32_t Count; // w27
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x26
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x22
  int64_t v45; // x2
  __int64 v46; // x3
  int32_t v47; // w28
  Il2CppObject *Item; // x0
  int64_t v49; // x29
  __int64 methodPtr_low; // x10
  void *monitor; // x19
  Il2CppClass *klass; // x20
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int v57; // w8
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  System_Collections_Generic_List_object__o *v69; // x0
  System_Comparison_T__o *v70; // x23
  Il2CppObject *v71; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Object_array *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Object_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x2
  __int64 v94; // x3
  System_Comparison_T__o *v95; // x20
  Il2CppObject *v96; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Object_array *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4B16B8A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      beforeRelationList,
      sameRelationList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantVoiceRelationEntity_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v25, v26);
    sub_1BCA7E0(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v27, v28);
    sub_1BCA7E0(&ServantVoiceRelationMaster___c_TypeInfo, v29, v30);
    byte_4B16B8A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_49;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v47,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v49 = (int64_t)Item;
        methodPtr_low = LOBYTE(ServantVoiceRelationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, beforeRelationList);
          *(_QWORD *)&v115.fields.currentCryptoKey = klass;
          *(_QWORD *)&v115.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v115, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v57 = *(_DWORD *)(v49 + 48);
            if ( (v57 & 0x80000000) != 0 )
            {
              if ( !v36 )
                goto LABEL_49;
              items = v36->fields._items;
              v63 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v36->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v36->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v68 = v63[4];
                v69 = v36;
                goto LABEL_31;
              }
              v61 = &items->obj.klass + size;
              v36->fields._size = size + 1;
            }
            else if ( v57 )
            {
              if ( !v44 )
                goto LABEL_49;
              v58 = v44->fields._items;
              v59 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v44->fields._version;
              if ( !v58 )
                goto LABEL_49;
              v60 = v44->fields._size;
              if ( (unsigned int)v60 >= v58->max_length )
              {
                v68 = v59[4];
                v69 = v44;
LABEL_31:
                System_Collections_Generic_List_object___AddWithResize(
                  v69,
                  (Il2CppObject *)v49,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68 + 192) + 112LL));
                continue;
              }
              v61 = &v58->obj.klass + v60;
              v44->fields._size = v60 + 1;
            }
            else
            {
              if ( !v40 )
                goto LABEL_49;
              v65 = v40->fields._items;
              v66 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
              ++v40->fields._version;
              if ( !v65 )
                goto LABEL_49;
              v67 = v40->fields._size;
              if ( (unsigned int)v67 >= v65->max_length )
              {
                v68 = v66[4];
                v69 = v40;
                goto LABEL_31;
              }
              v61 = &v65->obj.klass + v67;
              v40->fields._size = v67 + 1;
            }
            v61[4] = (Il2CppClass *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v49, v45, v46, v53, v54, v55, v56);
          }
        }
      }
    }
    while ( Count != ++v47 );
  }
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, beforeRelationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v70 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v70 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, beforeRelationList);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v71 = (Il2CppObject *)**((_QWORD **)list + 23);
    v70 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                      beforeRelationList,
                                      v45,
                                      v46);
    System_Comparison_object____ctor(v70, v71, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v70;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v70, v73, v74, v75, v76, v77, v78);
  }
  if ( !v36 )
    goto LABEL_49;
  System_Collections_Generic_List_object___Sort_56244000(
    v36,
    v70,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v79 = System_Collections_Generic_List_object___ToArray(
          v36,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v79;
  sub_1BCA784((PartyOrganizationUtility_o *)beforeRelationList, (int64_t)v79, v80, v81, v82, v83, v84, v85);
  if ( !v40 )
    goto LABEL_49;
  v86 = System_Collections_Generic_List_object___ToArray(
          v40,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v86;
  sub_1BCA784((PartyOrganizationUtility_o *)sameRelationList, (int64_t)v86, v87, v88, v89, v90, v91, v92);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo, beforeRelationList);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v95 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v95 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, beforeRelationList);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v96 = (Il2CppObject *)**((_QWORD **)list + 23);
    v95 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                      beforeRelationList,
                                      v93,
                                      v94);
    System_Comparison_object____ctor(v95, v96, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v97 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v97->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v95;
    sub_1BCA784((PartyOrganizationUtility_o *)&v97->__9__4_1, (int64_t)v95, v98, v99, v100, v101, v102, v103);
  }
  if ( !v44 )
LABEL_49:
    sub_1BCAA3C(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_56244000(
    v44,
    v95,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v104 = System_Collections_Generic_List_object___ToArray(
           v44,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v104;
  sub_1BCA784((PartyOrganizationUtility_o *)afterRelationList, (int64_t)v104, v105, v106, v107, v108, v109, v110);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x23
  void *monitor; // x24
  int32_t v22; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B16B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantVoiceRelationEntity_TypeInfo, v13, v14);
    byte_4B16B8B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isVoiceList);
      *(_QWORD *)&v23.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v23.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                 v23,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v22 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v22,
            1,
            (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v17 == ++v18 )
        return;
    }
LABEL_18:
    sub_1BCAA3C(list, isVoiceList);
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

  if ( (byte_4B16B87 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16B87 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16B8D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantVoiceRelationMaster___c_TypeInfo, v1, v2);
    byte_4B16B8D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantVoiceRelationMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}