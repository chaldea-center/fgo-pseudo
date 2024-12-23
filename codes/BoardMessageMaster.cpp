void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6689A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__, method);
    byte_4B6689A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t list; // x0
  int64_t v13; // x1
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66898 & 1) == 0 )
  {
    sub_1BE4ACC(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v10);
    byte_4B66898 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v14 = list;
      v15 = 0;
      while ( 1 )
      {
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v15,
                          (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v13 = list;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *(_DWORD *)(list + 20) == warId )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v24 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)list,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v13;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v13, v16, v17, v18, v19, v20, v21);
            }
          }
        }
        if ( v14 == ++v15 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BE4D28(list, v13);
    }
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
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
  System_Collections_Generic_List_object__o *v19; // x19
  void *Instance; // x0
  __int64 v21; // x1
  BoardMessageReleaseMaster_o *v22; // x23
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t v25; // w25
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x26
  __int64 methodPtr_low; // x10
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Comparison_T__o *v40; // x20
  Il2CppObject *v41; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4B66899 & 1) == 0 )
  {
    sub_1BE4ACC(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BE4ACC(&System_Comparison_BoardMessageEntity__TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, v17);
    sub_1BE4ACC(&BoardMessageMaster___c_TypeInfo, v18);
    byte_4B66899 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v19 )
      goto LABEL_34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_34;
    v22 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v24 = Count;
      v25 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v25,
                     (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v27 = (Il2CppObject *)Instance;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v22 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v22, *((_DWORD *)Instance + 4), v26);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v27[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v27[3].monitor < nowTime )
              {
                if ( !v19 )
                  break;
                items = v19->fields._items;
                v37 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v27,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v39[4] = (Il2CppClass *)v27;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v27, v29, v30, v31, v32, v33, v34);
                }
              }
            }
          }
        }
        if ( v24 == ++v25 )
          goto LABEL_24;
      }
LABEL_34:
      sub_1BE4D28(Instance, v21);
    }
LABEL_24:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v40 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v40 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v40 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v40, v41, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v40;
      sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v40, v43, v44, v45, v46, v47, v48);
    }
    if ( !v19 )
      goto LABEL_34;
    System_Collections_Generic_List_object___Sort_56548584(
      v19,
      v40,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6689B & 1) == 0 )
  {
    sub_1BE4ACC(&BoardMessageMaster___c_TypeInfo, v1);
    byte_4B6689B = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BoardMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoardMessageMaster___c___GetDataCondCheck_b__1_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}