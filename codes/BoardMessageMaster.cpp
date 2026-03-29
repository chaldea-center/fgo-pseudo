void BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D306AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
    byte_4D306AF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
}


BoardMessageEntity_array *BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  void *Instance; // x0
  __int64 v9; // x1
  BoardMessageReleaseMaster_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D306AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_BoardMessageEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BoardMessageMaster___c__GetDataCondCheck_b__0_0__);
    sub_1C93AD4(&BoardMessageMaster___c_TypeInfo);
    byte_4D306AE = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v7 )
      goto LABEL_32;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_32;
    v10 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      v13 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v13,
                     (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( Instance )
        {
          v15 = (Il2CppObject *)Instance;
          if ( *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v10 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v10, *((_DWORD *)Instance + 4), v14);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v15[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v15[3].monitor < nowTime )
              {
                if ( !v7 )
                  break;
                items = v7->fields._items;
                v24 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  break;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    v15,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)v15;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
                }
              }
            }
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_22;
      }
LABEL_32:
      sub_1C93D2C(Instance, v9);
    }
LABEL_22:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v27 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v27 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v27 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v27, v28, Method_BoardMessageMaster___c__GetDataCondCheck_b__0_0__, 0);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_BoardMessageEntity__o *)v27;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v27, v30, v31, v32, v33, v34, v35);
    }
    if ( !v7 )
      goto LABEL_32;
    System_Collections_Generic_List_object___Sort_59225184(
      v7,
      v27,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D306B0 & 1) == 0 )
  {
    sub_1C93AD4(&BoardMessageMaster___c_TypeInfo);
    byte_4D306B0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BoardMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BoardMessageMaster___c___GetDataCondCheck_b__0_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}