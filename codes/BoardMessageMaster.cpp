void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7780 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__, method);
    byte_4BC7780 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_3246354 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t list; // x0
  int64_t v12; // x1
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BC777E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__, *(_QWORD *)&warId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v9);
    byte_4BC777E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = list;
      v14 = 0;
      while ( 1 )
      {
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v14,
                          (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( list )
        {
          v12 = list;
          if ( *(_DWORD *)(list + 20) == warId )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)list,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v12;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v12, v15, v16, v17, v18, v19, v20);
            }
          }
        }
        if ( v13 == ++v14 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C1AE30(list, v12);
    }
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v18; // x19
  void *Instance; // x0
  __int64 v20; // x1
  BoardMessageReleaseMaster_o *v21; // x23
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x26
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Comparison_T__o *v38; // x20
  Il2CppObject *v39; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BC777F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__, *(_QWORD *)&warId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_BoardMessageEntity__TypeInfo, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, v16);
    sub_1C1ABD4(&BoardMessageMaster___c_TypeInfo, v17);
    byte_4BC777F = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v18 )
      goto LABEL_32;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_32;
    v21 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( Count >= 1 )
    {
      v23 = Count;
      v24 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v24,
                     (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( Instance )
        {
          v26 = (Il2CppObject *)Instance;
          if ( *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v21 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v21, *((_DWORD *)Instance + 4), v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v26[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v26[3].monitor < nowTime )
              {
                if ( !v18 )
                  break;
                items = v18->fields._items;
                v35 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v18->fields._version;
                if ( !items )
                  break;
                size = v18->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    v26,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &items->obj.klass + size;
                  v18->fields._size = size + 1;
                  v37[4] = (Il2CppClass *)v26;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
                }
              }
            }
          }
        }
        if ( v23 == ++v24 )
          goto LABEL_22;
      }
LABEL_32:
      sub_1C1AE30(Instance, v20);
    }
LABEL_22:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v38 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v38 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v39 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v38 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v38, v39, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v38;
      sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
    }
    if ( !v18 )
      goto LABEL_32;
    System_Collections_Generic_List_object___Sort_56877908(
      v18,
      v38,
      (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
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

  if ( (byte_4BC7781 & 1) == 0 )
  {
    sub_1C1ABD4(&BoardMessageMaster___c_TypeInfo, v1);
    byte_4BC7781 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v2;
  sub_1C1AB78(
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}