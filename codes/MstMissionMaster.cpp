void __fastcall MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E78 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__, method);
    byte_4BC7E78 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    160,
    (const MethodInfo_3246354 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t __fastcall MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return this->fields.currentType;
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissions(
        MstMissionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t Time; // x0
  int64_t v11; // x1
  int64_t v12; // x21
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

  if ( (byte_4BC7E7A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    byte_4BC7E7A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v12 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v13 = Time;
    v14 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v14,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Time )
      {
        v11 = Time;
        if ( v12 >= *(_QWORD *)(Time + 32) && v12 < *(_QWORD *)(Time + 48) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)Time,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C1AE30(Time, v11);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_20;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v9,
                                     (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissionsWithTime(
        MstMissionMaster_o *this,
        int64_t *ratestStart,
        int64_t *fastestEnd,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  int64_t Time; // x0
  int64_t v16; // x1
  int64_t v17; // x23
  BalanceConfig_c *v18; // x8
  int v19; // w24
  int32_t v20; // w25
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x9
  int64_t v28; // x8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4BC7E7B & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, ratestStart);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v12);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v13);
    byte_4BC7E7B = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v17 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  *ratestStart = 0LL;
  v18 = BalanceConfig_TypeInfo;
  v19 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  *fastestEnd = v18->static_fields->NoneExpireTime;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v20,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Time )
      {
        v27 = *(_QWORD *)(Time + 32);
        v16 = Time;
        if ( v17 >= v27 && v17 < *(_QWORD *)(Time + 48) )
        {
          v28 = *(_QWORD *)(Time + 40);
          if ( v28 - v27 <= *(int *)(Time + 16) )
          {
            if ( v27 > *ratestStart )
            {
              *ratestStart = v27;
              v28 = *(_QWORD *)(Time + 40);
            }
            if ( *fastestEnd > v28 && v17 < v28 )
              *fastestEnd = v28;
          }
          if ( !v14 )
            break;
          items = v14->fields._items;
          v30 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Time,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v16;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 4), v16, v21, v22, v23, v24, v25, v26);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C1AE30(Time, v16);
  }
LABEL_26:
  if ( !v14 )
    goto LABEL_28;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v14,
                                     (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool __fastcall MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  bool v10; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4BC7E7D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    byte_4BC7E7D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || v8 >= (__int64)Item[2].klass )
      {
        v10 = ++v9 < Count;
        if ( Count != v9 )
          continue;
      }
      return v10;
    }
LABEL_15:
    sub_1C1AE30(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  bool v8; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4BC7E7C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__, v3);
    byte_4BC7E7C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
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
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( !Item || !MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        v8 = ++v7 < v6;
        if ( v6 != v7 )
          continue;
      }
      return v8;
    }
LABEL_13:
    sub_1C1AE30(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  bool result; // w0
  int32_t v10; // w8

  if ( (byte_4BC7E79 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__, v3);
    byte_4BC7E79 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C1AE30(list, method);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Count__);
  if ( Count < 1 )
  {
    v10 = 0;
    result = 0;
  }
  else
  {
    v6 = Count;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_14;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MstMissionEntity__get_Item__);
      if ( Item )
      {
        if ( MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
          break;
      }
      if ( v6 == ++v7 )
      {
        result = 0;
        v10 = 2;
        goto LABEL_13;
      }
    }
    v10 = 1;
    result = 1;
  }
LABEL_13:
  this->fields.currentType = v10;
  return result;
}