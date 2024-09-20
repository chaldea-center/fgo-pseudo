void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_Array_o *v2; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_Array_o *v6; // x0
  System_Array_o *v7; // x19
  struct ServantStatusListViewManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct ServantStatusListViewItemDraw_Kind_array *v15; // x1
  struct ServantStatusListViewManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct ServantStatusListViewManager_StaticFields *v19; // x0
  System_RuntimeFieldHandle_o v20; // 0:w1.4
  System_RuntimeFieldHandle_o v21; // 0:w1.4

  if ( (byte_4A57E1F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItemDraw_Kind___TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE);
    sub_1B885B0(&Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6);
    byte_4A57E1F = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v1 = (System_Array_o *)sub_1B88658(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v20.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v2 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v20, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->normalKindList, (int32_t)v2, v4, v5);
  v6 = (System_Array_o *)sub_1B88658(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v21.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v7 = v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v6, v21, 0LL);
  v8 = ServantStatusListViewManager_TypeInfo->static_fields;
  v8->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->equipKindList, (int32_t)v7, v9, v10);
  v11 = sub_1B88658(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_8;
  v15 = (struct ServantStatusListViewItemDraw_Kind_array *)v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v11 + 32) = 12;
  v16 = ServantStatusListViewManager_TypeInfo->static_fields;
  v16->npcFollowerEquipKindList = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->npcFollowerEquipKindList, (int32_t)v15, v13, v14);
  v11 = sub_1B88658(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v11 )
LABEL_8:
    sub_1B8880C(v11, v12);
  v15 = (struct ServantStatusListViewItemDraw_Kind_array *)v11;
  if ( !*(_DWORD *)(v11 + 24) )
LABEL_9:
    sub_1B88814(v11, v15);
  *(_DWORD *)(v11 + 32) = 14;
  v19 = ServantStatusListViewManager_TypeInfo->static_fields;
  v19->commandCodeKindList = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->commandCodeKindList, (int32_t)v15, v17, v18);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_T__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57E1E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
    byte_4A57E1E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  this->fields.isInput = 1;
  v6 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentKindList, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewManager__CacheViewTopContentsAndGap(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  int v9; // w21
  float value; // s0
  float v11; // s9
  int32_t v12; // w20
  ServantStatusListViewObject_o *v13; // x21
  float v14; // s8
  float v15; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57E15 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4A57E15 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  this->fields.cachedViewTargetGap = 0.0;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( !size )
  {
    v12 = -1;
    goto LABEL_20;
  }
  objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              objectList,
                                                              size - 1,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)objectList;
  objectList = (System_Collections_Generic_List_object__o *)scrollView->fields.mPanel;
  if ( !objectList )
    goto LABEL_17;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)objectList, 0LL);
  if ( !v6
    || (objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(v6, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL),
        y = localPosition.fields.y,
        objectList = (System_Collections_Generic_List_object__o *)ServantStatusListViewObject__GetSize(
                                                                    (ServantStatusListViewObject_o *)v6,
                                                                    0LL),
        !this->fields.scrollBar)
    || (v9 = (int)objectList,
        value = UIProgressBar__get_value((UIProgressBar_o *)this->fields.scrollBar, 0LL),
        (objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(objectList, method);
  }
  v11 = value * (float)-(float)((float)-(float)(y + (float)((float)v9 * -0.5)) - ViewSize.fields.y);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v12,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v13 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0LL);
    if ( !objectList )
      goto LABEL_17;
    v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL);
    v14 = v17.fields.y;
    v15 = (float)ServantStatusListViewObject__GetSize(v13, 0LL) * 0.5;
    if ( (float)(v11 + (float)(ViewSize.fields.y * -0.35)) > (float)(v14 - v15) )
    {
      this->fields.cachedViewTargetGap = (float)(v14 + v15) - v11;
      break;
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
LABEL_20:
  this->fields.cachedViewTargetIndex = v12;
}


void __fastcall ServantStatusListViewManager__CacheViewTopTargetContents(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *currentKindList; // x0
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v7; // w0

  if ( (byte_4A57E14 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4A57E14 = 1;
  }
  currentKindList = (System_Collections_Generic_List_T__o *)this->fields.currentKindList;
  if ( currentKindList )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      if ( objectList->fields._size >= 1 )
      {
        v7 = System_Collections_Generic_List_Int32Enum___IndexOf(
               currentKindList,
               kind,
               (const MethodInfo_34E3CB8 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( v7 != -1 )
        {
          this->fields.cachedViewTargetIndex = v7;
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
  __int64 transform; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  int v8; // w9
  UnityEngine_Object_o *scrollView; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Component_object; // x20
  float v13; // s8
  float v14; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v16; // x8
  ServantStatusListViewManager_c **v17; // x26
  __int64 *v18; // x8
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v21; // x8
  __int64 v22; // x29
  unsigned __int64 v23; // x21
  __int64 v24; // x22
  float v25; // s8
  int32_t v26; // w23
  il2cpp_array_size_t v27; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v29; // x8
  struct ServantStatusListViewItem_o *v30; // x8
  __int64 v31; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v34; // x8
  Il2CppObject *v35; // x24
  Il2CppObject *v36; // x25
  ServantStatusListViewManager_c **v37; // x27
  Il2CppObject *v38; // x24
  Il2CppObject *v39; // x26
  int32_t Size; // w0
  int v41; // w28
  UnityEngine_Transform_o *v42; // x26
  int v43; // w28
  float v44; // s8
  UnityEngine_Transform_o *v45; // x26
  UnityEngine_Transform_o *v46; // x26
  int32_t layer; // w0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  ServantStatusListViewManager_c *v54; // x8
  struct ServantStatusListViewManager_StaticFields *static_fields; // x9
  __int64 v56; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v58; // x9
  __int64 v59; // x10
  UnityEngine_Object_o *v60; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57E11 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5330/*"DispObject"*/);
    byte_4A57E11 = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_125;
  v8 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v8;
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v13 = *((float *)&Component_object[20].monitor + 1);
      v14 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v62.fields.x = -v13;
      v62.fields.y = -v14;
      v62.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v62, 0LL);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v10, v11);
  v16 = this->fields.mainInfo;
  if ( !v16 )
    goto LABEL_125;
  v17 = &ServantStatusListViewManager_TypeInfo;
  if ( v16->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    v18 = (__int64 *)(*(_QWORD *)(transform + 184) + 32LL);
  }
  else
  {
    svtEntity = v16->fields.svtEntity;
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
      v21 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        v18 = (__int64 *)(v21 + 24);
      else
        v18 = (__int64 *)(v21 + 16);
    }
    else
    {
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v18 = (__int64 *)(*(_QWORD *)(transform + 184) + 8LL);
    }
  }
  v22 = *v18;
  if ( *v18 && this->fields.statusObjectList && (int)*(_QWORD *)(v22 + 24) >= 1 )
  {
    v23 = 0LL;
    v24 = (unsigned int)*(_QWORD *)(v22 + 24);
    v25 = 0.0;
    do
    {
      if ( v23 >= *(unsigned int *)(v22 + 24) )
LABEL_126:
        sub_1B88814(transform, v6);
      v26 = *(_DWORD *)(v22 + 4 * v23 + 32);
      v27 = v26 - 1;
      if ( v26 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_125;
        if ( v26 <= (signed int)statusObjectList->max_length )
        {
          switch ( v26 )
          {
            case 3:
              v29 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !v29->fields.isEquipShowMode )
                goto LABEL_118;
              transform = (__int64)v29->fields.svtEntity;
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
              v30 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              v31 = 0LL;
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
            svtCommentEntityList = v30->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_125;
            max_length = svtCommentEntityList->max_length;
            if ( (int)v31 >= max_length )
              goto LABEL_118;
            if ( (unsigned int)v31 >= max_length )
              goto LABEL_126;
            transform = (__int64)svtCommentEntityList->m_Items[v31];
            if ( !transform )
              goto LABEL_125;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0LL);
            if ( (transform & 1) == 0 )
              break;
            v30 = *p_mainInfo;
            ++v31;
            if ( !*p_mainInfo )
              goto LABEL_125;
          }
LABEL_81:
          v34 = this->fields.statusObjectList;
          if ( !v34 )
            goto LABEL_125;
          if ( v27 >= v34->max_length )
            goto LABEL_126;
          v35 = (Il2CppObject *)v34->m_Items[v27];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v36 = UnityEngine_Object__Instantiate_object_(
                  v35,
                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_125;
            v37 = v17;
            v38 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v36,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v39 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v36,
                    (System_String_o *)StringLiteral_5330/*"DispObject"*/,
                    (const MethodInfo_2ED0414 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_125;
              LODWORD(v39[7].monitor) = v26;
            }
            if ( !v38 )
              goto LABEL_125;
            ServantStatusListViewObject__SetItem((ServantStatusListViewObject_o *)v38, this->fields.mainInfo, 0LL);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v38, 0LL);
            v41 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            if ( !this->fields.listParent )
              goto LABEL_125;
            v42 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
            if ( !v42 )
              goto LABEL_125;
            UnityEngine_Transform__set_parent(v42, (UnityEngine_Transform_o *)transform, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            if ( !transform )
              goto LABEL_125;
            v43 = v41 >> 1;
            v44 = v25 - (float)v43;
            v63.fields.x = 0.0;
            v63.fields.z = 0.0;
            v63.fields.y = v44;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v63, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            v45 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4A55CE7 )
            {
              transform = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
              byte_4A55CE7 = 1;
            }
            if ( !v45 )
              goto LABEL_125;
            UnityEngine_Transform__set_localRotation(
              v45,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            v46 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4A55CE6 )
            {
              transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE6 = 1;
            }
            if ( !v46 )
              goto LABEL_125;
            UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_125;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v36, layer, 0LL);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v38, 0LL);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v38, this, 0LL);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_125;
            v50 = *(_QWORD *)(transform + 16);
            v17 = v37;
            v51 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v50 )
              goto LABEL_125;
            v52 = *(int *)(transform + 24);
            if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v38,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = v50 + 8 * v52;
              *(_DWORD *)(transform + 24) = v52 + 1;
              *(_QWORD *)(v53 + 32) = v38;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)v38, v48, v49);
            }
            v54 = *v37;
            if ( !(*v37)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v37);
              v54 = *v37;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_125;
            static_fields = v54->static_fields;
            v56 = *(_QWORD *)(transform + 16);
            LIST_BLANK = static_fields->LIST_BLANK;
            v58 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v56 )
              goto LABEL_125;
            v59 = *(int *)(transform + 24);
            v25 = v44 - (float)(LIST_BLANK + v43);
            if ( (unsigned int)v59 >= *(_DWORD *)(v56 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v26,
                *(const MethodInfo_34E303C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v59 + 1;
              *(_DWORD *)(v56 + 4 * v59 + 32) = v26;
            }
          }
        }
      }
LABEL_118:
      ++v23;
    }
    while ( v23 != v24 );
  }
  v60 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_125:
    sub_1B8880C(transform, v6);
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w3
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A57E13 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E13 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, 0, size, v6);
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
    sub_1B8880C(objectList, method);
  }
}


void __fastcall ServantStatusListViewManager__LateUpdate(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  int32_t v4; // w8
  struct UIScrollView_o *v5; // x8
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  int v9; // w20
  ServantStatusListViewObject_o *v10; // x21
  float v11; // s10
  float v12; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57E12 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4A57E12 = 1;
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
        v4 = *((_DWORD *)scrollView + 6);
        if ( this->fields.cachedViewTargetIndex >= v4 )
        {
          scrollView = this->fields.scrollBar;
          if ( scrollView )
          {
            v12 = 1.0;
            goto LABEL_18;
          }
        }
        else
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v4 - 1,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
          v5 = this->fields.scrollView;
          if ( v5 )
          {
            v6 = (UnityEngine_Component_o *)scrollView;
            scrollView = v5->fields.mPanel;
            if ( scrollView )
            {
              ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
              if ( v6 )
              {
                scrollView = UnityEngine_Component__get_transform(v6, 0LL);
                if ( scrollView )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                  y = localPosition.fields.y;
                  scrollView = (void *)ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v6, 0LL);
                  if ( this->fields.objectList )
                  {
                    v9 = (int)scrollView;
                    scrollView = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.objectList,
                                   this->fields.cachedViewTargetIndex,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v10 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
                      if ( scrollView )
                      {
                        v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                        v11 = v14.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v10, 0LL);
                        if ( this->fields.scrollBar )
                        {
                          v12 = (float)-(float)((float)(v11 + (float)((float)(int)scrollView * 0.5))
                                              - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v9 * -0.5)) - ViewSize.fields.y);
                          scrollView = this->fields.scrollBar;
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v12, 0LL);
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
    sub_1B8880C(scrollView, method);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  unsigned int ButtonIndex; // w20
  int v13; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v16; // x3
  __int64 v17; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)ownerObject, (int32_t)method);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1B8880C(v9, v10);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      v11);
      v13 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))ownerObject->klass->vtable._4_GetKind.method)(
              ownerObject,
              ownerObject->klass->vtable._5_SetItem.methodPtr);
      if ( v13 == 17 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v16 = *(_QWORD *)&v5->fields.extra_arg;
        v17 = 9LL;
        goto LABEL_9;
      }
      if ( v13 == 16 )
      {
        m_target = v5->fields.m_target;
        original_method_info = v5->fields.original_method_info;
        v16 = *(_QWORD *)&v5->fields.extra_arg;
        v17 = 8LL;
LABEL_9:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64))m_target)(
          original_method_info,
          v17,
          ButtonIndex,
          v16);
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v13; // x20
  ServantStatusListViewManager___c_c *v14; // x8
  System_Action_o *_9__57_0; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  v5 = this;
  if ( (byte_4A57E1D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnClickCombine__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__);
    sub_1B885B0(&ServantStatusListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_11887/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57E1D = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
        if ( callbackFunc )
        {
          v8 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusListViewManager_OnClickCombine__);
          v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            (unsigned int)kind,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        return;
      }
      v10 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_ServantStatusListViewManager_OnClickCombine__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v13 = this;
      v14 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v14 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__57_0 = v14->static_fields->__9__57_0;
      v16 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__57_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = ServantStatusListViewManager___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v14->static_fields->__9;
        _9__57_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__57_0, v17, Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__, 0LL);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__57_0 = _9__57_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v19, v20);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v16,
          (System_String_o *)v13,
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
    sub_1B8880C(this, *(_QWORD *)&kind);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
  __int64 v9; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v8, v9);
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
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
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquip; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  ServantStatusListViewItem_o *v8; // x8
  System_String_o *v9; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4A57E1B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11937/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4A57E1B = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0LL);
    v5 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11937/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v8 = this->fields.mainInfo;
      if ( v8 )
      {
        v9 = (System_String_o *)mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v8, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v9, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1B8880C(mainInfo, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v9; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4A57E1A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnClickListViewExp__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11937/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4A57E1A = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v3 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11937/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v9 = v6,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v6 = System_String__Format(v9, NumberFormat, 0LL),
          !Instance) )
    {
      sub_1B8880C(v6, v7);
    }
    CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, v6, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x20
  struct ServantStatusListViewItem_o *v7; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantStatusListViewManager_o *v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_4A57E1C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnClickListViewFriendship__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusListViewManager_o *)sub_1B885B0(&StringLiteral_11938/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/);
    byte_4A57E1C = 1;
  }
  if ( v2->fields.initMode == 1 )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( mainInfo->fields.userSvtCollectionEntity )
    {
      v4 = Method_ServantStatusListViewManager_OnClickListViewFriendship__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewFriendship__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B885C8(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v7 = v2->fields.mainInfo;
      if ( v7 )
      {
        userSvtCollectionEntity = v7->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v9 = this;
          v10 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v11 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v10;
          *(_QWORD *)&v14.fields.fakeValue = v11;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format((System_String_o *)v9, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_1B8880C(this, method);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_4A57E19 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E19 = 1;
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
          sub_1B8880C(v8, v7);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57E17 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57E17 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      objectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v11, v12);
      ServantStatusListViewObject__Init_34626684((ServantStatusListViewObject_o *)current, mode, v10, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_33624372(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57E18 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57E18 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      objectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v9, v10);
      ServantStatusListViewObject__Init_34626768((ServantStatusListViewObject_o *)current, mode, v8, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusListViewManager__SetMode_33624140(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_33624140(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4A57E16 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4A57E16 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B8880C(this, *(_QWORD *)&mode);
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
      ServantStatusListViewManager__RequestListObject_33624372(v4, v6, method);
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
    sub_1B8880C(this, obj);
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
  ServantStatusListViewObject__Init_34623816(obj, v4, 0LL);
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

  if ( (byte_4A57E0F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4A57E0F = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A57E10 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4A57E10 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


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
  if ( (byte_4A57E0E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E0E = 1;
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
      sub_1B8880C(v6, v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB738;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB6E0;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = id;
  v15 = result;
  if ( (byte_4A5861C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_ResultKind_TypeInfo);
    byte_4A5861C = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             ServantStatusListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&id,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5861D & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager___c_TypeInfo);
    byte_4A5861D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  __int64 v3; // x1

  if ( (byte_4A5861E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5861E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}