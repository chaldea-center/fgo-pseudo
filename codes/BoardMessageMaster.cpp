void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__, method, v2);
    byte_4B15EDB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t list; // x0
  int64_t v20; // x1
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B15ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v16, v17);
    byte_4B15ED9 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v21 = list;
      v22 = 0;
      while ( 1 )
      {
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v22,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v20 = list;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *(_DWORD *)(list + 20) == warId )
          {
            if ( !v18 )
              break;
            items = v18->fields._items;
            v31 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              break;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)list,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v20;
              sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v20, v23, v24, v25, v26, v27, v28);
            }
          }
        }
        if ( v21 == ++v22 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BCAA3C(list, v20);
    }
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_20;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
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
  System_Collections_Generic_List_object__o *v31; // x19
  void *Instance; // x0
  __int64 v33; // x1
  BoardMessageReleaseMaster_o *v34; // x23
  int32_t Count; // w0
  const MethodInfo *v36; // x2
  __int64 v37; // x3
  int32_t v38; // w24
  int32_t v39; // w25
  Il2CppObject *v40; // x26
  __int64 methodPtr_low; // x10
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B15EDA & 1) == 0 )
  {
    sub_1BCA7E0(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId, nowTime);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Comparison_BoardMessageEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, v27, v28);
    sub_1BCA7E0(&BoardMessageMaster___c_TypeInfo, v29, v30);
    byte_4B15EDA = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       nowTime,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v31 )
      goto LABEL_34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_34;
    v34 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v38 = Count;
      v39 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v39,
                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v40 = (Il2CppObject *)Instance;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v34 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v34, *((_DWORD *)Instance + 4), v36);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v40[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v40[3].monitor < nowTime )
              {
                if ( !v31 )
                  break;
                items = v31->fields._items;
                v48 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v31->fields._version;
                if ( !items )
                  break;
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    v40,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v50[4] = (Il2CppClass *)v40;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v50 + 4),
                    (int64_t)v40,
                    (int64_t)v36,
                    v37,
                    v42,
                    v43,
                    v44,
                    v45);
                }
              }
            }
          }
        }
        if ( v38 == ++v39 )
          goto LABEL_24;
      }
LABEL_34:
      sub_1BCAA3C(Instance, v33);
    }
LABEL_24:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo, v33);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v51 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v33);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BoardMessageEntity__TypeInfo, v33, v36, v37);
      System_Comparison_object____ctor(v51, v52, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v51;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
    }
    if ( !v31 )
      goto LABEL_34;
    System_Collections_Generic_List_object___Sort_56244000(
      v31,
      v51,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v31,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15EDC & 1) == 0 )
  {
    sub_1BCA7E0(&BoardMessageMaster___c_TypeInfo, v1, v2);
    byte_4B15EDC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BoardMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoardMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}