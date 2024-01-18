void __fastcall CostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189674 & 1) == 0 )
  {
    sub_B2C35C(&CostumeListViewManager_TypeInfo, v1);
    byte_4189674 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  ServantCostumeMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v17; // x21
  unsigned __int64 v18; // x24
  signed __int64 v19; // x25
  ServantCostumeEntity_o *v20; // x23
  CostumeListViewItem_o *v21; // x22
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  UnityEngine_Vector2_o v27; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418966E & 1) == 0 )
  {
    sub_B2C35C(&CostumeListViewItem_TypeInfo, baseSvtData);
    sub_B2C35C(&CostumeListViewManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418966E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_26;
  v13 = (ServantCostumeMaster_o *)Instance;
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v15;
  *(_QWORD *)&v26.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
  if ( !v13 )
    goto LABEL_26;
  Instance = (DataManager_o *)ServantCostumeMaster__releasedCostumeEntityList(v13, (int32_t)Instance, 0, 0LL);
  if ( !Instance )
    goto LABEL_26;
  datalist = Instance->fields.datalist;
  v17 = Instance;
  if ( (int)datalist >= 1 )
  {
    v18 = 0LL;
    v19 = (int)datalist;
    while ( 1 )
    {
      v20 = (ServantCostumeEntity_o *)*((_QWORD *)&v17->fields.lookup + v18);
      v21 = (CostumeListViewItem_o *)sub_B2C42C(CostumeListViewItem_TypeInfo);
      CostumeListViewItem___ctor(v21, v20, baseSvtData, v22);
      if ( !v21 )
        break;
      if ( !v21->fields.isHide )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (__int64)++v18 >= v19 )
        goto LABEL_19;
      if ( v18 >= LODWORD(v17->fields.datalist) )
      {
        v23 = sub_B2C460(Instance);
        sub_B2C400(v23, 0LL);
      }
    }
LABEL_26:
    sub_B2C434(Instance, v12);
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
  v25 = this->fields.itemList;
  if ( !v25 )
    goto LABEL_26;
  v28.fields.y = *(float *)&Instance[1].fields.saveNameList->klass
               - (float)(*((float *)&Instance[1].fields.saveNameList->klass + 1) * (float)v25->fields._size);
  v28.fields.x = 0.0;
  v28.fields.z = 0.0;
  v27.fields.y = -v28.fields.y;
  v27.fields.x = 0.0;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v28, v27, 0LL);
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

  if ( (byte_418966F & 1) == 0 )
  {
    sub_B2C35C(&CostumeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418966F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  CostumeListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x10
  CostumeListViewItem_o *Item; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **costumeEntity; // x1

  v4 = this;
  if ( (byte_4189673 & 1) == 0 )
  {
    sub_B2C35C(&CostumeListViewObject_TypeInfo, obj);
    this = (CostumeListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4189673 = 1;
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
    || (costumeEntity = (System_Int32_array **)Item->fields.costumeEntity,
        v4->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)costumeEntity,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields.baseSvtCostume,
          costumeEntity,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (this = (CostumeListViewManager_o *)v4->fields.combineRootComponent) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, obj);
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

  if ( (byte_4189672 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189672 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  int32_t size; // w8
  System_Collections_Generic_List_CostumeListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  CostumeListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4189671 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CostumeListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_4189671 = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        CostumeListViewObject__Init(v18, mode, v19, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CostumeListViewManager__SetMode_28285684(this, mode, v10);
}


void __fastcall CostumeListViewManager__SetMode_28285684(
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
  if ( (byte_4189670 & 1) == 0 )
  {
    this = (CostumeListViewManager_o *)sub_B2C35C(&CostumeListViewObject_TypeInfo, obj);
    byte_4189670 = 1;
  }
  if ( !obj
    || (v6 = *(&CostumeListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CostumeListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_418966A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418966A = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CostumeListViewManager_o *)sub_B2C728(v7);
  CostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21

  if ( (byte_418966D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418966D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v15,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v15,
                                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v16 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)CostumeListViewObject__GetItem(
                                                                                           (CostumeListViewObject_o *)Component_srcLineSprite,
                                                                                           v11);
        if ( !Component_srcLineSprite )
          break;
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24147020(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v16,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v9;
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_418966C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418966C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v9;
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

  if ( (byte_418966B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418966B = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CostumeListViewManager_o *)sub_B2C728(v7);
  CostumeListViewManager__get_ObjectList(v10, v11);
}