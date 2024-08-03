void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8962 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_TypeInfo, v1);
    byte_49F8962 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_49F8961 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v6);
    byte_49F8961 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantProfileList, (int32_t)v12, v13, v14);
  this->fields.isInput = 1;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


ServantStatusFlavorTextListViewObject_o *__fastcall ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  ServantStatusFlavorTextListViewObject_o *Component_object; // x0
  ServantStatusFlavorTextListViewObject_o *v13; // x21
  const MethodInfo *v14; // x7
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  if ( (byte_49F8959 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, basePositon);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49F8959 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)prefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v11,
                                                                  0LL,
                                                                  0LL);
  v13 = 0LL;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_14;
    Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v11,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    if ( !Component_object
      || (v13 = Component_object,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_object,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v14),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v13, v15),
          (Component_object = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0LL)
      || (v18 = *(_QWORD *)&Component_object->fields.m_CachedPtr,
          v19 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__,
          ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
          !v18) )
    {
LABEL_14:
      sub_1B64324(Component_object);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v13,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v21 + 32) = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v13, v16, v17);
    }
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t targetIndex,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F8957 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_TypeInfo, *(_QWORD *)&targetIndex);
    byte_49F8957 = 1;
  }
  v7 = sub_1B64314(
         ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_TypeInfo,
         *(_QWORD *)&targetIndex,
         onFinished);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x28
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *scrollView; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  void *transform; // x0
  Il2CppObject *Component_object; // x20
  float v35; // s8
  float v36; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x29
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v51; // x23
  const MethodInfo *v52; // x7
  ServantStatusFlavorTextListViewObject_o *v53; // x23
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  ServantStatusListViewItem_o *v61; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v64; // x22
  Il2CppObject *v65; // x0
  ServantStatusListViewItem_o *v66; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v68; // x20
  const MethodInfo *v69; // x7
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  System_Collections_Generic_List_object__o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  System_Comparison_T__o *v80; // x24
  Il2CppObject *v81; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int v85; // w21
  int32_t v86; // w24
  int v87; // w20
  ServantCommentEntity_o *v88; // x25
  struct ServantEntity_o *v89; // x8
  int32_t v90; // w26
  const MethodInfo *v91; // x3
  UnityEngine_Object_c *v92; // x0
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v94; // x26
  Il2CppObject *v95; // x26
  int32_t v96; // w27
  _BOOL8 IsOpen; // x0
  const MethodInfo *v98; // x2
  int v99; // w24
  UnityEngine_Object_c **v100; // x21
  ServantStatusListViewItem_o **v101; // x20
  ServantStatusListViewItem_o *v102; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v105; // x7
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x27
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w2
  int32_t v116; // w3
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  int32_t v123; // w2
  int32_t v124; // w3
  System_Collections_Generic_List_object__o *v125; // x8
  struct System_Object_array *items; // x9
  _QWORD *v127; // x10
  __int64 size; // x11
  Il2CppClass **v129; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v132; // x3
  UnityEngine_Object_o *v133; // x20
  UIPanel_o *v134; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v137; // x1
  __int64 v138; // x1
  __int64 v139; // x2
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v142; // x22
  EventDelegate_Callback_o *v143; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  struct UIScrollBar_o *v146; // x8
  System_Collections_Generic_List_EventDelegate__o *v147; // x20
  EventDelegate_Callback_o *v148; // x21
  System_Collections_Generic_List_object__o *v149; // [xsp+8h] [xbp-B8h]
  int32_t v150; // [xsp+14h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+18h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+20h] [xbp-A0h]
  int v153; // [xsp+28h] [xbp-98h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4

  v3 = &UnityEngine_Object_TypeInfo;
  if ( (byte_49F8952 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, mainInfo);
    sub_1B640C8(&System_Comparison_ServantCommentEntity__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___, v10);
    sub_1B640C8(&EventDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v21);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v24);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v25);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__34_0__, v26);
    sub_1B640C8(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v27);
    sub_1B640C8(&Method_UIScrollView_OnScrollBar__, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    byte_49F8952 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_125;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_125;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      v35 = *((float *)&Component_object[20].monitor + 1);
      v36 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v158.fields.x = -v35;
      v158.fields.y = -v36;
      v158.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v158, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v31, v32);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v40;
  p_objectList = &this->fields.objectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v40, v41, v42);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v45;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantProfileList, (int32_t)v45, v46, v47);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_125;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v48);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v51 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_125;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v51,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_125;
      v53 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v52);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v53, v54);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_125;
      v57 = *((_QWORD *)transform + 2);
      v58 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v57 )
        goto LABEL_125;
      v59 = *((int *)transform + 6);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v53,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * v59;
        *((_DWORD *)transform + 6) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v53;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v53, v55, v56);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v49);
  }
  v61 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_125;
  if ( v61->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v61->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_111;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v64 = UnityEngine_Object__Instantiate_object_(
            profileObject,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_111;
    if ( v64 )
    {
      v65 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v64,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v66 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v68 = (ServantStatusFlavorTextListViewObject_o *)v65;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
      if ( v68 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v68,
          v66,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v69);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v68, v70);
        transform = this->fields.objectList;
        if ( transform )
        {
          v73 = *((_QWORD *)transform + 2);
          v74 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v73 )
          {
            v75 = *((int *)transform + 6);
            if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v68,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = v73 + 8 * v75;
              *((_DWORD *)transform + 6) = v75 + 1;
              *(_QWORD *)(v76 + 32) = v68;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 32), (int32_t)v68, v71, v72);
            }
            goto LABEL_111;
          }
        }
      }
    }
    goto LABEL_125;
  }
  v77 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v61->fields.svtCommentEntityList,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  v80 = *(System_Comparison_T__o **)(*((_QWORD *)transform + 23) + 8LL);
  if ( !v80 )
  {
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v81 = (Il2CppObject *)**((_QWORD **)transform + 23);
    v80 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantCommentEntity__TypeInfo, v78, v79);
    System_Comparison_object____ctor(
      v80,
      v81,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__34_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Comparison_ServantCommentEntity__o *)v80;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v80, v83, v84);
  }
  if ( !v77 )
    goto LABEL_125;
  System_Collections_Generic_List_object___Sort_55243320(
    v77,
    v80,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v77->fields._size < 1 )
  {
LABEL_104:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0LL) || SvtType__IsEnemyCollectionDetail(type, 0LL) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v132);
        goto LABEL_111;
      }
    }
    goto LABEL_125;
  }
  v85 = 0;
  v86 = 0;
  v87 = 1;
  v149 = v77;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v77,
                  v86,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    v88 = (ServantCommentEntity_o *)transform;
    if ( !v86 || (v85 & 1) != 0 )
    {
      if ( !transform )
        goto LABEL_125;
    }
    else
    {
      if ( !transform )
        goto LABEL_125;
      if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
      {
        transform = System_Collections_Generic_List_object___get_Item(
                      v77,
                      v86 - 1,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
          goto LABEL_66;
      }
      transform = (void *)ServantCommentEntity__IsDetailLabel(v88, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = System_Collections_Generic_List_object___get_Item(
                      v77,
                      v86 - 1,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          goto LABEL_66;
      }
      if ( !*p_mainInfo )
        goto LABEL_125;
      v89 = (*p_mainInfo)->fields.svtEntity;
      if ( !v89 )
        goto LABEL_125;
      v90 = v89->fields.type;
      if ( !SvtType__IsServant(v90, 0LL) && !SvtType__IsEnemyCollectionDetail(v90, 0LL) )
      {
LABEL_66:
        v85 = 0;
      }
      else
      {
        ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v91);
        v85 = 1;
      }
    }
    if ( ServantCommentEntity__IsDetailLabel(v88, 0LL) )
    {
      v92 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profileObject;
    }
    else
    {
      v94 = 0LL;
      if ( !ServantCommentEntity__IsProfileLabel(v88, 0LL) )
        goto LABEL_74;
      v92 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profile2Object;
    }
    if ( !v92->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v92);
    v94 = UnityEngine_Object__Instantiate_object_(
            profile2Object,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_74:
    if ( !(*v3)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v3);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v94, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v94 )
        goto LABEL_125;
      v95 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v94,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( ServantCommentEntity__IsProfileLabel(v88, 0LL) )
        v96 = v87;
      else
        v96 = 0;
      IsOpen = ServantCommentEntity__IsOpen(v88, -1, 1, 0LL);
      v153 = v85;
      if ( IsOpen )
      {
        v150 = v86;
        v99 = v87;
        v100 = v3;
        v101 = p_mainInfo;
        v102 = *p_mainInfo;
        id = v88->fields.id;
        IsNew = ServantCommentEntity__IsNew(v88, 0LL);
        transform = ServantCommentEntity__GetComment(v88, 0LL);
        if ( !v95 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v95,
          v102,
          id,
          1,
          IsNew,
          (System_String_o *)transform,
          v96,
          v105);
        p_mainInfo = v101;
        v77 = v149;
        v87 = v99;
        v86 = v150;
        v3 = v100;
      }
      else
      {
        transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                      (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                      v88,
                      v98);
        if ( !v95 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v95,
          *p_mainInfo,
          v88->fields.id,
          0,
          0,
          (System_String_o *)transform,
          v96,
          v107);
      }
      ServantStatusFlavorTextListViewManager__SetObjectPosition(
        this,
        &basePositon,
        (ServantStatusFlavorTextListViewObject_o *)v95,
        v106);
      CondTitle = ServantCommentEntity__GetCondTitle(v88, 0LL);
      if ( ServantCommentEntity__IsProfileLabel(v88, 0LL) || !System_String__IsNullOrEmpty(CondTitle, 0LL) )
        ServantStatusFlavorTextListViewObject__SetCondTitle(
          (ServantStatusFlavorTextListViewObject_o *)v95,
          CondTitle,
          v109);
      if ( ServantCommentEntity__IsProfileLabel(v88, 0LL) || !ServantCommentEntity__IsConst(v88, 0LL) )
      {
        v112 = sub_1B64314(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v110, v111);
        System_Object___ctor((Il2CppObject *)v112, 0LL);
        if ( !v112 )
          goto LABEL_125;
        *(_QWORD *)(v112 + 16) = v88;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 16), (int32_t)v88, v113, v114);
        *(_QWORD *)(v112 + 24) = v95;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 24), (int32_t)v95, v115, v116);
        *(_DWORD *)(v112 + 32) = 0;
        transform = *p_servantProfileList;
        if ( !*p_servantProfileList )
          goto LABEL_125;
        v119 = *((_QWORD *)transform + 2);
        v120 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v119 )
          goto LABEL_125;
        v121 = *((int *)transform + 6);
        if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v112,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v122 = v119 + 8 * v121;
          *((_DWORD *)transform + 6) = v121 + 1;
          *(_QWORD *)(v122 + 32) = v112;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v122 + 32), v112, v117, v118);
        }
      }
      transform = (void *)ServantCommentEntity__IsProfileLabel(v88, 0LL);
      v125 = (System_Collections_Generic_List_object__o *)*p_objectList;
      if ( !*p_objectList )
        goto LABEL_125;
      items = v125->fields._items;
      v127 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++v125->fields._version;
      v85 = v153;
      if ( !items )
        goto LABEL_125;
      size = v125->fields._size;
      v87 += (unsigned __int8)transform & 1;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v125,
          v95,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = &items->obj.klass + size;
        v125->fields._size = size + 1;
        v129[4] = (Il2CppClass *)v95;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 4), (int32_t)v95, v123, v124);
      }
    }
    ++v86;
  }
  while ( v86 < v77->fields._size );
  if ( (v85 & 1) == 0 )
    goto LABEL_104;
LABEL_111:
  v133 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !(*v3)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v3);
  if ( UnityEngine_Object__op_Inequality(v133, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      goto LABEL_116;
    }
LABEL_125:
    sub_1B64324(transform);
  }
LABEL_116:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_125;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_125;
  v134 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v134, 0LL);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_125;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_125;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v137);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_125;
  onChange = scrollBar->fields.onChange;
  v142 = (Il2CppObject *)this->fields.scrollView;
  v143 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v138, v139);
  EventDelegate_Callback___ctor(v143, v142, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  transform = EventDelegate__Add(onChange, v143, 0LL);
  v146 = this->fields.scrollBar;
  if ( !v146 )
    goto LABEL_125;
  v147 = v146->fields.onChange;
  v148 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v144, v145);
  EventDelegate_Callback___ctor(
    v148,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v147, v148, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
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
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F895A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F895A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
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
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusFlavorTextListViewManager___c_c *v8; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  System_Predicate_object__o *_9__36_0; // x22
  Il2CppObject *v11; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t Index; // w0
  const MethodInfo *v16; // x3
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_49F8954 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__, onFinished);
    sub_1B640C8(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__36_0__, v6);
    sub_1B640C8(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v7);
    byte_49F8954 = 1;
  }
  v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  _9__36_0 = (System_Predicate_object__o *)v8->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__36_0 = (System_Predicate_object__o *)sub_1B64314(
                                               System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo,
                                               onFinished,
                                               method);
    System_Predicate_object____ctor(
      _9__36_0,
      v11,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__36_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__36_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v13, v14);
  }
  if ( !objectList )
    sub_1B64324(v8);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__36_0,
            (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v17 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  }
}


float __fastcall ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
        ServantStatusFlavorTextListViewManager_o *this,
        float currentTime,
        float duration,
        float startValue,
        float changeValue,
        const MethodInfo *method)
{
  float v6; // s0
  float v9; // s0
  float v10; // s1
  float v11; // s0

  v6 = currentTime / (float)(duration * 0.5);
  if ( v6 >= 1.0 )
  {
    v11 = exp2f((float)(v6 + -1.0) * -10.0);
    v10 = changeValue * 0.5;
    v9 = 2.0 - v11;
  }
  else
  {
    v9 = powf(v6, 5.0);
    v10 = changeValue * 0.5;
  }
  return (float)(v10 * v9) + startValue;
}


float __fastcall ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(
        ServantStatusFlavorTextListViewManager_o *this,
        float moveValue,
        const MethodInfo *method)
{
  return fminf(fmaxf((float)(moveValue + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
}


System_String_o *__fastcall ServantStatusFlavorTextListViewManager__GetConditionString(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantCommentEntity_o *svtCommentEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantCommentAddMaster_o *Master_object; // x0
  ServantCommentAddMaster_o *v12; // x20
  System_String_o *v13; // x22
  System_String_o *Conditiontext; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v17; // x1
  System_String_o *v18; // x21
  LocalizationManager_c *v19; // x0
  bool v20; // w0
  bool v21; // w22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v28; // x19
  System_String_o *ConditionString; // x0

  if ( (byte_49F8953 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11834/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v6);
    sub_1B640C8(&StringLiteral_16133/*"_FLAVOR2"*/, v7);
    sub_1B640C8(&StringLiteral_16132/*"_FLAVOR"*/, v8);
    sub_1B640C8(&StringLiteral_3765/*"COND_TYPE_AND_FLAVOR2"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49F8953 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
LABEL_31:
    sub_1B64324(Master_object);
  v12 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !v12 )
      goto LABEL_31;
    IsOpen = ServantCommentAddMaster__IsOpen(
               v12,
               svtCommentEntity->fields.svtId,
               svtCommentEntity->fields.id,
               svtCommentEntity->fields.priority,
               -1,
               0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtCommentEntity->fields.condMessage, 0LL);
    if ( IsOpen || !IsNullOrEmpty )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
      Conditiontext = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16132/*"_FLAVOR"*/,
                        0LL);
      goto LABEL_26;
    }
    v18 = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16133/*"_FLAVOR2"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49F7D6A )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v17);
      byte_49F7D6A = 1;
    }
    v19 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager_TypeInfo;
    }
    v20 = System_String__op_Equality(v18, v19->static_fields->unknownNameText, 0LL);
    v21 = v20;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v20 )
      {
LABEL_22:
        v22 = (System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
LABEL_29:
        v13 = LocalizationManager__Get(v22, 0LL);
        return System_String__Format(v13, (Il2CppObject *)v18, 0LL);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v21 )
        goto LABEL_22;
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v24 = System_String__Concat_61375396(v18, v23, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v28 = v24;
    ConditionString = ServantCommentAddMaster__GetConditionString(
                        v12,
                        (System_String_o *)StringLiteral_16132/*"_FLAVOR"*/,
                        (System_String_o *)StringLiteral_16133/*"_FLAVOR2"*/,
                        svtId,
                        id,
                        priority,
                        -1,
                        0LL);
    v18 = System_String__Concat_61375396(v28, ConditionString, 0LL);
    v22 = (System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
  if ( !v12 )
    goto LABEL_31;
  v13 = (System_String_o *)Master_object;
  Conditiontext = ServantCommentAddMaster__GetConditionString(
                    v12,
                    (System_String_o *)StringLiteral_16132/*"_FLAVOR"*/,
                    (System_String_o *)StringLiteral_16133/*"_FLAVOR2"*/,
                    svtCommentEntity->fields.svtId,
                    svtCommentEntity->fields.id,
                    svtCommentEntity->fields.priority,
                    -1,
                    0LL);
LABEL_26:
  v18 = Conditiontext;
  return System_String__Format(v13, (Il2CppObject *)v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *scrollView; // x0
  float v9; // s1
  float v10; // s8
  _BOOL8 v11; // x0
  float v12; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F8955 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F8955 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !scrollView
      || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)scrollView,
                                                  0LL),
          (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
    {
      sub_1B64324(scrollView);
    }
    v10 = v9 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v11 )
        break;
      if ( !v14.fields._current )
        sub_1B64324(v11);
      v12 = *(float *)&v14.fields._current[2].klass;
      if ( v12 <= v10 && v10 <= (float)(v12 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))OnFinishedReadEvent->fields.m_target)(
            OnFinishedReadEvent->fields.original_method_info,
            v14.fields._current[1].klass,
            *(_QWORD *)&OnFinishedReadEvent->fields.extra_arg);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x20
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v8; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_1B64324(this);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v8 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_1B6406C(p_callbackFunc, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v8->fields.m_target)(
        v8->fields.original_method_info,
        (unsigned int)obj->fields.id,
        *(_QWORD *)&v8->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListViewVoice(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      0LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnEnable(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusFlavorTextListViewManager__OnMoveEnd(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F895E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F895E = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject(
        ServantStatusFlavorTextListViewManager_o *this,
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
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F895C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F895C = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      objectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      ServantStatusFlavorTextListViewObject__Init_32456436(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_32455416(
        ServantStatusFlavorTextListViewManager_o *this,
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F895D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F895D = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      objectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ServantStatusFlavorTextListViewObject__Init_32456520(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v17,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusFlavorTextListViewManager__SetMode_32455224(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_32455224(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_49F895B & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         *(_QWORD *)&mode);
    byte_49F895B = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B64324(this);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_32455416(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_32455368(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusFlavorTextListViewManager__SetMode_32455224(this, mode, v6);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !obj )
    sub_1B64324(this);
  if ( this->fields.initMode == 1 )
    v3 = 3;
  else
    v3 = 2;
  ServantStatusFlavorTextListViewObject__Init_32455104(obj, v3, method);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetObjectPosition(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v6; // x21
  int32_t Size; // w0
  int v8; // w8
  int v9; // w23
  ServantStatusFlavorTextListViewManager_o *v10; // x22
  __int64 v11; // x1
  ServantStatusFlavorTextListViewManager_o *v12; // x22
  __int64 v13; // x1
  ServantStatusFlavorTextListViewManager_o *v14; // x22
  ServantStatusFlavorTextListViewManager_o *v15; // x22
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  ServantStatusFlavorTextListViewManager_c *v18; // x0
  float y; // s8

  v6 = this;
  if ( (byte_49F8958 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1B640C8(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         basePositon);
    byte_49F8958 = 1;
  }
  if ( !obj )
    goto LABEL_21;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !v6->fields.listParent )
    goto LABEL_21;
  v10 = this;
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0LL);
  if ( !v10 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !this )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePositon, 0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  v12 = this;
  if ( !byte_49F7117 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v11);
    byte_49F7117 = 1;
  }
  if ( !v12 )
    goto LABEL_21;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  v14 = this;
  if ( !byte_49F7116 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0LL),
        !v6->fields.listParent)
    || (v15 = this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0LL),
        !v15) )
  {
LABEL_21:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v15, (int32_t)this, 0LL);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v16);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v17);
  v18 = ServantStatusFlavorTextListViewManager_TypeInfo;
  y = basePositon->fields.y;
  if ( !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo);
    v18 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v18->static_fields->LIST_BLANK + v9);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v9; // s8
  UnityEngine_Component_o *v10; // x8
  float v11; // s9
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x21
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8956 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    byte_49F8956 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v9 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v10 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_1B64324(scrollView);
  }
  v11 = *((float *)&v10[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v12 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B64324(v12);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v16.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v13);
    *(float *)&current[2].klass = fmaxf(vabds_f32(ProfileLastLinePosition.fields.y, v11) - v9, 0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F895F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v8);
    byte_49F895F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v10 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        sub_1B64324(v10);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v14.fields._current,
             v11) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v13);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x19
  void *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8960 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      *(_QWORD *)&imageLimitCount);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    byte_49F8960 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B64324(v8);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v12.fields._current,
           v9) == 5 )
    {
      monitor = current[8].monitor;
      if ( !monitor )
        sub_1B64324(0LL);
      (*(void (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
        monitor,
        current[2].monitor,
        *(_QWORD *)(*(_QWORD *)monitor + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F894E & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F894E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewManager_o *)sub_1B645E4(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F8950 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8950 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewManager_o *)sub_1B645E4(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool __fastcall ServantStatusFlavorTextListViewManager__get_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall ServantStatusFlavorTextListViewManager__remove_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F894F & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F894F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewManager_o *)sub_1B645E4(v8);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__remove_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F8951 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8951 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewManager_o *)sub_1B645E4(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  UIProgressBar_o *v7; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_49F894D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, value);
    byte_49F894D = 1;
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
void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
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
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A795C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7914;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_49F8963 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    byte_49F8963 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x22
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *v7; // x20
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *v8; // x8
  float v9; // s8
  const MethodInfo *v10; // x1
  float v11; // s9
  int v12; // w21
  const MethodInfo *v13; // x1
  float v14; // s8
  float v15; // s0
  float timer_5__4; // s8
  float duration_5__3; // s0
  float deltaTime; // s0
  float v19; // s1
  float v20; // s0
  float v21; // s2
  bool v22; // nf
  float v23; // s0
  float moveValue_5__2; // s8
  float v25; // s0
  float v26; // s0
  float v27; // s1
  bool result; // w0
  float v29; // s0
  float v30; // s0
  float v31; // s8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49F8965 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v3);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)sub_1B640C8(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v4);
    byte_49F8965 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    duration_5__3 = v2->fields._duration_5__3;
    timer_5__4 = v2->fields._timer_5__4;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              v2->fields.targetIndex,
                                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v7 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v8 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    v9 = *((float *)&v8[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    v11 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              v10);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v12 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v14 = vabds_f32(v11 + (float)((float)v12 * -0.5), v9) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v14 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
      goto LABEL_30;
    }
    if ( !v7 )
      goto LABEL_35;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v7,
                    v13);
    v15 = fabsf(TopPosition.fields.y);
    if ( v15 >= v14 )
      v15 = v14;
    v2->fields._moveValue_5__2 = v15;
    if ( v15 <= 0.0 )
      goto LABEL_30;
    timer_5__4 = 0.0;
    duration_5__3 = fminf(fmaxf((float)(v15 + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
    v2->fields._duration_5__3 = duration_5__3;
    *(_QWORD *)&v2->fields._timer_5__4 = 0LL;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_30:
    ActionExtensions__Call(v2->fields.onFinished, 0LL);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v19 = v2->fields._duration_5__3;
  v20 = timer_5__4 + deltaTime;
  if ( v20 <= v19 )
    v21 = v20;
  else
    v21 = v2->fields._duration_5__3;
  v22 = v20 < 0.0;
  v23 = 0.0;
  if ( !v22 )
    v23 = v21;
  v2->fields._timer_5__4 = v23;
  if ( !_4__this )
    goto LABEL_35;
  moveValue_5__2 = v2->fields._moveValue_5__2;
  v25 = v23 / (float)(v19 * 0.5);
  if ( v25 >= 1.0 )
  {
    v29 = exp2f((float)(v25 + -1.0) * -10.0);
    v27 = moveValue_5__2 * 0.5;
    v26 = 2.0 - v29;
  }
  else
  {
    v26 = powf(v25, 5.0);
    v27 = moveValue_5__2 * 0.5;
  }
  this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.scrollView;
  v30 = v27 * v26;
  if ( !this )
LABEL_35:
    sub_1B64324(this);
  v31 = v30 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data,
    0.0,
    (float)(v30 + 0.0) - v2->fields._prevValue_5__5,
    0.0);
  v2->fields._prevValue_5__5 = v31;
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v33, v34);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8964 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1);
    byte_49F8964 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewManager___c___CreateList_b__34_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.id - b->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__36_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.isNew;
}