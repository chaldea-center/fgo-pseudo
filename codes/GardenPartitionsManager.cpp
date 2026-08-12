void GardenPartitionsManager___ctor(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Queue_T__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_596A83C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GardenObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GardenItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GardenObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GardenObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_Queue_GardenObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Queue_GameObject__TypeInfo);
    sub_2213A60(&StringLiteral_19450/*"diagonal_line"*/);
    byte_596A83C = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_GameObject__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_GameObject___ctor__);
  this->fields.partitionSpritePool = (struct System_Collections_Generic_Queue_GameObject__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partitionSpritePool,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_GardenObject__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_GardenObject___ctor__);
  this->fields.gardenObjectPool = (struct System_Collections_Generic_Queue_GardenObject__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gardenObjectPool,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.activePartitionSprites = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activePartitionSprites,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GardenObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GardenObject___ctor__);
  this->fields.activeGardenObjects = (struct System_Collections_Generic_List_GardenObject__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activeGardenObjects,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.loadAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetDataList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  *(_OWORD *)&this->fields.imagePartsGroupId = xmmword_E9DB60;
  v38 = StringLiteral_19450/*"diagonal_line"*/;
  this->fields.lineSpriteName = (struct System_String_o *)StringLiteral_19450/*"diagonal_line"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.lineSpriteName, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GardenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GardenItem___ctor__);
  this->fields.gardenItemList = (struct System_Collections_Generic_List_GardenItem__o *)v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gardenItemList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  *(_OWORD *)&this->fields.maskDiv3 = xmmword_E9D7C0;
  *(_QWORD *)&this->fields.positionAdjustX = 0x3D15B3AC42440000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float GardenPartitionsManager__CalcGameScreenAspectRatio(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v2; // x1
  UnityEngine_Vector2_o v3; // x2
  float v4; // s0
  ManagerConfig_c *v5; // x0
  float v6; // s8
  float result; // s0

  if ( (byte_596A83A & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596A83A = 1;
  }
  LODWORD(v4) = *(_QWORD *)&FSWindowUtil__GetSize(0);
  v5 = ManagerConfig_TypeInfo;
  v6 = v4;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(ManagerConfig_TypeInfo, v2, v3);
    v5 = ManagerConfig_TypeInfo;
  }
  result = v6 / (float)v5->static_fields->WIDTH_21_9;
  if ( result > 1.0 )
    return 1.0;
  return result;
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
  MissionNaviTransitionBoardItem_o *p_callback; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_callback = (MissionNaviTransitionBoardItem_o *)&this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
  {
    ActionExtensions__Call(callback, 0);
    p_callback->klass = 0;
    sub_2213A04(p_callback, 0, v4, v5, v6, v7, v8, v9);
  }
}


void GardenPartitionsManager__CreateGardenObject(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gardenItemList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Queue_T__o *gardenObjectPool; // x0
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *activeGardenObjects; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  struct System_Collections_Generic_List_GardenItem__o *v34; // x9
  int32_t typeValue; // w20
  __int64 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  float MaskOffsetValue; // s0
  struct System_Collections_Generic_List_GardenItem__o *v40; // x8
  float v41; // s8
  float GardenOffsetValue; // s0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A838 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_GardenObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem__get_Count__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GardenObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GardenObject__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GardenObject__get_Count__);
    byte_596A838 = 1;
  }
  gardenItemList = (System_Collections_Generic_List_object__o *)this->fields.gardenItemList;
  memset(&v45, 0, sizeof(v45));
  if ( !gardenItemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    gardenItemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GardenItem__GetEnumerator__);
  v45 = v44;
  v44.fields._list = 0;
  *(_QWORD *)&v44.fields._index = &v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GardenItem__MoveNext__) )
  {
    gardenObjectPool = (System_Collections_Generic_Queue_T__o *)this->fields.gardenObjectPool;
    if ( !gardenObjectPool )
      sub_2213CDC(0, v4);
    current = (GardenItem_o *)v45.fields._current;
    if ( gardenObjectPool->fields._size < 1 )
    {
      gardenObjectBase = (Il2CppObject *)this->fields.gardenObjectBase;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      v12 = UnityEngine_Object__Instantiate_object_(
              gardenObjectBase,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GardenObject___);
      if ( !v12 )
        sub_2213CDC(0, v13);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v12,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_GardenObject___);
    }
    else
    {
      Component_object = System_Collections_Generic_Queue_object___Dequeue(
                           gardenObjectPool,
                           (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_GardenObject__Dequeue__);
    }
    v14 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      sub_2213CDC(0, v9);
    GardenObject__SetItem((GardenObject_o *)Component_object, current, v10);
    gameObject = UnityEngine_Component__get_gameObject(v14, 0);
    GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0);
    v16 = UnityEngine_Component__get_gameObject(v14, 0);
    if ( !v16 )
      sub_2213CDC(0, v17);
    UnityEngine_GameObject__SetActive(v16, 1, 0);
    activeGardenObjects = (System_Collections_Generic_List_object__o *)this->fields.activeGardenObjects;
    if ( !activeGardenObjects
      || (items = activeGardenObjects->fields._items,
          v27 = Method_System_Collections_Generic_List_GardenObject__Add__,
          ++activeGardenObjects->fields._version,
          !items) )
    {
      sub_2213CDC(activeGardenObjects, v18);
    }
    size = activeGardenObjects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        activeGardenObjects,
        (Il2CppObject *)v14,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      activeGardenObjects->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v14;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v14, v19, v20, v21, v22, v23, v24);
    }
    if ( !current )
      sub_2213CDC(v30, v31);
    imagePartsGroupEntity = current->fields.imagePartsGroupEntity;
    if ( !imagePartsGroupEntity )
      sub_2213CDC(v30, v31);
    v34 = this->fields.gardenItemList;
    if ( !v34 )
      sub_2213CDC(v30, v31);
    typeValue = imagePartsGroupEntity->fields.typeValue;
    MaskOffsetValue = GardenPartitionsManager__GetMaskOffsetValue(this, v34->fields._size, typeValue, v32);
    v40 = this->fields.gardenItemList;
    if ( !v40 )
      sub_2213CDC(v36, v37);
    v41 = MaskOffsetValue;
    GardenOffsetValue = GardenPartitionsManager__GetGardenOffsetValue(this, v40->fields._size, typeValue, v38);
    GardenObject__ApplyCustomMaterial((GardenObject_o *)v14, v41, GardenOffsetValue, typeValue, v43);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GardenItem__Dispose__);
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
  ImagePartsGroupMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OpenEntities; // x0
  System_Object_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  GardenPartitionsManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  struct GardenPartitionsManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__30_0; // x23
  Il2CppObject *v16; // x24
  struct GardenPartitionsManager___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  const MethodInfo *v25; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  ImagePartsGroupMaster_o *v27; // x22
  unsigned __int64 v28; // x27
  int32_t *p_revision; // x20
  ImagePartsGroupEntity_o *v30; // x23
  System_String_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Object_object__58532980; // x25
  Il2CppObject *Component_object; // x26
  System_String_o *v36; // x25
  GardenItem_o *v37; // x24
  const MethodInfo *v38; // x5
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v48; // x8

  if ( (byte_596A837 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&GardenItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_GardenPartitionsManager___c__CreateItem_b__30_0__);
    sub_2213A60(&GardenPartitionsManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_17878/*"bg_"*/);
    byte_596A837 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, mask, assetData);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  OpenEntities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetOpenEntities(
                                                                        Master_object,
                                                                        this->fields.imagePartsGroupId,
                                                                        0);
  v9 = System_Linq_Enumerable__ToArray_object_(
         OpenEntities,
         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  v12 = GardenPartitionsManager___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !*(&GardenPartitionsManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GardenPartitionsManager___c_TypeInfo, v10, v11);
    v12 = GardenPartitionsManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__30_0 = (System_Func_object__bool__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      static_fields = GardenPartitionsManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v16, Method_GardenPartitionsManager___c__CreateItem_b__30_0__, 0);
    v17 = GardenPartitionsManager___c_TypeInfo->static_fields;
    v17->__9__30_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__30_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__30_0, (int32_t)_9__30_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  Master_object = (ImagePartsGroupMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                               v24,
                                               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  if ( !Master_object )
    goto LABEL_29;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v27 = Master_object;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v28 = 0;
    p_revision = &Master_object->fields.revision;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)MasterName_k__BackingField )
        sub_2213CE4(Master_object);
      v30 = *(ImagePartsGroupEntity_o **)&p_revision[2 * v28];
      Master_object = (ImagePartsGroupMaster_o *)GardenPartitionsManager__GetAtlasName(this, v30, v25);
      if ( !assetData )
        break;
      v31 = (System_String_o *)Master_object;
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  assetData,
                                  (System_String_o *)Master_object,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
      Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Object_object__58532980,
                                                   0,
                                                   0);
      Component_object = 0;
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !Object_object__58532980 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__58532980,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      }
      v36 = System_String__Concat_75651716((System_String_o *)StringLiteral_17878/*"bg_"*/, v31, 0);
      v37 = (GardenItem_o *)sub_2213CCC(GardenItem_TypeInfo);
      GardenItem___ctor(v37, (UIAtlas_o *)Component_object, v30, v36, mask, v38);
      Master_object = (ImagePartsGroupMaster_o *)this->fields.gardenItemList;
      if ( !Master_object )
        break;
      v45 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
      v46 = Method_System_Collections_Generic_List_GardenItem__Add__;
      ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v45 )
        break;
      MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v45 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Master_object,
          (Il2CppObject *)v37,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = v45 + 8 * MasterName_k__BackingField_low;
        LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v48 + 32) = v37;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 32), (int32_t)v37, v39, v40, v41, v42, v43, v44);
      }
      LODWORD(MasterName_k__BackingField) = v27->fields._MasterName_k__BackingField;
      if ( (__int64)++v28 >= (int)MasterName_k__BackingField )
        return;
    }
LABEL_29:
    sub_2213CDC(Master_object, v7);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_GardenItem__o *v12; // x8
  GardenPartitionsManager_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t eventId; // w24
  System_String_o *lineSpriteName; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596A839 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem__get_Count__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GameObject__Dequeue__);
    this = (GardenPartitionsManager_o *)sub_2213A60(&Method_System_Collections_Generic_Queue_GameObject__get_Count__);
    byte_596A839 = 1;
  }
  gardenItemList = v2->fields.gardenItemList;
  if ( !gardenItemList )
LABEL_28:
    sub_2213CDC(this, method);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      this = (GardenPartitionsManager_o *)UnityEngine_Object__Instantiate_object__59717116(
                                            partitionSpriteBase,
                                            transform,
                                            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      v5 = this;
      if ( !this )
        goto LABEL_28;
    }
    else
    {
      this = (GardenPartitionsManager_o *)System_Collections_Generic_Queue_object___Dequeue(
                                            (System_Collections_Generic_Queue_T__o *)this,
                                            (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_GameObject__Dequeue__);
      if ( !this )
        goto LABEL_28;
      v5 = this;
      v6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (GardenPartitionsManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( !v6 )
        goto LABEL_28;
      UnityEngine_Transform__SetParent_83492444(v6, (UnityEngine_Transform_o *)this, 0, 0);
    }
    this = (GardenPartitionsManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
    v12 = v2->fields.gardenItemList;
    if ( v12 )
    {
      v13 = this;
      v31.fields.x = GardenPartitionsManager__CalcPartitionPosition(v2, v4, v12->fields._size, v11);
      if ( v13 )
      {
        v31.fields.y = 0.0;
        v31.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v13, v31, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v5,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          eventId = v2->fields.eventId;
          lineSpriteName = v2->fields.lineSpriteName;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
          AtlasManager__SetEventUI_47569484(eventId, (UISprite_o *)Component_object, lineSpriteName, 0);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
        this = (GardenPartitionsManager_o *)v2->fields.activePartitionSprites;
        if ( this )
        {
          m_CachedPtr = this->fields.m_CachedPtr;
          v28 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v5,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v30 + 32) = v5;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)v5, v21, v22, v23, v24, v25, v26);
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

  v4 = 0;
  if ( !imagePartsGroupEntity )
    sub_2213CDC(this, 0);
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
  GardenPartitionsManager___c__DisplayClass37_0_o *v7; // x22
  GardenPartitionsManager_o *v8; // x0
  const MethodInfo *v9; // x1
  float v10; // s0
  struct System_Collections_Generic_List_GardenPartitionsManager_MainTextureOffsetInfo__o *gardenMainTextureOffsetInfoList; // x19
  float v12; // s8
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *v14; // x0
  float v15; // s0

  if ( (byte_596A83B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_GardenPartitionsManager_MainTextureOffsetInfo___);
    sub_2213A60(&System_Func_GardenPartitionsManager_MainTextureOffsetInfo__bool__TypeInfo);
    sub_2213A60(&Method_GardenPartitionsManager___c__DisplayClass37_0__GetGardenOffsetValue_b__0__);
    sub_2213A60(&GardenPartitionsManager___c__DisplayClass37_0_TypeInfo);
    byte_596A83B = 1;
  }
  v7 = (GardenPartitionsManager___c__DisplayClass37_0_o *)sub_2213CCC(GardenPartitionsManager___c__DisplayClass37_0_TypeInfo);
  GardenPartitionsManager___c__DisplayClass37_0___ctor(v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v7->fields.gardenNum = gardenNum;
  v7->fields.split = split;
  v10 = GardenPartitionsManager__CalcGameScreenAspectRatio(v8, v9);
  gardenMainTextureOffsetInfoList = this->fields.gardenMainTextureOffsetInfoList;
  v12 = v10;
  v13 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GardenPartitionsManager_MainTextureOffsetInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_GardenPartitionsManager___c__DisplayClass37_0__GetGardenOffsetValue_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)gardenMainTextureOffsetInfoList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_GardenPartitionsManager_MainTextureOffsetInfo___);
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
  float maskDiv2; // s0
  float offsetValue; // s1
  float maskDiv3; // s1

  v7 = GardenPartitionsManager__CalcGameScreenAspectRatio(this, *(const MethodInfo **)&gardenNum);
  maskDiv4 = 0.0;
  if ( gardenNum == 4 )
  {
    if ( split == 2 )
    {
      maskDiv4 = this->fields.maskDiv4;
      goto LABEL_14;
    }
    if ( split == 4 )
    {
      maskDiv3 = this->fields.maskDiv4;
      goto LABEL_11;
    }
LABEL_14:
    maskDiv2 = v7 * maskDiv4;
    offsetValue = this->fields.offsetValue;
    return maskDiv2 - offsetValue;
  }
  if ( gardenNum == 3 )
  {
    if ( split == 2 )
    {
      maskDiv4 = this->fields.maskDiv3;
      goto LABEL_14;
    }
    if ( split == 3 )
    {
      maskDiv3 = this->fields.maskDiv3;
LABEL_11:
      maskDiv4 = -maskDiv3;
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  if ( gardenNum != 2 )
    goto LABEL_14;
  maskDiv2 = this->fields.maskDiv2;
  offsetValue = this->fields.offsetValueDiv2;
  return maskDiv2 - offsetValue;
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

  if ( (byte_596A834 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GardenObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GardenObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GameObject__Enqueue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_GardenObject__Enqueue__);
    byte_596A834 = 1;
  }
  activePartitionSprites = (System_Collections_Generic_List_object__o *)this->fields.activePartitionSprites;
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  if ( !activePartitionSprites )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    activePartitionSprites,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v27;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_2213CDC(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27.fields._current, 0, 0);
    partitionSpritePool = (System_Collections_Generic_Queue_T__o *)this->fields.partitionSpritePool;
    if ( !partitionSpritePool )
      sub_2213CDC(0, v7);
    System_Collections_Generic_Queue_object___Enqueue(
      partitionSpritePool,
      current,
      (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_GameObject__Enqueue__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GardenObject__GetEnumerator__);
  v26 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GardenObject__MoveNext__);
    if ( !v12 )
      break;
    v14 = v26.fields._current;
    if ( !v26.fields._current )
      sub_2213CDC(v12, v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields._current, 0);
    if ( !gameObject )
      sub_2213CDC(0, v16);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gardenObjectPool = (System_Collections_Generic_Queue_T__o *)this->fields.gardenObjectPool;
    if ( !gardenObjectPool )
      sub_2213CDC(0, v17);
    System_Collections_Generic_Queue_object___Enqueue(
      gardenObjectPool,
      v14,
      (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_GardenObject__Enqueue__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GardenObject__Dispose__);
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
    sub_2213CDC(activePartitionSprites, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_AssetData__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A835 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_596A835 = 1;
  }
  loadAssetDataList = this->fields.loadAssetDataList;
  memset(&v12, 0, sizeof(v12));
  if ( loadAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)loadAssetDataList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
      AssetManager__releaseAsset_47496972((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v9 = this->fields.loadAssetDataList;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void GardenPartitionsManager__Open(GardenPartitionsManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  System_String_o *v4; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  int32_t myRoomFolder; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A836 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_GardenPartitionsManager__Open_b__29_0__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_9598/*"MyRoom/BackObject/{0}"*/);
    byte_596A836 = 1;
  }
  myRoomFolder = this->fields.myRoomFolder;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &myRoomFolder);
  v4 = System_String__Format((System_String_o *)StringLiteral_9598/*"MyRoom/BackObject/{0}"*/, v3, 0);
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_GardenPartitionsManager__Open_b__29_0__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
  if ( !AssetManager__loadAssetStorage(v4, v5, 1, 0, 0) )
    GardenPartitionsManager__CallBackOpened(this, v8);
}


void GardenPartitionsManager__SetCallBackOpened(
        GardenPartitionsManager_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callback = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *loadAssetDataList; // x0
  Il2CppObject *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x0
  System_String_o *v37; // x21
  AssetLoader_LoadEndDataHandler_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w19
  System_Action_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A83D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__1__);
    sub_2213A60(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__2__);
    sub_2213A60(&GardenPartitionsManager___c__DisplayClass29_0_TypeInfo);
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596A83D = 1;
  }
  v5 = sub_2213CCC(GardenPartitionsManager___c__DisplayClass29_0_TypeInfo);
  GardenPartitionsManager___c__DisplayClass29_0___ctor((GardenPartitionsManager___c__DisplayClass29_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = assetData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)assetData, v14, v15, v16, v17, v18, v19);
  loadAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.loadAssetDataList;
  if ( !loadAssetDataList
    || (items = loadAssetDataList->fields._items,
        v7 = *(Il2CppObject **)(v5 + 24),
        v27 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++loadAssetDataList->fields._version,
        !items) )
  {
LABEL_16:
    sub_2213CDC(loadAssetDataList, v7);
  }
  size = loadAssetDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadAssetDataList,
      v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    loadAssetDataList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v7, v20, v21, v22, v23, v24, v25);
  }
  *(_QWORD *)(v5 + 16) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v30, v31, v32, v33, v34, v35);
  eventId = this->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  v37 = System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v36, 0);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__1__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39, v40);
  if ( !AssetManager__loadAssetStorage(v37, v38, 1, 0, 0) )
  {
    v41 = this->fields.eventId;
    v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)v5, Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__2__, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43, v44);
    AtlasManager__LoadEventUI_47569188(v41, v42, 1, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A931 & 1) == 0 )
  {
    sub_2213A60(&GardenPartitionsManager___c_TypeInfo);
    byte_596A931 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GardenPartitionsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GardenPartitionsManager___c_TypeInfo->static_fields->__9 = (struct GardenPartitionsManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GardenPartitionsManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  GardenPartitionsManager___c__DisplayClass29_0_o *v9; // x19
  struct GardenPartitionsManager_o *_4__this; // x8
  struct UnityEngine_Texture_o *mask; // x8
  _QWORD *v12; // x9
  __int64 assetData_low; // x10
  UnityEngine_Texture_c **v14; // x8
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  struct GardenPartitionsManager_o *v23; // x8
  System_Action_o *_9__3; // x21
  int32_t eventId; // w20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  v9 = this;
  if ( (byte_596A932 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture___);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_2213A60(&Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__3__);
    this = (GardenPartitionsManager___c__DisplayClass29_0_o *)sub_2213A60(&StringLiteral_22532/*"mask_div2_01"*/);
    byte_596A932 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (GardenPartitionsManager___c__DisplayClass29_0_o *)_4__this->fields.loadAssetDataList;
  if ( !this )
    goto LABEL_16;
  mask = this->fields.mask;
  v12 = Method_System_Collections_Generic_List_AssetData__Add__;
  ++HIDWORD(this->fields.assetData);
  if ( !mask )
    goto LABEL_16;
  assetData_low = SLODWORD(this->fields.assetData);
  if ( (unsigned int)assetData_low >= LODWORD(mask[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventUIData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &mask->klass + assetData_low;
    LODWORD(this->fields.assetData) = assetData_low + 1;
    v14[4] = (UnityEngine_Texture_c *)eventUIData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)eventUIData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !eventUIData
    || (Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    eventUIData,
                                    (System_String_o *)StringLiteral_22532/*"mask_div2_01"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture___),
        v9->fields.mask = (struct UnityEngine_Texture_o *)Object_object__58532980,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v9->fields,
          (int32_t)Object_object__58532980,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v23 = v9->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_2213CDC(this, eventUIData);
  }
  _9__3 = v9->fields.__9__3;
  eventId = v23->fields.eventId;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v9,
      Method_GardenPartitionsManager___c__DisplayClass29_0__Open_b__3__,
      0);
    v9->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.__9__3, (int32_t)_9__3, v26, v27, v28, v29, v30, v31);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, eventUIData, v22);
  AtlasManager__LoadEventUI_47569188(eventId, _9__3, 1, 0);
}


void GardenPartitionsManager___c__DisplayClass29_0___Open_b__2(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  GardenPartitionsManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  GardenPartitionsManager__CreateGardens(_4__this, this->fields.mask, this->fields.assetData, 0);
}


void GardenPartitionsManager___c__DisplayClass29_0___Open_b__3(
        GardenPartitionsManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  GardenPartitionsManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  GardenPartitionsManager__CreateGardens(_4__this, this->fields.mask, this->fields.assetData, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.gardenNum == this->fields.gardenNum && x->fields.split == this->fields.split;
}