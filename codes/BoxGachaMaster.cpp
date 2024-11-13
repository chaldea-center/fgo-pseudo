void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method, v2);
    byte_4B15EF8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    124,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  BoxGachaEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B15EFA & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    byte_4B15EFA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v14,
                                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(BoxGachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == BoxGachaEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.slot == slot )
        {
          return result;
        }
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x20
  const MethodInfo *v43; // x2
  int64_t BoxGachaDataByEventId; // x0
  __int64 v45; // x1
  int v46; // w8
  int64_t v47; // x19
  unsigned int v48; // w22
  __int64 v49; // x8
  int32_t v50; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x19
  int64_t v59; // x2
  __int64 v60; // x3
  int32_t v61; // w22
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  int64_t v69; // x1
  Il2CppClass **v70; // x0
  System_Comparison_T__o *v71; // x20
  Il2CppObject *v72; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Int32_array *v80; // x20
  unsigned __int64 v81; // x21

  if ( (byte_4B15EFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ItemEntity__TypeInfo, *(_QWORD *)&event_id, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v38, v39);
    sub_1BCA7E0(&BoxGachaMaster___c_TypeInfo, v40, v41);
    byte_4B15EFB = 1;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&event_id,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v43);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v46 = *(_DWORD *)(BoxGachaDataByEventId + 24);
  v47 = BoxGachaDataByEventId;
  if ( v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= v46 )
LABEL_43:
        sub_1BCAA44(BoxGachaDataByEventId, v45);
      v49 = *(_QWORD *)(v47 + 8LL * (int)v48 + 32);
      if ( !v49 )
        break;
      if ( *(_DWORD *)(v49 + 48) == 6 )
      {
        if ( !v42 )
          break;
        v50 = *(_DWORD *)(v49 + 52);
        BoxGachaDataByEventId = System_Collections_Generic_List_int___Contains(
                                  v42,
                                  v50,
                                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (BoxGachaDataByEventId & 1) == 0 )
        {
          items = v42->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v42->fields._version;
          if ( !items )
            break;
          size = v42->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v42,
              v50,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v42->fields._size = size + 1;
            items->m_Items[size + 1] = v50;
          }
        }
      }
      v46 = *(_DWORD *)(v47 + 24);
      if ( (int)++v48 >= v46 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1BCAA3C(BoxGachaDataByEventId, v45);
  }
LABEL_16:
  BoxGachaDataByEventId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v42 )
    goto LABEL_42;
  if ( v42->fields._size >= 1 )
  {
    v61 = 0;
    do
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_int___get_Item(
                                v42,
                                v61,
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         BoxGachaDataByEventId,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v58 )
          goto LABEL_42;
        v66 = v58->fields._items;
        v67 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v58->fields._version;
        if ( !v66 )
          goto LABEL_42;
        v68 = v58->fields._size;
        v69 = BoxGachaDataByEventId;
        if ( (unsigned int)v68 >= v66->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v66->obj.klass + v68;
          v58->fields._size = v68 + 1;
          v70[4] = (Il2CppClass *)v69;
          sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), v69, v59, v60, v62, v63, v64, v65);
        }
      }
    }
    while ( ++v61 < v42->fields._size );
  }
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo, v45);
    BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  }
  v71 = *(System_Comparison_T__o **)(*(_QWORD *)(BoxGachaDataByEventId + 184) + 16LL);
  if ( !v71 )
  {
    if ( !*(_DWORD *)(BoxGachaDataByEventId + 224) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId, v45);
      BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
    }
    v72 = **(Il2CppObject ***)(BoxGachaDataByEventId + 184);
    v71 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ItemEntity__TypeInfo, v45, v59, v60);
    System_Comparison_object____ctor(v71, v72, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v71;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v71, v74, v75, v76, v77, v78, v79);
  }
  if ( !v58 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_56244000(
    v58,
    v71,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v80 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v58->fields._size);
  if ( v58->fields._size >= 1 )
  {
    v81 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         v58,
                                         v81,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v80 )
        goto LABEL_42;
      if ( v81 >= v80->max_length )
        goto LABEL_43;
      v80->m_Items[++v81] = *(_DWORD *)(BoxGachaDataByEventId + 16);
      if ( (__int64)v81 >= v58->fields._size )
        return v80;
    }
  }
  return v80;
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_array *__fastcall BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v30; // x2
  __int64 v31; // x3
  int32_t v32; // w22
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B15EF9 & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Comparison_BoxGachaEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v22, v23);
    sub_1BCA7E0(&BoxGachaMaster___c_TypeInfo, v24, v25);
    byte_4B15EF9 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoxGachaEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (int64_t)list;
        methodPtr_low = LOBYTE(BoxGachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v30, v31, v34, v35, v36, v37);
          }
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v27);
  }
LABEL_17:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo, v27);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BoxGachaEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v26,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15EFC & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaMaster___c_TypeInfo, v1, v2);
    byte_4B15EFC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BoxGachaMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoxGachaMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BoxGachaMaster___c___ctor(BoxGachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoxGachaMaster___c___GetEventItemList_b__3_0(
        BoxGachaMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}