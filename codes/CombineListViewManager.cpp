void __fastcall CombineListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CombineListItemInfo_array *v12; // x19
  CombineListItemInfo_o *v13; // x20
  const MethodInfo *v14; // x5
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CombineListItemInfo_o *v23; // x20
  const MethodInfo *v24; // x5
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CombineListItemInfo_o *v31; // x20
  const MethodInfo *v32; // x5
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Array_o *v45; // x0
  int64_t v46; // x19
  struct CombineListViewManager_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  System_RuntimeFieldHandle_o v55; // 0:w1.4

  if ( (byte_4B6A41B & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListItemInfo___TypeInfo, v1);
    sub_1BE4ACC(&CombineListItemInfo_TypeInfo, v2);
    sub_1BE4ACC(&CombineListViewManager_TypeInfo, v3);
    sub_1BE4ACC(&int___TypeInfo, v4);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v5);
    sub_1BE4ACC(&StringLiteral_8761/*"MENU_OPERATION_FRIEND"*/, v6);
    sub_1BE4ACC(&StringLiteral_20653/*"img_myroom_01"*/, v7);
    sub_1BE4ACC(&StringLiteral_8762/*"MENU_OPERATION_OFFER"*/, v8);
    sub_1BE4ACC(&StringLiteral_8763/*"MENU_OPERATION_OFFERED"*/, v9);
    sub_1BE4ACC(&StringLiteral_20655/*"img_myroom_03"*/, v10);
    sub_1BE4ACC(&StringLiteral_20654/*"img_myroom_02"*/, v11);
    byte_4B6A41B = 1;
  }
  v12 = (struct CombineListItemInfo_array *)sub_1BE4B74(CombineListItemInfo___TypeInfo, 3LL);
  v13 = (CombineListItemInfo_o *)sub_1BE4D18(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v13,
    1,
    1,
    (System_String_o *)StringLiteral_20653/*"img_myroom_01"*/,
    (System_String_o *)StringLiteral_8761/*"MENU_OPERATION_FRIEND"*/,
    v14);
  if ( !v12 )
    sub_1BE4D28(v15, v16);
  if ( v13 )
  {
    v15 = sub_1BE4C08(v13, v12->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_15;
  }
  if ( !v12->max_length )
    goto LABEL_14;
  v12->m_Items[0] = v13;
  sub_1BE4A70((PartyOrganizationUtility_o *)v12->m_Items, (int64_t)v13, v17, v18, v19, v20, v21, v22);
  v23 = (CombineListItemInfo_o *)sub_1BE4D18(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v23,
    2,
    1,
    (System_String_o *)StringLiteral_20654/*"img_myroom_02"*/,
    (System_String_o *)StringLiteral_8762/*"MENU_OPERATION_OFFER"*/,
    v24);
  if ( v23 )
  {
    v15 = sub_1BE4C08(v23, v12->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_15;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_14;
  v12->m_Items[1] = v23;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v12->m_Items[1], (int64_t)v23, v25, v26, v27, v28, v29, v30);
  v31 = (CombineListItemInfo_o *)sub_1BE4D18(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v31,
    3,
    1,
    (System_String_o *)StringLiteral_20655/*"img_myroom_03"*/,
    (System_String_o *)StringLiteral_8763/*"MENU_OPERATION_OFFERED"*/,
    v32);
  if ( v31 )
  {
    v15 = sub_1BE4C08(v31, v12->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_15:
      v54 = sub_1BE4D4C(v15);
      sub_1BE4BF4(v54, 0LL);
    }
  }
  if ( v12->max_length <= 2 )
LABEL_14:
    sub_1BE4D30(v15, v16);
  v12->m_Items[2] = v31;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v12->m_Items[2], (int64_t)v31, v33, v34, v35, v36, v37, v38);
  CombineListViewManager_TypeInfo->static_fields->itemInfo = v12;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CombineListViewManager_TypeInfo->static_fields,
    (int64_t)v12,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 3LL);
  v55.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v46 = (int64_t)v45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v45, v55, 0LL);
  static_fields = CombineListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v46;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->normalKindList, v46, v48, v49, v50, v51, v52, v53);
}


void __fastcall CombineListViewManager___ctor(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__CreateList(
        CombineListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v10; // x1
  ListViewItemSeed_o *seed; // x0
  CombineListViewManager_c *v12; // x0
  struct System_Int32_array *normalKindList; // x25
  __int64 v14; // x21
  unsigned __int64 v15; // x26
  int32_t v16; // w20
  __int64 v17; // x27
  int32_t v18; // w21
  UnityEngine_GameObject_c *klass; // x8
  int namespaze; // w9
  int v21; // w10
  int64_t v22; // x22
  int64_t v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  bool v40; // vf
  int32_t v41; // w20
  __int64 methodPtr_low; // x10
  __int64 v43; // x10

  if ( (byte_4B6A414 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListViewItem_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&CombineListViewManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A414 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v12 = CombineListViewManager_TypeInfo;
  if ( !CombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
    v12 = CombineListViewManager_TypeInfo;
  }
  normalKindList = v12->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v14 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v14, 0LL);
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      v16 = 0;
      v17 = (unsigned int)v14;
      do
      {
        if ( v15 >= normalKindList->max_length )
LABEL_45:
          sub_1BE4D30(seed, v10);
        seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        v18 = normalKindList->m_Items[v15 + 1];
        if ( !CombineListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
          seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        }
        klass = seed[2].fields.prefab->klass;
        if ( !klass )
          goto LABEL_46;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( namespaze == v21 )
              goto LABEL_45;
            v22 = *((_QWORD *)&klass->_1.byval_arg.data + v21);
            if ( !v22 )
              goto LABEL_46;
            if ( *(_DWORD *)(v22 + 16) == v18 )
              break;
            if ( namespaze == ++v21 )
              goto LABEL_34;
          }
          v23 = sub_1BE4D18(CombineListViewItem_TypeInfo);
          ListViewItem___ctor((ListViewItem_o *)v23, 0LL);
          *(_DWORD *)(v23 + 20) = v16;
          *(_QWORD *)(v23 + 112) = v22;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 112), v22, v24, v25, v26, v27, v28, v29);
          seed = this->fields.seed;
          if ( !seed )
            goto LABEL_46;
          *(UnityEngine_Vector3_o *)(v23 + 92) = ListViewItemSeed__GetLocalPosition(seed, v16, 0LL);
          seed = (ListViewItemSeed_o *)this->fields.itemList;
          if ( !seed )
            goto LABEL_46;
          v36 = *(_QWORD *)&seed->fields.m_CachedPtr;
          v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(seed->fields.m_CancellationTokenSource);
          if ( !v36 )
            goto LABEL_46;
          m_CancellationTokenSource_low = SLODWORD(seed->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)seed,
              (Il2CppObject *)v23,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = v36 + 8 * m_CancellationTokenSource_low;
            LODWORD(seed->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v39 + 32) = v23;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 32), v23, v30, v31, v32, v33, v34, v35);
          }
          ++v16;
        }
LABEL_34:
        ++v15;
      }
      while ( v15 != v17 );
      v40 = __OFSUB__(v16, 1);
      v41 = v16 - 1;
      if ( v41 < 0 == v40 )
      {
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       0,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(seed->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
          goto LABEL_46;
        if ( (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewItem_TypeInfo )
          goto LABEL_46;
        LOBYTE(seed[1].fields.m_CachedPtr) = 1;
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       v41,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        v43 = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(seed->klass->vtable._0_Equals.methodPtr) < (unsigned int)v43
          || (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[v43 - 1] != CombineListViewItem_TypeInfo )
        {
          goto LABEL_46;
        }
        LOBYTE(seed[1].fields.m_CachedPtr) = 1;
      }
    }
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    seed = (ListViewItemSeed_o *)this->fields.scrollView;
    if ( seed )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)seed, 0LL);
      return;
    }
LABEL_46:
    sub_1BE4D28(seed, v10);
  }
}


void __fastcall CombineListViewManager__DestroyList(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CombineListViewItem_o *__fastcall CombineListViewManager__GetItem(
        CombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B6A415 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B6A415 = 1;
  }
  result = (CombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewItem_TypeInfo )
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


void __fastcall CombineListViewManager__OnClickListView(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CombineListViewManager_CallbackFunc_o *callbackFunc; // x21
  CombineListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 methodPtr_low; // x10
  struct CombineListItemInfo_o *info; // x8

  if ( (byte_4B6A41A & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListViewObject_TypeInfo, obj);
    byte_4B6A41A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(CombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewObject_TypeInfo
      || (Item = CombineListViewObject__GetItem((CombineListViewObject_o *)obj, v12)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_1BE4D28(Item, v12);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      info->fields.eventData,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CombineListViewManager__OnMoveEnd(CombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B6A419 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A419 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject(
        CombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6A417 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_CombineListViewManager_OnMoveEnd__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B6A417 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      CombineListViewObject__Init_45834248((CombineListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject_45833220(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6A418 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_CombineListViewManager_OnMoveEnd__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B6A418 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      CombineListViewObject__Init_45834348((CombineListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


void __fastcall CombineListViewManager__SetMode(
        CombineListViewManager_o *this,
        int32_t mode,
        CombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineListViewManager__SetMode_45833076(this, mode, v10);
}


void __fastcall CombineListViewManager__SetMode_45833076(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    CombineListViewManager__RequestListObject_45833220(this, 4, v5);
}


void __fastcall CombineListViewManager__SetMode_45833168(
        CombineListViewManager_o *this,
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineListViewManager__SetMode_45833076(this, mode, v10);
}


void __fastcall CombineListViewManager__SetObjectItem(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B6A416 & 1) == 0 )
  {
    this = (CombineListViewManager_o *)sub_1BE4ACC(&CombineListViewObject_TypeInfo, obj);
    byte_4B6A416 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  CombineListViewObject__Init_45832948((CombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall CombineListViewManager__add_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  CombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B6A40E & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B6A40E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineListViewManager__add_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B6A410 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B6A410 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ClippingObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B6A413 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_CombineListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B6A413 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v18);
      Item = (ListViewItem_o *)CombineListViewObject__GetItem((CombineListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BE4D28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41702652((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1BE4D28(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BE4D28(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BE4D28(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BE4D28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v11;
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B6A412 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_CombineListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B6A412 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v11;
}


void __fastcall CombineListViewManager__remove_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B6A40F & 1) == 0 )
  {
    sub_1BE4ACC(&CombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B6A40F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineListViewManager__remove_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B6A411 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B6A411 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CombineListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager_CallbackFunc___ctor(
        CombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A2AF7C;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A2AF5C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2AF14;
}


System_IAsyncResult_o *__fastcall CombineListViewManager_CallbackFunc__BeginInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v6, callback, object);
}


void __fastcall CombineListViewManager_CallbackFunc__EndInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall CombineListViewManager_CallbackFunc__Invoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}