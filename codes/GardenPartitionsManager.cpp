void GardenPartitionsManager___ctor(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  System_Collections_Generic_Queue_T__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20

  if ( (byte_4D2AD8A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GardenItem__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GardenObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GardenObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Queue_GardenObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Queue_GameObject__TypeInfo);
    sub_1C93AD4(&StringLiteral_18767/*"diagonal_line"*/);
    byte_4D2AD8A = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C93D20(System_Collections_Generic_Queue_GameObject__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_3A217C4 *)Method_System_Collections_Generic_Queue_GameObject___ctor__);
  this->fields.partitionSpritePool = (struct System_Collections_Generic_Queue_GameObject__o *)v3;
  sub_1C93A78(&this->fields.partitionSpritePool, v3);
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1C93D20(System_Collections_Generic_Queue_GardenObject__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_3A217C4 *)Method_System_Collections_Generic_Queue_GardenObject___ctor__);
  this->fields.gardenObjectPool = (struct System_Collections_Generic_Queue_GardenObject__o *)v4;
  sub_1C93A78(&this->fields.gardenObjectPool, v4);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.activePartitionSprites = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1C93A78(&this->fields.activePartitionSprites, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GardenObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GardenObject___ctor__);
  this->fields.activeGardenObjects = (struct System_Collections_Generic_List_GardenObject__o *)v6;
  sub_1C93A78(&this->fields.activeGardenObjects, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.loadAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v7;
  sub_1C93A78(&this->fields.loadAssetDataList, v7);
  *(_OWORD *)&this->fields.imagePartsGroupId = xmmword_D01FF0;
  v8 = StringLiteral_18767/*"diagonal_line"*/;
  this->fields.lineSpriteName = (struct System_String_o *)StringLiteral_18767/*"diagonal_line"*/;
  sub_1C93A78(&this->fields.lineSpriteName, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GardenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GardenItem___ctor__);
  this->fields.gardenItemList = (struct System_Collections_Generic_List_GardenItem__o *)v9;
  sub_1C93A78(&this->fields.gardenItemList, v9);
  *(_OWORD *)&this->fields.maskDiv3 = xmmword_D01060;
  *(_QWORD *)&this->fields.positionAdjustX = 0x3D15B3AC42440000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float GardenPartitionsManager__CalcGameScreenAspectRatio(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  float v2; // s0
  ManagerConfig_c *v3; // x0
  float v4; // s8

  if ( (byte_4D2AD88 & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    byte_4D2AD88 = 1;
  }
  LODWORD(v2) = *(_QWORD *)&FSWindowUtil__GetSize(0);
  v3 = ManagerConfig_TypeInfo;
  v4 = v2;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  return fminf(v4 / (float)v3->static_fields->WIDTH_21_9, 1.0);
}


float GardenPartitionsManager__CalcPartitionPosition(
        GardenPartitionsManager_o *this,
        int32_t dividerIndex,
        int32_t totalPanels,
        const MethodInfo *method)
{
  GardenPartitionsManager_o *v7; // x0
  const MethodInfo *v8; // x1
  float v9; // s0
  float lineDiv4; // s1
  float lineDiv3; // s1

  FSWindowUtil__GetSize(0);
  v9 = GardenPartitionsManager__CalcGameScreenAspectRatio(v7, v8);
  if ( totalPanels == 2 )
    return this->fields.positionAdjustXDiv2 + 0.0;
  lineDiv4 = 0.0;
  switch ( dividerIndex )
  {
    case 2:
      if ( totalPanels == 4 )
        lineDiv4 = this->fields.lineDiv4;
      return (float)(v9 * lineDiv4) + this->fields.positionAdjustX;
    case 1:
      if ( totalPanels == 3 )
        lineDiv4 = this->fields.lineDiv3;
      return (float)(v9 * lineDiv4) + this->fields.positionAdjustX;
    case 0:
      if ( totalPanels == 3 )
      {
        lineDiv3 = this->fields.lineDiv3;
        goto LABEL_14;
      }
      if ( totalPanels == 4 )
      {
        lineDiv3 = this->fields.lineDiv4;
LABEL_14:
        lineDiv4 = -lineDiv3;
      }
      break;
  }
  return (float)(v9 * lineDiv4) + this->fields.positionAdjustX;
}


void GardenPartitionsManager__CallBackOpened(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Action_o *callback; // x0
  struct System_Action_o **p_callback; // x19

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
  {
    ActionExtensions__Call(callback, 0);
    *p_callback = 0;
    sub_1C93A78(p_callback, 0);
  }
}


void GardenPartitionsManager__CreateGardenObject(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gardenItemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_Queue_GardenObject__o *gardenObjectPool; // x8
  GardenItem_o *current; // x20
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *gardenObjectBase; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *activeGardenObjects; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  struct System_Collections_Generic_List_GardenItem__o *v28; // x9
  int32_t typeValue; // w20
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  float MaskOffsetValue; // s0
  struct System_Collections_Generic_List_GardenItem__o *v34; // x8
  float v35; // s8
  float GardenOffsetValue; // s1
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2AD86 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_GardenObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem__get_Count__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GardenObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GardenObject__Dequeue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GardenObject__get_Count__);
    byte_4D2AD86 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  gardenItemList = (System_Collections_Generic_List_object__o *)this->fields.gardenItemList;
  if ( !gardenItemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    gardenItemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GardenItem__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v39,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GardenItem__MoveNext__);
    if ( !v4 )
      break;
    gardenObjectPool = this->fields.gardenObjectPool;
    if ( !gardenObjectPool )
      sub_1C93D2C(v4, v5);
    current = (GardenItem_o *)v39.fields._current;
    if ( gardenObjectPool->fields._size < 1 )
    {
      gardenObjectBase = (Il2CppObject *)this->fields.gardenObjectBase;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              gardenObjectBase,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GardenObject___);
      if ( !v12 )
        sub_1C93D2C(0, v13);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v12,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_GardenObject___);
    }
    else
    {
      Component_object = System_Collections_Generic_Queue_object___Dequeue(
                           (System_Collections_Generic_Queue_T__o *)this->fields.gardenObjectPool,
                           (const MethodInfo_3A21F1C *)Method_System_Collections_Generic_Queue_GardenObject__Dequeue__);
    }
    v14 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      sub_1C93D2C(0, v9);
    GardenObject__SetItem((GardenObject_o *)Component_object, current, v10);
    gameObject = UnityEngine_Component__get_gameObject(v14, 0);
    GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0);
    v16 = UnityEngine_Component__get_gameObject(v14, 0);
    if ( !v16 )
      sub_1C93D2C(0, v17);
    UnityEngine_GameObject__SetActive(v16, 1, 0);
    activeGardenObjects = (System_Collections_Generic_List_object__o *)this->fields.activeGardenObjects;
    if ( !activeGardenObjects )
      sub_1C93D2C(0, v18);
    items = activeGardenObjects->fields._items;
    v21 = Method_System_Collections_Generic_List_GardenObject__Add__;
    ++activeGardenObjects->fields._version;
    if ( !items )
      sub_1C93D2C(activeGardenObjects, v18);
    size = activeGardenObjects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        activeGardenObjects,
        (Il2CppObject *)v14,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      activeGardenObjects->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v14;
      v24 = sub_1C93A78(v23 + 4, v14);
    }
    if ( !current )
      sub_1C93D2C(v24, v25);
    imagePartsGroupEntity = current->fields.imagePartsGroupEntity;
    if ( !imagePartsGroupEntity )
      sub_1C93D2C(v24, v25);
    v28 = this->fields.gardenItemList;
    if ( !v28 )
      sub_1C93D2C(v24, v25);
    typeValue = imagePartsGroupEntity->fields.typeValue;
    MaskOffsetValue = GardenPartitionsManager__GetMaskOffsetValue(this, v28->fields._size, typeValue, v26);
    v34 = this->fields.gardenItemList;
    if ( !v34 )
      sub_1C93D2C(v30, v31);
    v35 = MaskOffsetValue;
    GardenOffsetValue = GardenPartitionsManager__GetGardenOffsetValue(this, v34->fields._size, typeValue, v32);
    GardenObject__ApplyCustomMaterial((GardenObject_o *)v14, v35, GardenOffsetValue, typeValue, v37);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GardenItem__Dispose__);
}


void GardenPartitionsManager__CreateGardens(
        GardenPartitionsManager_o *this,
        UnityEngine_Texture_o *mask,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  GardenPartitionsManager__CreateItem(this, mask, assetData, method);
  GardenPartitionsManager__CreateGardenObject(this, v5);
  GardenPartitionsManager__CreatePartition(this, v6);
  GardenPartitionsManager__CallBackOpened(this, v7);
}


void GardenPartitionsManager__CreateItem(
        GardenPartitionsManager_o *this,
        UnityEngine_Texture_o *mask,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OpenEntities; // x0
  System_Object_array *v9; // x0
  GardenPartitionsManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  System_Func_object__bool__o *_9__30_0; // x23
  Il2CppObject *v13; // x24
  struct GardenPartitionsManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  __int64 v18; // x22
  unsigned __int64 v19; // x27
  __int64 v20; // x20
  ImagePartsGroupEntity_o *v21; // x23
  System_String_o *v22; // x24
  Il2CppObject *Object_object__51927708; // x25
  Il2CppObject *Component_object; // x26
  System_String_o *v25; // x25
  GardenItem_o *v26; // x24
  const MethodInfo *v27; // x5
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8

  if ( (byte_4D2AD85 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&GardenItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem__Add__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_GardenPartitionsManager___c__CreateItem_b__30_0__);
    sub_1C93AD4(&GardenPartitionsManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_17270/*"bg_"*/);
    byte_4D2AD85 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  OpenEntities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetOpenEntities(
                                                                        (ImagePartsGroupMaster_o *)Master_object,
                                                                        this->fields.imagePartsGroupId,
                                                                        0);
  v9 = System_Linq_Enumerable__ToArray_object_(
         OpenEntities,
         (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  v10 = GardenPartitionsManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !GardenPartitionsManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GardenPartitionsManager___c_TypeInfo);
    v10 = GardenPartitionsManager___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__bool__o *)v10->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = GardenPartitionsManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v13, Method_GardenPartitionsManager___c__CreateItem_b__30_0__, 0);
    static_fields = GardenPartitionsManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__30_0;
    sub_1C93A78(&static_fields->__9__30_0, _9__30_0);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToArray_object_(
                             v15,
                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  if ( !Master_object )
    goto LABEL_29;
  v17 = *(_QWORD *)(Master_object + 24);
  v18 = Master_object;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = Master_object + 32;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        sub_1C93D34(Master_object);
      v21 = *(ImagePartsGroupEntity_o **)(v20 + 8 * v19);
      Master_object = (__int64)GardenPartitionsManager__GetAtlasName(this, v21, v16);
      if ( !assetData )
        break;
      v22 = (System_String_o *)Master_object;
      Object_object__51927708 = AssetData__GetObject_object__51927708(
                                  assetData,
                                  (System_String_o *)Master_object,
                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
      Component_object = 0;
      if ( (Master_object & 1) != 0 )
      {
        if ( !Object_object__51927708 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51927708,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      }
      v25 = System_String__Concat_64425724((System_String_o *)StringLiteral_17270/*"bg_"*/, v22, 0);
      v26 = (GardenItem_o *)sub_1C93D20(GardenItem_TypeInfo);
      GardenItem___ctor(v26, (UIAtlas_o *)Component_object, v21, v25, mask, v27);
      Master_object = (__int64)this->fields.gardenItemList;
      if ( !Master_object )
        break;
      v28 = *(_QWORD *)(Master_object + 16);
      v29 = Method_System_Collections_Generic_List_GardenItem__Add__;
      ++*(_DWORD *)(Master_object + 28);
      if ( !v28 )
        break;
      v30 = *(int *)(Master_object + 24);
      if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Master_object,
          (Il2CppObject *)v26,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = v28 + 8 * v30;
        *(_DWORD *)(Master_object + 24) = v30 + 1;
        *(_QWORD *)(v31 + 32) = v26;
        Master_object = sub_1C93A78(v31 + 32, v26);
      }
      LODWORD(v17) = *(_DWORD *)(v18 + 24);
      if ( (__int64)++v19 >= (int)v17 )
        return;
    }
LABEL_29:
    sub_1C93D2C(Master_object, v7);
  }
}


void GardenPartitionsManager__CreatePartition(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  GardenPartitionsManager_o *v2; // x19
  struct System_Collections_Generic_List_GardenItem__o *gardenItemList; // x8
  int32_t v4; // w20
  GardenPartitionsManager_o *v5; // x21
  UnityEngine_Transform_o *v6; // x22
  Il2CppObject *partitionSpriteBase; // x21
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_GardenItem__o *v10; // x8
  GardenPartitionsManager_o *v11; // x22
  Il2CppObject *Component_object; // x22
  int32_t eventId; // w24
  System_String_o *lineSpriteName; // x23
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2AD87 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem__get_Count__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GameObject__Dequeue__);
    this = (GardenPartitionsManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_Queue_GameObject__get_Count__);
    byte_4D2AD87 = 1;
  }
  gardenItemList = v2->fields.gardenItemList;
  if ( !gardenItemList )
LABEL_28:
    sub_1C93D2C(this, method);
  v4 = 0;
  while ( v4 < gardenItemList->fields._size - 1 )
  {
    this = (GardenPartitionsManager_o *)v2->fields.partitionSpritePool;
    if ( !this )
      goto LABEL_28;
    if ( SLODWORD(this->fields.gardenObjectBase) < 1 )
    {
      partitionSpriteBase = (Il2CppObject *)v2->fields.partitionSpriteBase;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (GardenPartitionsManager_o *)UnityEngine_Object__Instantiate_object__52629400(
                                            partitionSpriteBase,
                                            transform,
                                            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      v5 = this;
      if ( !this )
        goto LABEL_28;
    }
    else
    {
      this = (GardenPartitionsManager_o *)System_Collections_Generic_Queue_object___Dequeue(
                                            (System_Collections_Generic_Queue_T__o *)this,
                                            (const MethodInfo_3A21F1C *)Method_System_Collections_Generic_Queue_GameObject__Dequeue__);
      if ( !this )
        goto LABEL_28;
      v5 = this;
      v6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (GardenPartitionsManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( !v6 )
        goto LABEL_28;
      UnityEngine_Transform__SetParent_72143348(v6, (UnityEngine_Transform_o *)this, 0, 0);
    }
    this = (GardenPartitionsManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
    v10 = v2->fields.gardenItemList;
    if ( v10 )
    {
      v11 = this;
      v19.fields.x = GardenPartitionsManager__CalcPartitionPosition(v2, v4, v10->fields._size, v9);
      if ( v11 )
      {
        v19.fields.y = 0.0;
        v19.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v19, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v5,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          eventId = v2->fields.eventId;
          lineSpriteName = v2->fields.lineSpriteName;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI_41320352(eventId, (UISprite_o *)Component_object, lineSpriteName, 0);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
        this = (GardenPartitionsManager_o *)v2->fields.activePartitionSprites;
        if ( this )
        {
          m_CachedPtr = this->fields.m_CachedPtr;
          v16 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v5,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v18 + 32) = v5;
              this = (GardenPartitionsManager_o *)sub_1C93A78(v18 + 32, v5);
            }
            gardenItemList = v2->fields.gardenItemList;
            ++v4;
            if ( gardenItemList )
              continue;
          }
        }
      }
    }
    goto LABEL_28;
  }
}


System_String_o *GardenPartitionsManager__GetAtlasName(
        GardenPartitionsManager_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        const MethodInfo *method)
{
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imagePartsGroupEntity )
    sub_1C93D2C(this, 0);
  v4 = 100 * imagePartsGroupEntity->fields.imageValue
     + 300 * imagePartsGroupEntity->fields.typeValue
     + this->fields.baseAssetName
     - 400;
  return System_Int32__ToString((int32_t)&v4, 0);
}


float GardenPartitionsManager__GetGardenOffsetValue(
        GardenPartitionsManager_o *this,
        int32_t gardenNum,
        int32_t split,
        const MethodInfo *method)
{
  __int64 v7; // x22
  GardenPartitionsManager_o *v8; // x0
  const MethodInfo *v9; // x1
  float v10; // s0
  struct System_Collections_Generic_List_GardenPartitionsManager_MainTextureOffsetInfo__o *gardenMainTextureOffsetInfoList; // x19
  float v12; // s8
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *v14; // x0
  float v15; // s0

  if ( (byte_4D2AD89 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_GardenPartitionsManager_MainTextureOffsetInfo___);
    sub_1C93AD4(&System_Func_GardenPartitionsManager_MainTextureOffsetInfo__bool__TypeInfo);
    sub_1C93AD4(&Method_GardenPartitionsManager___c__DisplayClass37_0__GetGardenOffsetValue_b__0__);
    sub_1C93AD4(&GardenPartitionsManager___c__DisplayClass37_0_TypeInfo);
    byte_4D2AD89 = 1;
  }
  v7 = sub_1C93D20(GardenPartitionsManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = gardenNum;
  *(_DWORD *)(v7 + 20) = split;
  v10 = GardenPartitionsManager__CalcGameScreenAspectRatio(v8, v9);
  gardenMainTextureOffsetInfoList = this->fields.gardenMainTextureOffsetInfoList;
  v12 = v10;
  v13 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GardenPartitionsManager_MainTextureOffsetInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_GardenPartitionsManager___c__DisplayClass37_0__GetGardenOffsetValue_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)gardenMainTextureOffsetInfoList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_GardenPartitionsManager_MainTextureOffsetInfo___);
  if ( v14 )
    v15 = *(float *)&v14[1].monitor;
  else
    v15 = 0.0;
  return v12 * v15;
}


// local variable allocation has failed, the output may be wrong!
float GardenPartitionsManager__GetMaskOffsetValue(
        GardenPartitionsManager_o *this,
        int32_t gardenNum,
        int32_t split,
        const MethodInfo *method)
{
  float v7; // s0
  float maskDiv4; // s1
  float maskDiv3; // s1

  v7 = GardenPartitionsManager__CalcGameScreenAspectRatio(this, *(const MethodInfo **)&gardenNum);
  maskDiv4 = 0.0;
  switch ( gardenNum )
  {
    case 4:
      if ( split == 2 )
      {
        maskDiv4 = this->fields.maskDiv4;
        return (float)(v7 * maskDiv4) - this->fields.offsetValue;
      }
      if ( split == 4 )
      {
        maskDiv3 = this->fields.maskDiv4;
LABEL_11:
        maskDiv4 = -maskDiv3;
      }
      break;
    case 3:
      if ( split == 2 )
      {
        maskDiv4 = this->fields.maskDiv3;
        return (float)(v7 * maskDiv4) - this->fields.offsetValue;
      }
      if ( split == 3 )
      {
        maskDiv3 = this->fields.maskDiv3;
        goto LABEL_11;
      }
      break;
    case 2:
      return this->fields.maskDiv2 - this->fields.offsetValueDiv2;
    default:
      return (float)(v7 * maskDiv4) - this->fields.offsetValue;
  }
  return (float)(v7 * maskDiv4) - this->fields.offsetValue;
}


void GardenPartitionsManager__Init(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *activePartitionSprites; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x1
  System_Collections_Generic_Queue_T__o *partitionSpritePool; // x0
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Queue_T__o *gardenObjectPool; // x0
  struct System_Collections_Generic_List_GardenObject__o *activeGardenObjects; // x8
  int32_t v20; // w2
  int v21; // w9
  struct System_Collections_Generic_List_GardenItem__o *gardenItemList; // x8
  int32_t v23; // w2
  int v24; // w9
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4D2AD82 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GardenObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenItem__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GardenObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GameObject__Enqueue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_GardenObject__Enqueue__);
    byte_4D2AD82 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  activePartitionSprites = (System_Collections_Generic_List_object__o *)this->fields.activePartitionSprites;
  if ( !activePartitionSprites )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    activePartitionSprites,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v25;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C93D2C(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27.fields._current, 0, 0);
    partitionSpritePool = (System_Collections_Generic_Queue_T__o *)this->fields.partitionSpritePool;
    if ( !partitionSpritePool )
      sub_1C93D2C(0, v7);
    System_Collections_Generic_Queue_object___Enqueue(
      partitionSpritePool,
      current,
      (const MethodInfo_3A21D8C *)Method_System_Collections_Generic_Queue_GameObject__Enqueue__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v9 = this->fields.activePartitionSprites;
  if ( !v9 )
    goto LABEL_31;
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  activePartitionSprites = (System_Collections_Generic_List_object__o *)this->fields.activeGardenObjects;
  if ( !activePartitionSprites )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    activePartitionSprites,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GardenObject__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GardenObject__MoveNext__);
    if ( !v12 )
      break;
    v14 = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C93D2C(v12, v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields._current, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v16);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gardenObjectPool = (System_Collections_Generic_Queue_T__o *)this->fields.gardenObjectPool;
    if ( !gardenObjectPool )
      sub_1C93D2C(0, v17);
    System_Collections_Generic_Queue_object___Enqueue(
      gardenObjectPool,
      v14,
      (const MethodInfo_3A21D8C *)Method_System_Collections_Generic_Queue_GardenObject__Enqueue__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GardenObject__Dispose__);
  activeGardenObjects = this->fields.activeGardenObjects;
  if ( !activeGardenObjects )
    goto LABEL_31;
  v20 = activeGardenObjects->fields._size;
  v21 = activeGardenObjects->fields._version + 1;
  activeGardenObjects->fields._size = 0;
  activeGardenObjects->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)activeGardenObjects->fields._items, 0, v20, 0);
  gardenItemList = this->fields.gardenItemList;
  if ( !gardenItemList )
LABEL_31:
    sub_1C93D2C(activePartitionSprites, method);
  v23 = gardenItemList->fields._size;
  v24 = gardenItemList->fields._version + 1;
  gardenItemList->fields._size = 0;
  gardenItemList->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)gardenItemList->fields._items, 0, v23, 0);
}


void GardenPartitionsManager__OnDestroy(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *loadAssetDataList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssetData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2AD83 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4D2AD83 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  loadAssetDataList = this->fields.loadAssetDataList;
  if ( loadAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)loadAssetDataList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41247948((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v7 = this->fields.loadAssetDataList;
    if ( !v7 )
      sub_1C93D2C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void GardenPartitionsManager__Open(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  System_String_o *v4; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21
  const MethodInfo *v6; // x1
  int32_t myRoomFolder; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2AD84 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_GardenPartitionsManager__Open_b__29_0__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&StringLiteral_9268/*"MyRoom/BackObject/{0}"*/);
    byte_4D2AD84 = 1;
  }
  myRoomFolder = this->fields.myRoomFolder;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &myRoomFolder);
  v4 = System_String__Format((System_String_o *)StringLiteral_9268/*"MyRoom/BackObject/{0}"*/, v3, 0);
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_GardenPartitionsManager__Open_b__29_0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v4, v5, 1, 0) )
    GardenPartitionsManager__CallBackOpened(this, v6);
}


void GardenPartitionsManager__SetCallBackOpened(
        GardenPartitionsManager_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  this->fields.callback = action;
  sub_1C93A78(&this->fields.callback, action);
}


void GardenPartitionsManager__Start(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  GardenPartitionsManager__Init(this, method);
  GardenPartitionsManager__Open(this, v3);
}


void GardenPartitionsManager___Open_b__29_0(
        GardenPartitionsManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_Collections_Generic_List_object__o *loadAssetDataList; // x0
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  int32_t v15; // w19
  System_Action_o *v16; // x21
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2AD8B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__1__);
    sub_1C93AD4(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__2__);
    sub_1C93AD4(&GardenPartitionsManager___c__DisplayClass29_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_6305/*"EventUI/Prefabs/{0}"*/);
    byte_4D2AD8B = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(GardenPartitionsManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v5[2].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[2], this);
  v5[1].monitor = assetData;
  sub_1C93A78(&v5[1].monitor, assetData);
  loadAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.loadAssetDataList;
  if ( !loadAssetDataList
    || (monitor = (Il2CppObject *)v5[1].monitor,
        items = loadAssetDataList->fields._items,
        v9 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++loadAssetDataList->fields._version,
        !items) )
  {
LABEL_16:
    sub_1C93D2C(loadAssetDataList, monitor);
  }
  size = loadAssetDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadAssetDataList,
      monitor,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    loadAssetDataList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)monitor;
    sub_1C93A78(v11 + 4, monitor);
  }
  v5[1].klass = 0;
  sub_1C93A78(&v5[1], 0);
  eventId = this->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v13 = System_String__Format((System_String_o *)StringLiteral_6305/*"EventUI/Prefabs/{0}"*/, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, v5, Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__1__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v13, v14, 1, 0) )
  {
    v15 = this->fields.eventId;
    v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v16, v5, Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__2__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI_41320056(v15, v16, 1, 0);
  }
}


void GardenPartitionsManager_MainTextureOffsetInfo___ctor(
        GardenPartitionsManager_MainTextureOffsetInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GardenPartitionsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2AD8C & 1) == 0 )
  {
    sub_1C93AD4(&GardenPartitionsManager___c_TypeInfo);
    byte_4D2AD8C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(GardenPartitionsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GardenPartitionsManager___c_TypeInfo->static_fields->__9 = (struct GardenPartitionsManager___c_o *)v1;
  sub_1C93A78(GardenPartitionsManager___c_TypeInfo->static_fields, v1);
}


void GardenPartitionsManager___c___ctor(GardenPartitionsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GardenPartitionsManager___c___CreateItem_b__30_0(
        GardenPartitionsManager___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return v->fields.imageValue > 0;
}


void GardenPartitionsManager___c__DisplayClass29_0___ctor(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GardenPartitionsManager___c__DisplayClass29_0___Open_b__1(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        AssetData_o *eventUIData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppClass *klass; // x8
  struct UnityEngine_Texture_o *mask; // x8
  _QWORD *v7; // x9
  __int64 assetData_low; // x10
  UnityEngine_Texture_c **v9; // x8
  Il2CppObject *Object_object__51927708; // x0
  Il2CppClass *v11; // x8
  int32_t generic_class; // w20
  System_Action_o *monitor; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4D2AD8D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_Texture___);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C93AD4(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__3__);
    this = (GardenPartitionsManager___c__DisplayClass29_0_o *)sub_1C93AD4(&StringLiteral_21703/*"mask_div2_01"*/);
    byte_4D2AD8D = 1;
  }
  klass = v4[2].klass;
  if ( !klass )
    goto LABEL_16;
  this = (GardenPartitionsManager___c__DisplayClass29_0_o *)klass->_1.declaringType;
  if ( !this )
    goto LABEL_16;
  mask = this->fields.mask;
  v7 = Method_System_Collections_Generic_List_AssetData__Add__;
  ++HIDWORD(this->fields.assetData);
  if ( !mask )
    goto LABEL_16;
  assetData_low = SLODWORD(this->fields.assetData);
  if ( (unsigned int)assetData_low >= LODWORD(mask[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventUIData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &mask->klass + assetData_low;
    LODWORD(this->fields.assetData) = assetData_low + 1;
    v9[4] = (UnityEngine_Texture_c *)eventUIData;
    this = (GardenPartitionsManager___c__DisplayClass29_0_o *)sub_1C93A78(v9 + 4, eventUIData);
  }
  if ( !eventUIData
    || (Object_object__51927708 = AssetData__GetObject_object__51927708(
                                    eventUIData,
                                    (System_String_o *)StringLiteral_21703/*"mask_div2_01"*/,
                                    (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture___),
        v4[1].klass = (Il2CppClass *)Object_object__51927708,
        this = (GardenPartitionsManager___c__DisplayClass29_0_o *)sub_1C93A78(&v4[1], Object_object__51927708),
        (v11 = v4[2].klass) == 0) )
  {
LABEL_16:
    sub_1C93D2C(this, eventUIData);
  }
  generic_class = (int32_t)v11->_1.generic_class;
  monitor = (System_Action_o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(monitor, v4, Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__3__, 0);
    v4[2].monitor = monitor;
    sub_1C93A78(&v4[2].monitor, monitor);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41320056(generic_class, monitor, 1, 0);
}


void GardenPartitionsManager___c__DisplayClass29_0___Open_b__2(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  GardenPartitionsManager__CreateGardens(this->fields.__4__this, this->fields.mask, this->fields.assetData, v2);
}


void GardenPartitionsManager___c__DisplayClass29_0___Open_b__3(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  GardenPartitionsManager__CreateGardens(this->fields.__4__this, this->fields.mask, this->fields.assetData, v2);
}


void GardenPartitionsManager___c__DisplayClass37_0___ctor(
        GardenPartitionsManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GardenPartitionsManager___c__DisplayClass37_0___GetGardenOffsetValue_b__0(
        GardenPartitionsManager___c__DisplayClass37_0_o *this,
        GardenPartitionsManager_MainTextureOffsetInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.gardenNum == this->fields.gardenNum && x->fields.split == this->fields.split;
}