void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD8B7C & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BD8B7C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PossessionInfoDialog__CheckSerializeFieldNotNull(
        PossessionInfoDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PossessionInfoDialog__Init(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Transform_o *transform; // x0
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v8; // x1
  System_Int32_array *FeaturedServantIds; // x0
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  UILabel_o *messageLabel; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Func_int__bool__o *v26; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x20
  System_Func_int__int__o *v28; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v30; // x20
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v48; // x23
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  PossessionInfo_o *v51; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  const MethodInfo *v65; // x2
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  const MethodInfo *v70; // x1

  if ( (byte_4BD8B78 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_int__bool___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_int__int___);
    sub_1C21E38(&System_Func_int__int__TypeInfo);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__0__);
    sub_1C21E38(&Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__1__);
    sub_1C21E38(&PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C21E38(&StringLiteral_15911/*"Window/CloseButton"*/);
    sub_1C21E38(&StringLiteral_10608/*"POSSESSION_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_10607/*"POSSESSION_DIALOG_MESSAGE"*/);
    byte_4BD8B78 = 1;
  }
  v5 = sub_1C22084(PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_43099640(transform, (System_String_o *)StringLiteral_15911/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object )
    goto LABEL_53;
  FeaturedServantIds = ViewGachaFeaturedServantMaster__GetFeaturedServantIds(Master_object, gachaId, 0LL);
  titleLabel = this->fields.titleLabel;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_10608/*"POSSESSION_DIALOG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_10607/*"POSSESSION_DIALOG_MESSAGE"*/,
                                                        0LL);
  if ( !messageLabel )
    goto LABEL_53;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v5 )
    goto LABEL_53;
  *(_QWORD *)(v5 + 24) = Master_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)Master_object, v13, v14, v15, v16, v17, v18);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  *(_QWORD *)(v5 + 16) = v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__OrderBy_int__bool_(
          v11,
          (System_Func_TSource__TKey__o *)v26,
          (const MethodInfo_2FD8C54 *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
  v28 = (System_Func_int__int__o *)sub_1C22084(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__1__,
    0LL);
  Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                        v27,
                                                        (System_Func_TSource__TKey__o *)v28,
                                                        (const MethodInfo_2FE8A14 *)Method_System_Linq_Enumerable_ThenBy_int__int___);
  if ( !Master_object )
LABEL_53:
    sub_1C22094(Master_object, v8);
  klass = Master_object->klass;
  v30 = Master_object;
  v31 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_16;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v33 = sub_1C73E18(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  if ( !v35 )
    sub_1C22094(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_23;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_23:
      v39 = sub_1C73E18(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_30;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_30:
      v43 = sub_1C73E18(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !listRoot )
      sub_1C22094(0LL, v44);
    possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
    v48 = UnityEngine_Component__get_transform(listRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v49 = UnityEngine_Object__Instantiate_object__50551272(
            possessionInfoObject,
            v48,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    v51 = (PossessionInfo_o *)v49;
    if ( !v49 )
      sub_1C22094(0LL, v50);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0LL);
    v60 = (int64_t)gameObject;
    if ( !objectList )
      sub_1C22094(gameObject, gameObject);
    items = objectList->fields._items;
    v62 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++objectList->fields._version;
    if ( !items )
      sub_1C22094(gameObject, gameObject);
    size = objectList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        objectList,
        gameObject,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &items->obj.klass + size;
      objectList->fields._size = size + 1;
      v64[4] = (Il2CppClass *)v60;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 4), v60, v54, v55, v56, v57, v58, v59);
    }
    PossessionInfo__SetInfo(v51, v45, v65);
  }
  v66 = *(_QWORD *)v35;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_46;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_46:
    v69 = sub_1C73E18(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v35, *(_QWORD *)(v69 + 8));
  PossessionInfoDialog__Reposition(this, v70);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.isInit = 1;
}


void __fastcall PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PossessionInfoDialog___c_c *v6; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__16_0; // x21
  Il2CppObject *v9; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_GameObject__o *v17; // x8
  int32_t size; // w2
  int v19; // w9

  if ( (byte_4BD8B7B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_PossessionInfoDialog_OnClickClose__);
    sub_1C21E38(&Method_PossessionInfoDialog___c__OnClickClose_b__16_0__);
    sub_1C21E38(&PossessionInfoDialog___c_TypeInfo);
    byte_4BD8B7B = 1;
  }
  v3 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_PossessionInfoDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v6 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v6 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v6->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = PossessionInfoDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__16_0, v9, Method_PossessionInfoDialog___c__OnClickClose_b__16_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_GameObject__o *)_9__16_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__16_0,
          (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v17 = this->fields.objectList) == 0LL) )
  {
    sub_1C22094(v6, v5);
  }
  size = v17->fields._size;
  v19 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v19;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v17->fields._items, 0, size, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollBar; // x0
  System_Action_o *v4; // x20

  if ( (byte_4BD8B7A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PossessionInfoDialog__Open_b__15_0__);
    byte_4BD8B7A = 1;
  }
  if ( this->fields.isInit )
  {
    scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !scrollBar
      || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL),
          (scrollBar = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL) )
    {
      sub_1C22094(scrollBar, method);
    }
    UIScrollView__UpdateScrollbars((UIScrollView_o *)scrollBar, 0LL);
    v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__15_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog__Reposition(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v7; // s8
  unsigned int v8; // w9
  signed int v9; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v11; // x8
  float x; // s0
  bool v13; // nf
  float v14; // s0
  int v15; // w23
  float v16; // s9
  struct UIGrid_o *v17; // x8
  int v18; // w8
  int32_t v19; // w2
  struct UIGrid_o *v20; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v22; // x20
  bool v23; // vf
  int v24; // w9
  int32_t v25; // w21
  float v26; // s10
  struct UIGrid_o *v27; // x8
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD8B79 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (PossessionInfoDialog_o *)sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4BD8B79 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_35;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_35;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
  }
  v7 = size / maxPerLine;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  v8 = vcvtps_s32_f32(v7);
  v9 = ceilf(v7) == INFINITY ? 0x80000000 : v8;
  if ( !this )
    goto LABEL_35;
  if ( v9 > 1 )
  {
    LODWORD(this->fields.baseWindow) = 1124204544;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, -10.0, 0LL);
    v11 = v2->fields.listRoot;
    if ( v11 )
    {
      x = NGUIMath__GetPivotOffset(v11->fields.pivot, 0LL).fields.x;
      v13 = x < 0.0;
      v14 = fminf(x, 1.0);
      v15 = 0;
      if ( v13 )
        v16 = 0.0;
      else
        v16 = v14;
      while ( 1 )
      {
        v17 = v2->fields.listRoot;
        if ( !v17 )
          goto LABEL_35;
        this = (PossessionInfoDialog_o *)v2->fields.objectList;
        if ( !this )
          goto LABEL_35;
        v18 = v17->fields.maxPerLine;
        v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
            ? v18
            : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___GetRange(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v18 * v15,
                                           v19,
                                           (const MethodInfo_364FC84 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
        if ( !this )
          goto LABEL_35;
        v20 = v2->fields.listRoot;
        if ( !v20 )
          goto LABEL_35;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        v22 = (System_Collections_Generic_List_object__o *)this;
        v23 = __OFSUB__(m_CancellationTokenSource, 1);
        v24 = m_CancellationTokenSource - 1;
        if ( v24 < 0 == v23 )
          break;
LABEL_31:
        if ( ++v15 == v9 )
          return;
      }
      v25 = 0;
      v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
      while ( 1 )
      {
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___get_Item(
                                           v22,
                                           v25,
                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        v27 = v2->fields.listRoot;
        if ( !v27 )
          break;
        if ( !this )
          break;
        cellWidth = v27->fields.cellWidth;
        cellHeight = v27->fields.cellHeight;
        this = (PossessionInfoDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !this )
          break;
        v31.fields.x = (float)(cellWidth * (float)v25) - v26;
        v31.fields.y = (float)v15 * (float)-cellHeight;
        v31.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL);
        if ( ++v25 >= v22->fields._size )
          goto LABEL_31;
      }
    }
LABEL_35:
    sub_1C22094(this, method);
  }
  LODWORD(this->fields.baseWindow) = 1124597760;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v30, 0.0, 0LL);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  if ( !this )
    goto LABEL_35;
  ((void (__fastcall *)(PossessionInfoDialog_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall PossessionInfoDialog___Open_b__15_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  void *scrollBar; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  struct UIGrid_o *listRoot; // x9

  if ( (byte_4BD8B7D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_PossessionInfoDialog___c__Open_b__15_1__);
    sub_1C21E38(&PossessionInfoDialog___c_TypeInfo);
    byte_4BD8B7D = 1;
  }
  scrollBar = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    scrollBar = PossessionInfoDialog___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)scrollBar + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)scrollBar + 56) )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = PossessionInfoDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v5 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_PossessionInfoDialog___c__Open_b__15_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)v5,
          (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (scrollBar = this->fields.scrollBar) == 0LL)
    || (scrollBar = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL),
        (v14 = this->fields.objectList) == 0LL)
    || (listRoot = this->fields.listRoot) == 0LL
    || !scrollBar
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)scrollBar,
          v14->fields._size > listRoot->fields.maxPerLine,
          0LL),
        (scrollBar = this->fields.scrollView) == 0LL) )
  {
    sub_1C22094(scrollBar, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8B7E & 1) == 0 )
  {
    sub_1C21E38(&PossessionInfoDialog___c_TypeInfo);
    byte_4BD8B7E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PossessionInfoDialog___c___ctor(PossessionInfoDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PossessionInfoDialog___c___OnClickClose_b__16_0(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4BD8B80 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8B80 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__15_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD8B7F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8B7F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1C22094(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c__DisplayClass12_0___ctor(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PossessionInfoDialog___c__DisplayClass12_0___Init_b__0(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *userServantCollectionMaster; // x20
  System_Int32_array *v6; // x0
  System_Int32_array *v7; // x1

  if ( (byte_4BD8B81 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BD8B81 = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
    sub_1C2209C(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1C22094(v6, v7);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass12_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  void *svtMaster; // x0

  if ( (byte_4BD8B82 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4BD8B82 = 1;
  }
  svtMaster = this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)svtMaster,
                      id,
                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(svtMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)svtMaster + 52);
}