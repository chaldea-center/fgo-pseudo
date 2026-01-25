void MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
    byte_4CEEBA8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    160,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return this->fields.currentType;
}


MstMissionEntity_array *MstMissionMaster__GetEnableMissions(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t Time; // x0
  int64_t v5; // x1
  int64_t v6; // x21
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CEEBAA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEEBAA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_20;
  v6 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v7 = Time;
    v8 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v8,
                        (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Time )
      {
        v5 = Time;
        if ( v6 >= *(_QWORD *)(Time + 32) && v6 < *(_QWORD *)(Time + 48) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)Time,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C7BD40(Time, v5);
  }
LABEL_18:
  if ( !v3 )
    goto LABEL_20;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  bool v8; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4CEEBAC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEEBAC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v6 = Time;
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || v6 >= (__int64)Item[2].klass )
      {
        v8 = ++v7 < Count;
        if ( Count != v7 )
          continue;
      }
      return v8;
    }
LABEL_15:
    sub_1C7BD40(list, method);
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

  if ( (byte_4CEEBAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    byte_4CEEBAB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || !MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return v7;
    }
LABEL_13:
    sub_1C7BD40(list, method);
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

  if ( (byte_4CEEBA9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
    byte_4CEEBA9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C7BD40(list, method);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
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