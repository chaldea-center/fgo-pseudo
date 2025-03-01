void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BF9D62 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4BF9D62 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfoDialog__Init(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  UnityEngine_Transform_o *transform; // x0
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v28; // x1
  System_Int32_array *FeaturedServantIds; // x0
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  UILabel_o *messageLabel; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Func_int__int__o *v46; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x21
  System_Func_int__int__o *v48; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v50; // x20
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x20
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v68; // x23
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  PossessionInfo_o *v71; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  const MethodInfo *v85; // x2
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  const MethodInfo *v90; // x1

  if ( (byte_4BF9D5E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&gachaId);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ThenBy_int__int___, v9);
    sub_1C2E12C(&System_Func_int__int__TypeInfo, v10);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v16);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_PossessionInfo___, v17);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v18);
    sub_1C2E12C(&Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__0__, v19);
    sub_1C2E12C(&Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__1__, v20);
    sub_1C2E12C(&PossessionInfoDialog___c__DisplayClass12_0_TypeInfo, v21);
    sub_1C2E12C(&StringLiteral_15924/*"Window/CloseButton"*/, v22);
    sub_1C2E12C(&StringLiteral_10602/*"POSSESSION_DIALOG_TITLE"*/, v23);
    sub_1C2E12C(&StringLiteral_10601/*"POSSESSION_DIALOG_MESSAGE"*/, v24);
    byte_4BF9D5E = 1;
  }
  v25 = sub_1C2E378(PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_43188916(transform, (System_String_o *)StringLiteral_15924/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object )
    goto LABEL_53;
  FeaturedServantIds = ViewGachaFeaturedServantMaster__GetFeaturedServantIds(Master_object, gachaId, 0LL);
  titleLabel = this->fields.titleLabel;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_10602/*"POSSESSION_DIALOG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_10601/*"POSSESSION_DIALOG_MESSAGE"*/,
                                                        0LL);
  if ( !messageLabel )
    goto LABEL_53;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v25 )
    goto LABEL_53;
  *(_QWORD *)(v25 + 24) = Master_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)Master_object, v33, v34, v35, v36, v37, v38);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  *(_QWORD *)(v25 + 16) = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Func_int__int__o *)sub_1C2E378(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v46,
    (Il2CppObject *)v25,
    Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__0__,
    0LL);
  v47 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v31,
          (System_Func_TSource__TKey__o *)v46,
          (const MethodInfo_2FFB90C *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  v48 = (System_Func_int__int__o *)sub_1C2E378(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v48,
    (Il2CppObject *)v25,
    Method_PossessionInfoDialog___c__DisplayClass12_0__Init_b__1__,
    0LL);
  Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                        v47,
                                                        (System_Func_TSource__TKey__o *)v48,
                                                        (const MethodInfo_300AFEC *)Method_System_Linq_Enumerable_ThenBy_int__int___);
  if ( !Master_object )
LABEL_53:
    sub_1C2E388(Master_object, v28);
  klass = Master_object->klass;
  v50 = Master_object;
  v51 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v51;
      p_offset += 4;
      if ( !v51 )
        goto LABEL_16;
    }
    v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v53 = sub_1C8010C(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v55 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  if ( !v55 )
    sub_1C2E388(0LL, v54);
  while ( 1 )
  {
    v56 = *(_QWORD *)v55;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_23;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_23:
      v59 = sub_1C8010C(v55, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
      break;
    v60 = *(_QWORD *)v55;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v62 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_30;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_30:
      v63 = sub_1C8010C(v55, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
    listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !listRoot )
      sub_1C2E388(0LL, v64);
    possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
    v68 = UnityEngine_Component__get_transform(listRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v69 = UnityEngine_Object__Instantiate_object__50692032(
            possessionInfoObject,
            v68,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    v71 = (PossessionInfo_o *)v69;
    if ( !v69 )
      sub_1C2E388(0LL, v70);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
    v80 = (int64_t)gameObject;
    if ( !objectList )
      sub_1C2E388(gameObject, gameObject);
    items = objectList->fields._items;
    v82 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++objectList->fields._version;
    if ( !items )
      sub_1C2E388(gameObject, gameObject);
    size = objectList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        objectList,
        gameObject,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &items->obj.klass + size;
      objectList->fields._size = size + 1;
      v84[4] = (Il2CppClass *)v80;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v84 + 4), v80, v74, v75, v76, v77, v78, v79);
    }
    PossessionInfo__SetInfo(v71, v65, v85);
  }
  v86 = *(_QWORD *)v55;
  v87 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
  {
    v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
    {
      --v87;
      v88 += 4;
      if ( !v87 )
        goto LABEL_46;
    }
    v89 = v86 + 16LL * *v88 + 312;
  }
  else
  {
LABEL_46:
    v89 = sub_1C8010C(v55, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v89)(v55, *(_QWORD *)(v89 + 8));
  PossessionInfoDialog__Reposition(this, v90);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.isInit = 1;
}


void __fastcall PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  PossessionInfoDialog___c_c *v11; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__16_0; // x21
  Il2CppObject *v14; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9

  if ( (byte_4BF9D61 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_GameObject__TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Clear__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_1C2E12C(&Method_PossessionInfoDialog_OnClickClose__, v5);
    sub_1C2E12C(&Method_PossessionInfoDialog___c__OnClickClose_b__16_0__, v6);
    sub_1C2E12C(&PossessionInfoDialog___c_TypeInfo, v7);
    byte_4BF9D61 = 1;
  }
  v8 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C2E144(Method_PossessionInfoDialog_OnClickClose__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2E110(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  v11 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v11 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v11->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PossessionInfoDialog___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1C2E378(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__16_0, v14, Method_PossessionInfoDialog___c__OnClickClose_b__16_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_GameObject__o *)_9__16_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__16_0,
          (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v22 = this->fields.objectList) == 0LL) )
  {
    sub_1C2E388(v11, v10);
  }
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *scrollBar; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BF9D60 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_PossessionInfoDialog__Open_b__15_0__, v3);
    byte_4BF9D60 = 1;
  }
  if ( this->fields.isInit )
  {
    scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !scrollBar
      || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL),
          (scrollBar = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL) )
    {
      sub_1C2E388(scrollBar, method);
    }
    UIScrollView__UpdateScrollbars((UIScrollView_o *)scrollBar, 0LL);
    v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__15_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v5, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog__Reposition(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v9; // s8
  unsigned int v10; // w9
  signed int v11; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v13; // x8
  float x; // s0
  bool v15; // nf
  float v16; // s0
  int v17; // w23
  float v18; // s9
  struct UIGrid_o *v19; // x8
  int v20; // w8
  int32_t v21; // w2
  struct UIGrid_o *v22; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v24; // x20
  bool v25; // vf
  int v26; // w9
  int32_t v27; // w21
  float v28; // s10
  struct UIGrid_o *v29; // x8
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BF9D5F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetRange__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    this = (PossessionInfoDialog_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_4BF9D5F = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_35;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_35;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4BF8445 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, method);
    byte_4BF8445 = 1;
  }
  v9 = size / maxPerLine;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  v10 = vcvtps_s32_f32(v9);
  v11 = ceilf(v9) == INFINITY ? 0x80000000 : v10;
  if ( !this )
    goto LABEL_35;
  if ( v11 > 1 )
  {
    LODWORD(this->fields.baseWindow) = 1124204544;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, -10.0, 0LL);
    v13 = v2->fields.listRoot;
    if ( v13 )
    {
      x = NGUIMath__GetPivotOffset(v13->fields.pivot, 0LL).fields.x;
      v15 = x < 0.0;
      v16 = fminf(x, 1.0);
      v17 = 0;
      if ( v15 )
        v18 = 0.0;
      else
        v18 = v16;
      while ( 1 )
      {
        v19 = v2->fields.listRoot;
        if ( !v19 )
          goto LABEL_35;
        this = (PossessionInfoDialog_o *)v2->fields.objectList;
        if ( !this )
          goto LABEL_35;
        v20 = v19->fields.maxPerLine;
        v21 = LODWORD(this->fields.m_CancellationTokenSource) - v20 * v17 >= v20
            ? v20
            : LODWORD(this->fields.m_CancellationTokenSource) - v20 * v17;
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___GetRange(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v20 * v17,
                                           v21,
                                           (const MethodInfo_366C47C *)Method_System_Collections_Generic_List_GameObject__GetRange__);
        if ( !this )
          goto LABEL_35;
        v22 = v2->fields.listRoot;
        if ( !v22 )
          goto LABEL_35;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        v24 = (System_Collections_Generic_List_object__o *)this;
        v25 = __OFSUB__(m_CancellationTokenSource, 1);
        v26 = m_CancellationTokenSource - 1;
        if ( v26 < 0 == v25 )
          break;
LABEL_31:
        if ( ++v17 == v11 )
          return;
      }
      v27 = 0;
      v28 = (float)(v18 * (float)(v22->fields.cellWidth * (float)v26)) + 0.0;
      while ( 1 )
      {
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___get_Item(
                                           v24,
                                           v27,
                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        v29 = v2->fields.listRoot;
        if ( !v29 )
          break;
        if ( !this )
          break;
        cellWidth = v29->fields.cellWidth;
        cellHeight = v29->fields.cellHeight;
        this = (PossessionInfoDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !this )
          break;
        v33.fields.x = (float)(cellWidth * (float)v27) - v28;
        v33.fields.y = (float)v17 * (float)-cellHeight;
        v33.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL);
        if ( ++v27 >= v24->fields._size )
          goto LABEL_31;
      }
    }
LABEL_35:
    sub_1C2E388(this, method);
  }
  LODWORD(this->fields.baseWindow) = 1124597760;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v32, 0.0, 0LL);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  if ( !this )
    goto LABEL_35;
  ((void (__fastcall *)(PossessionInfoDialog_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall PossessionInfoDialog___Open_b__15_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *scrollBar; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *v9; // x21
  Il2CppObject *v10; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  struct UIGrid_o *listRoot; // x9

  if ( (byte_4BF9D63 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_GameObject__TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    sub_1C2E12C(&Method_PossessionInfoDialog___c__Open_b__15_1__, v5);
    sub_1C2E12C(&PossessionInfoDialog___c_TypeInfo, v6);
    byte_4BF9D63 = 1;
  }
  scrollBar = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    scrollBar = PossessionInfoDialog___c_TypeInfo;
  }
  v9 = *(System_Action_object__o **)(*((_QWORD *)scrollBar + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)scrollBar + 56) )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = PossessionInfoDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v9 = (System_Action_object__o *)sub_1C2E378(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v9, v10, Method_PossessionInfoDialog___c__Open_b__15_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)v9;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)v9,
          (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (scrollBar = this->fields.scrollBar) == 0LL)
    || (scrollBar = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL),
        (v18 = this->fields.objectList) == 0LL)
    || (listRoot = this->fields.listRoot) == 0LL
    || !scrollBar
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)scrollBar,
          v18->fields._size > listRoot->fields.maxPerLine,
          0LL),
        (scrollBar = this->fields.scrollView) == 0LL) )
  {
    sub_1C2E388(scrollBar, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BF9D64 & 1) == 0 )
  {
    sub_1C2E12C(&PossessionInfoDialog___c_TypeInfo, v1);
    byte_4BF9D64 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4BF9D66 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, obj);
    byte_4BF9D66 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__15_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BF9D65 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, obj);
    byte_4BF9D65 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1C2E388(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c__DisplayClass12_0___ctor(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass12_0___Init_b__0(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  void *servantLimitMaster; // x0

  servantLimitMaster = this->fields.servantLimitMaster;
  if ( !servantLimitMaster
    || (servantLimitMaster = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)servantLimitMaster, id, 0, 0LL)) == 0LL )
  {
    sub_1C2E388(servantLimitMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)servantLimitMaster + 6);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass12_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  void *svtMaster; // x0

  if ( (byte_4BF9D67 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4BF9D67 = 1;
  }
  svtMaster = this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)svtMaster,
                      id,
                      (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C2E388(svtMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)svtMaster + 52);
}