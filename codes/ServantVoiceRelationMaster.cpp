void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB50A3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_4BB50A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    181,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB50A1 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB50A1 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
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
  if ( (byte_4BB50A7 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__,
      *(_QWORD *)&relationSvtId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4BB50A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( list )
      {
        v15 = list;
        monitor = list[1].monitor;
        items = list[1].fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v27.fields.fakeValue = items;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C13F80(list, *(_QWORD *)&relationSvtId);
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
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Object_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4BB50A4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__, relationList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v6);
    sub_1C13D24(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C13D24(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v14);
    sub_1C13D24(&ServantVoiceRelationMaster___c_TypeInfo, v15);
    byte_4BB50A4 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v21 = Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = klass;
        *(_QWORD *)&v51.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v51, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v21,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v21;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v21, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v19 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C13F80(list, relationList);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56814736(
    v18,
    v34,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v43 = System_Collections_Generic_List_object___ToArray(
          v18,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = (ServantVoiceRelationEntity_array *)v43;
  sub_1C13CC8((PartyOrganizationUtility_o *)relationList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_41044176(
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
  int64_t v26; // x29
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int v35; // w8
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_object__o *v47; // x0
  System_Comparison_T__o *v48; // x23
  Il2CppObject *v49; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Object_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Object_array *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Comparison_T__o *v71; // x20
  Il2CppObject *v72; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Object_array *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_4BB50A5 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__,
      beforeRelationList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v8);
    sub_1C13D24(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C13D24(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v16);
    sub_1C13D24(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v17);
    sub_1C13D24(&ServantVoiceRelationMaster___c_TypeInfo, v18);
    byte_4BB50A5 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( Item )
      {
        v26 = (int64_t)Item;
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v90.fields.currentCryptoKey = klass;
        *(_QWORD *)&v90.fields.fakeValue = monitor;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v90, 0LL);
        if ( (_DWORD)list == svtId )
        {
          v35 = *(_DWORD *)(v26 + 48);
          if ( (v35 & 0x80000000) != 0 )
          {
            if ( !v21 )
              goto LABEL_47;
            items = v21->fields._items;
            v41 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_47;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v46 = v41[4];
              v47 = v21;
              goto LABEL_29;
            }
            v39 = &items->obj.klass + size;
            v21->fields._size = size + 1;
          }
          else if ( v35 )
          {
            if ( !v23 )
              goto LABEL_47;
            v36 = v23->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v23->fields._version;
            if ( !v36 )
              goto LABEL_47;
            v38 = v23->fields._size;
            if ( (unsigned int)v38 >= v36->max_length )
            {
              v46 = v37[4];
              v47 = v23;
LABEL_29:
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                (Il2CppObject *)v26,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46 + 192) + 112LL));
              continue;
            }
            v39 = &v36->obj.klass + v38;
            v23->fields._size = v38 + 1;
          }
          else
          {
            if ( !v22 )
              goto LABEL_47;
            v43 = v22->fields._items;
            v44 = Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__;
            ++v22->fields._version;
            if ( !v43 )
              goto LABEL_47;
            v45 = v22->fields._size;
            if ( (unsigned int)v45 >= v43->max_length )
            {
              v46 = v44[4];
              v47 = v22;
              goto LABEL_29;
            }
            v39 = &v43->obj.klass + v45;
            v22->fields._size = v45 + 1;
          }
          v39[4] = (Il2CppClass *)v26;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v26, v29, v30, v31, v32, v33, v34);
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
  v48 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v48 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)list + 23);
    v48 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v48, v49, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, 0LL);
    static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v48;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v48, v51, v52, v53, v54, v55, v56);
  }
  if ( !v21 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_56814736(
    v21,
    v48,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v57 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = (ServantVoiceRelationEntity_array *)v57;
  sub_1C13CC8((PartyOrganizationUtility_o *)beforeRelationList, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !v22 )
    goto LABEL_47;
  v64 = System_Collections_Generic_List_object___ToArray(
          v22,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = (ServantVoiceRelationEntity_array *)v64;
  sub_1C13CC8((PartyOrganizationUtility_o *)sameRelationList, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  v71 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v71 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
    v72 = (Il2CppObject *)**((_QWORD **)list + 23);
    v71 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_object____ctor(v71, v72, Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, 0LL);
    v73 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v73->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)v71;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v73->__9__4_1, (int64_t)v71, v74, v75, v76, v77, v78, v79);
  }
  if ( !v23 )
LABEL_47:
    sub_1C13F80(list, beforeRelationList);
  System_Collections_Generic_List_object___Sort_56814736(
    v23,
    v71,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v80 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = (ServantVoiceRelationEntity_array *)v80;
  sub_1C13CC8((PartyOrganizationUtility_o *)afterRelationList, (int64_t)v80, v81, v82, v83, v84, v85, v86);
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

  if ( (byte_4BB50A6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__, isVoiceList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4BB50A6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Count__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceRelationEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
                (const MethodInfo_32838E0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v15,
            1,
            (const MethodInfo_32836CC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v11 == ++v12 )
        return;
    }
LABEL_16:
    sub_1C13F80(list, isVoiceList);
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

  if ( (byte_4BB50A2 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_4BB50A2 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
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

  if ( (byte_4BB50A8 & 1) == 0 )
  {
    sub_1C13D24(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_4BB50A8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantVoiceRelationMaster___c_TypeInfo->static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v2;
  sub_1C13CC8(
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
    sub_1C13F80(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C13F80(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C13F80(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}