void MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938C00 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
    byte_5938C00 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return this->fields.currentType;
}


MstMissionEntity_array *MstMissionMaster__GetEnableMissions(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  int64_t Time; // x0
  int64_t v6; // x1
  int64_t v7; // x21
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5938C02 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938C02 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_20;
  v7 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v8 = Time;
    v9 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v9,
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Time )
      {
        v6 = Time;
        if ( v7 >= *(_QWORD *)(Time + 32) && v7 < *(_QWORD *)(Time + 48) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)Time,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_18;
    }
LABEL_20:
    sub_21FFECC(Time, v6);
  }
LABEL_18:
  if ( !v3 )
    goto LABEL_20;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_445164C *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v7; // x21
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0

  if ( (byte_5938C04 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938C04 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v7 = Time;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || v7 >= (__int64)Item[2].klass )
      {
        v9 = ++v8 < Count;
        if ( Count != v8 )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_21FFECC(list, method);
  }
  return 0;
}


bool MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w23
  Il2CppObject *Item; // x0

  if ( (byte_5938C03 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    byte_5938C03 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v6,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || !MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return v7;
    }
LABEL_13:
    sub_21FFECC(list, method);
  }
  return 0;
}


bool MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  bool result; // w0
  int32_t v9; // w8

  if ( (byte_5938C01 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    byte_5938C01 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_21FFECC(list, method);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( Count < 1 )
  {
    v9 = 0;
    result = 0;
  }
  else
  {
    v5 = Count;
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_14;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v6,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Item )
      {
        if ( MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
          break;
      }
      if ( v5 == ++v6 )
      {
        result = 0;
        v9 = 2;
        goto LABEL_13;
      }
    }
    v9 = 1;
    result = 1;
  }
LABEL_13:
  this->fields.currentType = v9;
  return result;
}