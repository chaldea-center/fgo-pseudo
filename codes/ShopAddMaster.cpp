void ShopAddMaster___ctor(ShopAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E781D6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string___ctor__);
    byte_4E781D6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    558,
    (const MethodInfo_3538564 *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string___ctor__);
}


void ShopAddMaster__CreateCache(ShopAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_ShopAddEntity___o **p_idCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  void **v26; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E781D4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___set_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ShopAddEntity__TypeInfo);
    byte_4E781D4 = 1;
  }
  value = 0;
  if ( this->fields.isDirty || !this->fields.idCache )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_ShopAddEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1D0F30C(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_34CCE40 *)Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v13,
               (const MethodInfo_34CCED0 *)Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
        if ( !*p_idCache )
          goto LABEL_19;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v15[1].klass,
                &value,
                (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__) )
        {
          v22 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ShopAddEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v22,
            (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ShopAddEntity___ctor__);
          value = (Il2CppObject *)v22;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( !*p_idCache )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)list,
            (int32_t)v15[1].klass,
            (Il2CppObject *)v22,
            (const MethodInfo_35A81F4 *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___set_Item__);
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)value;
        if ( !value )
          goto LABEL_19;
        klass = value[1].klass;
        v24 = Method_System_Collections_Generic_List_ShopAddEntity__Add__;
        ++HIDWORD(value[1].monitor);
        if ( !klass )
          goto LABEL_19;
        klass_low = SLODWORD(list[1].klass);
        if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            v15,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &klass->_1.image + klass_low;
          LODWORD(list[1].klass) = klass_low + 1;
          v26[4] = v15;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
        }
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      ++v13;
      if ( !list )
        goto LABEL_19;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopAddEntity__o *ShopAddMaster__GetCacheById(
        ShopAddMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopAddEntity__o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E781D5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__);
    byte_4E781D5 = 1;
  }
  value = 0;
  ShopAddMaster__CreateCache(this, *(const MethodInfo **)&shopId);
  result = (System_Collections_Generic_List_ShopAddEntity__o *)this->fields.idCache;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           shopId,
           &value,
           (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__) )
    {
      return (System_Collections_Generic_List_ShopAddEntity__o *)value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ShopAddEntity_o *ShopAddMaster__GetEntity(
        ShopAddMaster_o *this,
        int32_t shopId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E781D7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__GetEntity__);
    byte_4E781D7 = 1;
  }
  PK = (Il2CppObject *)ShopAddEntity__CreatePK(shopId, priority, overwriteType, *(const MethodInfo **)&overwriteType);
  return (ShopAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_353AADC *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__GetEntity__);
}


bool ShopAddMaster__IsItemHidden(ShopAddMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  System_Collections_Generic_List_ShopAddEntity__o *CacheById; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22

  if ( (byte_4E781D3 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_4E781D3 = 1;
  }
  CacheById = ShopAddMaster__GetCacheById(this, shopId, method);
  if ( CacheById )
  {
    v6 = (System_Collections_Generic_List_object__o *)CacheById;
    if ( CacheById->fields._size < 1 )
    {
LABEL_13:
      LOBYTE(CacheById) = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v6,
                 v7,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_1D0F30C(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && Item[2].klass == (Il2CppClass *)&stru_200000 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
            break;
        }
        if ( ++v7 >= v6->fields._size )
          goto LABEL_13;
      }
      LOBYTE(CacheById) = 1;
    }
  }
  return (char)CacheById;
}


bool ShopAddMaster__IsItemLowerDisp(ShopAddMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  System_Collections_Generic_List_ShopAddEntity__o *CacheById; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22

  if ( (byte_4E781D1 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_4E781D1 = 1;
  }
  CacheById = ShopAddMaster__GetCacheById(this, shopId, method);
  if ( CacheById )
  {
    v6 = (System_Collections_Generic_List_object__o *)CacheById;
    if ( CacheById->fields._size < 1 )
    {
LABEL_13:
      LOBYTE(CacheById) = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v6,
                 v7,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_1D0F30C(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && Item[2].klass == (Il2CppClass *)&stru_FFFF8.r_info )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
            break;
        }
        if ( ++v7 >= v6->fields._size )
          goto LABEL_13;
      }
      LOBYTE(CacheById) = 1;
    }
  }
  return (char)CacheById;
}


bool ShopAddMaster__IsItemLowerDispCancelled(ShopAddMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  System_Collections_Generic_List_ShopAddEntity__o *CacheById; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22

  if ( (byte_4E781D2 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_4E781D2 = 1;
  }
  CacheById = ShopAddMaster__GetCacheById(this, shopId, method);
  if ( CacheById )
  {
    v6 = (System_Collections_Generic_List_object__o *)CacheById;
    if ( CacheById->fields._size < 1 )
    {
LABEL_13:
      LOBYTE(CacheById) = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v6,
                 v7,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_1D0F30C(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && !Item[2].klass )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
            break;
        }
        if ( ++v7 >= v6->fields._size )
          goto LABEL_13;
      }
      LOBYTE(CacheById) = 1;
    }
  }
  return (char)CacheById;
}


void ShopAddMaster__OnListChangedImplementation(
        ShopAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool ShopAddMaster__TryGetEntity(
        ShopAddMaster_o *this,
        ShopAddEntity_o **entity,
        int32_t shopId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E781D8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__TryGetEntity__);
    byte_4E781D8 = 1;
  }
  PK = (Il2CppObject *)ShopAddEntity__CreatePK(shopId, priority, overwriteType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_353AB28 *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__TryGetEntity__);
}