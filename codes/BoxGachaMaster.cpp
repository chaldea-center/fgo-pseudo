void BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593834E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
    byte_593834E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    130,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  BoxGachaEntity_o *result; // x0

  if ( (byte_5938350 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    byte_5938350 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v10,
                                     (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


BoxGachaEntity_array *BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v23; // x21
  struct BoxGachaMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593834F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    sub_21FFC50(&System_Comparison_BoxGachaEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
    sub_21FFC50(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__);
    sub_21FFC50(&BoxGachaMaster___c_TypeInfo);
    byte_593834F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 5) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !*(&BoxGachaMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo, v6);
    list = BoxGachaMaster___c_TypeInfo;
  }
  static_fields = (struct BoxGachaMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v23, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0);
    v24 = BoxGachaMaster___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__1_0, (int32_t)_9__1_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__1_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938351 & 1) == 0 )
  {
    sub_21FFC50(&BoxGachaMaster___c_TypeInfo);
    byte_5938351 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BoxGachaMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BoxGachaMaster___c___ctor(BoxGachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}