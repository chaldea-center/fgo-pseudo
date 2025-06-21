void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x0
  System_Array_o *v7; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Array_o *v11; // x0
  System_Array_o *v12; // x19
  struct ServantStatusListViewManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Array_o *v16; // x0
  System_Array_o *v17; // x19
  struct ServantStatusListViewManager_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  struct ServantStatusListViewItemDraw_Kind_array *v25; // x1
  struct ServantStatusListViewManager_StaticFields *v26; // x0
  const MethodInfo *v27; // x3
  struct ServantStatusListViewManager_StaticFields *v28; // x0
  System_RuntimeFieldHandle_o v29; // 0:w1.4
  System_RuntimeFieldHandle_o v30; // 0:w1.4
  System_RuntimeFieldHandle_o v31; // 0:w1.4

  if ( (byte_4B19F4E & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1);
    sub_1BCAFF8(&ServantStatusListViewManager_TypeInfo, v2);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A,
      v3);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v4);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v5);
    byte_4B19F4E = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v6 = (System_Array_o *)sub_1BCB0A0(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v29.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v7 = v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v6, v29, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->normalKindList, (int32_t)v7, v9, v10);
  v11 = (System_Array_o *)sub_1BCB0A0(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v30.fields.value = Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A;
  v12 = v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v11, v30, 0LL);
  v13 = ServantStatusListViewManager_TypeInfo->static_fields;
  v13->grandKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->grandKindList, (int32_t)v12, v14, v15);
  v16 = (System_Array_o *)sub_1BCB0A0(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v31.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v17 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v16, v31, 0LL);
  v18 = ServantStatusListViewManager_TypeInfo->static_fields;
  v18->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v18->equipKindList, (int32_t)v17, v19, v20);
  v21 = sub_1BCB0A0(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_8;
  v25 = (struct ServantStatusListViewItemDraw_Kind_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v21 + 32) = 12;
  v26 = ServantStatusListViewManager_TypeInfo->static_fields;
  v26->npcFollowerEquipKindList = v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v26->npcFollowerEquipKindList, (int32_t)v25, v23, v24);
  v21 = sub_1BCB0A0(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
LABEL_8:
    sub_1BCB254(v21, v22);
  v25 = (struct ServantStatusListViewItemDraw_Kind_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
LABEL_9:
    sub_1BCB25C(v21, v25, v23);
  *(_DWORD *)(v21 + 32) = 14;
  v28 = ServantStatusListViewManager_TypeInfo->static_fields;
  v28->commandCodeKindList = v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v28->commandCodeKindList, (int32_t)v25, v23, v27);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_T__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B19F4D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v5);
    byte_4B19F4D = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v6, v7, v8);
  this->fields.isInput = 1;
  v9 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_369EB84 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentKindList, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewManager__CacheViewTopContentsAndGap(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Component_o *v7; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  const MethodInfo *v10; // x1
  int v11; // w21
  float value; // s0
  float v13; // s9
  int32_t v14; // w20
  ServantStatusListViewObject_o *v15; // x21
  float v16; // s8
  const MethodInfo *v17; // x1
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F42 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v3);
    byte_4B19F42 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  this->fields.cachedViewTargetGap = 0.0;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( !size )
  {
    v14 = -1;
    goto LABEL_20;
  }
  objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              objectList,
                                                              size - 1,
                                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  v7 = (UnityEngine_Component_o *)objectList;
  objectList = (System_Collections_Generic_List_object__o *)scrollView->fields.mPanel;
  if ( !objectList )
    goto LABEL_17;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)objectList, 0LL);
  if ( !v7
    || (objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(v7, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL),
        y = localPosition.fields.y,
        objectList = (System_Collections_Generic_List_object__o *)ServantStatusListViewObject__GetSize(
                                                                    (ServantStatusListViewObject_o *)v7,
                                                                    v10),
        !this->fields.scrollBar)
    || (v11 = (int)objectList,
        value = UIProgressBar__get_value((UIProgressBar_o *)this->fields.scrollBar, 0LL),
        (objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList) == 0LL) )
  {
LABEL_17:
    sub_1BCB254(objectList, method);
  }
  v13 = value * (float)-(float)((float)-(float)(y + (float)((float)v11 * -0.5)) - ViewSize.fields.y);
  v14 = 0;
  while ( v14 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v14,
                                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v15 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0LL);
    if ( !objectList )
      goto LABEL_17;
    v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL);
    v16 = v20.fields.y;
    v18 = (float)ServantStatusListViewObject__GetSize(v15, v17) * 0.5;
    if ( (float)(v13 + (float)(ViewSize.fields.y * -0.35)) > (float)(v16 - v18) )
    {
      this->fields.cachedViewTargetGap = (float)(v16 + v18) - v13;
      break;
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_17;
  }
LABEL_20:
  this->fields.cachedViewTargetIndex = v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__CacheViewTopTargetContents(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *currentKindList; // x0
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v8; // w0

  if ( (byte_4B19F41 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5);
    byte_4B19F41 = 1;
  }
  currentKindList = (System_Collections_Generic_List_T__o *)this->fields.currentKindList;
  if ( currentKindList )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      if ( objectList->fields._size >= 1 )
      {
        v8 = System_Collections_Generic_List_Int32Enum___IndexOf(
               currentKindList,
               kind,
               (const MethodInfo_36A0054 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( v8 != -1 )
        {
          this->fields.cachedViewTargetIndex = v8;
          this->fields.cachedViewTargetGap = -10.0;
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 transform; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  int v17; // w9
  UnityEngine_Object_o *scrollView; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Component_object; // x20
  float v22; // s8
  float v23; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  __int64 v25; // x2
  struct ServantStatusListViewItem_o *v26; // x8
  ServantStatusListViewManager_c **v27; // x26
  struct ServantStatusListViewItemDraw_Kind_array **p_grandKindList; // x8
  struct ServantStatusListViewItemDraw_Kind_array *v29; // x29
  unsigned __int64 v30; // x21
  __int64 v31; // x22
  float v32; // s8
  int32_t v33; // w23
  il2cpp_array_size_t v34; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v36; // x8
  struct ServantStatusListViewItem_o *v37; // x8
  __int64 v38; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v41; // x8
  Il2CppObject *v42; // x24
  Il2CppObject *v43; // x25
  ServantStatusListViewManager_c **v44; // x27
  Il2CppObject *v45; // x24
  Il2CppObject *v46; // x26
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct ServantStatusListViewItem_o *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  int32_t Size; // w0
  int v53; // w28
  UnityEngine_Transform_o *v54; // x26
  int v55; // w28
  float v56; // s8
  UnityEngine_Transform_o *v57; // x26
  UnityEngine_Transform_o *v58; // x26
  int32_t layer; // w0
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  ServantStatusListViewManager_c *v68; // x8
  struct ServantStatusListViewManager_StaticFields *v69; // x9
  __int64 v70; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v72; // x9
  __int64 v73; // x10
  UnityEngine_Object_o *v74; // x20
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v77; // x8
  ServantStatusListViewManager_c *v78; // x8
  int v79; // w21
  struct ServantStatusListViewManager_StaticFields *static_fields; // x8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F3E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo);
    sub_1BCAFF8(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&ServantStatusListViewManager_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_5251/*"DispObject"*/, v13);
    byte_4B19F3E = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_128;
  v17 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v17;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( !transform )
      goto LABEL_128;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_128;
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_128;
      v22 = *((float *)&Component_object[20].monitor + 1);
      v23 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_128;
      v82.fields.x = -v22;
      v82.fields.y = -v23;
      v82.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v82, 0LL);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_128;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v19, v20);
  v26 = this->fields.mainInfo;
  if ( !v26 )
    goto LABEL_128;
  v27 = &ServantStatusListViewManager_TypeInfo;
  if ( v26->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(*(_QWORD *)(transform + 184) + 40LL);
  }
  else
  {
    svtEntity = v26->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_128;
    transform = SvtType__IsServantEquip(svtEntity->fields.type, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_128;
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      isNpcFollowerServantEquip = (*p_mainInfo)->fields.isNpcFollowerServantEquip;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v77 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v77 + 32);
      else
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v77 + 24);
    }
    else
    {
      if ( !mainInfo )
        goto LABEL_128;
      transform = ServantStatusListViewItem__GetEquipListCount(mainInfo, 0LL);
      v78 = ServantStatusListViewManager_TypeInfo;
      v79 = transform;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        v78 = ServantStatusListViewManager_TypeInfo;
      }
      static_fields = v78->static_fields;
      if ( v79 >= 2 )
        p_grandKindList = &static_fields->grandKindList;
      else
        p_grandKindList = &static_fields->normalKindList;
    }
  }
  v29 = *p_grandKindList;
  if ( *p_grandKindList && this->fields.statusObjectList && (int)*(_QWORD *)&v29->max_length >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)*(_QWORD *)&v29->max_length;
    v32 = 0.0;
    do
    {
      if ( v30 >= v29->max_length )
LABEL_129:
        sub_1BCB25C(transform, v15, v25);
      v33 = v29->m_Items[v30 + 1];
      v34 = v33 - 1;
      if ( v33 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_128;
        if ( v33 <= (signed int)statusObjectList->max_length )
        {
          switch ( v33 )
          {
            case 3:
            case 20:
              v36 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !v36->fields.isEquipShowMode )
                goto LABEL_107;
              transform = (__int64)v36->fields.svtEntity;
              if ( !transform )
                goto LABEL_128;
              transform = ServantEntity__get_IsServant((ServantEntity_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isCollection )
                goto LABEL_70;
              goto LABEL_107;
            case 4:
            case 12:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 5:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 6:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnableAppendSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 7:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)transform, &tdInfo, 0LL);
              if ( !tdInfo )
                goto LABEL_128;
              if ( tdInfo->fields.id <= 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 10:
              v37 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              v38 = 0LL;
              break;
            case 15:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                goto LABEL_107;
              goto LABEL_70;
            case 16:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.enableTdSpeed )
                goto LABEL_107;
              goto LABEL_70;
            case 17:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( (*p_mainInfo)->fields.enableChangeVoice )
                goto LABEL_70;
              goto LABEL_107;
            case 18:
            case 19:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                goto LABEL_107;
              goto LABEL_70;
            default:
              goto LABEL_70;
          }
          while ( 1 )
          {
            svtCommentEntityList = v37->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_128;
            max_length = svtCommentEntityList->max_length;
            if ( (int)v38 >= max_length )
              goto LABEL_107;
            if ( (unsigned int)v38 >= max_length )
              goto LABEL_129;
            transform = (__int64)svtCommentEntityList->m_Items[v38];
            if ( !transform )
              goto LABEL_128;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0LL);
            if ( (transform & 1) == 0 )
              break;
            v37 = *p_mainInfo;
            ++v38;
            if ( !*p_mainInfo )
              goto LABEL_128;
          }
LABEL_70:
          v41 = this->fields.statusObjectList;
          if ( !v41 )
            goto LABEL_128;
          if ( v34 >= v41->max_length )
            goto LABEL_129;
          v42 = (Il2CppObject *)v41->m_Items[v34];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v43 = UnityEngine_Object__Instantiate_object_(
                  v42,
                  (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_128;
            v44 = v27;
            v45 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v43,
                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v46 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v43,
                    (System_String_o *)StringLiteral_5251/*"DispObject"*/,
                    (const MethodInfo_306FC6C *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              if ( !v46 )
                goto LABEL_128;
              LODWORD(v46[7].monitor) = v33;
            }
            if ( !v45 )
              goto LABEL_128;
            v49 = *p_mainInfo;
            v45[2].monitor = *p_mainInfo;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v45[2].monitor, (int32_t)v49, v47, v48);
            ServantStatusListViewObject__Init_37110136((ServantStatusListViewObject_o *)v45, 2, v50);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v45, v51);
            v53 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            if ( !this->fields.listParent )
              goto LABEL_128;
            v54 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
            if ( !v54 )
              goto LABEL_128;
            UnityEngine_Transform__set_parent(v54, (UnityEngine_Transform_o *)transform, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            if ( !transform )
              goto LABEL_128;
            v55 = v53 >> 1;
            v56 = v32 - (float)v55;
            v83.fields.x = 0.0;
            v83.fields.z = 0.0;
            v83.fields.y = v56;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v83, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            v57 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4B16197 )
            {
              transform = sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v15);
              byte_4B16197 = 1;
            }
            if ( !v57 )
              goto LABEL_128;
            UnityEngine_Transform__set_localRotation(
              v57,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            v58 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4B16196 )
            {
              transform = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v15);
              byte_4B16196 = 1;
            }
            if ( !v58 )
              goto LABEL_128;
            UnityEngine_Transform__set_localScale(v58, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_128;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v43, layer, 0LL);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v45, v60);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v45, this, v61);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_128;
            v64 = *(_QWORD *)(transform + 16);
            v27 = v44;
            v65 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v64 )
              goto LABEL_128;
            v66 = *(int *)(transform + 24);
            if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v45,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = v64 + 8 * v66;
              *(_DWORD *)(transform + 24) = v66 + 1;
              *(_QWORD *)(v67 + 32) = v45;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v45, v62, v63);
            }
            v68 = *v44;
            if ( !(*v44)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v44);
              v68 = *v44;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_128;
            v69 = v68->static_fields;
            v70 = *(_QWORD *)(transform + 16);
            LIST_BLANK = v69->LIST_BLANK;
            v72 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v70 )
              goto LABEL_128;
            v73 = *(int *)(transform + 24);
            v32 = v56 - (float)(LIST_BLANK + v55);
            if ( (unsigned int)v73 >= *(_DWORD *)(v70 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v33,
                *(const MethodInfo_369F3D8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v73 + 1;
              *(_DWORD *)(v70 + 4 * v73 + 32) = v33;
            }
          }
        }
      }
LABEL_107:
      ++v30;
    }
    while ( v30 != v31 );
  }
  v74 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_128:
    sub_1BCB254(transform, v15);
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19F40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B19F40 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCB254(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v17.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v12 = this->fields.objectList;
  if ( !v12 )
    goto LABEL_20;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, 0, size, v11);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BCB254(objectList, method);
  }
}


void __fastcall ServantStatusListViewManager__LateUpdate(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *scrollView; // x0
  int32_t v5; // w8
  struct UIScrollView_o *v6; // x8
  UnityEngine_Component_o *v7; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  const MethodInfo *v10; // x1
  int v11; // w20
  ServantStatusListViewObject_o *v12; // x21
  float v13; // s10
  const MethodInfo *v14; // x1
  float v15; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F3F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v3);
    byte_4B19F3F = 1;
  }
  if ( (this->fields.cachedViewTargetIndex & 0x80000000) == 0 )
  {
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__InvalidateBounds((UIScrollView_o *)scrollView, 0LL);
      scrollView = this->fields.objectList;
      if ( scrollView )
      {
        v5 = *((_DWORD *)scrollView + 6);
        if ( this->fields.cachedViewTargetIndex >= v5 )
        {
          scrollView = this->fields.scrollBar;
          if ( scrollView )
          {
            v15 = 1.0;
            goto LABEL_18;
          }
        }
        else
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v5 - 1,
                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
          v6 = this->fields.scrollView;
          if ( v6 )
          {
            v7 = (UnityEngine_Component_o *)scrollView;
            scrollView = v6->fields.mPanel;
            if ( scrollView )
            {
              ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
              if ( v7 )
              {
                scrollView = UnityEngine_Component__get_transform(v7, 0LL);
                if ( scrollView )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                  y = localPosition.fields.y;
                  scrollView = (void *)ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v7, v10);
                  if ( this->fields.objectList )
                  {
                    v11 = (int)scrollView;
                    scrollView = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.objectList,
                                   this->fields.cachedViewTargetIndex,
                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v12 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
                      if ( scrollView )
                      {
                        v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                        v13 = v17.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v12, v14);
                        if ( this->fields.scrollBar )
                        {
                          v15 = (float)-(float)((float)(v13 + (float)((float)(int)scrollView * 0.5))
                                              - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v11 * -0.5)) - ViewSize.fields.y);
                          scrollView = this->fields.scrollBar;
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v15, 0LL);
                          goto LABEL_19;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1BCB254(scrollView, method);
  }
LABEL_19:
  this->fields.cachedViewTargetIndex = -1;
}


void __fastcall ServantStatusListViewManager__OnClickButton(
        ServantStatusListViewManager_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v9; // x0
  __int64 v10; // x1
  unsigned int ButtonIndex; // w20
  int v12; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v15; // x3
  __int64 v16; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)ownerObject, method);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1BCB254(v9, v10);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0LL);
      v12 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))ownerObject->klass->vtable._4_GetKind.method)(
              ownerObject,
              ownerObject->klass->vtable._5_SetItem.methodPtr);
      if ( v12 == 17 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v15 = *(_QWORD *)&v5->fields.extra_arg;
        v16 = 9LL;
        goto LABEL_9;
      }
      if ( v12 == 16 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v15 = *(_QWORD *)&v5->fields.extra_arg;
        v16 = 8LL;
LABEL_9:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64))m_target)(
          original_method_info,
          v16,
          ButtonIndex,
          v15);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__OnClickCombine(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v21; // x20
  ServantStatusListViewManager___c_c *v22; // x8
  System_Action_o *_9__61_0; // x22
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v6 = this;
  if ( (byte_4B19F4B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickCombine__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__, v10);
    sub_1BCAFF8(&ServantStatusListViewManager___c_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_11837/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v12);
    this = (ServantStatusListViewManager_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    byte_4B19F4B = 1;
  }
  if ( v6->fields.initMode == 1 )
  {
    mainInfo = v6->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.callbackFunc = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.callbackFunc, 0, index, method);
        if ( callbackFunc )
        {
          v16 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickCombine__);
          v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            (unsigned int)kind,
            (unsigned int)index,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        return;
      }
      v18 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickCombine__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v21 = this;
      v22 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v22 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__61_0 = v22->static_fields->__9__61_0;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__61_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = ServantStatusListViewManager___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v22->static_fields->__9;
        _9__61_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__61_0, v25, Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__, 0LL);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__61_0 = _9__61_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v27, v28);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v24,
          (System_String_o *)v21,
          _9__61_0,
          -1,
          0,
          0,
          0,
          1,
          28,
          0,
          0,
          0LL,
          0.0,
          0,
          0LL);
        return;
      }
    }
    sub_1BCB254(this, *(_QWORD *)&kind);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        3LL,
        (unsigned int)id,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        6LL,
        (unsigned int)id,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        4LL,
        (unsigned int)id,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCB254(v8, v9);
      Kind = ServantStatusListViewObject__GetKind(obj, v9);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        0LL,
        Kind,
        *(_QWORD *)&v5->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v10; // x3
  __int64 v11; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v10 = *(_QWORD *)&v5->fields.extra_arg;
        v11 = 2LL;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v10 = *(_QWORD *)&v5->fields.extra_arg;
        v11 = 1LL;
LABEL_8:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64))m_target)(
          original_method_info,
          24LL,
          v11,
          v10);
      }
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, v2, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        1LL,
        0LL,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquip; // w20
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x20
  ServantStatusListViewItem_o *v11; // x8
  System_String_o *v12; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4B19F48 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_4B19F48 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0LL);
    v8 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v11 = this->fields.mainInfo;
      if ( v11 )
      {
        v12 = (System_String_o *)mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v11, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v12, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1BCB254(mainInfo, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp_37113324(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquipByIndex; // w21
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  ServantStatusListViewItem_o *v13; // x8
  System_String_o *v14; // x20
  int32_t EquipExpByIndex; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4B19F49 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickListViewEquipExp___77018488, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, v7);
    byte_4B19F49 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquipByIndex = ServantStatusListViewItem__IsEquipByIndex(mainInfo, index, 0LL);
    v10 = Method_ServantStatusListViewManager_OnClickListViewEquipExp___77018488;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp___77018488 + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickListViewEquipExp___77018488);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
    if ( IsEquipByIndex )
    {
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v13 = this->fields.mainInfo;
      if ( v13 )
      {
        v14 = (System_String_o *)mainInfo;
        EquipExpByIndex = ServantStatusListViewItem__GetEquipExpByIndex(v13, index, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExpByIndex, 0LL);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v14, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1BCB254(mainInfo, *(_QWORD *)&index);
    }
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v12; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4B19F47 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickListViewExp__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_4B19F47 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v6 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v12 = v9,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v9 = System_String__Format(v12, NumberFormat, 0LL),
          !Instance) )
    {
      sub_1BCB254(v9, v10);
    }
    CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, v9, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x20
  struct ServantStatusListViewItem_o *v11; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantStatusListViewManager_o *v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v2 = this;
  if ( (byte_4B19F4A & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickListViewFriendship__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (ServantStatusListViewManager_o *)sub_1BCAFF8(&StringLiteral_11891/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v6);
    byte_4B19F4A = 1;
  }
  if ( v2->fields.initMode == 1 )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( mainInfo->fields.userSvtCollectionEntity )
    {
      v8 = Method_ServantStatusListViewManager_OnClickListViewFriendship__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewFriendship__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v11 = v2->fields.mainInfo;
      if ( v11 )
      {
        userSvtCollectionEntity = v11->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v13 = this;
          v14 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v15 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v18.fields.currentCryptoKey = v14;
          *(_QWORD *)&v18.fields.fakeValue = v15;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v16, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format((System_String_o *)v13, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_1BCB254(this, method);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        5LL,
        (unsigned int)id,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        12LL,
        (unsigned int)maskType,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        10LL,
        (unsigned int)index,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        7LL,
        (unsigned int)questId,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        8LL,
        (unsigned int)type,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        11LL,
        (unsigned int)index,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        11LL,
        (unsigned int)index,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__OnClickUnSealedQuestTransition(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusListViewManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v20; // x20
  ServantStatusListViewManager___c_c *v21; // x8
  System_Action_o *_9__62_1; // x22
  System_String_o *v23; // x21
  Il2CppObject *v24; // x23
  struct ServantStatusListViewManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  ServantStatusListViewManager___c_c *v30; // x8
  Il2CppObject *v31; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  v5 = this;
  if ( (byte_4B19F4C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__, v9);
    sub_1BCAFF8(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__, v10);
    sub_1BCAFF8(&ServantStatusListViewManager___c_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_11837/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v12);
    sub_1BCAFF8(&StringLiteral_11838/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/, v13);
    this = (ServantStatusListViewManager_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B19F4C = 1;
  }
  if ( v5->fields.initMode == 1 )
  {
    mainInfo = v5->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_30;
    if ( mainInfo->fields.isEnableServantQuest )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v5->fields.callbackFunc;
        v5->fields.callbackFunc = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            7LL,
            (unsigned int)questId,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
      v28 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v20 = this;
      v30 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v30 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v30->static_fields->__9__62_1;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( _9__62_1 )
      {
        if ( !Instance )
          goto LABEL_30;
LABEL_20:
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v23,
          (System_String_o *)v20,
          _9__62_1,
          -1,
          0,
          0,
          0,
          1,
          28,
          0,
          0,
          0LL,
          0.0,
          0,
          0LL);
        return;
      }
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ServantStatusListViewManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v30->static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__62_1,
        v31,
        Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__,
        0LL);
      static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__62_1 = _9__62_1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__62_1, (int32_t)_9__62_1, v33, v34);
      if ( Instance )
        goto LABEL_20;
    }
    else
    {
      v17 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BCB010(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/, 0LL);
      v20 = this;
      v21 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v21 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v21->static_fields->__9__62_0;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__62_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = ServantStatusListViewManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__62_1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          _9__62_1,
          v24,
          Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__,
          0LL);
        v25 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v25->__9__62_0 = _9__62_1;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v25->__9__62_0, (int32_t)_9__62_1, v26, v27);
      }
      if ( Instance )
        goto LABEL_20;
    }
LABEL_30:
    sub_1BCB254(this, *(_QWORD *)&questId);
  }
}


void __fastcall ServantStatusListViewManager__OnEnable(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusListViewManager__OnLongPushListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v10; // x3
  __int64 v11; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v10 = *(_QWORD *)&v5->fields.extra_arg;
        v11 = 2LL;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v10 = *(_QWORD *)&v5->fields.extra_arg;
        v11 = 1LL;
LABEL_8:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64))m_target)(
          original_method_info,
          25LL,
          v11,
          v10);
      }
    }
  }
}


void __fastcall ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, v2, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        2LL,
        0LL,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnMoveEnd(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4B19F46 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B19F46 = 1;
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
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCB254(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19F44 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B19F44 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      objectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v18, v19);
      ServantStatusListViewObject__Init_37112060((ServantStatusListViewObject_o *)current, mode, v17, delay, v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_37111040(
        ServantStatusListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19F45 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v9);
    sub_1BCAFF8(&Method_ServantStatusListViewManager_OnMoveEnd__, v10);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v11);
    byte_4B19F45 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      objectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v16, v17);
      ServantStatusListViewObject__Init_37112144((ServantStatusListViewObject_o *)current, mode, v15, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusListViewManager__SetMode_37110808(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_37110808(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4B19F43 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1BCAFF8(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               *(_QWORD *)&mode);
    byte_4B19F43 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCB254(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  v6 = 4;
  switch ( mode )
  {
    case 1:
      ServantStatusListViewManager__set_IsInput(v4, 1, method);
      v6 = 3;
      goto LABEL_14;
    case 2:
      ServantStatusListViewManager__set_IsInput(v4, 0, method);
      v6 = 2;
      goto LABEL_14;
    case 3:
      goto LABEL_14;
    case 4:
      v6 = 5;
      goto LABEL_14;
    case 5:
      v6 = 6;
      goto LABEL_14;
    case 6:
      v6 = 7;
      goto LABEL_14;
    case 7:
      v6 = 8;
      goto LABEL_14;
    case 8:
      v6 = 9;
      goto LABEL_14;
    case 9:
      v6 = 10;
      goto LABEL_14;
    case 10:
      v6 = 11;
LABEL_14:
      ServantStatusListViewManager__RequestListObject_37111040(v4, v6, method);
      break;
    default:
      return;
  }
}


void __fastcall ServantStatusListViewManager__SetObjectItem(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t initMode; // w8
  int32_t v4; // w8

  initMode = this->fields.initMode;
  if ( initMode == 8 )
  {
    if ( obj )
    {
      v4 = 9;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCB254(this, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v4 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v4 = 3;
LABEL_9:
  ServantStatusListViewObject__Init_37110136(obj, v4, method);
}


void __fastcall ServantStatusListViewManager__add_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B19F3C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B19F3C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  ServantStatusListViewManager__remove_callbackFunc(v11, v12, v13);
}


bool __fastcall ServantStatusListViewManager__get_IsInput(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall ServantStatusListViewManager__remove_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B19F3D & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B19F3D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4B19F3B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, value);
    byte_4B19F3B = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1BCB254(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1318C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A13134;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = id;
  v16 = result;
  if ( (byte_4B19F4F & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&ServantStatusListViewManager_ResultKind_TypeInfo, v9);
    byte_4B19F4F = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&id,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__Invoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B19F50 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager___c_TypeInfo, v1);
    byte_4B19F50 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantStatusListViewManager___c___ctor(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickCombine_b__61_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B19F51 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B19F51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B19F52 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B19F52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_1(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B19F53 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B19F53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}