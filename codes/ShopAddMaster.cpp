void ShopAddMaster___ctor(ShopAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59713B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string___ctor__);
    byte_59713B1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    560,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string___ctor__);
}


void ShopAddMaster__CreateCache(ShopAddMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__List_ShopAddEntity___o **p_idCache; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x23
  Il2CppClass *klass; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  void **v27; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59713AF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopAddEntity__TypeInfo);
    byte_59713AF = 1;
  }
  isDirty = this->fields.isDirty;
  value = 0;
  if ( isDirty || !this->fields.idCache )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_ShopAddEntity___o *)v4;
    p_idCache = &this->fields.idCache;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_2213CDC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ShopAddEntity__get_Item__);
      if ( Item )
      {
        v16 = Item;
        list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
        if ( !*p_idCache )
          goto LABEL_19;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v16[1].klass,
                &value,
                (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__) )
        {
          v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopAddEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v23,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopAddEntity___ctor__);
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          value = (Il2CppObject *)v23;
          if ( !list )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)list,
            (int32_t)v16[1].klass,
            (Il2CppObject *)v23,
            (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___set_Item__);
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)value;
        if ( !value )
          goto LABEL_19;
        klass = value[1].klass;
        v25 = Method_System_Collections_Generic_List_ShopAddEntity__Add__;
        ++HIDWORD(value[1].monitor);
        if ( !klass )
          goto LABEL_19;
        klass_low = SLODWORD(list[1].klass);
        if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            v16,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &klass->_1.image + klass_low;
          LODWORD(list[1].klass) = klass_low + 1;
          v27[4] = v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
        }
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      ++v14;
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

  if ( (byte_59713B0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__);
    byte_59713B0 = 1;
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
           (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_ShopAddEntity___TryGetValue__) )
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

  if ( (byte_59713B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__GetEntity__);
    byte_59713B2 = 1;
  }
  PK = (Il2CppObject *)ShopAddEntity__CreatePK(shopId, priority, overwriteType, *(const MethodInfo **)&overwriteType);
  return (ShopAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3F157EC *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__GetEntity__);
}


bool ShopAddMaster__IsItemHidden(ShopAddMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  System_Collections_Generic_List_ShopAddEntity__o *CacheById; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  int64_t klass_low; // x23
  int32_t monitor; // w21
  int32_t monitor_high; // w22

  if ( (byte_59713AE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_59713AE = 1;
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_2213CDC(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && Item[2].klass == (Il2CppClass *)&stru_1FFFF8.r_info )
        {
          klass_low = SLODWORD(Item[3].klass);
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
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
  int64_t klass_low; // x23
  int32_t monitor; // w21
  int32_t monitor_high; // w22

  if ( (byte_59713AC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_59713AC = 1;
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_2213CDC(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && Item[2].klass == (Il2CppClass *)&stru_FFFF0.r_addend )
        {
          klass_low = SLODWORD(Item[3].klass);
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
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
  int64_t klass_low; // x23
  int32_t monitor; // w21
  int32_t monitor_high; // w22

  if ( (byte_59713AD & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
    byte_59713AD = 1;
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopAddEntity__get_Item__);
        if ( !Item )
          sub_2213CDC(0, v9);
        if ( LODWORD(Item[1].monitor) == 1 && !Item[2].klass )
        {
          klass_low = SLODWORD(Item[3].klass);
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
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

  if ( (byte_59713B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__TryGetEntity__);
    byte_59713B3 = 1;
  }
  PK = (Il2CppObject *)ShopAddEntity__CreatePK(shopId, priority, overwriteType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ShopAddMaster__ShopAddEntity__string__TryGetEntity__);
}