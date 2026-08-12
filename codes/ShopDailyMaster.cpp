void ShopDailyMaster___ctor(ShopDailyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59713BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string___ctor__);
    byte_59713BC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    125,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDailyEntity_o *ShopDailyMaster__GetEntity(
        ShopDailyMaster_o *this,
        int32_t dayKey,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59713BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__GetEntity__);
    byte_59713BD = 1;
  }
  PK = (Il2CppObject *)ShopDailyEntity__CreatePK(dayKey, shopId, *(const MethodInfo **)&shopId);
  return (ShopDailyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopDailyEntity__o *ShopDailyMaster__GetTodayEnableEntityList(
        ShopDailyMaster_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  System_Object_array *Entitys; // x0
  MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v9; // x21
  unsigned __int64 v10; // x23
  Il2CppObject *v11; // x22
  __int64 v12; // x1
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_59713B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopDailyEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopDailyEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopDailyEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713B7 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&shopType);
  Time = NetworkManager__getTime(0);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopDailyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopDailyEntity___ctor__);
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
  if ( Entitys )
  {
    max_length = Entitys->max_length;
    v9 = Entitys;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_2213CE4(Entitys);
        v11 = v9->m_Items[v10];
        if ( v11 )
        {
          Entitys = (System_Object_array *)ShopDailyEntity__IsValid((ShopDailyEntity_o *)v9->m_Items[v10], Time, v7);
          if ( ((unsigned __int8)Entitys & 1) != 0 )
          {
            if ( !v5
              || (items = v5->fields._items,
                  v19 = Method_System_Collections_Generic_List_ShopDailyEntity__Add__,
                  ++v5->fields._version,
                  !items) )
            {
              sub_2213CDC(Entitys, v12);
            }
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v11,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v11;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v21 + 4),
                (int32_t)v11,
                (System_String_o *)v7,
                v13,
                v14,
                v15,
                v16,
                v17);
            }
          }
        }
        LODWORD(max_length) = v9->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)max_length );
    }
  }
  return (System_Collections_Generic_List_ShopDailyEntity__o *)v5;
}


bool ShopDailyMaster__IsAllCondClear(
        ShopDailyMaster_o *this,
        int32_t shopId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Object_array *Entitys; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v11; // x21
  unsigned __int64 v12; // x23
  Il2CppObject *v13; // x22
  __int64 v14; // x1
  const MethodInfo *v16; // x2

  if ( (byte_59713BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
    byte_59713BB = 1;
  }
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
  if ( !Entitys )
    goto LABEL_17;
  max_length = Entitys->max_length;
  v11 = Entitys;
  if ( (int)max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)max_length )
      sub_2213CE4(Entitys);
    v13 = v11->m_Items[v12];
    if ( v13 )
    {
      if ( HIDWORD(v13[1].klass) == shopId )
      {
        Entitys = (System_Object_array *)ShopDailyEntity__IsValid((ShopDailyEntity_o *)v11->m_Items[v12], nowTime, v9);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
          break;
      }
    }
    LODWORD(max_length) = v11->max_length;
    if ( (__int64)++v12 >= (int)max_length )
      return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Entitys = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !Entitys )
LABEL_17:
    sub_2213CDC(Entitys, v8);
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Entitys, HIDWORD(v13[1].klass), v16);
}


bool ShopDailyMaster__IsOpen(ShopDailyMaster_o *this, int32_t shopId, int64_t nowTime, const MethodInfo *method)
{
  System_Object_array *Entitys; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v11; // x21
  unsigned __int64 v12; // x22
  __int64 v13; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59713BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
    byte_59713BA = 1;
  }
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
  if ( !Entitys )
    goto LABEL_17;
  max_length = Entitys->max_length;
  v11 = Entitys;
  if ( (int)max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)max_length )
      sub_2213CE4(Entitys);
    Entitys = (System_Object_array *)v11->m_Items[v12];
    if ( Entitys )
    {
      if ( HIDWORD(Entitys->bounds) == shopId )
      {
        Entitys = (System_Object_array *)ShopDailyEntity__IsValid((ShopDailyEntity_o *)Entitys, nowTime, v9);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
          break;
      }
    }
    LODWORD(max_length) = v11->max_length;
    if ( (__int64)++v12 >= (int)max_length )
      return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Entitys = (System_Object_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !Entitys )
LABEL_17:
    sub_2213CDC(Entitys, v8);
  return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Entitys, shopId, v15);
}


bool ShopDailyMaster__IsValid(ShopDailyMaster_o *this, int32_t shopId, int64_t nowTime, const MethodInfo *method)
{
  System_Object_array *Entitys; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v11; // x21
  bool v12; // w22
  unsigned __int64 v13; // x23

  if ( (byte_59713B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
    byte_59713B9 = 1;
  }
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
  if ( !Entitys )
    sub_2213CDC(0, v8);
  max_length = Entitys->max_length;
  v11 = Entitys;
  v12 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_2213CE4(Entitys);
      Entitys = (System_Object_array *)v11->m_Items[v13];
      if ( Entitys )
      {
        if ( HIDWORD(Entitys->bounds) == shopId )
        {
          Entitys = (System_Object_array *)ShopDailyEntity__IsValid((ShopDailyEntity_o *)Entitys, nowTime, v9);
          if ( ((unsigned __int8)Entitys & 1) != 0 )
            break;
        }
      }
      LODWORD(max_length) = v11->max_length;
      v12 = (__int64)++v13 < (int)max_length;
    }
    while ( (__int64)v13 < (int)max_length );
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
bool ShopDailyMaster__TryGetEnableEntity(
        ShopDailyMaster_o *this,
        ShopDailyEntity_o **entity,
        int32_t shopId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Object_array *Entitys; // x0
  MethodInfo *v13; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v15; // x22
  unsigned __int64 v16; // x24
  ShopDailyEntity_o *v17; // x23
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_59713B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
    byte_59713B8 = 1;
  }
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    *(System_String_o **)&shopId,
    (System_String_o *)nowTime,
    (int32_t)method,
    v5,
    v6,
    v7);
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__getEntitys__);
  if ( Entitys )
  {
    max_length = Entitys->max_length;
    v15 = Entitys;
    if ( (int)max_length < 1 )
    {
LABEL_12:
      LOBYTE(Entitys) = 0;
      return (char)Entitys;
    }
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_2213CE4(Entitys);
      v17 = (ShopDailyEntity_o *)v15->m_Items[v16];
      if ( v17 && v17->fields.shopId == shopId )
      {
        Entitys = (System_Object_array *)ShopDailyEntity__IsValid((ShopDailyEntity_o *)v15->m_Items[v16], nowTime, v13);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
        {
          *entity = v17;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)entity,
            (int32_t)v17,
            (System_String_o *)v13,
            v18,
            v19,
            v20,
            v21,
            v22);
          LOBYTE(Entitys) = 1;
          return (char)Entitys;
        }
        LODWORD(max_length) = v15->max_length;
      }
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_12;
    }
  }
  return (char)Entitys;
}


// local variable allocation has failed, the output may be wrong!
bool ShopDailyMaster__TryGetEntity(
        ShopDailyMaster_o *this,
        ShopDailyEntity_o **entity,
        int32_t dayKey,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59713BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__TryGetEntity__);
    byte_59713BE = 1;
  }
  PK = (Il2CppObject *)ShopDailyEntity__CreatePK(dayKey, shopId, *(const MethodInfo **)&dayKey);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ShopDailyMaster__ShopDailyEntity__string__TryGetEntity__);
}