void __fastcall CostumeListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_42B1F1F & 1) == 0 )
  {
    sub_B52984(&CostumeListViewManager_TypeInfo);
    byte_42B1F1F = 1;
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantCostumeMaster_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x21
  unsigned __int64 v12; // x24
  signed __int64 v13; // x25
  ServantCostumeEntity_o *v14; // x23
  CostumeListViewItem_o *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  UnityEngine_Vector2_o v21; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1F19 & 1) == 0 )
  {
    sub_B52984(&CostumeListViewItem_TypeInfo);
    sub_B52984(&CostumeListViewManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1F19 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_26;
  v7 = (ServantCostumeMaster_o *)Instance;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  if ( !v7 )
    goto LABEL_26;
  Instance = (DataManager_o *)ServantCostumeMaster__releasedCostumeEntityList(v7, (int32_t)Instance, 0, 0LL);
  if ( !Instance )
    goto LABEL_26;
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist >= 1 )
  {
    v12 = 0LL;
    v13 = (int)datalist;
    while ( 1 )
    {
      v14 = (ServantCostumeEntity_o *)*((_QWORD *)&v11->fields.lookup + v12);
      v15 = (CostumeListViewItem_o *)sub_B52A54(CostumeListViewItem_TypeInfo);
      CostumeListViewItem___ctor(v15, v14, baseSvtData, v16);
      if ( !v15 )
        break;
      if ( !v15->fields.isHide )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (__int64)++v12 >= v13 )
        goto LABEL_19;
      if ( v12 >= LODWORD(v11->fields.datalist) )
      {
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
      }
    }
LABEL_26:
    sub_B52A5C(Instance, v6);
  }
LABEL_19:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_26;
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, itemList->fields._size > 3, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  if ( (BYTE3(CostumeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CostumeListViewManager_TypeInfo);
    Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  }
  v19 = this->fields.itemList;
  if ( !v19 )
    goto LABEL_26;
  v22.fields.y = *(float *)&Instance[1].fields.saveNameList->klass
               - (float)(*((float *)&Instance[1].fields.saveNameList->klass + 1) * (float)v19->fields._size);
  v22.fields.x = 0.0;
  v22.fields.z = 0.0;
  v21.fields.y = -v22.fields.y;
  v21.fields.x = 0.0;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v22, v21, 0LL);
}


CostumeListViewItem_o *__fastcall CostumeListViewManager__GetItem(
        CostumeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B1F1A & 1) == 0 )
  {
    sub_B52984(&CostumeListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B1F1A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&CostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (CostumeListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == CostumeListViewItem_TypeInfo )
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
  CostumeListViewManager_o *v4; // x19
  __int64 v5; // x10
  CostumeListViewItem_o *Item; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **costumeEntity; // x1

  v4 = this;
  if ( (byte_42B1F1E & 1) == 0 )
  {
    sub_B52984(&CostumeListViewObject_TypeInfo);
    this = (CostumeListViewManager_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B1F1E = 1;
  }
  if ( !obj )
    goto LABEL_12;
  v5 = *(&CostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != CostumeListViewObject_TypeInfo )
  {
    goto LABEL_12;
  }
  Item = CostumeListViewObject__GetItem((CostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !Item
    || (costumeEntity = (System_Int32_array **)Item->fields.costumeEntity,
        v4->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)costumeEntity,
        sub_B52920((BattleServantConfConponent_o *)&v4->fields.baseSvtCostume, costumeEntity, v7, v8, v9, v10, v11, v12),
        (this = (CostumeListViewManager_o *)v4->fields.combineRootComponent) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(this, obj);
  }
  CombineRootComponent__ShowCostumeCombineInfo((CombineRootComponent_o *)this, 0LL);
}


void __fastcall CostumeListViewManager__OnMoveEnd(CostumeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B1F1D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1F1D = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_CostumeListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CostumeListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  CostumeListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B1F1C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CostumeListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B1F1C = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = ObjectList->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        CostumeListViewObject__Init(v14, mode, v15, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B52A5C(ObjectList, v8);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CostumeListViewManager__SetMode_28624060(this, mode, v10);
}


void __fastcall CostumeListViewManager__SetMode_28624060(
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
  CostumeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42B1F1B & 1) == 0 )
  {
    this = (CostumeListViewManager_o *)sub_B52984(&CostumeListViewObject_TypeInfo);
    byte_42B1F1B = 1;
  }
  if ( !obj
    || (v6 = *(&CostumeListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CostumeListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  initMode = v5->fields.initMode;
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

  if ( (byte_42B1F15 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B1F15 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CostumeListViewManager_o *)sub_B52D50(v7);
  CostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_42B1F18 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1F18 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v9,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v9,
                                                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v10 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)CostumeListViewObject__GetItem(
                                                                                           (CostumeListViewObject_o *)Component_srcLineSprite,
                                                                                           v5);
        if ( !Component_srcLineSprite )
          break;
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23551160(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v10,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
        }
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_42B1F17 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1F17 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
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

  if ( (byte_42B1F16 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B1F16 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CostumeListViewManager_o *)sub_B52D50(v7);
  CostumeListViewManager__get_ObjectList(v10, v11);
}