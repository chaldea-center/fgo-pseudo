void __fastcall CostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19D5F & 1) == 0 )
  {
    sub_1BCA7E0(&CostumeListViewManager_TypeInfo, v1, v2);
    byte_4B19D5F = 1;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  ServantCostumeMaster_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int64_t v22; // x2
  __int64 v23; // x3
  DataManager_o *v24; // x21
  __int64 v25; // x24
  __int64 v26; // x27
  ServantCostumeEntity_o *v27; // x23
  CostumeListViewItem_o *v28; // x22
  const MethodInfo *v29; // x3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  UnityEngine_Vector2_o v41; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19D59 & 1) == 0 )
  {
    sub_1BCA7E0(&CostumeListViewItem_TypeInfo, baseSvtData, method);
    sub_1BCA7E0(&CostumeListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B19D59 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_27;
  v19 = (ServantCostumeMaster_o *)Instance;
  v21 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v40.fields.currentCryptoKey = v21;
  *(_QWORD *)&v40.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
  if ( !v19 )
    goto LABEL_27;
  Instance = (DataManager_o *)ServantCostumeMaster__releasedCostumeEntityList(v19, (int32_t)Instance, 0, 0LL);
  if ( !Instance )
    goto LABEL_27;
  v24 = Instance;
  if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v27 = (ServantCostumeEntity_o *)*((_QWORD *)&v24->fields._DispLog + v25);
      v28 = (CostumeListViewItem_o *)sub_1BCAA2C(CostumeListViewItem_TypeInfo, v18, v22, v23);
      CostumeListViewItem___ctor(v28, v27, baseSvtData, v29);
      if ( !v28 )
        break;
      if ( !v28->fields.isHide )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        v34 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v34 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v28,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = v28;
          sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v28, v22, v23, v30, v31, v32, v33);
        }
      }
      if ( v26 == v25 )
        goto LABEL_21;
      if ( ++v25 >= (unsigned __int64)LODWORD(v24->fields.m_CancellationTokenSource) )
        sub_1BCAA44(Instance, v18);
    }
LABEL_27:
    sub_1BCAA3C(Instance, v18);
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
    j_il2cpp_runtime_class_init_0(CostumeListViewManager_TypeInfo, v18);
    Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  }
  v39 = this->fields.itemList;
  if ( !v39 )
    goto LABEL_27;
  v42.fields.y = **(float **)&Instance[1].fields._DispLog
               - (float)(*(float *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL) * (float)v39->fields._size);
  v42.fields.x = 0.0;
  v42.fields.z = 0.0;
  v41.fields.y = -v42.fields.y;
  v41.fields.x = 0.0;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v42, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CostumeListViewItem_o *__fastcall CostumeListViewManager__GetItem(
        CostumeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CostumeListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B19D5A & 1) == 0 )
  {
    sub_1BCA7E0(&CostumeListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B19D5A = 1;
  }
  result = (CostumeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CostumeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 methodPtr_low; // x10
  CostumeListViewItem_o *Item; // x0
  _QWORD *v9; // x8
  CostumeListViewItem_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t costumeEntity; // x1

  v4 = this;
  if ( (byte_4B19D5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CostumeListViewManager_OnClickSelectListView__, obj, method);
    this = (CostumeListViewManager_o *)sub_1BCA7E0(&CostumeListViewObject_TypeInfo, v5, v6);
    byte_4B19D5E = 1;
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
  v9 = Method_CostumeListViewManager_OnClickSelectListView__;
  v10 = Item;
  if ( (*((_BYTE *)Method_CostumeListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_CostumeListViewManager_OnClickSelectListView__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  if ( !v10
    || (costumeEntity = (int64_t)v10->fields.costumeEntity,
        v4->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)costumeEntity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.baseSvtCostume,
          costumeEntity,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (this = (CostumeListViewManager_o *)v4->fields.combineRootComponent) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, obj);
  }
  CombineRootComponent__ShowCostumeCombineInfo((CombineRootComponent_o *)this, 0LL);
}


void __fastcall CostumeListViewManager__OnMoveEnd(CostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19D5D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D5D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_CostumeListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B19D5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_CostumeListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B19D5C = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CostumeListViewObject__Init_45997032((CostumeListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall CostumeListViewManager__SetMode(
        CostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CostumeListViewManager__SetMode_45996560(this, mode, v10);
}


void __fastcall CostumeListViewManager__SetMode_45996560(
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
  if ( (byte_4B19D5B & 1) == 0 )
  {
    this = (CostumeListViewManager_o *)sub_1BCA7E0(&CostumeListViewObject_TypeInfo, obj, item);
    byte_4B19D5B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CostumeListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CostumeListViewObject__Init_45996436((CostumeListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B19D55 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19D55 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B19D58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19D58 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CostumeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !objectList )
          break;
        v24 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)CostumeListViewObject__GetItem(
                                                                    (CostumeListViewObject_o *)objectList,
                                                                    v18);
        if ( !objectList )
          break;
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v32 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          v33 = v17->fields._size;
          if ( (unsigned int)v33 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + v33;
            v17->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v17;
}


System_Collections_Generic_List_CostumeListViewObject__o *__fastcall CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B19D57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19D57 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CostumeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v17;
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

  if ( (byte_4B19D56 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19D56 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CostumeListViewManager__get_ObjectList(v10, v11);
}