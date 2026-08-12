void BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970421 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
    byte_5970421 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *BankShopMaster__GetBuyableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
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
  struct BankShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v23; // x21
  struct BankShopMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5970423 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_2213A60(&System_Comparison_BankShopEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_2213A60(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__);
    sub_2213A60(&BankShopMaster___c_TypeInfo);
    byte_5970423 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_23:
    sub_2213CDC(list, v4);
  }
LABEL_15:
  list = BankShopMaster___c_TypeInfo;
  if ( !*(&BankShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo, v4);
    list = BankShopMaster___c_TypeInfo;
  }
  static_fields = (struct BankShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v4);
      static_fields = BankShopMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v23, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0);
    v24 = BankShopMaster___c_TypeInfo->static_fields;
    v24->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__2_0, (int32_t)_9__2_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71849708(
    v3,
    _9__2_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970422 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970422 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= (__int64)list[6].monitor && Time <= (__int64)list[6].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_2213CDC(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v4,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int64_t klass; // x20
  int32_t v7; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23

  if ( (byte_5970424 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    byte_5970424 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    klass = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v9 = Item;
        if ( (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass <= (__int64)v9[11].klass )
        {
          klass = (int64_t)v9[11].klass;
        }
      }
      if ( v5 == ++v7 )
        return klass;
    }
LABEL_16:
    sub_2213CDC(list, method);
  }
  return 0;
}


void BankShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970425 & 1) == 0 )
  {
    sub_2213A60(&BankShopMaster___c_TypeInfo);
    byte_5970425 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BankShopMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BankShopMaster___c___ctor(BankShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BankShopMaster___c___GetBuyableEntitiyList_b__2_0(
        BankShopMaster___c_o *this,
        BankShopEntity_o *a,
        BankShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}