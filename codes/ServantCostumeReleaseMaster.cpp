void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B168DC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B168DC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    207,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  ServantCostumeReleaseEntity_array *EntityList; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  ServantCostumeReleaseMaster___c_c *v41; // x0
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v43; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  __int64 v54; // x3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  ServantCostumeReleaseEntity_o *v60; // x9
  int v61; // w27
  int32_t condGroup; // w23
  int v63; // w28
  int64_t v64; // x22
  System_Collections_Generic_List_object__o *v65; // x23
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  int v76; // w8
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x0
  System_Collections_Generic_List_object__o *v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0

  if ( (byte_4B168DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___76795688, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v25, v26);
    sub_1BCA7E0(&ServantCostumeReleaseMaster___c_TypeInfo, v27, v28);
    byte_4B168DF = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v33 = sub_1BCAA2C(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v30, v31, v32);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v41 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo, v38);
    v41 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v41->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v38);
      v41 = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                          System_Comparison_ServantCostumeReleaseEntity__TypeInfo,
                                          v38,
                                          v39,
                                          v40);
    System_Comparison_object____ctor(
      _9__5_0,
      v43,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v45, v46, v47, v48, v49, v50);
  }
  System_Array__Sort_object__49153980(
    (System_Object_array *)EntityList,
    _9__5_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_40;
  v59 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v59 )
LABEL_33:
    sub_1BCAA44(v51, v52);
  v60 = EntityList->m_Items[0];
  if ( !v60 )
LABEL_40:
    sub_1BCAA3C(v51, v52);
  v61 = v59 - 1;
  if ( (int)v59 >= 1 )
  {
    condGroup = v60->fields.condGroup;
    v63 = 0;
    while ( 1 )
    {
      v64 = (int64_t)EntityList->m_Items[v63];
      if ( !v64 )
        goto LABEL_40;
      if ( *(_DWORD *)(v64 + 24) == 1 )
      {
        if ( condGroup == *(_DWORD *)(v64 + 44) )
        {
          if ( !v33 )
            goto LABEL_40;
        }
        else
        {
          v65 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                               v52,
                                                               v53,
                                                               v54);
          System_Collections_Generic_List_object____ctor_56235344(
            v65,
            (System_Collections_Generic_IEnumerable_T__o *)v33,
            (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___76795688);
          if ( !v37 )
            goto LABEL_40;
          items = v37->fields._items;
          v73 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
          ++v37->fields._version;
          if ( !items )
            goto LABEL_40;
          size = v37->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v65,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &items->obj.klass + size;
            v37->fields._size = size + 1;
            v75[4] = (Il2CppClass *)v65;
            sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v65, v66, v67, v68, v69, v70, v71);
          }
          if ( !v33 )
            goto LABEL_40;
          v53 = *(unsigned int *)(v33 + 24);
          condGroup = *(_DWORD *)(v64 + 44);
          v76 = *(_DWORD *)(v33 + 28) + 1;
          *(_DWORD *)(v33 + 24) = 0;
          *(_DWORD *)(v33 + 28) = v76;
          if ( (int)v53 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v33 + 16), 0, v53, 0LL);
        }
        v77 = *(_QWORD *)(v33 + 16);
        v78 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++*(_DWORD *)(v33 + 28);
        if ( !v77 )
          goto LABEL_40;
        v79 = *(int *)(v33 + 24);
        if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v33,
            (Il2CppObject *)v64,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = v77 + 8 * v79;
          *(_DWORD *)(v33 + 24) = v79 + 1;
          *(_QWORD *)(v80 + 32) = v64;
          sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 32), v64, v53, v54, v55, v56, v57, v58);
        }
      }
      if ( v61 == v63 )
        break;
      if ( ++v63 >= EntityList->max_length )
        goto LABEL_33;
    }
  }
  v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor_56235344(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___76795688);
  if ( !v37 )
    goto LABEL_40;
  v88 = v37->fields._items;
  v89 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
  ++v37->fields._version;
  if ( !v88 )
    goto LABEL_40;
  v90 = v37->fields._size;
  if ( (unsigned int)v90 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)v81,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v37->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v81;
    sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v81, v82, v83, v84, v85, v86, v87);
  }
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v37;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_o *__fastcall ServantCostumeReleaseMaster__GetEntity(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B168DA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&releaseType);
    byte_4B168DA = 1;
  }
  PK = (Il2CppObject *)ServantCostumeReleaseEntity__CreatePK(
                         svtId,
                         releaseType,
                         costumeId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (ServantCostumeReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  System_Collections_Generic_List_object__o *v27; // x19
  int64_t v28; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v31; // x2
  __int64 v32; // x3
  int32_t v33; // w23
  int32_t v34; // w24
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B168DE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&costumeId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantCostumeReleaseEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v23, v24);
    sub_1BCA7E0(&ServantCostumeReleaseMaster___c_TypeInfo, v25, v26);
    byte_4B168DE = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&costumeId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v33 = Count;
    v34 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v34,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v28 = (int64_t)list;
      methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v27 )
          break;
        items = v27->fields._items;
        v41 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v28;
          sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v28, v31, v32, v35, v36, v37, v38);
        }
      }
      if ( v33 == ++v34 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCAA3C(list, v28);
  }
LABEL_18:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo, v28);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v28);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v28, v31, v32);
    System_Comparison_object____ctor(v44, v45, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v27 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56244000(
    v27,
    v44,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v27,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  int64_t Instance; // x0
  __int64 v18; // x1
  signed int max_length; // w20
  il2cpp_array_size_t v20; // w22
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t num; // w8
  UserItemEntity_o *v24; // [xsp+0h] [xbp-60h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-54h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B168E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B168E1 = 1;
  }
  itemNums = 0LL;
  itemIds = 0LL;
  qp = 0;
  v24 = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_29:
    sub_1BCAA3C(Instance, v18);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0LL);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( max_length < 1 )
  {
LABEL_24:
    Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( Instance )
      return qp <= *(_DWORD *)(Instance + 96);
    goto LABEL_29;
  }
  v20 = 0;
  while ( 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_29;
    if ( v20 >= itemIds->max_length )
      goto LABEL_30;
    if ( !MasterData_object )
      goto LABEL_29;
    Instance = UserItemMaster__TryGetEntity(
                 (UserItemMaster_o *)MasterData_object,
                 &v24,
                 Instance,
                 itemIds->m_Items[v20 + 1],
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_29;
      num = v24->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_29;
    if ( v20 >= itemNums->max_length )
LABEL_30:
      sub_1BCAA44(Instance, v18);
    if ( itemNums->m_Items[v20 + 1] > num )
      return 0;
    if ( max_length == ++v20 )
      goto LABEL_24;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v20; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v22; // x24
  __int64 v23; // x1
  int64_t startedAt; // x25
  const MethodInfo *v25; // x4

  if ( (byte_4B168E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B168E3 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  if ( !targetEntity || !Instance )
    goto LABEL_21;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              (EventCombineCostumeMaster_o *)Instance,
                              svtId,
                              targetEntity->fields.id,
                              0LL);
  if ( !ListBySvtIdAndCostumeId )
    return (char)ListBySvtIdAndCostumeId;
  v20 = ListBySvtIdAndCostumeId;
  IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v20->fields.eventId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v18);
  }
  v22 = (EventEntity_o *)Instance;
  if ( IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    startedAt = v22->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    if ( startedAt > NetworkManager__getTime(0LL)
      || EventEntity__IsOpen(v22, 0, 0LL)
      || IsShortEventItem
      && !ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v25) )
    {
LABEL_19:
      LOBYTE(ListBySvtIdAndCostumeId) = 0;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 1;
  return (char)ListBySvtIdAndCostumeId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  __int64 methodPtr_low; // x10
  int32_t v20; // w25
  int32_t v21; // w26

  if ( (byte_4B168E2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetEntity,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantCostumeReleaseEntity_TypeInfo, v13, v14);
    byte_4B168E2 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_26:
    sub_1BCAA3C(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_26;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v20 = *((_DWORD *)list + 7);
        if ( (v20 & 0xFFFFFFFE) != 6 )
        {
          if ( v20 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, (const MethodInfo *)targetEntity) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(
                       (ServantCostumeReleaseEntity_o *)list,
                       (const MethodInfo *)targetEntity) )
          {
            return 0;
          }
          goto LABEL_23;
        }
        v21 = *((_DWORD *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, targetEntity);
        if ( !CondType__IsOpenForUsrSvt(v20, v21, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_23:
    if ( v17 == ++v18 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__TryGetEntity(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeReleaseEntity_o **entity,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B168DB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B168DB = 1;
  }
  PK = (Il2CppObject *)ServantCostumeReleaseEntity__CreatePK(
                         svtId,
                         releaseType,
                         costumeId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  int size; // w22
  System_Collections_Generic_List_object__o *v15; // x19
  int32_t i; // w20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v18; // x1
  int v19; // w25
  int32_t v20; // w21

  if ( (byte_4B168E0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&costumeId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v11, v12);
    byte_4B168E0 = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v15 = (System_Collections_Generic_List_object__o *)CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size < 1 )
    return 0;
  for ( i = 0; i != size; ++i )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          v15,
                                                          i,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1BCAA3C(Item, v18);
    v19 = Item->fields._size;
    if ( v19 < 1 )
      break;
    v20 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v15,
                                                            i,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v20,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
      if ( !Item )
        goto LABEL_19;
      if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)Item, v18) )
        break;
      if ( v19 == ++v20 )
        return 1;
    }
  }
  return v19 < 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__isEnableMountCostume(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_4B168DD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&ServantCostumeReleaseEntity_TypeInfo, v13, v14);
    byte_4B168DD = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
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
      methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantCostumeReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == svtId && HIDWORD(list->fields.items) == id )
      {
        klass_high = HIDWORD(list[1].klass);
        if ( klass_high == 7 )
        {
          if ( SHIDWORD(list[1].monitor) > limitCount )
            return 0;
        }
        else if ( klass_high == 6 && SHIDWORD(list[1].monitor) > lv )
        {
          return 0;
        }
      }
      if ( v17 == ++v18 )
        return 1;
    }
LABEL_21:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B168E4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeReleaseMaster___c_TypeInfo, v1, v2);
    byte_4B168E4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCostumeReleaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantCostumeReleaseMaster___c___ctor(
        ServantCostumeReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetCostumeCondGroupEntityList_b__5_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}