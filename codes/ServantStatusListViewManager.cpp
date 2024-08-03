void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Array_o *v6; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Array_o *v10; // x0
  System_Array_o *v11; // x19
  struct ServantStatusListViewManager_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct ServantStatusListViewItemDraw_Kind_array *v18; // x1
  struct ServantStatusListViewManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct ServantStatusListViewManager_StaticFields *v22; // x0
  System_RuntimeFieldHandle_o v23; // 0:w1.4
  System_RuntimeFieldHandle_o v24; // 0:w1.4

  if ( (byte_49F92AE & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1);
    sub_1B640C8(&ServantStatusListViewManager_TypeInfo, v2);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v4);
    byte_49F92AE = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v5 = (System_Array_o *)sub_1B64170(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v23.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v6 = v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v23, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->normalKindList, (int32_t)v6, v8, v9);
  v10 = (System_Array_o *)sub_1B64170(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v24.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v11 = v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v10, v24, 0LL);
  v12 = ServantStatusListViewManager_TypeInfo->static_fields;
  v12->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->equipKindList, (int32_t)v11, v13, v14);
  v15 = sub_1B64170(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_8;
  v18 = (struct ServantStatusListViewItemDraw_Kind_array *)v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v15 + 32) = 12;
  v19 = ServantStatusListViewManager_TypeInfo->static_fields;
  v19->npcFollowerEquipKindList = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->npcFollowerEquipKindList, (int32_t)v18, v16, v17);
  v15 = sub_1B64170(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v15 )
LABEL_8:
    sub_1B64324(v15);
  v18 = (struct ServantStatusListViewItemDraw_Kind_array *)v15;
  if ( !*(_DWORD *)(v15 + 24) )
LABEL_9:
    sub_1B6432C(v15, v18);
  *(_DWORD *)(v15 + 32) = 14;
  v22 = ServantStatusListViewManager_TypeInfo->static_fields;
  v22->commandCodeKindList = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->commandCodeKindList, (int32_t)v18, v20, v21);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_T__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F92AD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v6);
    byte_49F92AD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v7, v8, v9);
  this->fields.isInput = 1;
  v12 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo,
                                                  v10,
                                                  v11);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentKindList, (int32_t)v12, v13, v14);
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
  int v10; // w21
  float value; // s0
  float v12; // s9
  int32_t v13; // w20
  ServantStatusListViewObject_o *v14; // x21
  float v15; // s8
  float v16; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F92A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v3);
    byte_49F92A4 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  this->fields.cachedViewTargetGap = 0.0;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( !size )
  {
    v13 = -1;
    goto LABEL_20;
  }
  objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              objectList,
                                                              size - 1,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
                                                                    0LL),
        !this->fields.scrollBar)
    || (v10 = (int)objectList,
        value = UIProgressBar__get_value((UIProgressBar_o *)this->fields.scrollBar, 0LL),
        (objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList) == 0LL) )
  {
LABEL_17:
    sub_1B64324(objectList);
  }
  v12 = value * (float)-(float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
  v13 = 0;
  while ( v13 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v13,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v14 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0LL);
    if ( !objectList )
      goto LABEL_17;
    v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL);
    v15 = v18.fields.y;
    v16 = (float)ServantStatusListViewObject__GetSize(v14, 0LL) * 0.5;
    if ( (float)(v12 + (float)(ViewSize.fields.y * -0.35)) > (float)(v15 - v16) )
    {
      this->fields.cachedViewTargetGap = (float)(v15 + v16) - v12;
      break;
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_17;
  }
LABEL_20:
  this->fields.cachedViewTargetIndex = v13;
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

  if ( (byte_49F92A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5);
    byte_49F92A3 = 1;
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
               (const MethodInfo_34934C4 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
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
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  int v16; // w9
  UnityEngine_Object_o *scrollView; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Component_object; // x20
  float v21; // s8
  float v22; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  __int64 v24; // x1
  struct ServantStatusListViewItem_o *v25; // x8
  ServantStatusListViewManager_c **v26; // x26
  __int64 *v27; // x8
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v30; // x8
  __int64 v31; // x29
  unsigned __int64 v32; // x21
  __int64 v33; // x22
  float v34; // s8
  int32_t v35; // w23
  il2cpp_array_size_t v36; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v38; // x8
  struct ServantStatusListViewItem_o *v39; // x8
  __int64 v40; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v43; // x8
  Il2CppObject *v44; // x24
  Il2CppObject *v45; // x25
  ServantStatusListViewManager_c **v46; // x27
  Il2CppObject *v47; // x24
  Il2CppObject *v48; // x26
  int32_t Size; // w0
  int v50; // w28
  UnityEngine_Transform_o *v51; // x26
  int v52; // w28
  float v53; // s8
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x26
  __int64 v56; // x1
  UnityEngine_Transform_o *v57; // x26
  int32_t layer; // w0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  ServantStatusListViewManager_c *v65; // x8
  struct ServantStatusListViewManager_StaticFields *static_fields; // x9
  __int64 v67; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v69; // x9
  __int64 v70; // x10
  UnityEngine_Object_o *v71; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F92A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo);
    sub_1B640C8(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&ServantStatusListViewManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_5305/*"DispObject"*/, v13);
    byte_49F92A0 = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_125;
  v16 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v16;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( !transform )
      goto LABEL_125;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_125;
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      v21 = *((float *)&Component_object[20].monitor + 1);
      v22 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v73.fields.x = -v21;
      v73.fields.y = -v22;
      v73.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v73, 0LL);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v18, v19);
  v25 = this->fields.mainInfo;
  if ( !v25 )
    goto LABEL_125;
  v26 = &ServantStatusListViewManager_TypeInfo;
  if ( v25->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 32LL);
  }
  else
  {
    svtEntity = v25->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_125;
    transform = SvtType__IsServantEquip(svtEntity->fields.type, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_125;
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      isNpcFollowerServantEquip = (*p_mainInfo)->fields.isNpcFollowerServantEquip;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v30 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        v27 = (__int64 *)(v30 + 24);
      else
        v27 = (__int64 *)(v30 + 16);
    }
    else
    {
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 8LL);
    }
  }
  v31 = *v27;
  if ( *v27 && this->fields.statusObjectList && (int)*(_QWORD *)(v31 + 24) >= 1 )
  {
    v32 = 0LL;
    v33 = (unsigned int)*(_QWORD *)(v31 + 24);
    v34 = 0.0;
    do
    {
      if ( v32 >= *(unsigned int *)(v31 + 24) )
LABEL_126:
        sub_1B6432C(transform, v24);
      v35 = *(_DWORD *)(v31 + 4 * v32 + 32);
      v36 = v35 - 1;
      if ( v35 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_125;
        if ( v35 <= (signed int)statusObjectList->max_length )
        {
          switch ( v35 )
          {
            case 3:
              v38 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !v38->fields.isEquipShowMode )
                goto LABEL_118;
              transform = (__int64)v38->fields.svtEntity;
              if ( !transform )
                goto LABEL_125;
              transform = ServantEntity__get_IsServant((ServantEntity_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isCollection )
                goto LABEL_81;
              goto LABEL_118;
            case 4:
            case 12:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 5:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 6:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnableAppendSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 7:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)transform, &tdInfo, 0LL);
              if ( !tdInfo )
                goto LABEL_125;
              if ( tdInfo->fields.id <= 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 10:
              v39 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              v40 = 0LL;
              break;
            case 15:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                goto LABEL_118;
              goto LABEL_81;
            case 16:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.enableTdSpeed )
                goto LABEL_118;
              goto LABEL_81;
            case 17:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( (*p_mainInfo)->fields.enableChangeVoice )
                goto LABEL_81;
              goto LABEL_118;
            case 18:
            case 19:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                goto LABEL_118;
              goto LABEL_81;
            default:
              goto LABEL_81;
          }
          while ( 1 )
          {
            svtCommentEntityList = v39->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_125;
            max_length = svtCommentEntityList->max_length;
            if ( (int)v40 >= max_length )
              goto LABEL_118;
            if ( (unsigned int)v40 >= max_length )
              goto LABEL_126;
            transform = (__int64)svtCommentEntityList->m_Items[v40];
            if ( !transform )
              goto LABEL_125;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0LL);
            if ( (transform & 1) == 0 )
              break;
            v39 = *p_mainInfo;
            ++v40;
            if ( !*p_mainInfo )
              goto LABEL_125;
          }
LABEL_81:
          v43 = this->fields.statusObjectList;
          if ( !v43 )
            goto LABEL_125;
          if ( v36 >= v43->max_length )
            goto LABEL_126;
          v44 = (Il2CppObject *)v43->m_Items[v36];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v45 = UnityEngine_Object__Instantiate_object_(
                  v44,
                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v45 )
              goto LABEL_125;
            v46 = v26;
            v47 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v45,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v48 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v45,
                    (System_String_o *)StringLiteral_5305/*"DispObject"*/,
                    (const MethodInfo_2E89434 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              if ( !v48 )
                goto LABEL_125;
              LODWORD(v48[7].monitor) = v35;
            }
            if ( !v47 )
              goto LABEL_125;
            ServantStatusListViewObject__SetItem((ServantStatusListViewObject_o *)v47, this->fields.mainInfo, 0LL);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v47, 0LL);
            v50 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v45, 0LL);
            if ( !this->fields.listParent )
              goto LABEL_125;
            v51 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
            if ( !v51 )
              goto LABEL_125;
            UnityEngine_Transform__set_parent(v51, (UnityEngine_Transform_o *)transform, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v45, 0LL);
            if ( !transform )
              goto LABEL_125;
            v52 = v50 >> 1;
            v53 = v34 - (float)v52;
            v74.fields.x = 0.0;
            v74.fields.z = 0.0;
            v74.fields.y = v53;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v45, 0LL);
            v55 = (UnityEngine_Transform_o *)transform;
            if ( !byte_49F7117 )
            {
              transform = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v54);
              byte_49F7117 = 1;
            }
            if ( !v55 )
              goto LABEL_125;
            UnityEngine_Transform__set_localRotation(
              v55,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v45, 0LL);
            v57 = (UnityEngine_Transform_o *)transform;
            if ( !byte_49F7116 )
            {
              transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v56);
              byte_49F7116 = 1;
            }
            if ( !v57 )
              goto LABEL_125;
            UnityEngine_Transform__set_localScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_125;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v45, layer, 0LL);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v47, 0LL);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v47, this, 0LL);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_125;
            v61 = *(_QWORD *)(transform + 16);
            v26 = v46;
            v62 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v61 )
              goto LABEL_125;
            v63 = *(int *)(transform + 24);
            if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v47,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = v61 + 8 * v63;
              *(_DWORD *)(transform + 24) = v63 + 1;
              *(_QWORD *)(v64 + 32) = v47;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 32), (int32_t)v47, v59, v60);
            }
            v65 = *v46;
            if ( !(*v46)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v46);
              v65 = *v46;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_125;
            static_fields = v65->static_fields;
            v67 = *(_QWORD *)(transform + 16);
            LIST_BLANK = static_fields->LIST_BLANK;
            v69 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v67 )
              goto LABEL_125;
            v70 = *(int *)(transform + 24);
            v34 = v53 - (float)(LIST_BLANK + v52);
            if ( (unsigned int)v70 >= *(_DWORD *)(v67 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v35,
                *(const MethodInfo_34927A8 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v70 + 1;
              *(_DWORD *)(v67 + 4 * v70 + 32) = v35;
            }
          }
        }
      }
LABEL_118:
      ++v32;
    }
    while ( v32 != v33 );
  }
  v71 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_125:
    sub_1B64324(transform);
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
  UnityEngine_Object_o *gameObject; // x20
  int32_t v10; // w3
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F92A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F92A2 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v11 = this->fields.objectList;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, 0, size, v10);
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
    sub_1B64324(objectList);
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
  int v10; // w20
  ServantStatusListViewObject_o *v11; // x21
  float v12; // s10
  float v13; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F92A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v3);
    byte_49F92A1 = 1;
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
            v13 = 1.0;
            goto LABEL_18;
          }
        }
        else
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v5 - 1,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
                  scrollView = (void *)ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v7, 0LL);
                  if ( this->fields.objectList )
                  {
                    v10 = (int)scrollView;
                    scrollView = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.objectList,
                                   this->fields.cachedViewTargetIndex,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v11 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
                      if ( scrollView )
                      {
                        v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                        v12 = v15.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v11, 0LL);
                        if ( this->fields.scrollBar )
                        {
                          v13 = (float)-(float)((float)(v12 + (float)((float)(int)scrollView * 0.5))
                                              - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
                          scrollView = this->fields.scrollBar;
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v13, 0LL);
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
    sub_1B64324(scrollView);
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v9; // x0
  const MethodInfo *v10; // x2
  unsigned int ButtonIndex; // w20
  int v12; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v15; // x3
  __int64 v16; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)ownerObject, (int32_t)method);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1B64324(v9);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      v10);
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
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusListViewManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusListViewManager_o *v22; // x20
  ServantStatusListViewManager___c_c *v23; // x8
  System_Action_o *_9__57_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  v5 = this;
  if ( (byte_49F92AC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnClickCombine__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__, v9);
    sub_1B640C8(&ServantStatusListViewManager___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_11832/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v11);
    this = (ServantStatusListViewManager_o *)sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49F92AC = 1;
  }
  if ( v5->fields.initMode == 1 )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v5->fields.callbackFunc;
        v5->fields.callbackFunc = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
        if ( callbackFunc )
        {
          v15 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1B640E0(Method_ServantStatusListViewManager_OnClickCombine__);
          v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            (unsigned int)kind,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        return;
      }
      v17 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B640E0(Method_ServantStatusListViewManager_OnClickCombine__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v22 = this;
      v23 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v23 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__57_0 = v23->static_fields->__9__57_0;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__57_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = ServantStatusListViewManager___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v23->static_fields->__9;
        _9__57_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
        System_Action___ctor(_9__57_0, v26, Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__, 0LL);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__57_0 = _9__57_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v28, v29);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v25,
          (System_String_o *)v22,
          _9__57_0,
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
          0LL);
        return;
      }
    }
    sub_1B64324(this);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B64324(v8);
      Kind = ServantStatusListViewObject__GetKind(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        0LL,
        Kind,
        *(_QWORD *)&v5->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_49F92AA & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_11882/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_49F92AA = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0LL);
    v8 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
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
      sub_1B64324(mainInfo);
    }
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
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
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v11; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_49F92A9 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnClickListViewExp__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_11882/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_49F92A9 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v6 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v11 = v9,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v9 = System_String__Format(v11, NumberFormat, 0LL),
          !Instance) )
    {
      sub_1B64324(v9);
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
  if ( (byte_49F92AB & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnClickListViewFriendship__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (ServantStatusListViewManager_o *)sub_1B640C8(&StringLiteral_11883/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v6);
    byte_49F92AB = 1;
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
        v8 = (_QWORD *)sub_1B640E0(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
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
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
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
      sub_1B64324(this);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        11LL,
        (unsigned int)index,
        *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnEnable(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
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
  UIScrollView_o *v7; // x0

  if ( (byte_49F92A8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F92A8 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v7);
        }
        UIScrollView__UpdatePosition(v7, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F92A6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F92A6 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      objectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      ServantStatusListViewObject__Init_34536852((ServantStatusListViewObject_o *)current, mode, v19, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_33486712(
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
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F92A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ServantStatusListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F92A7 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      objectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ServantStatusListViewObject__Init_34536936((ServantStatusListViewObject_o *)current, mode, v17, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusListViewManager__SetMode_33486480(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_33486480(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_49F92A5 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1B640C8(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               *(_QWORD *)&mode);
    byte_49F92A5 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B64324(this);
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
      ServantStatusListViewManager__RequestListObject_33486712(v4, v6, method);
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
    sub_1B64324(this);
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
  ServantStatusListViewObject__Init_34533984(obj, v4, 0LL);
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

  if ( (byte_49F929E & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F929E = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49F929F & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F929F = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  UIProgressBar_o *v7; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_49F929D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, value);
    byte_49F929D = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v7 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v7 )
      sub_1B64324(v6);
    alpha = UIProgressBar__get_alpha(v7, 0LL);
    UIProgressBar__set_alpha(v7, alpha, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A9254;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A91FC;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = id;
  v13 = result;
  if ( (byte_49F9C12 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&ServantStatusListViewManager_ResultKind_TypeInfo, v9);
    byte_49F9C12 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9C13 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager___c_TypeInfo, v1);
    byte_49F9C13 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantStatusListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantStatusListViewManager___c___ctor(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickCombine_b__57_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9C14 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F9C14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}