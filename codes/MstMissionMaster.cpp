void __fastcall MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4FC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
    byte_4A5B4FC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t __fastcall MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return *(&this->fields.revision + 1);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissions(
        MstMissionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t Time; // x0
  int64_t v5; // x1
  int64_t v6; // x21
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B4FE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_1B885B0(&MstMissionEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B4FE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v6 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v5 = Time;
        methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == MstMissionEntity_TypeInfo
          && v6 >= *(_QWORD *)(Time + 32)
          && v6 < *(_QWORD *)(Time + 48) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(Time, v5);
  }
LABEL_20:
  if ( !v3 )
    goto LABEL_22;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v3,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissionsWithTime(
        MstMissionMaster_o *this,
        int64_t *ratestStart,
        int64_t *fastestEnd,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t Time; // x0
  int64_t v9; // x1
  int64_t v10; // x23
  BalanceConfig_c *v11; // x8
  int v12; // w24
  int32_t v13; // w25
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  int64_t v17; // x9
  int64_t v18; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5B4FF & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_1B885B0(&MstMissionEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B4FF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v10 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *ratestStart = 0LL;
  v11 = BalanceConfig_TypeInfo;
  v12 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  *fastestEnd = v11->static_fields->NoneExpireTime;
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v13,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v9 = Time;
        methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == MstMissionEntity_TypeInfo )
        {
          v17 = *(_QWORD *)(Time + 32);
          if ( v10 >= v17 && v10 < *(_QWORD *)(Time + 48) )
          {
            v18 = *(_QWORD *)(Time + 40);
            if ( v18 - v17 <= *(int *)(Time + 16) )
            {
              if ( v17 > *ratestStart )
              {
                *ratestStart = v17;
                v18 = *(_QWORD *)(Time + 40);
              }
              if ( *fastestEnd > v18 && v10 < v18 )
                *fastestEnd = v18;
            }
            if ( !v7 )
              break;
            items = v7->fields._items;
            v20 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)Time,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v9, v14, v15);
            }
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Time, v9);
  }
LABEL_28:
  if ( !v7 )
    goto LABEL_30;
  return (MstMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v7,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool __fastcall MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  bool v8; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B501 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MstMissionEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B501 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionEntity_TypeInfo
        || v6 >= (__int64)Item[2].klass )
      {
        v8 = ++v7 < Count;
        if ( Count != v7 )
          continue;
      }
      return v8;
    }
LABEL_17:
    sub_1B8880C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B500 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MstMissionEntity_TypeInfo);
    byte_4A5B500 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionEntity_TypeInfo
        || !MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return v7;
    }
LABEL_15:
    sub_1B8880C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  bool result; // w0
  int32_t v10; // w8

  if ( (byte_4A5B4FD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MstMissionEntity_TypeInfo);
    byte_4A5B4FD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, method);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v10 = 0;
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
        goto LABEL_16;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v6,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v5 == ++v6 )
      {
        result = 0;
        v10 = 2;
        goto LABEL_14;
      }
    }
    v10 = 1;
    result = 1;
  }
LABEL_14:
  *(&this->fields.revision + 1) = v10;
  return result;
}