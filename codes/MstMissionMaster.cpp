void __fastcall MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__, method, v2);
    byte_4B165A0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t __fastcall MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return *(&this->fields.revision + 1);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissions(
        MstMissionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  int64_t Time; // x0
  int64_t v22; // x1
  int64_t v23; // x21
  int v24; // w22
  int32_t v25; // w23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B165A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    byte_4B165A2 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MstMissionEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v23 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v24 = Time;
    v25 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v25,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v22 = Time;
        methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == MstMissionEntity_TypeInfo
          && v23 >= *(_QWORD *)(Time + 32)
          && v23 < *(_QWORD *)(Time + 48) )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v34 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v22;
            sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v22, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(Time, v22);
  }
LABEL_20:
  if ( !v19 )
    goto LABEL_22;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v19,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissionsWithTime(
        MstMissionMaster_o *this,
        int64_t *ratestStart,
        int64_t *fastestEnd,
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
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x1
  int64_t Time; // x0
  int64_t v26; // x1
  int64_t v27; // x23
  BalanceConfig_c *v28; // x8
  int v29; // w24
  int32_t v30; // w25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 methodPtr_low; // x10
  int64_t v38; // x9
  int64_t v39; // x8
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4B165A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, ratestStart, fastestEnd);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    byte_4B165A3 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MstMissionEntity__TypeInfo,
                                                       ratestStart,
                                                       fastestEnd,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v27 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *ratestStart = 0LL;
  v28 = BalanceConfig_TypeInfo;
  v29 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
    v28 = BalanceConfig_TypeInfo;
  }
  *fastestEnd = v28->static_fields->NoneExpireTime;
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v30,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v26 = Time;
        methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == MstMissionEntity_TypeInfo )
        {
          v38 = *(_QWORD *)(Time + 32);
          if ( v27 >= v38 && v27 < *(_QWORD *)(Time + 48) )
          {
            v39 = *(_QWORD *)(Time + 40);
            if ( v39 - v38 <= *(int *)(Time + 16) )
            {
              if ( v38 > *ratestStart )
              {
                *ratestStart = v38;
                v39 = *(_QWORD *)(Time + 40);
              }
              if ( *fastestEnd > v39 && v27 < v39 )
                *fastestEnd = v39;
            }
            if ( !v23 )
              break;
            items = v23->fields._items;
            v41 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)Time,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v26;
              sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v26, v31, v32, v33, v34, v35, v36);
            }
          }
        }
      }
      if ( v29 == ++v30 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Time, v26);
  }
LABEL_28:
  if ( !v23 )
    goto LABEL_30;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v23,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool __fastcall MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v14; // x21
  int32_t v15; // w22
  bool v16; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B165A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B165A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v14 = Time;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v15,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionEntity_TypeInfo
        || v14 >= (__int64)Item[2].klass )
      {
        v16 = ++v15 < Count;
        if ( Count != v15 )
          continue;
      }
      return v16;
    }
LABEL_17:
    sub_1BCAA3C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  bool v12; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B165A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v6, v7);
    byte_4B165A4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionEntity_TypeInfo
        || !MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        v12 = ++v11 < v10;
        if ( v10 != v11 )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1BCAA3C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  bool result; // w0
  int32_t v15; // w8

  if ( (byte_4B165A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v6, v7);
    byte_4B165A1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, method);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v15 = 0;
    result = 0;
  }
  else
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_16;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MstMissionEntity_TypeInfo
          && MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
        {
          break;
        }
      }
      if ( v10 == ++v11 )
      {
        result = 0;
        v15 = 2;
        goto LABEL_14;
      }
    }
    v15 = 1;
    result = 1;
  }
LABEL_14:
  *(&this->fields.revision + 1) = v15;
  return result;
}