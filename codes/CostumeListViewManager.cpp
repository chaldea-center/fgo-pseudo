void __fastcall CostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FBDD1 & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewManager_TypeInfo, v1);
    byte_40FBDD1 = 1;
  }
  CostumeListViewManager_TypeInfo->static_fields->LIST_BASE_POS_Y = 278.0;
  CostumeListViewManager_TypeInfo->static_fields->LIST_ITEM_HEIGHT = 140.0;
}


void __fastcall CostumeListViewManager___ctor(CostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CostumeListViewManager__CreateList(
        CostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCostumeMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  ServantCostumeEntity_array *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x8
  ServantCostumeEntity_array *v23; // x21
  unsigned __int64 v24; // x24
  signed __int64 v25; // x25
  ServantCostumeEntity_o *v26; // x23
  CostumeListViewItem_o *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x8
  UnityEngine_Behaviour_o *scrollView; // x0
  CostumeListViewManager_c *v33; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  UnityEngine_Vector2_o v36; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBDCB & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewItem_TypeInfo, baseSvtData);
    sub_B16FFC(&CostumeListViewManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FBDCB = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_26;
  v13 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v15;
  *(_QWORD *)&v35.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
  if ( !v13 )
    goto LABEL_26;
  v17 = ServantCostumeMaster__releasedCostumeEntityList(v13, v16, 0, 0LL);
  if ( !v17 )
    goto LABEL_26;
  v22 = *(_QWORD *)&v17->max_length;
  v23 = v17;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    v25 = (int)v22;
    while ( 1 )
    {
      v26 = v23->m_Items[v24];
      v27 = (CostumeListViewItem_o *)sub_B170CC(CostumeListViewItem_TypeInfo, v18, v19, v20, v21);
      CostumeListViewItem___ctor(v27, v26, baseSvtData, v28);
      if ( !v27 )
        break;
      if ( !v27->fields.isHide )
      {
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (__int64)++v24 >= v25 )
        goto LABEL_19;
      if ( v24 >= v23->max_length )
      {
        sub_B17100(v29, v18, v19);
        sub_B170A0();
      }
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_19:
  v31 = this->fields.itemList;
  if ( !v31 )
    goto LABEL_26;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(scrollView, v31->fields._size > 3, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v33 = CostumeListViewManager_TypeInfo;
  if ( (BYTE3(CostumeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CostumeListViewManager_TypeInfo);
    v33 = CostumeListViewManager_TypeInfo;
  }
  v34 = this->fields.itemList;
  if ( !v34 )
    goto LABEL_26;
  v37.fields.y = v33->static_fields->LIST_BASE_POS_Y
               - (float)(v33->static_fields->LIST_ITEM_HEIGHT * (float)v34->fields._size);
  v37.fields.x = 0.0;
  v37.fields.z = 0.0;
  v36.fields.y = -v37.fields.y;
  v36.fields.x = 0.0;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v37, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CostumeListViewItem_o *__fastcall CostumeListViewManager__GetItem(
        CostumeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FBDCC & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FBDCC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&CostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (CostumeListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CostumeListViewItem_TypeInfo )
    return (CostumeListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


ServantCostumeEntity_o *__fastcall CostumeListViewManager__GetSelctedCostumeEntity(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.baseSvtCostume;
}


void __fastcall CostumeListViewManager__OnClickListView(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CostumeListViewManager__OnClickSelectListView(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x10
  CostumeListViewItem_o *Item; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantCostumeEntity_o *costumeEntity; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FBDD0 & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewObject_TypeInfo, obj);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FBDD0 = 1;
  }
  if ( !obj )
    goto LABEL_12;
  v6 = *(&CostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CostumeListViewObject_TypeInfo )
  {
    goto LABEL_12;
  }
  Item = CostumeListViewObject__GetItem((CostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !Item
    || (costumeEntity = Item->fields.costumeEntity,
        this->fields.baseSvtCostume = costumeEntity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.baseSvtCostume,
          (System_Int32_array **)costumeEntity,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  CombineRootComponent__ShowCostumeCombineInfo(combineRootComponent, 0LL);
}


void __fastcall CostumeListViewManager__OnMoveEnd(CostumeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBDCF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBDCF = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CostumeListViewManager__RequestListObject(
        CostumeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_CostumeListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_CostumeListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  CostumeListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FBDCE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CostumeListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v10);
    byte_40FBDCE = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        CostumeListViewObject__Init(v21, mode, v22, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


void __fastcall CostumeListViewManager__SetMode(
        CostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CostumeListViewManager__SetMode_28508924(this, mode, v10);
}


void __fastcall CostumeListViewManager__SetMode_28508924(
        CostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 3;
  }
  CostumeListViewManager__RequestListObject(this, v6, 0.0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CostumeListViewManager__SetObjectItem(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FBDCD & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewObject_TypeInfo, obj);
    byte_40FBDCD = 1;
  }
  if ( !obj
    || (v6 = *(&CostumeListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CostumeListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  CostumeListViewObject__Init((CostumeListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
}


void __fastcall CostumeListViewManager__add_callbackFunc2(
        CostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CostumeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FBDC7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FBDC7 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  CostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  CostumeListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FBDCA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FBDCA = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CostumeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (CostumeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v16,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        Item = (ListViewItem_o *)CostumeListViewObject__GetItem(Component_srcLineSprite, v18);
        if ( !Item )
          break;
        if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v19,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
        }
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v12;
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FBDC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FBDC9 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CostumeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v12;
}


void __fastcall CostumeListViewManager__remove_callbackFunc2(
        CostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CostumeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FBDC8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FBDC8 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  CostumeListViewManager__get_ObjectList(v10, v11);
}