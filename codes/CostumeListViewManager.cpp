void __fastcall CostumeListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EB3C & 1) == 0 )
  {
    sub_1B885B0(&CostumeListViewManager_TypeInfo);
    byte_4A5EB3C = 1;
  }
  *CostumeListViewManager_TypeInfo->static_fields = (struct CostumeListViewManager_StaticFields)0x430C0000438B0000LL;
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
  DataManager_o *v10; // x21
  __int64 v11; // x24
  __int64 v12; // x27
  ServantCostumeEntity_o *v13; // x23
  CostumeListViewItem_o *v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  UnityEngine_Vector2_o v25; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EB36 & 1) == 0 )
  {
    sub_1B885B0(&CostumeListViewItem_TypeInfo);
    sub_1B885B0(&CostumeListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB36 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_27;
  v7 = (ServantCostumeMaster_o *)Instance;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v9;
  *(_QWORD *)&v24.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  if ( !v7 )
    goto LABEL_27;
  Instance = (DataManager_o *)ServantCostumeMaster__releasedCostumeEntityList(v7, (int32_t)Instance, 0, 0LL);
  if ( !Instance )
    goto LABEL_27;
  v10 = Instance;
  if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v13 = (ServantCostumeEntity_o *)*((_QWORD *)&v10->fields._DispLog + v11);
      v14 = (CostumeListViewItem_o *)sub_1B887FC(CostumeListViewItem_TypeInfo);
      CostumeListViewItem___ctor(v14, v13, baseSvtData, v15);
      if ( !v14 )
        break;
      if ( !v14->fields.isHide )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        v18 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v18 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = v18 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v14, v16, v17);
        }
      }
      if ( v12 == v11 )
        goto LABEL_21;
      if ( ++v11 >= (unsigned __int64)LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_1B88814(Instance, v6);
    }
LABEL_27:
    sub_1B8880C(Instance, v6);
  }
LABEL_21:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, itemList->fields._size > 3, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  if ( !CostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CostumeListViewManager_TypeInfo);
    Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  }
  v23 = this->fields.itemList;
  if ( !v23 )
    goto LABEL_27;
  v26.fields.y = **(float **)&Instance[1].fields._DispLog
               - (float)(*(float *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL) * (float)v23->fields._size);
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  v25.fields.y = -v26.fields.y;
  v25.fields.x = 0.0;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v26, v25, 0LL);
}


CostumeListViewItem_o *__fastcall CostumeListViewManager__GetItem(
        CostumeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CostumeListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EB37 & 1) == 0 )
  {
    sub_1B885B0(&CostumeListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EB37 = 1;
  }
  result = (CostumeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CostumeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CostumeListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CostumeListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  __int64 methodPtr_low; // x10
  CostumeListViewItem_o *Item; // x0
  _QWORD *v7; // x8
  CostumeListViewItem_o *v8; // x20
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct ServantCostumeEntity_o *costumeEntity; // x1

  v4 = this;
  if ( (byte_4A5EB3B & 1) == 0 )
  {
    sub_1B885B0(&Method_CostumeListViewManager_OnClickSelectListView__);
    this = (CostumeListViewManager_o *)sub_1B885B0(&CostumeListViewObject_TypeInfo);
    byte_4A5EB3B = 1;
  }
  if ( !obj )
    goto LABEL_11;
  methodPtr_low = LOBYTE(CostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CostumeListViewObject_TypeInfo )
  {
    goto LABEL_11;
  }
  Item = CostumeListViewObject__GetItem((CostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  v7 = Method_CostumeListViewManager_OnClickSelectListView__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CostumeListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_CostumeListViewManager_OnClickSelectListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  if ( !v8
    || (costumeEntity = v8->fields.costumeEntity,
        v4->fields.baseSvtCostume = costumeEntity,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.baseSvtCostume, (int32_t)costumeEntity, v10, v11),
        (this = (CostumeListViewManager_o *)v4->fields.combineRootComponent) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(this, obj);
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
  struct System_Action_o *callbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EB3A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB3A = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4A5EB39 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CostumeListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EB39 = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CostumeListViewObject__Init_45105244((CostumeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall CostumeListViewManager__SetMode(
        CostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CostumeListViewManager__SetMode_45104772(this, mode, v6);
}


void __fastcall CostumeListViewManager__SetMode_45104772(
        CostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    CostumeListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall CostumeListViewManager__SetObjectItem(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CostumeListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5EB38 & 1) == 0 )
  {
    this = (CostumeListViewManager_o *)sub_1B885B0(&CostumeListViewObject_TypeInfo);
    byte_4A5EB38 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CostumeListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CostumeListViewObject__Init_45104648((CostumeListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A5EB32 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EB32 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5EB35 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB35 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)CostumeListViewObject__GetItem(
                                                                    (CostumeListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v14 = v3->fields._size;
          if ( (unsigned int)v14 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + v14;
            v3->fields._size = v14 + 1;
            v15[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A5EB34 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EB34 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B8880C(objectList, v4);
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

  if ( (byte_4A5EB33 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EB33 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CostumeListViewManager__get_ObjectList(v10, v11);
}