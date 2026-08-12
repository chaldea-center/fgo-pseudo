void BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59704DF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
    byte_59704DF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    238,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct BoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v29; // x21
  struct BoardMessageMaster___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_59704DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
    sub_2213A60(&System_Comparison_BoardMessageEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BoardMessageMaster___c__GetDataCondCheck_b__0_0__);
    sub_2213A60(&BoardMessageMaster___c_TypeInfo);
    byte_59704DE = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v7 )
      goto LABEL_32;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_32;
    v10 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
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
                     (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
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
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)v15;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
                }
              }
            }
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_22;
      }
LABEL_32:
      sub_2213CDC(Instance, v9);
    }
LABEL_22:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !*(&BoardMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo, v9);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    static_fields = (struct BoardMessageMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v9);
        static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(_9__0_0, v29, Method_BoardMessageMaster___c__GetDataCondCheck_b__0_0__, 0);
      v30 = BoardMessageMaster___c_TypeInfo->static_fields;
      v30->__9__0_0 = (struct System_Comparison_BoardMessageEntity__o *)_9__0_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__0_0, (int32_t)_9__0_0, v31, v32, v33, v34, v35, v36);
    }
    if ( !v7 )
      goto LABEL_32;
    System_Collections_Generic_List_object___Sort_71849708(
      v7,
      _9__0_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59704E0 & 1) == 0 )
  {
    sub_2213A60(&BoardMessageMaster___c_TypeInfo);
    byte_59704E0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BoardMessageMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}